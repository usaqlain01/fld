<?php
/**
 * @file
 * node_reference_shared_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function node_reference_shared_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-secondary_section_front-field_featured_content'
  $field_instances['node-secondary_section_front-field_featured_content'] = array(
    'bundle' => 'secondary_section_front',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'display' => 'default',
          'group_values' => 0,
          'view' => 'featured_content_field',
        ),
        'type' => 'custom_field_as_view',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_content',
    'label' => 'Featured content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-section_front-field_featured_content'
  $field_instances['node-section_front-field_featured_content'] = array(
    'bundle' => 'section_front',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'custom',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'display' => 'default',
          'group_values' => 0,
          'view' => 'featured_content_field',
        ),
        'type' => 'custom_field_as_view',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_featured_content',
    'label' => 'Featured content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured content');

  return $field_instances;
}
