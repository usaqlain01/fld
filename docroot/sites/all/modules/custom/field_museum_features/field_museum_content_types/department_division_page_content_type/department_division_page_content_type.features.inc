<?php
/**
 * @file
 * department_division_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function department_division_page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function department_division_page_content_type_node_info() {
  $items = array(
    'department_division_page' => array(
      'name' => t('Department/Division Page'),
      'base' => 'node_content',
      'description' => t('The Department/Division content type is used to highlight information related to a Department or Division. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
