<?php
/**
 * @file
 * dept_div_collections_landing_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dept_div_collections_landing_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__dept_div_collections_landing';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'display_settings' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__dept_div_collections_landing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_dept_div_collections_landing';
  $strongarm->value = array(
    0 => 'anthropology-tabs',
    1 => 'botany-tabs',
    2 => 'menu-cultural-heritage',
    3 => 'ecco-tabs',
    4 => 'geology-tabs',
    5 => 'library-tabs',
    6 => 'main-menu',
    7 => 'menu-photography-tabs',
    8 => 'pritzkerlab-tabs',
    9 => 'zoology-tabs',
  );
  $export['menu_options_dept_div_collections_landing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_dept_div_collections_landing';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_dept_div_collections_landing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dept_div_collections_landing';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_dept_div_collections_landing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dept_div_collections_landing';
  $strongarm->value = '1';
  $export['node_preview_dept_div_collections_landing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dept_div_collections_landing';
  $strongarm->value = 0;
  $export['node_submitted_dept_div_collections_landing'] = $strongarm;

  return $export;
}
