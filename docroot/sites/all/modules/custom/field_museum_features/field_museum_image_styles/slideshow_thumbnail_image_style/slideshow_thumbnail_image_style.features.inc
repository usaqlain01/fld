<?php
/**
 * @file
 * slideshow_thumbnail_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function slideshow_thumbnail_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow-thumbnail.
  $styles['slideshow-thumbnail'] = array(
    'name' => 'slideshow-thumbnail',
    'label' => 'slideshow-thumbnail',
    'effects' => array(
      63 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 35,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
