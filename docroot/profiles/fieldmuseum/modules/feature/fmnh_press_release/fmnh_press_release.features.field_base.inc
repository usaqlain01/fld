<?php
/**
 * @file
 * fmnh_press_release.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fmnh_press_release_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_press_release_type'
  $field_bases['field_press_release_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_press_release_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'science' => 'Science',
        'exhibit' => 'Exhibition',
        'events-announcements' => 'Events & Announcements',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
