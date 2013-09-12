<?php
/**
 * @file
 * original_aspect_thumbnail_file_style.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function original_aspect_thumbnail_file_style_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
