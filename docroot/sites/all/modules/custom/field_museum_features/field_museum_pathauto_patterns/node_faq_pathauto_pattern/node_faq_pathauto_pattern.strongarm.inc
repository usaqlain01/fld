<?php
/**
 * @file
 * node_faq_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_faq_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_pattern';
  $strongarm->value = '[node:field-section-tags:field_content_location_abbr]/faq/[node:title]';
  $export['pathauto_node_faq_pattern'] = $strongarm;

  return $export;
}
