<?php
/**
 * @file
 * collection_individual_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collection_individual_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function collection_individual_content_type_node_info() {
  $items = array(
    'individual_collection' => array(
      'name' => t('Collection (Individual)'),
      'base' => 'node_content',
      'description' => t('The Individual Collection content type is used to highlight information related to a single collection. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
