<?php
/**
 * @file
 * custom_article_view_mode.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function custom_article_view_mode_entity_view_mode_info() {
  $info = array();

  $info['file']['custom_article'] = array(
    'label' => 'Custom Article',
    'custom settings' => 1,
  );

  return $info;
}
