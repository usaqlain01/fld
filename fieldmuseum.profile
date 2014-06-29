<?php
/**
 * @file
 * Code for the Field Museum install profile.
 */

include_once 'fieldmuseum.features.inc';

/**
 * Implements hook_system_info_alter().
 *
 * Force this profile to be visible.
 */
function fieldmuseum_system_info_alter(&$info, $file, $type) {
  if ($type == 'module' && $file->name == 'fieldmuseum') {
    $info['hidden'] = FALSE;
  }
  if ($type == 'theme') {
    $info['regions']['navbar'] = t('Navbar region');
  }
}

/**
 * @param $links
 * @param $pane
 * @param $content_type
 * @see ctools_custom_content_get_pane_links_alter
 */
function fieldmuseum_get_pane_links_alter(&$links, $pane, $content_type) {
  if ($pane->type == 'custom' && isset($links['top']['edit_custom_content'])) {
    unset($links['top']['edit_custom_content']);
  }
}

/**
 * Implements hook_module_implements_alter().
 *
 * @param $implementations
 * @param $hook
 * @see https://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_module_implements_alter/7
 */
function fieldmuseum_module_implements_alter(&$implementations, $hook) {
  // Force this profile's implementation of get_pane_links_alter to run last.
  if ($hook == 'get_pane_links_alter') {
    $group = $implementations['fieldmuseum'];
    unset($implementations['fieldmuseum']);
    $implementations['fieldmuseum'] = $group;
  }

  // Remove the hook implementations for these modules so their image styles can be
  // exported by this profile.
  if ($hook == 'image_default_styles') {
    unset($implementations['image']);
    unset($implementations['media']);
    unset($implementations['media_gallery']);
  }

  // Disable image and media module implementations of default image styles hook so
  // this profile can override them and export them with the same name.
  if ($hook == 'file_default_displays') {
    unset($implementations['file_entity']);
  }
}

/**
 * Implementation of hook_ctools_plugin_directory() to let the system know
 * we implement task and task_handler plugins.
 */
function fieldmuseum_ctools_plugin_directory($module, $plugin) {
  // Most of this module is implemented as an export ui plugin, and the
  // rest is in ctools/includes/ctools_access_ruleset.inc
  if ($module == 'ctools' && $plugin == 'access') {
    return 'plugins/' . $plugin;
  }
}

/**
 * Implement hook_image_effect_info_alter().
 */
function fieldmuseum_image_effect_info_alter(&$effects) {
  $effects['imagecrop_javascript']['effect callback'] = 'fieldmuseum_imagecrop_effect';
}

/**
 * Image effect callback: Crop the image based on the image style.
 *
 * Wraps around original imagecrop effect callback to provide a default crop area using
 * smartcrop.
 */
function fieldmuseum_imagecrop_effect(&$image, $data) {
  $fid = db_select('file_managed')
    ->fields('file_managed', array('fid'))
    ->condition('uri', $image->source)
    ->execute()->fetchField();

  if (isset($GLOBALS['imagecrop_style'])) {
    $style_name = $GLOBALS['imagecrop_style'];
  }
  // and if not, then get the id from list of all presets
  else {
    $style_name = imagecrop_get_style_name_from_url();
  }

  if ($fid && $style_name) {
    $settings = db_select('image_crop_settings')
      ->fields('image_crop_settings')
      ->condition('fid', $fid)
      ->condition('style_name', $style_name)
      ->execute()->fetchObject();

    // Load settings
    if (!$settings) {
      $crop = new \Bangpound\stojg\crop\CropBalanced($image->source);
      $scale = max($data['width'] / $image->info['width'], $data['height'] / $image->info['height']);
      $offset = $crop->getOffset($data['width'] / $scale, $data['height'] / $scale);
      $scale_width = ceil($image->info['width'] * $scale);

      $row = array(
        'fid' => $fid,
        'style_name' => $style_name,
        'xoffset' => $offset['x'] * $scale,
        'yoffset' => $offset['y'] * $scale,
        'width' => $data['width'],
        'height' => $data['height'],
        'scale' => $scale_width,
        'rotation' => 0,
      );
      drupal_write_record('image_crop_settings', $row);
    }
  }

  return imagecrop_effect($image, $data);
}

/**
 * Implements hook_rdf_namespaces().
 */
function fieldmuseum_rdf_namespaces() {
  return array(
    'xlink' => 'http://www.w3.org/1999/xlink',
  );
}

/**
 * Form for layout settings.
 */
function esquif_panels_settings_form(&$display, $layout, $settings) {
  $form = array();

  $form['layout_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layout settings'),
    '#description' => t('Note: if this setting is used, a wrapper div will be added to accomodate the needed classes.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Create a classes text field for each region in the layout.
  foreach ($layout['regions'] as $region => $label) {
    $form['layout_settings'][$region . '_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Classes for the “@region” region', array('@region' => $label)),
      '#default_value' => isset($settings[$region . '_classes']) ? $settings[$region . '_classes'] : '',
      '#description' => t('CSS class (or classes) to apply to the @region region in the layout. This may be blank.', array('@region' => $label)),
    );
  }

  return $form;
}

/**
 * Form validation for layout settings.
 */
function esquif_panels_settings_validate(&$form_state, $form, &$display, $layout, $settings) {
  // Since we allow underscores, change the css filter from Drupal's default.
  $filter = array(' ' => '-', '/' => '-', '[' => '-', ']' => '');
  foreach (array_keys($layout['regions']) as $region) {
    // Ensure that each class is valid.
    foreach (explode(' ', $form_state['layout_settings'][$region . '_classes']) as $class) {
      $cleaned_class = drupal_clean_css_identifier($class, $filter);
      // CSS identifiers can't start with a number or a dash and a number.
      $cleaned_class = preg_replace('/^\-?\d+/', '', $cleaned_class);
      if ($class != $cleaned_class) {
        form_set_error($region . '_classes', t('The class "@class" is invalid. Here’s an alternative class name that is valid: @alternate', array('@class' => $class, '@alternate' => $cleaned_class)));
      }
    }
  }
}

/**
 * Form submit handler for layout settings.
 */
function esquif_panels_settings_submit(&$form_state, &$display, $layout, $settings) {
  // Move the settings out of the 'layout_settings' array.
  foreach (array_keys($form_state['layout_settings']) as $key) {
    $form_state[$key] = $form_state['layout_settings'][$key];
  }
  unset($form_state['layout_settings']);
}

function fieldmuseum_composer_json_alter(&$json) {
  $json['minimum-stability'] = 'dev';
  $json['prefer-stable'] = true;
}
