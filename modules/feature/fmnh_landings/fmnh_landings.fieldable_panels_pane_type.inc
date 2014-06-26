<?php
/**
 * @file
 * fmnh_landings.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function fmnh_landings_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'banner_description_and_list';
  $fieldable_panels_pane_type->title = 'Banner, description and list';
  $fieldable_panels_pane_type->description = '';
  $export['banner_description_and_list'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'hero';
  $fieldable_panels_pane_type->title = 'Hero';
  $fieldable_panels_pane_type->description = '';
  $export['hero'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'text';
  $fieldable_panels_pane_type->title = 'Text';
  $fieldable_panels_pane_type->description = 'Just some text.';
  $export['text'] = $fieldable_panels_pane_type;

  return $export;
}
