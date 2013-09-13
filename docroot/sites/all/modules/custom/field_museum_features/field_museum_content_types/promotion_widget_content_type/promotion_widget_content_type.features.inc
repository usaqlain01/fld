<?php
/**
 * @file
 * promotion_widget_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function promotion_widget_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function promotion_widget_content_type_node_info() {
  $items = array(
    'promotion_widget' => array(
      'name' => t('Promotion Widget'),
      'base' => 'node_content',
      'description' => t('The promo widget content type is used to create a pool of promo widgets that can be displayed throughout the site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
