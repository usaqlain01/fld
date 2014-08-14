<?php
/**
 * @file
 * fmnh_exhibit.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_exhibit_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create exhibit content'.
  $permissions['create exhibit content'] = array(
    'name' => 'create exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any exhibit content'.
  $permissions['delete any exhibit content'] = array(
    'name' => 'delete any exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibit content'.
  $permissions['delete own exhibit content'] = array(
    'name' => 'delete own exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any exhibit content'.
  $permissions['edit any exhibit content'] = array(
    'name' => 'edit any exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibit content'.
  $permissions['edit own exhibit content'] = array(
    'name' => 'edit own exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter exhibit revision log entry'.
  $permissions['enter exhibit revision log entry'] = array(
    'name' => 'enter exhibit revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit authored by option'.
  $permissions['override exhibit authored by option'] = array(
    'name' => 'override exhibit authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit authored on option'.
  $permissions['override exhibit authored on option'] = array(
    'name' => 'override exhibit authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit promote to front page option'.
  $permissions['override exhibit promote to front page option'] = array(
    'name' => 'override exhibit promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit published option'.
  $permissions['override exhibit published option'] = array(
    'name' => 'override exhibit published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit revision option'.
  $permissions['override exhibit revision option'] = array(
    'name' => 'override exhibit revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override exhibit sticky option'.
  $permissions['override exhibit sticky option'] = array(
    'name' => 'override exhibit sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
