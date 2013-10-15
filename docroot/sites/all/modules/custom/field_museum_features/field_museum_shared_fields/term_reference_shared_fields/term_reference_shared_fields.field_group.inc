<?php
/**
 * @file
 * term_reference_shared_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function term_reference_shared_fields_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_age_group_tags|node|article|form';
  $field_group->group_name = 'group_age_group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Age Group Tags',
    'weight' => '49',
    'children' => array(
      0 => 'field_age_group_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-age-group-tags field-group-htab',
      ),
    ),
  );
  $export['group_age_group_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|article|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '28',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Audience Tags',
      'instance_settings' => array(
        'classes' => ' group-audience field-group-htab',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_audience|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|blog|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '15',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-audience field-group-htab',
      ),
    ),
  );
  $export['group_audience|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|department_division_page|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department_division_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Audience Tags',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-audience field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_audience|node|department_division_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|dept_div_collections_landing|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dept_div_collections_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '22',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-audience field-group-fieldset',
      ),
    ),
  );
  $export['group_audience|node|dept_div_collections_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|individual_collection|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '28',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-audience field-group-htab',
      ),
    ),
  );
  $export['group_audience|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collections_tags|node|article|form';
  $field_group->group_name = 'group_collections_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Collections Tags',
    'weight' => '46',
    'children' => array(
      0 => 'field_collections_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collections Tags',
      'instance_settings' => array(
        'classes' => ' group-collections-tags field-group-fieldset',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_collections_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collections_tags|node|individual_collection|form';
  $field_group->group_name = 'group_collections_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Collections Tags',
    'weight' => '27',
    'children' => array(
      0 => 'field_collections_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-collections-tags field-group-htab',
      ),
    ),
  );
  $export['group_collections_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_location|node|subsection_homepage|form';
  $field_group->group_name = 'group_content_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxo';
  $field_group->data = array(
    'label' => 'Content Location',
    'weight' => '19',
    'children' => array(
      0 => 'field_section_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-content-location field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content_location|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dept_division_tags|node|article|form';
  $field_group->group_name = 'group_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '29',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Department/Division Tags',
      'instance_settings' => array(
        'classes' => ' group-dept-division-tags field-group-htab',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dept_division_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dept_division_tags|node|individual_collection|form';
  $field_group->group_name = 'group_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Dept/Div Tags',
    'weight' => '29',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_dept_division_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dept_div|node|subsection_homepage|form';
  $field_group->group_name = 'group_dept_div';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxo';
  $field_group->data = array(
    'label' => 'Dept/Division',
    'weight' => '20',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-dept-div field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dept_div|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit_type|node|article|form';
  $field_group->group_name = 'group_exhibit_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Exhibit Type (PR Use)',
    'weight' => '50',
    'children' => array(
      0 => 'field_exhibition_type_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-exhibit-type field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_type|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tags|node|article|form';
  $field_group->group_name = 'group_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '43',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_exhibition_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tags|node|individual_collection|form';
  $field_group->group_name = 'group_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '24',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_exhibition_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_age_group_tags|node|exhibit|form';
  $field_group->group_name = 'group_field_age_group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Age Group Tags',
    'weight' => '24',
    'children' => array(
      0 => 'field_age_group_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-field-age-group-tags field-group-fieldset',
      ),
    ),
  );
  $export['group_field_age_group_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|exhibit|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '22',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|faq|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '15',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|photo_gallery|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '19',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|podcast|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '13',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|promotion_widget|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion_widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '12',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|promotion_widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|secondary_section_front|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '20',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|secondary_section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|section_front|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '15',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|video|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '19',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_audience|node|widget|form';
  $field_group->group_name = 'group_field_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Audience Tags',
    'weight' => '9',
    'children' => array(
      0 => 'field_audience',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-audience field-group-htab',
      ),
    ),
  );
  $export['group_field_audience|node|widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_collections_tags|user|user|form';
  $field_group->group_name = 'group_field_collections_tags';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Collections Tags',
    'weight' => '32',
    'children' => array(
      0 => 'field_collections_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-collections-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_collections_tags|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_dept_division_tags|node|faq|form';
  $field_group->group_name = 'group_field_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '16',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_dept_division_tags|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_dept_division_tags|node|photo_gallery|form';
  $field_group->group_name = 'group_field_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '20',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_dept_division_tags|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_dept_division_tags|node|podcast|form';
  $field_group->group_name = 'group_field_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '14',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_dept_division_tags|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_dept_division_tags|node|secondary_section_front|form';
  $field_group->group_name = 'group_field_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '21',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_dept_division_tags|node|secondary_section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_dept_division_tags|node|video|form';
  $field_group->group_name = 'group_field_dept_division_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Department/Division Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_dept_division_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-dept-division-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_dept_division_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_exhibition_tags|node|exhibit|form';
  $field_group->group_name = 'group_field_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '20',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_exhibition_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_exhibition_tags|node|photo_gallery|form';
  $field_group->group_name = 'group_field_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '24',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_exhibition_tags|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_exhibition_tags|node|podcast|form';
  $field_group->group_name = 'group_field_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_exhibition_tags|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_exhibition_tags|node|video|form';
  $field_group->group_name = 'group_field_exhibition_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '17',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_exhibition_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_exhibition_tags|user|user|form';
  $field_group->group_name = 'group_field_exhibition_tags';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Exhibition Tags',
    'weight' => '33',
    'children' => array(
      0 => 'field_exhibition_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-exhibition-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_exhibition_tags|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_location_region|user|user|form';
  $field_group->group_name = 'group_field_location_region';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Location/Region',
    'weight' => '35',
    'children' => array(
      0 => 'field_location_region',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-location-region field-group-htab',
      ),
    ),
  );
  $export['group_field_location_region|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_research_area_tags|node|exhibit|form';
  $field_group->group_name = 'group_field_research_area_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Research Area Tags',
    'weight' => '23',
    'children' => array(
      0 => 'field_research_area_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-research-area-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_research_area_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_research_area_tags|user|user|form';
  $field_group->group_name = 'group_field_research_area_tags';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Research Areas Tags',
    'weight' => '36',
    'children' => array(
      0 => 'field_research_area_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-research-area-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_research_area_tags|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_research_areas|node|video|form';
  $field_group->group_name = 'group_field_research_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Research Areas Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_research_area_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Research Areas Tags',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-field-research-areas field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_field_research_areas|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|exhibit|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '22',
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
  $export['group_field_science_focus|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|faq|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '20',
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
  $export['group_field_science_focus|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|photo_gallery|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '25',
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
  $export['group_field_science_focus|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|podcast|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '19',
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
  $export['group_field_science_focus|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|video|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '19',
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
  $export['group_field_science_focus|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_science_focus|node|widget|form';
  $field_group->group_name = 'group_field_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '13',
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
  $export['group_field_science_focus|node|widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_section_tags|node|promotion_widget|form';
  $field_group->group_name = 'group_field_section_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion_widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus',
    'weight' => '11',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-section-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_section_tags|node|promotion_widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_stratigraphy_tags|node|exhibit|form';
  $field_group->group_name = 'group_field_stratigraphy_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary';
  $field_group->data = array(
    'label' => 'Straigraphy Tags',
    'weight' => '21',
    'children' => array(
      0 => 'field_stratigraphy_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-stratigraphy-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_stratigraphy_tags|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_stratigraphy_tags|user|user|form';
  $field_group->group_name = 'group_field_stratigraphy_tags';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Stratigraphy Tags',
    'weight' => '37',
    'children' => array(
      0 => 'field_stratigraphy_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-stratigraphy-tags field-group-htab',
      ),
    ),
  );
  $export['group_field_stratigraphy_tags|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|exhibit|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '21',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|photo_gallery|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|podcast|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '12',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|promotion_widget|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion_widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '11',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|promotion_widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|secondary_section_front|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '19',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|secondary_section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|section_front|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '14',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|video|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '17',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_field_topic|node|widget|form';
  $field_group->group_name = 'group_field_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'widget';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '8',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-field-topic field-group-htab',
      ),
    ),
  );
  $export['group_field_topic|node|widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_region|node|article|form';
  $field_group->group_name = 'group_location_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Location/Region Tags',
    'weight' => '45',
    'children' => array(
      0 => 'field_location_region',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-location-region field-group-htab',
      ),
    ),
  );
  $export['group_location_region|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_region|node|individual_collection|form';
  $field_group->group_name = 'group_location_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Location/Region Tags',
    'weight' => '26',
    'children' => array(
      0 => 'field_location_region',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-location-region field-group-htab',
      ),
    ),
  );
  $export['group_location_region|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primarty_tags|node|promotion_widget|form';
  $field_group->group_name = 'group_primarty_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion_widget';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '4',
    'children' => array(
      0 => 'group_field_topic',
      1 => 'group_field_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primarty-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primarty_tags|node|promotion_widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primarty_tags|node|secondary_section_front|form';
  $field_group->group_name = 'group_primarty_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secondary_section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '12',
    'children' => array(
      0 => 'group_field_dept_division_tags',
      1 => 'group_field_topic',
      2 => 'group_field_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primarty-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primarty_tags|node|secondary_section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primarty_tags|node|section_front|form';
  $field_group->group_name = 'group_primarty_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_front';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '7',
    'children' => array(
      0 => 'group_field_audience',
      1 => 'group_field_topic',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primarty-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primarty_tags|node|section_front|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primarty_tags|node|video|form';
  $field_group->group_name = 'group_primarty_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '6',
    'children' => array(
      0 => 'group_field_audience',
      1 => 'group_field_dept_division_tags',
      2 => 'group_field_topic',
      3 => 'group_subsection_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primarty-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primarty_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_tags|node|article|form';
  $field_group->group_name = 'group_primary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '11',
    'children' => array(
      0 => 'group_topic',
      1 => 'group_audience',
      2 => 'group_dept_division_tags',
      3 => 'group_subsection_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primary_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_tags|node|blog|form';
  $field_group->group_name = 'group_primary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '9',
    'children' => array(
      0 => 'group_topic',
      1 => 'group_audience',
      2 => 'group_subsection_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primary_tags|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_tags|node|department_division_page|form';
  $field_group->group_name = 'group_primary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department_division_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '11',
    'children' => array(
      0 => 'group_topic',
      1 => 'group_audience',
      2 => 'group_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primary_tags|node|department_division_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_tags|node|dept_div_collections_landing|form';
  $field_group->group_name = 'group_primary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dept_div_collections_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '13',
    'children' => array(
      0 => 'group_topic',
      1 => 'group_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primary_tags|node|dept_div_collections_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_tags|node|individual_collection|form';
  $field_group->group_name = 'group_primary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '14',
    'children' => array(
      0 => 'group_dept_division_tags',
      1 => 'group_topic',
      2 => 'group_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_primary_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|exhibit|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tags',
    'weight' => '10',
    'children' => array(
      0 => 'group_field_topic',
      1 => 'group_field_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary field-group-htabs',
      ),
    ),
  );
  $export['group_primary|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|faq|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tabs',
    'weight' => '9',
    'children' => array(
      0 => 'group_field_topic',
      1 => 'group_field_audience',
      2 => 'group_field_dept_division_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary field-group-htabs',
      ),
    ),
  );
  $export['group_primary|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|photo_gallery|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_subsection_tags',
      1 => 'group_field_topic',
      2 => 'group_field_audience',
      3 => 'group_field_dept_division_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary field-group-htabs',
      ),
    ),
  );
  $export['group_primary|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|podcast|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tabs',
    'weight' => '7',
    'children' => array(
      0 => 'group_field_topic',
      1 => 'group_field_audience',
      2 => 'group_field_dept_division_tags',
      3 => 'group_subsection_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary field-group-htabs',
      ),
    ),
  );
  $export['group_primary|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|widget|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'widget';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_field_topic',
      1 => 'group_field_audience',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-primary field-group-htabs',
      ),
    ),
  );
  $export['group_primary|node|widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_area_tags|node|article|form';
  $field_group->group_name = 'group_research_area_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Research Area Tags',
    'weight' => '48',
    'children' => array(
      0 => 'field_research_area_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-research-area-tags field-group-htab',
      ),
    ),
  );
  $export['group_research_area_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_area_tags|node|individual_collection|form';
  $field_group->group_name = 'group_research_area_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Research Area Tags',
    'weight' => '29',
    'children' => array(
      0 => 'field_research_area_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-research-area-tags field-group-htab',
      ),
    ),
  );
  $export['group_research_area_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|article|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '47',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Science Focus Tags',
      'instance_settings' => array(
        'classes' => ' group-science-focus field-group-htab',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_science_focus|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|blog|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '17',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-science-focus field-group-htab',
      ),
    ),
  );
  $export['group_science_focus|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|department_division_page|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department_division_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '19',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Science Focus Tags',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-science-focus field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_science_focus|node|department_division_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|dept_div_collections_landing|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dept_div_collections_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '17',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-science-focus field-group-fieldset',
      ),
    ),
  );
  $export['group_science_focus|node|dept_div_collections_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_focus|node|individual_collection|form';
  $field_group->group_name = 'group_science_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Science Focus Tags',
    'weight' => '28',
    'children' => array(
      0 => 'field_science_focus',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-science-focus field-group-htab',
      ),
    ),
  );
  $export['group_science_focus|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|article|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '13',
    'children' => array(
      0 => 'group_collections_tags',
      1 => 'group_exhibition_tags',
      2 => 'group_location_region',
      3 => 'group_stratigraphy_tags',
      4 => 'group_science_focus',
      5 => 'group_research_area_tags',
      6 => 'group_age_group_tags',
      7 => 'group_exhibit_type',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|blog|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '11',
    'children' => array(
      0 => 'group_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|dept_div_collections_landing|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dept_div_collections_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '14',
    'children' => array(
      0 => 'group_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|dept_div_collections_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|individual_collection|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '15',
    'children' => array(
      0 => 'group_science_focus',
      1 => 'group_exhibition_tags',
      2 => 'group_location_region',
      3 => 'group_research_area_tags',
      4 => 'group_stratigraphy_tags',
      5 => 'group_collections_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|promotion_widget|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotion_widget';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '5',
    'children' => array(
      0 => 'group_field_section_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|promotion_widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|node|video|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '7',
    'children' => array(
      0 => 'group_field_science_focus',
      1 => 'group_field_exhibition_tags',
      2 => 'group_field_research_areas',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_tags|user|user|form';
  $field_group->group_name = 'group_secondary_tags';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '17',
    'children' => array(
      0 => 'group_field_exhibition_tags',
      1 => 'group_field_stratigraphy_tags',
      2 => 'group_field_collections_tags',
      3 => 'group_field_research_area_tags',
      4 => 'group_field_location_region',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary-tags field-group-htabs',
      ),
    ),
  );
  $export['group_secondary_tags|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|exhibit|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '11',
    'children' => array(
      0 => 'group_field_exhibition_tags',
      1 => 'group_field_stratigraphy_tags',
      2 => 'group_field_research_area_tags',
      3 => 'group_field_science_focus',
      4 => 'group_field_age_group_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary field-group-htabs',
      ),
    ),
  );
  $export['group_secondary|node|exhibit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|faq|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '10',
    'children' => array(
      0 => 'group_field_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary field-group-htabs',
      ),
    ),
  );
  $export['group_secondary|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|photo_gallery|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '5',
    'children' => array(
      0 => 'group_field_exhibition_tags',
      1 => 'group_field_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary field-group-htabs',
      ),
    ),
  );
  $export['group_secondary|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|podcast|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '8',
    'children' => array(
      0 => 'group_field_science_focus',
      1 => 'group_field_exhibition_tags',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary field-group-htabs',
      ),
    ),
  );
  $export['group_secondary|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|widget|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'widget';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Tags',
    'weight' => '5',
    'children' => array(
      0 => 'group_field_science_focus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-secondary field-group-htabs',
      ),
    ),
  );
  $export['group_secondary|node|widget|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stratigraphy_tags|node|article|form';
  $field_group->group_name = 'group_stratigraphy_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Stratigraphy Tags',
    'weight' => '44',
    'children' => array(
      0 => 'field_stratigraphy_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-stratigraphy-tags field-group-htab',
      ),
    ),
  );
  $export['group_stratigraphy_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stratigraphy_tags|node|individual_collection|form';
  $field_group->group_name = 'group_stratigraphy_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_secondary_tags';
  $field_group->data = array(
    'label' => 'Stratigraphy Tags',
    'weight' => '25',
    'children' => array(
      0 => 'field_stratigraphy_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-stratigraphy-tags field-group-htab',
      ),
    ),
  );
  $export['group_stratigraphy_tags|node|individual_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection_tags|node|article|form';
  $field_group->group_name = 'group_subsection_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Subsection Tags',
    'weight' => '30',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-subsection-tags field-group-htab',
      ),
    ),
  );
  $export['group_subsection_tags|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection_tags|node|blog|form';
  $field_group->group_name = 'group_subsection_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Subsection Tags',
    'weight' => '16',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Subsection Tags',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-subsection-tags field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_subsection_tags|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection_tags|node|photo_gallery|form';
  $field_group->group_name = 'group_subsection_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Subsection Tags',
    'weight' => '21',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-subsection-tags field-group-htab',
      ),
    ),
  );
  $export['group_subsection_tags|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection_tags|node|podcast|form';
  $field_group->group_name = 'group_subsection_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary';
  $field_group->data = array(
    'label' => 'Subsection Tags',
    'weight' => '15',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-subsection-tags field-group-htab',
      ),
    ),
  );
  $export['group_subsection_tags|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection_tags|node|video|form';
  $field_group->group_name = 'group_subsection_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primarty_tags';
  $field_group->data = array(
    'label' => 'Subsection Tags',
    'weight' => '20',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-subsection-tags field-group-htab',
      ),
    ),
  );
  $export['group_subsection_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsection|node|subsection_homepage|form';
  $field_group->group_name = 'group_subsection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxo';
  $field_group->data = array(
    'label' => 'Subsection',
    'weight' => '18',
    'children' => array(
      0 => 'field_subsections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-subsection field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_subsection|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxo|node|subsection_homepage|form';
  $field_group->group_name = 'group_taxo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subsection_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxo',
    'weight' => '9',
    'children' => array(
      0 => 'group_subsection',
      1 => 'group_content_location',
      2 => 'group_dept_div',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-taxo field-group-htabs',
      ),
    ),
  );
  $export['group_taxo|node|subsection_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|article|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '27',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Topic Tags',
      'instance_settings' => array(
        'classes' => ' group-topic field-group-htab',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_topic|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|blog|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '14',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-topic field-group-htab',
      ),
    ),
  );
  $export['group_topic|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|department_division_page|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department_division_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '17',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Topic Tags',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-topic field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_topic|node|department_division_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|dept_div_collections_landing|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dept_div_collections_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '21',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-topic field-group-fieldset',
      ),
    ),
  );
  $export['group_topic|node|dept_div_collections_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topic|node|individual_collection|form';
  $field_group->group_name = 'group_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_primary_tags';
  $field_group->data = array(
    'label' => 'Topic Tags',
    'weight' => '27',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' group-topic field-group-htab',
      ),
    ),
  );
  $export['group_topic|node|individual_collection|form'] = $field_group;

  return $export;
}
