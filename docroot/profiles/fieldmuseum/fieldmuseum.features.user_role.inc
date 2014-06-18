<?php
/**
 * @file
 * fieldmuseum.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fieldmuseum_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 2,
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 4,
  );

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => 3,
  );

  return $roles;
}
