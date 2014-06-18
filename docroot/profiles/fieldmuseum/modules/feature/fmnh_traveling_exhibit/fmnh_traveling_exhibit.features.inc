<?php
/**
 * @file
 * fmnh_traveling_exhibit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_traveling_exhibit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entitylist" && $api == "entitylist_lists") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fmnh_traveling_exhibit_node_info() {
  $items = array(
    'traveling_exhibit' => array(
      'name' => t('Traveling exhibit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
