<?php
/**
 * @file
 * gallery_large_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function gallery_large_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: gallery-large.
  $styles['gallery-large'] = array(
    'name' => 'gallery-large',
    'label' => 'gallery-large',
    'effects' => array(
      28 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
