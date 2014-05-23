<?php
/**
 * @file
 * fieldmuseum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fieldmuseum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "metatag" && $api == "metatag") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fieldmuseum_image_default_styles() {
  $styles = array();

  // Exported image style: large.
  $styles['large'] = array(
    'name' => 'large',
    'label' => 'Large (480x480)',
    'effects' => array(
      6 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
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
      5 => array(
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

/**
 * Implements hook_node_info().
 */
function fieldmuseum_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
