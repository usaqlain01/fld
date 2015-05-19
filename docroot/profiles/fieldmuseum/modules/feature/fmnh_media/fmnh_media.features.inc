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

  // Exported image style: 1x1_300w.
  $styles['1x1_300w'] = array(
    'label' => '1x1 300w',
    'effects' => array(
      441 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'xoffset' => 'center',
          'yoffset' => 'center',
          'resizable' => 1,
          'downscaling' => 1,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      436 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: 2x1_1000w.
  $styles['2x1_1000w'] = array(
    'label' => '2x1 1000w',
    'effects' => array(
      241 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      246 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 500,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_1200w.
  $styles['2x1_1200w'] = array(
    'label' => '2x1 1200w',
    'effects' => array(
      251 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      256 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 600,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_1600w.
  $styles['2x1_1600w'] = array(
    'label' => '2x1 1600w',
    'effects' => array(
      261 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      266 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 800,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_2400w.
  $styles['2x1_2400w'] = array(
    'label' => '2x1 2400w',
    'effects' => array(
      271 => array(
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
      276 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 1200,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_500w.
  $styles['2x1_500w'] = array(
    'label' => '2x1 500w',
    'effects' => array(
      281 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      286 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 250,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 2x1_800w.
  $styles['2x1_800w'] = array(
    'label' => '2x1 800w',
    'effects' => array(
      291 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '2x1_2400w',
        ),
        'weight' => 1,
      ),
      296 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 400,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1000w.
  $styles['5x2_1000w'] = array(
    'label' => '5x2 1000w',
    'effects' => array(
      301 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      306 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 400,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1200w.
  $styles['5x2_1200w'] = array(
    'label' => '5x2 1200w',
    'effects' => array(
      311 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      316 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_1600w.
  $styles['5x2_1600w'] = array(
    'label' => '5x2 1600w',
    'effects' => array(
      321 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      326 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 640,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_2400w.
  $styles['5x2_2400w'] = array(
    'label' => '5x2 2400w',
    'effects' => array(
      331 => array(
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
      336 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 960,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_500w.
  $styles['5x2_500w'] = array(
    'label' => '5x2 500w',
    'effects' => array(
      341 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      346 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 200,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x2_800w.
  $styles['5x2_800w'] = array(
    'label' => '5x2 800w',
    'effects' => array(
      351 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x2_2400w',
        ),
        'weight' => 1,
      ),
      356 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 320,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1000w.
  $styles['5x3_1000w'] = array(
    'label' => '5x3 1000w',
    'effects' => array(
      361 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      366 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 600,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1200w.
  $styles['5x3_1200w'] = array(
    'label' => '5x3 1200w',
    'effects' => array(
      371 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      376 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 720,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_1600w.
  $styles['5x3_1600w'] = array(
    'label' => '5x3 1600w',
    'effects' => array(
      381 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      386 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => 960,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_2400w.
  $styles['5x3_2400w'] = array(
    'label' => '5x3 2400w',
    'effects' => array(
      421 => array(
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
      426 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => 1440,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_500w.
  $styles['5x3_500w'] = array(
    'label' => '5x3 500w',
    'effects' => array(
      401 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      406 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 5x3_800w.
  $styles['5x3_800w'] = array(
    'label' => '5x3 800w',
    'effects' => array(
      411 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => '5x3_2400w',
        ),
        'weight' => 1,
      ),
      416 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: gallery_1000w.
  $styles['gallery_1000w'] = array(
    'label' => 'Gallery 1000w',
    'effects' => array(
      443 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'gallery_2400w',
        ),
        'weight' => -10,
      ),
      444 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_1200w.
  $styles['gallery_1200w'] = array(
    'label' => 'Gallery 1200w',
    'effects' => array(
      441 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'gallery_2400w',
        ),
        'weight' => -10,
      ),
      442 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_1600w.
  $styles['gallery_1600w'] = array(
    'label' => 'Gallery 1600w',
    'effects' => array(
      439 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'gallery_2400w',
        ),
        'weight' => -10,
      ),
      440 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_2400w.
  $styles['gallery_2400w'] = array(
    'label' => 'Gallery 2400w',
    'effects' => array(
      437 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 2400,
          'height' => 1800,
          'xoffset' => 'center',
          'yoffset' => 'center',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 1,
        ),
        'weight' => -10,
      ),
      438 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_500w.
  $styles['gallery_500w'] = array(
    'label' => 'Gallery 500w',
    'effects' => array(
      435 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'gallery_2400w',
        ),
        'weight' => -10,
      ),
      436 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_800w.
  $styles['gallery_800w'] = array(
    'label' => 'Gallery 800w',
    'effects' => array(
      434 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'gallery_2400w',
        ),
        'weight' => -10,
      ),
      433 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: media_gallery_large.
  $styles['media_gallery_large'] = array(
    'label' => 'media_gallery_large',
    'effects' => array(
      191 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 900,
          'height' => 900,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      196 => array(
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
    'label' => 'media_gallery_thumbnail',
    'effects' => array(
      201 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      206 => array(
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
    'label' => 'Media thumbnail (100x100)',
    'effects' => array(
      211 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'thumbnail',
        ),
        'weight' => -10,
      ),
      216 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: resource_thumbnail.
  $styles['resource_thumbnail'] = array(
    'label' => 'Resource thumbnail',
    'effects' => array(
      431 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      231 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => 'CROP',
          'disable_if_no_data' => 0,
        ),
        'weight' => -10,
      ),
      236 => array(
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
