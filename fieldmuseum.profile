<?php
/**
 * @file
 * Code for the Field Museum install profile.
 */

include_once 'fieldmuseum.features.inc';

/**
 * Implement hook_menu().
 */
function fieldmuseum_menu() {
  $items = array();
  $items['admin/config/system/alert'] = array(
    'title' => 'Alert',
    'description' => 'Configure site-wide alert.',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('fieldmuseum_alert_settings'),
    'access arguments' => array('administer site configuration'),
    'file' => 'fieldmuseum.admin.inc',
  );
  return $items;
}

/**
 * Implement hook_menu_alter().
 *
 * @param $items
 */
function fieldmuseum_menu_alter(&$items) {
  $changes = array(
    'at-the-field/programs/%pm_arg' => array('programs', 'ctools_context_1'),
    'at-the-field/calendar/%pm_arg' => array('calendar', 'ctools_context_1'),
    'at-the-field/exhibitions/%pm_arg' => array('exhibitions', 'ctools_context_1'),
    'educators/field-trip-programs/%pm_arg' => array('field_trip_programs', 'ctools_context_1'),
    'educators/resources/%pm_arg' => array('learning_resources', 'ctools_context_1'),
    'node/%pm_arg/people' => array('staff', 'ctools_context_1'),
  );
  foreach ($changes as $path => $access_arguments) {
    $items[$path]['access callback'] = 'fieldmuseum_menu_access';
    $items[$path]['access arguments'] = array_merge($access_arguments, $items[$path]['access arguments']);
  }
}

/**
 * Access callback for filter views.
 *
 * This loads the view, executes it, and returns false if it is empty. This will
 * not work well unless Views caching is enabled for the views it uses.
 *
 * @param $view_name
 * @param $display
 * @return bool|mixed
 */
function fieldmuseum_menu_access($view_name, $display) {
  $args = func_get_args();
  $args = array_splice($args, 2);
  $result = views_get_view_result($view_name, $display, $args[1]->get_argument());

  if (!empty($result)) {
    return call_user_func_array('ctools_access_menu', $args);
  }
  return user_access('administer menu');
}

/**
 * Implements hook_system_info_alter().
 *
 * Force this profile to be visible.
 */
