<?php
/**
 * @file
 * homepage_centerstage_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function homepage_centerstage_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: homepage-centerstage.
  $styles['homepage-centerstage'] = array(
    'name' => 'homepage-centerstage',
    'label' => 'homepage-centerstage',
    'effects' => array(
      27 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
