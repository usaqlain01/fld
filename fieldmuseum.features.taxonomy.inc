<?php
/**
 * @file
 * fieldmuseum.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fieldmuseum_taxonomy_default_vocabularies() {
  return array(
    'audience' => array(
      'name' => 'Audience',
      'machine_name' => 'audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'exhibit_type' => array(
      'name' => 'Exhibit type',
      'machine_name' => 'exhibit_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'faq_topics' => array(
      'name' => 'FAQ topics',
      'machine_name' => 'faq_topics',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'grade_level' => array(
      'name' => 'Grade level',
      'machine_name' => 'grade_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'location_region' => array(
      'name' => 'Location/Region',
      'machine_name' => 'location_region',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'research_area' => array(
      'name' => 'Research Area',
      'machine_name' => 'research_area',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'science_focus' => array(
      'name' => 'Science Focus',
      'machine_name' => 'science_focus',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'stratigraphy' => array(
      'name' => 'Stratigraphy',
      'machine_name' => 'stratigraphy',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'topic' => array(
      'name' => 'Topic',
      'machine_name' => 'topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
