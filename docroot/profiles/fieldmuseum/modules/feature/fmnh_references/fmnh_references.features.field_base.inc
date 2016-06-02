<?php
/**
 * @file
 * fmnh_references.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fmnh_references_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_references'
  $field_bases['field_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_references',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'blog' => 'blog',
          'collection' => 'collection',
          'event' => 'event',
          'exhibit' => 'exhibit',
          'learning_resource' => 'learning_resource',
          'media_gallery' => 'media_gallery',
          'page' => 'page',
          'program' => 'program',
          'video' => 'video',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
