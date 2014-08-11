<?php
/**
 * @file
 * fmnh_staff.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_staff_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_profile2_main';
  $strongarm->value = '[profile2:field_givenname] [profile2:field_surname]';
  $export['auto_entitylabel_pattern_profile2_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_profile2_main';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_profile2_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_profile2_main';
  $strongarm->value = '1';
  $export['auto_entitylabel_profile2_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__main';
  $strongarm->value = array(
    'view_modes' => array(
      'summary' => array(
        'custom_settings' => TRUE,
      ),
      'account' => array(
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
      'page' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'list_item' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'blogs_entity_view_2' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'summary' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'list_item' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_profile2__main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'profile://fieldmuseum/images/default-profile-image.jpg';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'headshot';
  $export['user_picture_style'] = $strongarm;

  return $export;
}
