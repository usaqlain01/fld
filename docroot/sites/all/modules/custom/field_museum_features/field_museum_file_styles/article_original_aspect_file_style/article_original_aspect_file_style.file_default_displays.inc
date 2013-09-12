<?php
/**
 * @file
 * article_original_aspect_file_style.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function article_original_aspect_file_style_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__custom_article-original-aspect__file_field_styles_file_article-original-aspect';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'custom_collapsible' => 0,
    'custom_collapsible_collapsed' => 0,
  );
  $export['image__custom_article-original-aspect__file_field_styles_file_article-original-aspect'] = $file_display;

  return $export;
}
