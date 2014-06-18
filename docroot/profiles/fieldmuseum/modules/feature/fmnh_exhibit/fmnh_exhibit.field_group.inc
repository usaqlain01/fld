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
  $field_group->identifier = 'group_audience|node|exhibit|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Audience',
    'weight' => '50',
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
  $export['group_audience|node|exhibit|form'] = $field_group;

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
      0 => 'field_banner_description',
      1 => 'field_image',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grade_level|node|exhibit|form';
  $field_group->group_name = 'group_grade_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Grade level',
    'weight' => '53',
    'children' => array(
      0 => 'field_grade_level',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-grade-level field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_grade_level|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_region|node|exhibit|form';
  $field_group->group_name = 'group_location_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_science_tags';
  $field_group->data = array(
    'label' => 'Location/Region',
    'weight' => '56',
    'children' => array(
      0 => 'field_location_region',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-region field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_location_region|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_tags|node|exhibit|form';
  $field_group->group_name = 'group_public_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Tags',
    'weight' => '7',
    'children' => array(
      0 => 'group_audience',
      1 => 'group_grade_level',
      2 => 'group_topic',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-public-tags field-group-htabs',
      ),
    ),
  );
  $export['group_public_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_area|node|exhibit|form';
  $field_group->group_name = 'group_research_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_science_tags';
  $field_group->data = array(
    'label' => 'Research area',
    'weight' => '55',
    'children' => array(
      0 => 'field_research_area',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-research-area field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_research_area|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|exhibit|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_science_tags';
  $field_group->data = array(
    'label' => 'Science focus',
    'weight' => '58',
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
  $export['group_science_focus|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_tags|node|exhibit|form';
  $field_group->group_name = 'group_science_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Science tags',
    'weight' => '55',
    'children' => array(
      0 => 'group_location_region',
      1 => 'group_research_area',
      2 => 'group_science_focus',
      3 => 'group_stratigraphy',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-science-tags field-group-htabs',
      ),
    ),
  );
  $export['group_science_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stratigraphy|node|exhibit|form';
  $field_group->group_name = 'group_stratigraphy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_science_tags';
  $field_group->data = array(
    'label' => 'Stratigraphy',
    'weight' => '57',
    'children' => array(
      0 => 'field_stratigraphy',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stratigraphy field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_stratigraphy|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|exhibit|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Topic',
    'weight' => '52',
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
  $export['group_topic|node|exhibit|form'] = $field_group;

  return $export;
}
