<?php
/**
 * @file
 * subsection_homepage_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function subsection_homepage_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_logos|node|subsection_homepage|form';
  $field_group->group_name = 'group_additional_logos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '17',
    'children' => array(
      0 => 'field_additional_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-additional-logos field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_additional_logos|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|node|subsection_homepage|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '5',
    'children' => array(
      0 => 'group_links',
      1 => 'group_additional_logos',
      2 => 'group_logos',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-fields field-group-htabs',
      ),
    ),
  );
  $export['group_fields|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logos|node|subsection_homepage|form';
  $field_group->group_name = 'group_logos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Associated Logos',
    'weight' => '18',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_subsection_homepage_logos',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-logos field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_logos|node|subsection_homepage|form'] = $field_group;

  return $export;
}
