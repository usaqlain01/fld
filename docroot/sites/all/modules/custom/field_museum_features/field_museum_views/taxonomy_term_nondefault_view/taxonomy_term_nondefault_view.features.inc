<?php
/**
 * @file
 * taxonomy_term_nondefault_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function taxonomy_term_nondefault_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
