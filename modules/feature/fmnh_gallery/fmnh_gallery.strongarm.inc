<?php
/**
 * @file
 * fmnh_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__media_gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'add_media_link' => array(
          'full' => array(
            'weight' => 1,
            'visible' => TRUE,
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => 1,
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => 1,
          ),
          'media_gallery_block' => array(
            'visible' => FALSE,
            'weight' => 1,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__media_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_media_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_media_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_media_gallery';
  $strongarm->value = 0;
  $export['node_submitted_media_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_media_gallery_pattern';
  $strongarm->value = '';
  $export['pathauto_node_media_gallery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_gallery_collections_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_gallery_collections_pattern'] = $strongarm;

  return $export;
}
