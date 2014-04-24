<?php
/**
 * @file
 * fmnh_exhibit.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_exhibit_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-exhibit-field_exhibit_type'
  $field_instances['node-exhibit-field_exhibit_type'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exhibit_type',
    'label' => 'Exhibit type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibit type');

  return $field_instances;
}
