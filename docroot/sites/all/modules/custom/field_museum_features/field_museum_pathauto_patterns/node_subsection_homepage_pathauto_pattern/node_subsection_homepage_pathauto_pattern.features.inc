<?php
/**
 * @file
 * node_subsection_homepage_pathauto_pattern.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_subsection_homepage_pathauto_pattern_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
