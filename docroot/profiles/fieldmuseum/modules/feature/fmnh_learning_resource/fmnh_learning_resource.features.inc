<?php
/**
 * @file
 * fmnh_learning_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_learning_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fmnh_learning_resource_node_info() {
  $items = array(
    'learning_resource' => array(
      'name' => t('Learning resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
