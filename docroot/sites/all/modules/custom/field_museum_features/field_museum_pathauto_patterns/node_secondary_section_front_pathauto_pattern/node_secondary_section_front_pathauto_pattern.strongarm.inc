<?php
/**
 * @file
 * node_secondary_section_front_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_secondary_section_front_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_secondary_section_front_pattern';
  $strongarm->value = '[node:field-section-tags:field_content_location_abbr]/[node:title]';
  $export['pathauto_node_secondary_section_front_pattern'] = $strongarm;

  return $export;
}
