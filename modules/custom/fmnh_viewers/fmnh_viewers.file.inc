<?php

/**
 * Implements hook_file_mimetype_mapping_alter().
 */
function fmnh_viewers_file_mimetype_mapping_alter(&$mapping) {
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
