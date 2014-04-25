<?php
/**
 * @file
 * fmnh_staff.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_staff_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_department'
  $field_instances['user-user-field_department'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Department');

  return $field_instances;
}
