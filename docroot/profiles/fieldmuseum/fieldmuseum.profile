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
