<?php
/**
 * @file
 * dept_div_collections_landing_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dept_div_collections_landing_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dept_div_collections_landing_content_type_node_info() {
  $items = array(
    'dept_div_collections_landing' => array(
      'name' => t('Dept/Div Collections Landing'),
      'base' => 'node_content',
      'description' => t('Page used to highlight information related to a department or division\'s collection. '),
      'has_title' => '1',
      'title_label' => t('Division / Collections Heading'),
      'help' => t('"Division" here refers to the conceptual taxonomic grouping immediately down from Department: for example, for Zoology, this is Mammals or Birds or Fish, etc.; for Botany, this is seed plants, vascular plants, etc. '),
    ),
  );
  return $items;
}
