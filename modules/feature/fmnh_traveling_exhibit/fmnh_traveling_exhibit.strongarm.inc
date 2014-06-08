<?php
/**
 * @file
 * fmnh_traveling_exhibit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_traveling_exhibit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_traveling_exhibit';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_traveling_exhibit';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_traveling_exhibit';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_traveling_exhibit';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_traveling_exhibit';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_traveling_exhibit';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_traveling_exhibit';
  $strongarm->value = '1';
  $export['node_preview_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_traveling_exhibit';
  $strongarm->value = 0;
  $export['node_submitted_traveling_exhibit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_traveling_exhibit_pattern';
  $strongarm->value = 'about/traveling-exhibitions/[node:title]';
  $export['pathauto_node_traveling_exhibit_pattern'] = $strongarm;

  return $export;
}
