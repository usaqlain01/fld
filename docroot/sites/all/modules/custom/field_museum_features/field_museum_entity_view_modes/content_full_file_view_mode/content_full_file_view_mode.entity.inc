<?php
/**
 * @file
 * content_full_file_view_mode.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function content_full_file_view_mode_entity_view_mode_info() {
  $info = array();

  $info['file']['content_full'] = array(
    'label' => 'Content Full',
    'custom settings' => 1,
  );

  return $info;
}
