<?php
/**
 * @file
 * original_aspect_thumbnail_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function original_aspect_thumbnail_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: original-aspect-thumbnail.
  $styles['original-aspect-thumbnail'] = array(
    'name' => 'original-aspect-thumbnail',
    'label' => 'original-aspect-thumbnail',
    'effects' => array(
      41 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
