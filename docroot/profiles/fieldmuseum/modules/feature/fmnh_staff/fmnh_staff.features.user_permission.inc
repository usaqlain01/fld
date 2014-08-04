<?php
/**
 * @file
 * fmnh_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
