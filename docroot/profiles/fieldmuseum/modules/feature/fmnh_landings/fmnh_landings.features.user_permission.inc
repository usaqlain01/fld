<?php
/**
 * @file
 * fmnh_landings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_landings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable banner_description_and_list'.
  $permissions['create fieldable banner_description_and_list'] = array(
    'name' => 'create fieldable banner_description_and_list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable hero'.
  $permissions['create fieldable hero'] = array(
    'name' => 'create fieldable hero',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable banner_description_and_list'.
  $permissions['delete fieldable banner_description_and_list'] = array(
    'name' => 'delete fieldable banner_description_and_list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hero'.
  $permissions['delete fieldable hero'] = array(
    'name' => 'delete fieldable hero',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable banner_description_and_list'.
  $permissions['edit fieldable banner_description_and_list'] = array(
    'name' => 'edit fieldable banner_description_and_list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hero'.
  $permissions['edit fieldable hero'] = array(
    'name' => 'edit fieldable hero',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
