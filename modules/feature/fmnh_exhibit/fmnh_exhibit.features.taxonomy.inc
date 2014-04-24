<?php
/**
 * @file
 * fmnh_exhibit.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fmnh_exhibit_taxonomy_default_vocabularies() {
  return array(
    'exhibit_type' => array(
      'name' => 'Exhibit type',
      'machine_name' => 'exhibit_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
