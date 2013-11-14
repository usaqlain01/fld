<?php
/**
 * @file
 * node_reference_shared_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function node_reference_shared_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_featured_content'
  $field_bases['field_featured_content'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured_content',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 'article',
        'blog' => 'blog',
        'department_division_page' => 'department_division_page',
        'dept_div_collections_landing' => 'dept_div_collections_landing',
        'exhibit' => 'exhibit',
        'explore_our_collections' => 0,
        'faq' => 0,
        'home_page' => 0,
        'individual_collection' => 'individual_collection',
        'newsletter' => 0,
        'photo_gallery' => 'photo_gallery',
        'podcast' => 0,
        'promotion_widget' => 0,
        'reflections_on_9_11' => 0,
        'secondary_section_front' => 'secondary_section_front',
        'section_front' => 0,
        'subsection_homepage' => 0,
        'video' => 'video',
        'webform' => 0,
        'widget' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 1,
    'type' => 'node_reference',
  );

  return $field_bases;
}
