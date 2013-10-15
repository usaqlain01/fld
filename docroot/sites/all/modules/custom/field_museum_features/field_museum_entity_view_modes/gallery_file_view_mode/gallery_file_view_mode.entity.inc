<?php
/**
 * @file
 * gallery_file_view_mode.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function gallery_file_view_mode_entity_view_mode_info() {
  $info = array();

  $info['file']['gallery'] = array(
    'label' => 'Gallery',
    'custom settings' => 1,
  );

  return $info;
}
