<?php

function fmnh_media_file_formatter_info() {
  $formatters = array();
  if (module_exists('pdf_to_image')) {
    $formatters['pdf_to_image'] = array(
      'label' => t('PDF to Image'),
      'default settings' => array(
        'image_style' => '',
        'alt' => '[file:field_file_image_alt_text]',
        'title' => '[file:field_file_image_title_text]',
        'uri_scheme' => 'public',
        'file_directory' => '_pdf_thumbs',
        'density' => '25x25',
        'extra_args' => '',
      ),
      'view callback' => 'fmnh_media_file_formatter_pdf_to_imagefield_view',
      'settings callback' => 'fmnh_media_file_formatter_pdf_to_imagefield_settings',
      'mime types' => array('application/pdf'),
    );
  }
  return $formatters;
}

function fmnh_media_file_formatter_pdf_to_imagefield_settings($form, &$form_state, $settings) {
  $form = file_entity_file_formatter_file_image_settings($form, $form_state, $settings);
  $form['density'] = array(
    '#title'            => t('Density used for rendering PDF'),
    '#description'      => t('Horizontal and vertical density of the image XxY (e.g. 100x100). Default is 25x25 (25%). <em>This is not image dimensions!</em> It\'s the sampling quality of the generated image. 100x100 means the generated image will be "full size" compared to a PDF viewed at 100%. If you are only wanting preview thumbnails, you might be fine (and a LOT faster) with just 20x20 (20% size) images. Only generate full-size (100x100) images if you intend to display full-size pages. To adjust the <b>display</b> sizes on the web page, manage the display of the image field as usual.'),
    '#type'             => 'textfield',
    '#default_value'    => $settings['density'],
    '#element_validate' => array('pdf_to_image_validate_density'),
    '#size'             => 15,
    '#maxlength'        => 10,
  );

  $form['extra_args'] = array(
    '#title'         => t('Extra conversion arguments'),
    '#type'          => 'textfield',
    '#description'   => t('Enter optional <a href="http://imagemagick.org/Usage/formats/#ps">additional parameters to be used by the imagemagick conversion</a> if needed.<br/>eg <code>-trim +repage</code>'),
    '#default_value' => !empty($settings['extra_args']) ? $settings['extra_args'] : '',
    '#size'          => 20,
  );
  return $form;

}

function fmnh_media_file_formatter_pdf_to_imagefield_view($file, $display, $langcode) {
  // Prevent PHP notices when trying to read empty files.
  // @see http://drupal.org/node/681042
  if (!$file->filesize) {
    return;
  }

  if (file_entity_file_is_readable($file)) {
    // We don't sanitize here.
    // @see http://drupal.org/node/1553094#comment-6257382
    // Theme function will take care of escaping.
    if (!isset($file->metadata)) {
      $file->metadata = array();
    }
    $file->metadata += array('width' => NULL, 'height' => NULL);
    $replace_options = array(
      'clear' => TRUE,
      'sanitize' => FALSE,
    );

    $params = array(
      'entity' => $file, // Don't actually need the whole thing, just the id really.
      'entity_type' => 'file',
      'entity_id' => $file->fid,
      'image'  => array(
        'field'    => array(
          'settings' => array(
            'uri_scheme' => $display['settings']['uri_scheme'],
          ),
        ),
        'instance' => array(
          'settings' => array(
            'file_directory' => $display['settings']['file_directory'],
          ),
        ),
      ),
      'pdf'    => array(
        'instance' => array(
          'widget' => array(
            'settings' => array(
              'pdf_to_image' => array(
                'density' => $display['settings']['density'],
                'extra_args' => $display['settings']['extra_args'],
              ),
            ),
          ),
        ),
        'file'     => $file,
      ),
    );
    $image_file = pdf_to_image_generate_page($params, 0);

    if (!empty($display['settings']['image_style'])) {
      $element = array(
        '#theme' => 'image_style',
        '#style_name' => $display['settings']['image_style'],
        '#path' => $image_file->uri,
        '#width' => isset($image_file->override['attributes']['width']) ? $image_file->override['attributes']['width'] : $image_file->metadata['width'],
        '#height' => isset($image_file->override['attributes']['height']) ? $image_file->override['attributes']['height'] : $image_file->metadata['height'],
        '#alt' => token_replace($display['settings']['alt'], array('file' => $image_file), $replace_options),
        '#title' => token_replace($display['settings']['title'], array('file' => $image_file), $replace_options),
      );
    }
    else {
      $element = array(
        '#theme' => 'image',
        '#path' => $image_file->uri,
        '#width' => isset($image_file->override['attributes']['width']) ? $image_file->override['attributes']['width'] : $image_file->metadata['width'],
        '#height' => isset($image_file->override['attributes']['height']) ? $image_file->override['attributes']['height'] : $image_file->metadata['height'],
        '#alt' => token_replace($display['settings']['alt'], array('file' => $image_file), $replace_options),
        '#title' => token_replace($display['settings']['title'], array('file' => $image_file), $replace_options),
      );
    }
    return $element;
  }
}

