<?php
/**
 * @file
 * fmnh_exhibit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fmnh_exhibit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figure|node|exhibit|banner';
  $field_group->group_name = 'group_figure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'figure',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_banner_description',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'figure',
      'instance_settings' => array(
        'classes' => 'group-figure field-group-html-element',
        'element' => 'figure',
        'attributes' => '',
      ),
    ),
  );
  $export['group_figure|node|exhibit|banner'] = $field_group;

  return $export;
}
