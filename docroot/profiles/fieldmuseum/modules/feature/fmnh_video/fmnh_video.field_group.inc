<?php
/**
 * @file
 * fmnh_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fmnh_video_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department|node|video|form';
  $field_group->group_name = 'group_department';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Department',
    'weight' => '50',
    'children' => array(
      0 => 'field_department',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-department field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_department|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit|node|video|form';
  $field_group->group_name = 'group_exhibit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_tags';
  $field_group->data = array(
    'label' => 'Exhibit',
    'weight' => '51',
    'children' => array(
      0 => 'field_exhibit',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibit field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibit|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_region|node|video|form';
  $field_group->group_name = 'group_location_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_location_region|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_tags|node|video|form';
  $field_group->group_name = 'group_public_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public tags',
    'weight' => '44',
    'children' => array(
      0 => 'group_topic',
      1 => 'group_audience',
      2 => 'group_department',
      3 => 'group_exhibit',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-public-tags field-group-htabs',
      ),
    ),
  );
  $field_groups['group_public_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_area|node|video|form';
  $field_group->group_name = 'group_research_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_research_area|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|video|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_science_focus|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_tags|node|video|form';
  $field_group->group_name = 'group_science_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_science_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stratigraphy|node|video|form';
  $field_group->group_name = 'group_stratigraphy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_stratigraphy|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|video|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
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
  $field_groups['group_topic|node|video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Department');
  t('Exhibit');
  t('Location/Region');
  t('Public tags');
  t('Research area');
  t('Science focus');
  t('Science tags');
  t('Stratigraphy');
  t('Topic');

  return $field_groups;
}
