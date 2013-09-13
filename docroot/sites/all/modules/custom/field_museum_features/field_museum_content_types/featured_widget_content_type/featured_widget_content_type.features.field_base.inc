<?php
/**
 * @file
 * featured_widget_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function featured_widget_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_widget_image'
  $field_bases['field_widget_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_widget_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'media',
  );

  // Exported field_base: 'field_widget_left_rail_image'
  $field_bases['field_widget_left_rail_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_widget_left_rail_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}