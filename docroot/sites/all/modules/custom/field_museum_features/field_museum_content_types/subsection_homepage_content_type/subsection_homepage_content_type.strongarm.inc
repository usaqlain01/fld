<?php
/**
 * @file
 * subsection_homepage_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function subsection_homepage_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subsection_homepage';
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
          'weight' => '0',
        ),
        'display_settings' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'addthis_button' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__subsection_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subsection_homepage';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-subsections',
  );
  $export['menu_options_subsection_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subsection_homepage';
  $strongarm->value = 'menu-subsections:0';
  $export['menu_parent_subsection_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subsection_homepage';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_subsection_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subsection_homepage';
  $strongarm->value = '1';
  $export['node_preview_subsection_homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subsection_homepage';
  $strongarm->value = 0;
  $export['node_submitted_subsection_homepage'] = $strongarm;

  return $export;
}
