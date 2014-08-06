<?php
/**
 * @file
 * fmnh_staff.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function fmnh_staff_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__headshot__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'headshot',
    'image_link' => '',
  );
  $export['image__headshot__file_field_image'] = $file_display;

  return $export;
}
