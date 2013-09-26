<?php
/**
 * @file
 * slideshow_thumbnail_file_style.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function slideshow_thumbnail_file_style_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_styles_file_slideshow-thumbnail';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__teaser__file_field_styles_file_slideshow-thumbnail'] = $file_display;

  return $export;
}
