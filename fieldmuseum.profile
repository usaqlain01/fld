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
 * Implements hook_module_implements_alter().
 *
 * @param $implementations
 * @param $hook
 * @see https://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_module_implements_alter/7
 */
function fieldmuseum_module_implements_alter(&$implementations, $hook) {

  // Remove the hook implementations for these modules so their image styles can be
  // exported by this profile.
  if ($hook == 'image_default_styles') {
    unset($implementations['image']);
    unset($implementations['media']);
    unset($implementations['media_gallery']);
  }
}
