<?php
/**
 * @file
 * fmnh_learning_resource.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_learning_resource_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create learning_resource content'.
  $permissions['create learning_resource content'] = array(
    'name' => 'create learning_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any learning_resource content'.
  $permissions['delete any learning_resource content'] = array(
    'name' => 'delete any learning_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own learning_resource content'.
  $permissions['delete own learning_resource content'] = array(
    'name' => 'delete own learning_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any learning_resource content'.
  $permissions['edit any learning_resource content'] = array(
    'name' => 'edit any learning_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own learning_resource content'.
  $permissions['edit own learning_resource content'] = array(
    'name' => 'edit own learning_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter learning_resource revision log entry'.
  $permissions['enter learning_resource revision log entry'] = array(
    'name' => 'enter learning_resource revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource authored by option'.
  $permissions['override learning_resource authored by option'] = array(
    'name' => 'override learning_resource authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource authored on option'.
  $permissions['override learning_resource authored on option'] = array(
    'name' => 'override learning_resource authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource promote to front page option'.
  $permissions['override learning_resource promote to front page option'] = array(
    'name' => 'override learning_resource promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource published option'.
  $permissions['override learning_resource published option'] = array(
    'name' => 'override learning_resource published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource revision option'.
  $permissions['override learning_resource revision option'] = array(
    'name' => 'override learning_resource revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override learning_resource sticky option'.
  $permissions['override learning_resource sticky option'] = array(
    'name' => 'override learning_resource sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
