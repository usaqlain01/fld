<?php
/**
 * @file
 * fmnh_department.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_department_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create department content'.
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any department content'.
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own department content'.
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any department content'.
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own department content'.
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'enter department revision log entry'.
  $permissions['enter department revision log entry'] = array(
    'name' => 'enter department revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department authored by option'.
  $permissions['override department authored by option'] = array(
    'name' => 'override department authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department authored on option'.
  $permissions['override department authored on option'] = array(
    'name' => 'override department authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department promote to front page option'.
  $permissions['override department promote to front page option'] = array(
    'name' => 'override department promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department published option'.
  $permissions['override department published option'] = array(
    'name' => 'override department published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department revision option'.
  $permissions['override department revision option'] = array(
    'name' => 'override department revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override department sticky option'.
  $permissions['override department sticky option'] = array(
    'name' => 'override department sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
