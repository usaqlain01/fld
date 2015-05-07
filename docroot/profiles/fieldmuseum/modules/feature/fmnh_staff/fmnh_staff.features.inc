<?php
/**
 * @file
 * fmnh_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fmnh_staff_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fmnh_staff_image_default_styles() {
  $styles = array();

  // Exported image style: headshot.
  $styles['headshot'] = array(
    'label' => 'Headshot',
    'effects' => array(
      451 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 600,
          'height' => 800,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => 'KEEP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      456 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 800,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function fmnh_staff_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : {
      "registration" : 0,
      "roles" : { "2" : "2", "4" : "4", "5" : "5", "6" : "6", "3" : "3" },
      "use_page" : 1
    },
    "rdf_mapping" : []
  }');
  $items['override'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "override",
    "label" : "Override",
    "weight" : "0",
    "data" : {
      "registration" : 0,
      "roles" : { "2" : "2", "4" : "4", "5" : "5", "6" : "6", "3" : "3" },
      "use_page" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
