<?php
/**
 * @file
 * subsection_homepage_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsection_homepage_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function subsection_homepage_content_type_node_info() {
  $items = array(
    'subsection_homepage' => array(
      'name' => t('Subsection Homepage'),
      'base' => 'node_content',
      'description' => t('Front page for navigationally-grouped content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
