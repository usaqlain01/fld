<?php
/**
 * @file
 * content_third_home_file_style.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function content_third_home_file_style_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__custom_content-third-home__file_field_styles_file_content-third-home';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'custom_collapsible' => 0,
    'custom_collapsible_collapsed' => 0,
  );
  $export['image__custom_content-third-home__file_field_styles_file_content-third-home'] = $file_display;

  return $export;
}
