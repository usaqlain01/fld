<?php
/**
 * @file
 * node_reflections_9_11_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_reflections_9_11_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_reflections_on_9_11_pattern';
  $strongarm->value = 'happening/[node:content-type:machine-name]/[node:title]';
  $export['pathauto_node_reflections_on_9_11_pattern'] = $strongarm;

  return $export;
}