function fieldmuseum_system_info_alter(&$info, $file, $type) {
  if ($type == 'module' && $file->name == 'fieldmuseum') {
    $info['hidden'] = FALSE;
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
 * Implement hook_ctools_plugin_directory().
 */
function fieldmuseum_ctools_plugin_directory($module, $plugin) {
  if ($module == 'ctools' && ($plugin == 'access' || $plugin == 'content_types' || $plugin == 'contexts')) {
    return 'plugins/' . $plugin;
  }
}

/**
 * Implement hook_image_effect_info_alter().
 */
function fieldmuseum_image_effect_info_alter(&$effects) {
  if (variable_get('fmnh_smart_crop', FALSE)) {
    if ($effects['imagecrop_javascript']['effect callback'] == 'imagecrop_effect') {
      $effects['imagecrop_javascript']['effect callback'] = 'fieldmuseum_imagecrop_effect';
    }
    if ($effects['imagecrop_reuse']['effect callback'] == 'imagecrop_reuse_effect') {
      $effects['imagecrop_reuse']['effect callback'] = 'fieldmuseum_imagecrop_reuse_effect';
      $effects['imagecrop_reuse']['dimensions callback'] = 'fieldmuseum_imagecrop_reuse_dimensions';
    }
  }
}

/**
 * Image dimensions callback; Image javascript crop.
 */
function fieldmuseum_imagecrop_reuse_dimensions(array &$dimensions, array $data) {
  if ($dimensions['width'] && $dimensions['height']) {
    // The new image will have the exact dimensions defined for the effect.
    $style = image_style_load($data['imagecrop_style']);
    foreach ($style['effects'] as $effect) {
      if ($effect['name'] == 'imagecrop_javascript') {
        $dimensions['width'] = $effect['data']['width'];
        $dimensions['height'] = $effect['data']['height'];
      }
    }
  }
}

/**
 * Image effect callback: Crop the image based on the image style.
 *
 * Wraps around original imagecrop effect callback to provide a default crop area using
 * smartcrop.
 */
function fieldmuseum_imagecrop_effect(&$image, $data) {
  return fieldmuseum_smartcrop($image, $data, 'imagecrop_effect');
}

/**
 * @param $image
 * @param $data
 * @return mixed
 */
function fieldmuseum_imagecrop_reuse_effect(&$image, $data) {
  $GLOBALS['imagecrop_style'] = $data['imagecrop_style'];
  $style = image_style_load($data['imagecrop_style']);
  foreach ($style['effects'] as $effect) {
    if ($effect['name'] == 'imagecrop_javascript') {
      $data['width'] = $effect['data']['width'];
      $data['height'] = $effect['data']['height'];
      break;
    }
  }
  return fieldmuseum_smartcrop($image, $data, 'imagecrop_reuse_effect');
}

/**
 * @param $image
 * @param $data
 * @param $callback
 * @return mixed
 */
function fieldmuseum_smartcrop(&$image, $data, $callback) {
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
      $dimensions = array(
        'width' => $data['width'],
        'height' => $data['height'],
      );
      image_dimensions_scale($dimensions, $image->info['width'], $image->info['height']);

      $crop = new \Bangpound\stojg\crop\CropBalanced($image->source);
      // Scale is the larger value of the two dimensions' scale ratios. This guarantees that there is
      // always something to crop.
      $scale = max($dimensions['width'] / $image->info['width'], $dimensions['height'] / $image->info['height']);
      $offset = $crop->getOffset($dimensions['width'] / $scale, $dimensions['height'] / $scale);
      $scale_width = ceil($image->info['width'] * $scale);

      $row = array(
        'fid' => $fid,
        'style_name' => $style_name,
        'xoffset' => $offset['x'] * $scale,
        'yoffset' => $offset['y'] * $scale,
        'width' => $dimensions['width'],
        'height' => $dimensions['height'],
        'scale' => $scale_width,
        'rotation' => 0,
      );
      drupal_write_record('image_crop_settings', $row);
    }
  }

  return $callback($image, $data);
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

/**
 * Implement hook_composer_json_alter().
 *
 * This allows dependencies to specify unstable dependencies without forcing everything
 * to be unstable.
 *
 * @param $json
 */
function fieldmuseum_composer_json_alter(&$json) {
  $json['minimum-stability'] = 'dev';
  $json['prefer-stable'] = true;
}

/**
 * Implement hook_date_format_types().
 *
 * @return array
 */
function fieldmuseum_date_format_types() {
  return array(
    'year_only' => t('Year only'),
    'month_only' => t('Month only'),
  );
}

/**
 * Implement hook_date_formats().
 *
 * @return array
 */
function fieldmuseum_date_formats() {
  return array(
    array(
      'type' => 'year_only',
      'format' => 'Y',
      'locales' => array(),
    ),
    array(
      'type' => 'month_only',
      'format' => 'F',
      'locales' => array(),
    ),
  );
}

/**
 * Alter the menu block content type plugin settings form to support a theme hook identifier.
 *
 * @param $form
 * @param $form_state
 */
function fieldmuseum_form_menu_block_menu_tree_content_type_edit_form_alter(&$form, &$form_state) {
  $conf = $form_state['conf'];
  $form['identifier'] = array(
    '#type' => 'textfield',
    '#default_value' => !empty($conf['identifier']) ? $conf['identifier'] : '',
    '#title' => t('Template identifier'),
    '#description' => t('This identifier will be added as a template suggestion to display this node: menu_tree--IDENTIFIER.tpl.php. Please see the Drupal theming guide for information about template suggestions.'),
  );
  $form['#submit'][] = 'fieldmuseum_form_menu_block_menu_tree_content_type_edit_form_submit';
}

/**
 * Save the identifier in the conf array.
 *
 * @param $form
 * @param $form_state
 */
function fieldmuseum_form_menu_block_menu_tree_content_type_edit_form_submit($form, &$form_state) {
  if (isset($form_state['values']['identifier'])) {
    $form_state['conf']['identifier'] = $form_state['values']['identifier'];
  }
}

/**
 * Alter the plugin's callbacks to replace the render callback with ours.
 *
 * @param $plugin
 * @param $info
 */
function fieldmuseum_ctools_plugin_post_alter(&$plugin, &$info) {
  // Override a function defined by the plugin.
  if ($info['type'] == 'content_types' && $plugin['name'] == 'menu_tree') {
    $plugin['render callback'] = 'fieldmuseum_menu_block_menu_tree_content_type_render';
  }
}

/**
 * Call the original callback and then add new theme suggestions based on the identifier.
 *
 * @param $subtype
 * @param $conf
 * @param $args
 * @param $context
 * @return stdClass
 */
function fieldmuseum_menu_block_menu_tree_content_type_render($subtype, $conf, $args, $context) {

  $block = menu_block_menu_tree_content_type_render($subtype, $conf, $args, $context);
  if ($block->content && isset($conf['identifier'])) {
    array_unshift($block->content['#theme'], 'menu_block_wrapper__main_menu__'. $conf['identifier']);
    array_unshift($block->content['#content']['#theme_wrappers'][0], 'menu_tree__menu_block__main_menu__'. $conf['identifier']);

    _fieldmuseum_menu_block_menu_tree_theme_helper($block->content['#content'], $conf['identifier']);
  }

  return $block;
}

/**
 * Helper to add theme suggestion to menu child items recursively.
 *
 * @param $links
 * @param $identifier
 */
function _fieldmuseum_menu_block_menu_tree_theme_helper(&$links, $identifier) {
  foreach (element_children($links) as $key) {
    $depth = $links[$key]['#original_link']['depth'];
    array_unshift($links[$key]['#theme'], 'menu_link__menu_block__main_menu__'. $identifier);
    if (!empty($links[$key]['#below'])) {
      _fieldmuseum_menu_block_menu_tree_theme_helper($links[$key]['#below'], $identifier);
    }
  }
  array_unshift($links['#theme_wrappers'][0], 'menu_tree__menu_block__main_menu__'. $identifier .'__'. $depth);
}

/**
 * Theme function to hide create content links for deprecated content types.
 *
 * This is done here so that access isn't completely removed.
 *
 * @param $variables
 * @param $hook
 */
function fieldmuseum_preprocess_node_add_list(&$variables, $hook) {
  foreach ($variables['content'] as $key => $link) {
    if (in_array($link['router_path'], array('node/add/newsletter', 'node/add/article'))) {
      unset($variables['content'][$key]);
    }
  }
}

/**
 * Implements hook_panels_pane_content_alter().
 */
function fieldmuseum_panels_pane_content_alter($content, $pane, $panel_args, $context, $render, $display) {

  // Entity view plugin only displays one entity, so restructure array to align with
  // existing entity rendering content type plugins.
  if ($pane->type == 'entity_view') {
    $content->content = array_pop(array_pop($content->content));
  }

  if (isset($pane->style['style'])) {
    $plugin = panels_get_style($pane->style['style']);
    if ($plugin['name'] == 'naked') {
      if ($content && !is_array($content->content)) {
        $content->content = array(
          '#markup' => $content->content,
        );
      }
      if ($pane->style['settings']['children']) {
        foreach (element_children($content->content) as $child_key) {
          $content->content[$child_key]['#panels_pane'] = array(
            'pane' => $pane,
          );
        }
      }
      else {
        $content->content['#panels_pane'] = array(
          'pane' => $pane,
        );
      }
    }
  }
}

/**
 * Implement hook_preprocess().
 */
function fieldmuseum_preprocess(&$variables, $hook) {
  // Pull out the pane object that was stashed earlier.
  if ($hook == 'panels_pane') {
    if (isset($variables['content']['#panels_pane']) && is_array($variables['content']['#panels_pane'])) {
      $pane = $variables['content']['#panels_pane']['pane'];
    }
  }
  else {
    $info = theme_get_registry(FALSE);
    if (isset($info[$hook]['render element'])) {
      $element = &$variables[$info[$hook]['render element']];
      if (isset($element['#panels_pane'])) {
        $pane = $element['#panels_pane']['pane'];
      }
    }
  }
  if (isset($pane)) {
    if (isset($pane->css['css_class'])) {
      $variables['classes_array'] = array_unique(array_merge($variables['classes_array'], array($pane->css['css_class'])));
    }
  }
}

function fieldmuseum_preprocess_html(&$variables, $hook) {
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'google-translate-customization',
      'content' => 'd4d405441fda0fcf-d7f6ef5c1c4efee4-g856c3f44175849f6-13',
    ),
  );
  drupal_add_html_head($element, 'google_translate_customization');
}
