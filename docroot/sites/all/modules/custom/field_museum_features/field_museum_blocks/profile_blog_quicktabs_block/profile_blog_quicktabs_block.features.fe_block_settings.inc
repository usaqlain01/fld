<?php
/**
 * @file
 * profile_blog_quicktabs_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function profile_blog_quicktabs_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-profile_blog_quicktabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'profile_blog_quicktabs',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'user/*/blog',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sitetheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'sitetheme',
        'weight' => -82,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
