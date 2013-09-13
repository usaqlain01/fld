<?php
/**
 * @file
 * reflections_on_9_11_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reflections_on_9_11_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function reflections_on_9_11_content_type_node_info() {
  $items = array(
    'reflections_on_9_11' => array(
      'name' => t('Reflections on 9/11 (Education Dept Use Only)'),
      'base' => 'node_content',
      'description' => t('Content type for the 9/11 Exhibition.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
