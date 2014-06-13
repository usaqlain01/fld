<?php
/**
 * @file
 * fmnh_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter blog revision log entry'.
  $permissions['enter blog revision log entry'] = array(
    'name' => 'enter blog revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog authored by option'.
  $permissions['override blog authored by option'] = array(
    'name' => 'override blog authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog authored on option'.
  $permissions['override blog authored on option'] = array(
    'name' => 'override blog authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog promote to front page option'.
  $permissions['override blog promote to front page option'] = array(
    'name' => 'override blog promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog published option'.
  $permissions['override blog published option'] = array(
    'name' => 'override blog published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog revision option'.
  $permissions['override blog revision option'] = array(
    'name' => 'override blog revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override blog sticky option'.
  $permissions['override blog sticky option'] = array(
    'name' => 'override blog sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
