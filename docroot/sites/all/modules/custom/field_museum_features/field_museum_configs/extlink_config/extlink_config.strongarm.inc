<?php
/**
 * @file
 * extlink_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function extlink_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '.*fieldmuseum\\.org.*';
  $export['extlink_exclude'] = $strongarm;

  return $export;
}
