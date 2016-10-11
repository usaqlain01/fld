<?php
/**
 * @file
 * fmnh_science_tags.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_science_tags_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_location_region_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_location_region_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_research_area_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_research_area_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_science_focus_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_science_focus_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stratigraphy_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_stratigraphy_pattern'] = $strongarm;

  return $export;
}
