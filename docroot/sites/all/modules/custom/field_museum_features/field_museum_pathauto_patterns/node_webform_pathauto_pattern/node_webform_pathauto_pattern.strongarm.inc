<?php
/**
 * @file
 * node_webform_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_webform_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  return $export;
}