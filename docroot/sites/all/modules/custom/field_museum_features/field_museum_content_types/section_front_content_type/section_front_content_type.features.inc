<?php
/**
 * @file
 * section_front_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_front_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_front_content_type_node_info() {
  $items = array(
    'section_front' => array(
      'name' => t('Section front'),
      'base' => 'node_content',
      'description' => t('Use this for the major landing pages on the site like Plan Your Visit and Happening at the Field'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
