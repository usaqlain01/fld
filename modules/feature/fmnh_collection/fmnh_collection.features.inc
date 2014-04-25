<?php
/**
 * @file
 * fmnh_collection.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fmnh_collection_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
