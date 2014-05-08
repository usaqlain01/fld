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
