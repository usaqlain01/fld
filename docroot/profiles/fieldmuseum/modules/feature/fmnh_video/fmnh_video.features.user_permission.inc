<?php
/**
 * @file
 * fmnh_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter video revision log entry'.
  $permissions['enter video revision log entry'] = array(
    'name' => 'enter video revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored by option'.
  $permissions['override video authored by option'] = array(
    'name' => 'override video authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video authored on option'.
  $permissions['override video authored on option'] = array(
    'name' => 'override video authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video promote to front page option'.
  $permissions['override video promote to front page option'] = array(
    'name' => 'override video promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video published option'.
  $permissions['override video published option'] = array(
    'name' => 'override video published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video revision option'.
  $permissions['override video revision option'] = array(
    'name' => 'override video revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override video sticky option'.
  $permissions['override video sticky option'] = array(
    'name' => 'override video sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
