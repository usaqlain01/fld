<?php
/**
 * @file
 * more_on_thumbnail_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function more_on_thumbnail_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: more-on-thumbnail.
  $styles['more-on-thumbnail'] = array(
    'name' => 'more-on-thumbnail',
    'label' => 'more-on-thumbnail',
    'effects' => array(
      62 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 123,
          'height' => 72,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
