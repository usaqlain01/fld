<?php
/**
 * @file
 * square_thumbnail_file_style.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function square_thumbnail_file_style_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__custom_square_thumbnail__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'custom_collapsible' => 0,
    'custom_collapsible_collapsed' => 0,
  );
  $export['image__custom_square_thumbnail__file_field_styles_file_square_thumbnail'] = $file_display;

  return $export;
}
