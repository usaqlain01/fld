<?php
/**
 * @file
 * node_blog_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_blog_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'users/[node:author:name]/blog/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  return $export;
}