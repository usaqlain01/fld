<?php
/**
 * @file
 * user_reference_shared_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function user_reference_shared_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_profiles'
  $field_bases['field_profiles'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profiles',
    'indexes' => array(
      'uid' => array(
        0 => 'uid',
      ),
    ),
    'locked' => 0,
    'module' => 'user_reference',
    'settings' => array(
      'referenceable_roles' => array(
        2 => 2,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        11 => 0,
      ),
      'referenceable_status' => array(
        0 => 0,
        1 => 1,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 1,
    'type' => 'user_reference',
  );

  return $field_bases;
}
