<?php
/**
 * @file
 * content_third_home_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function content_third_home_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: content-third-home.
  $styles['content-third-home'] = array(
    'name' => 'content-third-home',
    'label' => 'content-third-home',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 195,
          'height' => 112,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
