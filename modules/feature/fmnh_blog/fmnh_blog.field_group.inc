<?php
/**
 * @file
 * fmnh_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fmnh_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|blog|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Audience',
    'weight' => '47',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_audience|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_tags|node|blog|form';
  $field_group->group_name = 'group_public_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public tags',
    'weight' => '47',
    'children' => array(
      0 => 'group_audience',
      1 => 'group_topic',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-public-tags field-group-htabs',
      ),
    ),
  );
  $export['group_public_tags|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|blog|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_science_tags';
  $field_group->data = array(
    'label' => 'Science focus',
    'weight' => '43',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-science-focus field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_science_focus|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_tags|node|blog|form';
  $field_group->group_name = 'group_science_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Science Tags',
    'weight' => '43',
    'children' => array(
      0 => 'group_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-science-tags field-group-htabs',
      ),
    ),
  );
  $export['group_science_tags|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|blog|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Topic',
    'weight' => '48',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-topic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_topic|node|blog|form'] = $field_group;

  return $export;
}
