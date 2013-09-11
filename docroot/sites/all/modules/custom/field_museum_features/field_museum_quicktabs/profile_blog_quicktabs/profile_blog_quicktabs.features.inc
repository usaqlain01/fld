<?php
/**
 * @file
 * profile_blog_quicktabs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profile_blog_quicktabs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
