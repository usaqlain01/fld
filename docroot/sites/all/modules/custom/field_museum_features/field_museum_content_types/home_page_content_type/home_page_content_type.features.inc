<?php
/**
 * @file
 * home_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function home_page_content_type_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home Page'),
      'base' => 'node_content',
      'description' => t('This unique content type governs the content on the main homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
