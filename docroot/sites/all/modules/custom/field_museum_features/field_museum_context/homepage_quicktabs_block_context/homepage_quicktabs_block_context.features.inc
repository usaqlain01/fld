<?php
/**
 * @file
 * homepage_quicktabs_block_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_quicktabs_block_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}