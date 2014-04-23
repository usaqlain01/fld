<?php
/**
 * @file
 * fmnh_exhibit.features.inc
 */

/**
 * Implements hook_views_api().
 */
function fmnh_exhibit_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fmnh_exhibit_node_info() {
  $items = array(
    'exhibit' => array(
      'name' => t('Exhibit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
