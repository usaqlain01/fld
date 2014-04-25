<?php
/**
 * @file
 * fmnh_department.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fmnh_department_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
