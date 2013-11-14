<?php
/**
 * @file
 * content_third_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function content_third_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: content-third.
  $styles['content-third'] = array(
    'name' => 'content-third',
    'label' => 'content-third',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 209,
          'height' => 122,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
