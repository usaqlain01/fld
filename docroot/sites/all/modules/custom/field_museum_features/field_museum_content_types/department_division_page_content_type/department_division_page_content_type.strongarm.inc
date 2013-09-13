<?php
/**
 * @file
 * department_division_page_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function department_division_page_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__department_division_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
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
          'weight' => '1',
        ),
        'display_settings' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '14',
        ),
        'xmlsitemap' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '13',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__department_division_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_department_division_page';
  $strongarm->value = array(
    0 => 'anthropology-tabs',
    1 => 'menu-biosync-tabs',
    2 => 'botany-tabs',
    3 => 'menu-collections-conserv-tabs',
    4 => 'menu-cultural-heritage',
    5 => 'ecco-tabs',
    6 => 'geology-tabs',
    7 => 'library-tabs',
    8 => 'main-menu',
    9 => 'menu-photography-tabs',
    10 => 'pritzkerlab-tabs',
    11 => 'zoology-tabs',
  );
  $export['menu_options_department_division_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_department_division_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_department_division_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_department_division_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_department_division_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_department_division_page';
  $strongarm->value = '1';
  $export['node_preview_department_division_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_department_division_page';
  $strongarm->value = 0;
  $export['node_submitted_department_division_page'] = $strongarm;

  return $export;
}
