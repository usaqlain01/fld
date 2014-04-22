<?php
/**
 * @file
 * fmnh_program.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fmnh_program_node_info() {
  $items = array(
    'program' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
