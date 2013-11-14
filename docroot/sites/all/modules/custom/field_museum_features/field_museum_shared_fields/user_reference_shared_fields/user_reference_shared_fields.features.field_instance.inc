<?php
/**
 * @file
 * user_reference_shared_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function user_reference_shared_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-department_division_page-field_profiles'
  $field_instances['node-department_division_page-field_profiles'] = array(
    'bundle' => 'department_division_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These fields define the list of users which appears on your department page. This list will display in alphabetical order.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profiles',
    'label' => 'People',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-dept_div_collections_landing-field_profiles'
  $field_instances['node-dept_div_collections_landing-field_profiles'] = array(
    'bundle' => 'dept_div_collections_landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the names of Field Museum Staff with existing staff profiles. Names will autocomplete. If individuals do not have an existing staff profile, such as external collaborators, students or interns, you may list their names below in the following text box.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'custom',
        'settings' => array(
          'custom_collapsible' => 1,
          'custom_collapsible_collapsed' => 1,
          'display' => 'default',
          'group_values' => 0,
          'view' => 'collections_people',
        ),
        'type' => 'custom_field_as_view',
        'weight' => 5,
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
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profiles',
    'label' => 'People (FM Staff)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-individual_collection-field_profiles'
  $field_instances['node-individual_collection-field_profiles'] = array(
    'bundle' => 'individual_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the names of Field Museum Staff with existing staff profiles. Names will autocomplete. If individuals do not have an existing staff profile, such as external collaborators, students or interns, you may list their names below in the following text box.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'custom',
        'settings' => array(
          'custom_collapsible' => 1,
          'custom_collapsible_collapsed' => 1,
          'display' => 'default',
          'group_values' => 0,
          'view' => 'collections_people',
        ),
        'type' => 'custom_field_as_view',
        'weight' => 7,
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profiles',
    'label' => 'People (FM Staff)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter the names of Field Museum Staff with existing staff profiles. Names will autocomplete. If individuals do not have an existing staff profile, such as external collaborators, students or interns, you may list their names below in the following text box.');
  t('People');
  t('People (FM Staff)');
  t('These fields define the list of users which appears on your department page. This list will display in alphabetical order.');

  return $field_instances;
}
