<?php

/**
 * Implements hook_file_formatter_info().
 */
function file_model_file_formatter_info() {
  $formatters = array();

  $formatters['file_model_x3d'] = array(
    'label' => t('x3d'),
    'default settings' => array(
      'width' => '',
      'height' => ''
    ),
    'view callback' => 'file_model_file_formatter_x3d_view',
    'settings callback' => 'file_model_file_formatter_x3d_settings',
    'mime types' => array('model/x3d+xml', 'model/x3d+binary', 'model/x3d+vrml'),
  );

  $formatters['file_model_qt'] = array(
    'label' => t('QTVR'),
    'default settings' => array(
      'width' => '',
      'height' => ''
    ),
    'view callback' => 'file_model_file_formatter_qt_view',
    'settings callback' => 'file_model_file_formatter_qt_settings',
    'mime types' => array('video/quicktime'),
  );

  return $formatters;
}

/**
 * Implements hook_file_formatter_info_alter().
 */
function file_model_file_formatter_info_alter(&$info) {
  unset($info['file_field_x3d']);
  unset($info['file_field_qt']);
}

/**
 * Implements hook_file_mimetype_mapping_alter().
 */
function file_model_file_mimetype_mapping_alter(&$mapping) {
  $mapping['mimetypes']['model_x3d_xml'] = 'model/x3d+xml';
  $mapping['mimetypes']['model_x3d_binary'] = 'model/x3d+binary';
  $mapping['mimetypes']['model_x3d_vrml'] = 'model/x3d+vrml';
  $mapping['extensions']['x3d'] = 'model_x3d_xml';
  $mapping['extensions']['x3dz'] = 'model_x3d_xml';
  $mapping['extensions']['x3db'] = 'model_x3d_binary';
  $mapping['extensions']['x3dbz'] = 'model_x3d_binary';
  $mapping['extensions']['x3dv'] = 'model_x3d_vrml';
  $mapping['extensions']['x3dvz'] = 'model_x3d_vrml';
}
