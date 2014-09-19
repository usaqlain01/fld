<?php
/**
 * @file
 * fmnh_landings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_landings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_fieldable_panels_pane_hero';
  $strongarm->value = '1';
  $export['auto_entitylabel_fieldable_panels_pane_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_fieldable_panels_pane_hero';
  $strongarm->value = 'Hero';
  $export['auto_entitylabel_pattern_fieldable_panels_pane_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_fieldable_panels_pane_hero';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_fieldable_panels_pane_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hero';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'entity_label' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'readmorecontrol_behaviour__fieldable_panels_pane__banner_description_and_list';
  $strongarm->value = 'always';
  $export['readmorecontrol_behaviour__fieldable_panels_pane__banner_description_and_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'readmorecontrol_format__fieldable_panels_pane__banner_description_and_list';
  $strongarm->value = array(
    'enabled' => 'custom',
    'text' => '[fieldable_panels_pane:field-read-more-label:value]',
    'href' => '',
    'query' => '',
    'fragment' => '',
    'title' => '',
    'class' => '',
    'rel' => '',
    'target' => '',
    'placement' => 'none',
  );
  $export['readmorecontrol_format__fieldable_panels_pane__banner_description_and_list'] = $strongarm;

  return $export;
}
