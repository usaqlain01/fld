<?php
/**
 * @file
 * fmnh_project.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter project revision log entry'.
  $permissions['enter project revision log entry'] = array(
    'name' => 'enter project revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project authored by option'.
  $permissions['override project authored by option'] = array(
    'name' => 'override project authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project authored on option'.
  $permissions['override project authored on option'] = array(
    'name' => 'override project authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project promote to front page option'.
  $permissions['override project promote to front page option'] = array(
    'name' => 'override project promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project published option'.
  $permissions['override project published option'] = array(
    'name' => 'override project published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project revision option'.
  $permissions['override project revision option'] = array(
    'name' => 'override project revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override project sticky option'.
  $permissions['override project sticky option'] = array(
    'name' => 'override project sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
