<?php

function theme_x3d($variables) {
  $file     = $variables['file'];
  $width    = $variables['width'];
  $height   = $variables['height'];
  $file_url = file_create_url($file->uri);

  $output = '<object data="'. $file_url .'" type="'. $file->filemime .'" height="'. $height .'" width="'. $width .'">';
  $output .= '<param name="src" value="'. $file_url .'"/>';
  $output .= '<param name="DASHBOARD" value="FALSE"/>';
  $output .= '<param name="SPLASHSCREEN" value="FALSE"/>';
  $output .= '<a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#Applications">Select an X3D plugin to see this example...</a>';
  $output .= '</object>';
  return $output;
}

function theme_x3dom($variables) {
  $file     = $variables['file'];
  $width    = $variables['width'];
  $height   = $variables['height'];
  $file_url = file_create_url($file->uri);
  drupal_add_library('file_model', 'x3dom');

  $output = '<x3d width="'.$width.'px" height="'.$height.'px">';
  $output .= '<scene>';
  $output .= '<inline url="'. $file_url .'"></inline>';
  $output .= '</scene>';
  $output .= '</x3d>';
  return $output;
}

function theme_qt($variables) {
  $file     = $variables['file'];
  $width    = $variables['width'];
  $height   = $variables['height'];
  $file_url = file_create_url($file->uri);

  $output = '<OBJECT CLASSID="clsid:02BF25D5-8C17-4B23-BC80-D3488ABDDC6B" CODEBASE="http://www.apple.com/qtactivex/qtplugin.cab" HEIGHT="'. $height .'" WIDTH="'. $width .'">';
  $output .= '<PARAM NAME="src" VALUE="'. $file_url .'">';
  $output .= '<EMBED SRC="'. $file_url .'" HEIGHT="'. $height .'" WIDTH="'. $width .'" TYPE="'. $file->filemime .'" PLUGINSPAGE="http://www.apple.com/quicktime/download/" />';
  $output .= '</OBJECT>';
  return $output;
}
