<?php
/**
 * @file
 * fmnh_arbitrary_pane.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function fmnh_arbitrary_pane_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'markup_styles_scripts';
  $fieldable_panels_pane_type->title = 'Markup, styles and scripts';
  $fieldable_panels_pane_type->description = '';
  $export['markup_styles_scripts'] = $fieldable_panels_pane_type;

  return $export;
}
