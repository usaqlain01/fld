<?php
/**
 * @file
 * fmnh_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create newsletter content'.
  $permissions['create newsletter content'] = array(
    'name' => 'create newsletter content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any newsletter content'.
  $permissions['delete any newsletter content'] = array(
    'name' => 'delete any newsletter content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own newsletter content'.
  $permissions['delete own newsletter content'] = array(
    'name' => 'delete own newsletter content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any newsletter content'.
  $permissions['edit any newsletter content'] = array(
    'name' => 'edit any newsletter content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own newsletter content'.
  $permissions['edit own newsletter content'] = array(
    'name' => 'edit own newsletter content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter newsletter revision log entry'.
  $permissions['enter newsletter revision log entry'] = array(
    'name' => 'enter newsletter revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter authored by option'.
  $permissions['override newsletter authored by option'] = array(
    'name' => 'override newsletter authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter authored on option'.
  $permissions['override newsletter authored on option'] = array(
    'name' => 'override newsletter authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter promote to front page option'.
  $permissions['override newsletter promote to front page option'] = array(
    'name' => 'override newsletter promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter published option'.
  $permissions['override newsletter published option'] = array(
    'name' => 'override newsletter published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter revision option'.
  $permissions['override newsletter revision option'] = array(
    'name' => 'override newsletter revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override newsletter sticky option'.
  $permissions['override newsletter sticky option'] = array(
    'name' => 'override newsletter sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
