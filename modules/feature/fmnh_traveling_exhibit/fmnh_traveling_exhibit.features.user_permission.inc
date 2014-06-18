<?php
/**
 * @file
 * fmnh_traveling_exhibit.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_traveling_exhibit_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create traveling_exhibit content'.
  $permissions['create traveling_exhibit content'] = array(
    'name' => 'create traveling_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any traveling_exhibit content'.
  $permissions['delete any traveling_exhibit content'] = array(
    'name' => 'delete any traveling_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own traveling_exhibit content'.
  $permissions['delete own traveling_exhibit content'] = array(
    'name' => 'delete own traveling_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any traveling_exhibit content'.
  $permissions['edit any traveling_exhibit content'] = array(
    'name' => 'edit any traveling_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own traveling_exhibit content'.
  $permissions['edit own traveling_exhibit content'] = array(
    'name' => 'edit own traveling_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter traveling_exhibit revision log entry'.
  $permissions['enter traveling_exhibit revision log entry'] = array(
    'name' => 'enter traveling_exhibit revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit authored by option'.
  $permissions['override traveling_exhibit authored by option'] = array(
    'name' => 'override traveling_exhibit authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit authored on option'.
  $permissions['override traveling_exhibit authored on option'] = array(
    'name' => 'override traveling_exhibit authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit promote to front page option'.
  $permissions['override traveling_exhibit promote to front page option'] = array(
    'name' => 'override traveling_exhibit promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit published option'.
  $permissions['override traveling_exhibit published option'] = array(
    'name' => 'override traveling_exhibit published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit revision option'.
  $permissions['override traveling_exhibit revision option'] = array(
    'name' => 'override traveling_exhibit revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override traveling_exhibit sticky option'.
  $permissions['override traveling_exhibit sticky option'] = array(
    'name' => 'override traveling_exhibit sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
