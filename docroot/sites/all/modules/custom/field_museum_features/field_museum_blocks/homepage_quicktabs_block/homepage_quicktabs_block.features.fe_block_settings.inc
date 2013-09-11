<?php
/**
 * @file
 * homepage_quicktabs_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function homepage_quicktabs_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-homepage_quicktabs'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'homepage_quicktabs',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
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
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'sitetheme',
        'weight' => -93,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Happening at the Field',
    'visibility' => 0,
  );

  return $export;
}
