<?php
/**
 * @file
 * microsite_widgets_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function microsite_widgets_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: microsite-widgets.
  $styles['microsite-widgets'] = array(
    'name' => 'microsite-widgets',
    'label' => 'microsite-widgets',
    'effects' => array(
      31 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 141,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
