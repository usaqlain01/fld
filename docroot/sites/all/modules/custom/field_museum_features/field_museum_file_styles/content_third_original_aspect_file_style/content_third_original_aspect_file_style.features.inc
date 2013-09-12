<?php
/**
 * @file
 * content_third_original_aspect_file_style.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_third_original_aspect_file_style_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
