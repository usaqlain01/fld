<?php
/**
 * @file
 * article_original_aspect_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function article_original_aspect_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: article-original-aspect.
  $styles['article-original-aspect'] = array(
    'name' => 'article-original-aspect',
    'label' => 'article-original-aspect',
    'effects' => array(
      36 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 393,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
