<?php
/**
 * @file
 * featured_widget_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_widget_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function featured_widget_content_type_node_info() {
  $items = array(
    'widget' => array(
      'name' => t('Featured Widget (Left Rail)'),
      'base' => 'node_content',
      'description' => t('Left sidebar widgets or Featured Widgets displayed on Section Front pages and Home page only'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
