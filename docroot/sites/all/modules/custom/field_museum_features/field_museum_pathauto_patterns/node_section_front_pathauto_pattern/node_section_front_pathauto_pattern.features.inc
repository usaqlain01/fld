<?php
/**
 * @file
 * node_section_front_pathauto_pattern.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_section_front_pathauto_pattern_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
