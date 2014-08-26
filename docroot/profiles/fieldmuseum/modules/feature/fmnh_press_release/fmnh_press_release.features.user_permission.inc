<?php
/**
 * @file
 * fmnh_press_release.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_press_release_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create press_release content'.
  $permissions['create press_release content'] = array(
    'name' => 'create press_release content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any press_release content'.
  $permissions['delete any press_release content'] = array(
    'name' => 'delete any press_release content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own press_release content'.
  $permissions['delete own press_release content'] = array(
    'name' => 'delete own press_release content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any press_release content'.
  $permissions['edit any press_release content'] = array(
    'name' => 'edit any press_release content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own press_release content'.
  $permissions['edit own press_release content'] = array(
    'name' => 'edit own press_release content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter press_release revision log entry'.
  $permissions['enter press_release revision log entry'] = array(
    'name' => 'enter press_release revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release authored by option'.
  $permissions['override press_release authored by option'] = array(
    'name' => 'override press_release authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release authored on option'.
  $permissions['override press_release authored on option'] = array(
    'name' => 'override press_release authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release promote to front page option'.
  $permissions['override press_release promote to front page option'] = array(
    'name' => 'override press_release promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release published option'.
  $permissions['override press_release published option'] = array(
    'name' => 'override press_release published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release revision option'.
  $permissions['override press_release revision option'] = array(
    'name' => 'override press_release revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release sticky option'.
  $permissions['override press_release sticky option'] = array(
    'name' => 'override press_release sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
