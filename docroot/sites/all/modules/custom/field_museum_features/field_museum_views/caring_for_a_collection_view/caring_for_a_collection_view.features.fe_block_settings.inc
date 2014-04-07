<?php
/**
 * @file
 * caring_for_a_collection_view.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function caring_for_a_collection_view_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-caring_for_a_collection-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'caring_for_a_collection-block_1',
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'sitetheme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-caring_for_a_collection-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'caring_for_a_collection-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'explore/caring-for-a-collection',
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
        'weight' => 0,
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

  $export['views-caring_for_a_collection-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'caring_for_a_collection-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'explore/caring-for-a-collection',
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
        'weight' => 0,
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
