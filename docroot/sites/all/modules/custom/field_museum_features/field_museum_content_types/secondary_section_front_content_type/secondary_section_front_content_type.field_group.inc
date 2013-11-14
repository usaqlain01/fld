<?php
/**
 * @file
 * secondary_section_front_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function secondary_section_front_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|secondary_section_front|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-science-focus field-group-htab',
      ),
    ),
  );
  $export['group_field_science_focus|node|secondary_section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|secondary_section_front|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '13',
    'children' => array(
      0 => 'group_field_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|secondary_section_front|form'] = $field_group;

  return $export;
}
