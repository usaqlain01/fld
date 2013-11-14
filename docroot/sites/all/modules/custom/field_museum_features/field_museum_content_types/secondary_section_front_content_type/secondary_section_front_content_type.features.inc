<?php
/**
 * @file
 * secondary_section_front_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function secondary_section_front_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function secondary_section_front_content_type_node_info() {
  $items = array(
    'secondary_section_front' => array(
      'name' => t('Secondary section front'),
      'base' => 'node_content',
      'description' => t('The Secondary Section Front content type will be used for Field Museum Secondary Section landing pages. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
