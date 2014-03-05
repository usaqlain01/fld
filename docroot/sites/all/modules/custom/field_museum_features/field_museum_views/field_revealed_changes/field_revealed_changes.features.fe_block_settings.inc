<?php
/**
 * @file
 * field_revealed_changes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function field_revealed_changes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-4fa1194608354659cc686bef18902085'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4fa1194608354659cc686bef18902085',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'explore/the-field-revealed',
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
        'weight' => -63,
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

  $export['views-f4f695a1f748c24a7ce32e38ab5b619d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'f4f695a1f748c24a7ce32e38ab5b619d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'explore/the-field-revealed',
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
        'weight' => -62,
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
