<?php
/**
 * @file
 * node_subsection_homepage_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_subsection_homepage_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_subsection_homepage_pattern';
  $strongarm->value = '[node:field-section-tags:field_content_location_abbr]/[node:field_subsections]/[node:title]';
  $export['pathauto_node_subsection_homepage_pattern'] = $strongarm;

  return $export;
}
