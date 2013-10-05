<?php
/**
 * @file
 * homepage_menu_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function homepage_menu_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 9,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'sidebar_first',
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
    'title' => 'Welcome',
    'visibility' => 1,
  );

  return $export;
}
