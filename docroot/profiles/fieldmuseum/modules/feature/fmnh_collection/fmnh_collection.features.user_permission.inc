<?php
/**
 * @file
 * fmnh_collection.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_collection_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create collection content'.
  $permissions['create collection content'] = array(
    'name' => 'create collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collection content'.
  $permissions['delete any collection content'] = array(
    'name' => 'delete any collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collection content'.
  $permissions['delete own collection content'] = array(
    'name' => 'delete own collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collection content'.
  $permissions['edit any collection content'] = array(
    'name' => 'edit any collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collection content'.
  $permissions['edit own collection content'] = array(
    'name' => 'edit own collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter collection revision log entry'.
  $permissions['enter collection revision log entry'] = array(
    'name' => 'enter collection revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
      'publisher' => 'publisher',
      'reviewer' => 'reviewer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection authored by option'.
  $permissions['override collection authored by option'] = array(
    'name' => 'override collection authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection authored on option'.
  $permissions['override collection authored on option'] = array(
    'name' => 'override collection authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection promote to front page option'.
  $permissions['override collection promote to front page option'] = array(
    'name' => 'override collection promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection published option'.
  $permissions['override collection published option'] = array(
    'name' => 'override collection published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection revision option'.
  $permissions['override collection revision option'] = array(
    'name' => 'override collection revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override collection sticky option'.
  $permissions['override collection sticky option'] = array(
    'name' => 'override collection sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
