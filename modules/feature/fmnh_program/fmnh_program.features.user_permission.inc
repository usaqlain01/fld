<?php
/**
 * @file
 * fmnh_program.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_program_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create program content'.
  $permissions['create program content'] = array(
    'name' => 'create program content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any program content'.
  $permissions['delete any program content'] = array(
    'name' => 'delete any program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own program content'.
  $permissions['delete own program content'] = array(
    'name' => 'delete own program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any program content'.
  $permissions['edit any program content'] = array(
    'name' => 'edit any program content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own program content'.
  $permissions['edit own program content'] = array(
    'name' => 'edit own program content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter program revision log entry'.
  $permissions['enter program revision log entry'] = array(
    'name' => 'enter program revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program authored by option'.
  $permissions['override program authored by option'] = array(
    'name' => 'override program authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program authored on option'.
  $permissions['override program authored on option'] = array(
    'name' => 'override program authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program promote to front page option'.
  $permissions['override program promote to front page option'] = array(
    'name' => 'override program promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program published option'.
  $permissions['override program published option'] = array(
    'name' => 'override program published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program revision option'.
  $permissions['override program revision option'] = array(
    'name' => 'override program revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override program sticky option'.
  $permissions['override program sticky option'] = array(
    'name' => 'override program sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
