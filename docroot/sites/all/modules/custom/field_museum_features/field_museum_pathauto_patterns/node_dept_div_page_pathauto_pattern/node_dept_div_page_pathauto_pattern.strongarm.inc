<?php
/**
 * @file
 * node_dept_div_page_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function node_dept_div_page_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_department_division_page_pattern';
  $strongarm->value = 'explore/department/[node:field-dept-division-tags:field_dept_div_abbr]';
  $export['pathauto_node_department_division_page_pattern'] = $strongarm;

  return $export;
}
