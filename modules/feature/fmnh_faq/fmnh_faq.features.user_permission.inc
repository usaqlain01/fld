<?php
/**
 * @file
 * fmnh_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'enter faq revision log entry'.
  $permissions['enter faq revision log entry'] = array(
    'name' => 'enter faq revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq authored by option'.
  $permissions['override faq authored by option'] = array(
    'name' => 'override faq authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq authored on option'.
  $permissions['override faq authored on option'] = array(
    'name' => 'override faq authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq promote to front page option'.
  $permissions['override faq promote to front page option'] = array(
    'name' => 'override faq promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq published option'.
  $permissions['override faq published option'] = array(
    'name' => 'override faq published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq revision option'.
  $permissions['override faq revision option'] = array(
    'name' => 'override faq revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq sticky option'.
  $permissions['override faq sticky option'] = array(
    'name' => 'override faq sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
