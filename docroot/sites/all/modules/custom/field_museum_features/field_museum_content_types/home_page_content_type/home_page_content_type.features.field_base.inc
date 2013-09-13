<?php
/**
 * @file
 * home_page_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function home_page_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_home_tags'
  $field_bases['field_home_tags'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_home_tags',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_homepage_explorelearn'
  $field_bases['field_homepage_explorelearn'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_homepage_explorelearn',
    'foreign keys' => array(),
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
        'department_division_page' => 0,
        'dept_div_collections_landing' => 0,
        'exhibit' => 'exhibit',
        'explore_our_collections' => 0,
        'faq' => 0,
        'home_page' => 0,
        'individual_collection' => 0,
        'newsletter' => 'newsletter',
        'photo_gallery' => 'photo_gallery',
        'podcast' => 'podcast',
        'promotion_widget' => 0,
        'secondary_section_front' => 0,
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

  // Exported field_base: 'field_homepage_happeningnow'
  $field_bases['field_homepage_happeningnow'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_homepage_happeningnow',
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
        'department_division_page' => 0,
        'dept_div_collections_landing' => 0,
        'exhibit' => 'exhibit',
        'explore_our_collections' => 0,
        'faq' => 0,
        'home_page' => 0,
        'image' => 0,
        'individual_collection' => 0,
        'news' => 'news',
        'photo_gallery' => 0,
        'podcast' => 0,
        'promotion_widget' => 0,
        'secondary_section_front' => 0,
        'section_front' => 0,
        'video' => 0,
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

  // Exported field_base: 'field_homepage_news'
  $field_bases['field_homepage_news'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_homepage_news',
    'foreign keys' => array(),
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
        'department_division_page' => 0,
        'dept_div_collections_landing' => 0,
        'exhibit' => 0,
        'explore_our_collections' => 0,
        'faq' => 0,
        'home_page' => 0,
        'individual_collection' => 0,
        'news' => 'news',
        'photo_gallery' => 0,
        'podcast' => 0,
        'promotion_widget' => 0,
        'secondary_section_front' => 0,
        'section_front' => 0,
        'video' => 0,
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

  // Exported field_base: 'field_homepage_upcoming'
  $field_bases['field_homepage_upcoming'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_homepage_upcoming',
    'foreign keys' => array(),
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
        'department_division_page' => 0,
        'dept_div_collections_landing' => 0,
        'exhibit' => 'exhibit',
        'explore_our_collections' => 0,
        'faq' => 0,
        'home_page' => 0,
        'image' => 0,
        'individual_collection' => 0,
        'news' => 'news',
        'photo_gallery' => 0,
        'podcast' => 0,
        'promotion_widget' => 0,
        'secondary_section_front' => 0,
        'section_front' => 0,
        'video' => 0,
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
