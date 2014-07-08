<?php
/**
 * @file
 * fmnh_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fmnh_media_image_default_styles() {
  $styles = array();

  // Exported image style: 2x1_1000w.
  $styles['2x1_1000w'] = array(
    'name' => '2x1_1000w',
    'label' => '2x1 1000w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 500,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_1200w.
  $styles['2x1_1200w'] = array(
    'name' => '2x1_1200w',
    'label' => '2x1 1200w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_1600w.
  $styles['2x1_1600w'] = array(
    'name' => '2x1_1600w',
    'label' => '2x1 1600w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 800,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_2400w.
  $styles['2x1_2400w'] = array(
    'name' => '2x1_2400w',
    'label' => '2x1 2400w',
    'effects' => array(
      1 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 2400,
          'height' => 1200,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 1200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_500w.
  $styles['2x1_500w'] = array(
    'name' => '2x1_500w',
    'label' => '2x1 500w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_800w.
  $styles['2x1_800w'] = array(
    'name' => '2x1_800w',
    'label' => '2x1 800w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1000w.
  $styles['5x2_1000w'] = array(
    'name' => '5x2_1000w',
    'label' => '5x2 1000w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1200w.
  $styles['5x2_1200w'] = array(
    'name' => '5x2_1200w',
    'label' => '5x2 1200w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1600w.
  $styles['5x2_1600w'] = array(
    'name' => '5x2_1600w',
    'label' => '5x2 1600w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 640,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_2400w.
  $styles['5x2_2400w'] = array(
    'name' => '5x2_2400w',
    'label' => '5x2 2400w',
    'effects' => array(
      1 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 2400,
          'height' => 960,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 960,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_500w.
  $styles['5x2_500w'] = array(
    'name' => '5x2_500w',
    'label' => '5x2 500w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_800w.
  $styles['5x2_800w'] = array(
    'name' => '5x2_800w',
    'label' => '5x2 800w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 320,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1000w.
  $styles['5x3_1000w'] = array(
    'name' => '5x3_1000w',
    'label' => '5x3 1000w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1200w.
  $styles['5x3_1200w'] = array(
    'name' => '5x3_1200w',
    'label' => '5x3 1200w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 720,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1600w.
  $styles['5x3_1600w'] = array(
    'name' => '5x3_1600w',
    'label' => '5x3 1600w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 960,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_2400w.
  $styles['5x3_2400w'] = array(
    'name' => '5x3_2400w',
    'label' => '5x3 2400w',
    'effects' => array(
      3 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 2400,
          'height' => 1440,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 1440,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_500w.
  $styles['5x3_500w'] = array(
    'name' => '5x3_500w',
    'label' => '5x3 500w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_800w.
  $styles['5x3_800w'] = array(
    'name' => '5x3_800w',
    'label' => '5x3 800w',
    'effects' => array(
      0 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: large.
  $styles['large'] = array(
    'name' => 'large',
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => '',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: media_gallery_large.
  $styles['media_gallery_large'] = array(
    'name' => 'media_gallery_large',
    'label' => 'media_gallery_large',
    'effects' => array(
      12 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 900,
          'height' => 900,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => '',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 900,
          'upscale' => FALSE,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: media_gallery_thumbnail.
  $styles['media_gallery_thumbnail'] = array(
    'name' => 'media_gallery_thumbnail',
    'label' => 'media_gallery_thumbnail',
    'effects' => array(
      10 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'upscale' => FALSE,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: media_thumbnail.
  $styles['media_thumbnail'] = array(
    'name' => 'media_thumbnail',
    'label' => 'Media thumbnail (100x100)',
    'effects' => array(
      8 => array(
        'label' => 'Reuse a javascript crop selection',
        'help' => 'Reuse crop selection from another javascript crop preset.',
        'effect callback' => 'imagecrop_reuse_effect',
        'form callback' => 'imagecrop_reuse_form',
        'summary theme' => 'theme_imagecrop_reuse',
        'module' => 'imagecrop',
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'thumbnail',
        ),
        'weight' => -10,
      ),
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'name' => 'medium',
    'label' => 'Medium (220x220)',
    'effects' => array(
      4 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => '',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'name' => 'thumbnail',
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      2 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'dimensions callback' => 'imagecrop_dimensions',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      1 => array(
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
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
