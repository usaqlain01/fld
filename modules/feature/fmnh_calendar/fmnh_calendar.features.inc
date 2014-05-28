<?php
/**
 * @file
 * fmnh_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_access_ruleset" && $api == "ctools_rulesets") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fmnh_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fmnh_calendar_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A date content type that is linked to a Views calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
