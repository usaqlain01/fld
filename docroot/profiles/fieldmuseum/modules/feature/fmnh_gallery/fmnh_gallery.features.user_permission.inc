<?php
/**
 * @file
 * fmnh_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fmnh_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer media galleries'.
  $permissions['administer media galleries'] = array(
    'name' => 'administer media galleries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_gallery',
  );

  // Exported permission: 'create media_gallery content'.
  $permissions['create media_gallery content'] = array(
    'name' => 'create media_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_gallery content'.
  $permissions['delete any media_gallery content'] = array(
    'name' => 'delete any media_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_gallery content'.
  $permissions['delete own media_gallery content'] = array(
    'name' => 'delete own media_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in gallery_collections'.
  $permissions['delete terms in gallery_collections'] = array(
    'name' => 'delete terms in gallery_collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any media_gallery content'.
  $permissions['edit any media_gallery content'] = array(
    'name' => 'edit any media_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_gallery content'.
  $permissions['edit own media_gallery content'] = array(
    'name' => 'edit own media_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'author' => 'author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in gallery_collections'.
  $permissions['edit terms in gallery_collections'] = array(
    'name' => 'edit terms in gallery_collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter media_gallery revision log entry'.
  $permissions['enter media_gallery revision log entry'] = array(
    'name' => 'enter media_gallery revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery authored by option'.
  $permissions['override media_gallery authored by option'] = array(
    'name' => 'override media_gallery authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery authored on option'.
  $permissions['override media_gallery authored on option'] = array(
    'name' => 'override media_gallery authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery promote to front page option'.
  $permissions['override media_gallery promote to front page option'] = array(
    'name' => 'override media_gallery promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery published option'.
  $permissions['override media_gallery published option'] = array(
    'name' => 'override media_gallery published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery revision option'.
  $permissions['override media_gallery revision option'] = array(
    'name' => 'override media_gallery revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override media_gallery sticky option'.
  $permissions['override media_gallery sticky option'] = array(
    'name' => 'override media_gallery sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
