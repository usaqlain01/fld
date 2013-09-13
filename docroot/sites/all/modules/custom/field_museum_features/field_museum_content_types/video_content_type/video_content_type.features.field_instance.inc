<?php
/**
 * @file
 * video_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function video_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-video-field_image'
  $field_instances['node-video-field_image'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A thumbnail image is used in various widgets and the Media Gallery.  It should be representative of the video and does not require an icon overlay.  That will be applied automatically by the site.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Thumbnail Image',
    'required' => 1,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm wmv ico',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-video-field_video_thumbnail_image'
  $field_instances['node-video-field_video_thumbnail_image'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A thumbnail image is used in various widgets and the Media Gallery.  It should be representative of the video and does not require an icon overlay.  That will be applied automatically by the site.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'styles',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'styles_file_content-half',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_thumbnail_image',
    'label' => 'Thumbnail Image',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-video-field_vimeo_download_url'
  $field_instances['node-video-field_vimeo_download_url'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vimeo_download_url',
    'label' => 'Vimeo Direct Download URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-video-field_vimeo_video_url'
  $field_instances['node-video-field_vimeo_video_url'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Copy and paste the URL of the video page from <a href="http://vimeo.com/">Vimeo.com</a> here.  E.g. <code>http://vimeo.com/12345678</code>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'vimeo_link_formatter',
        'settings' => array(
          'autoplay' => 1,
          'byline' => 0,
          'color' => '92b40a',
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'height' => 360,
          'loop' => 0,
          'portrait' => 0,
          'title' => 0,
          'width' => '100%',
        ),
        'type' => 'vimeo_link_formatter_player',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vimeo_video_url',
    'label' => 'Vimeo URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A thumbnail image is used in various widgets and the Media Gallery.  It should be representative of the video and does not require an icon overlay.  That will be applied automatically by the site.');
  t('Copy and paste the URL of the video page from <a href="http://vimeo.com/">Vimeo.com</a> here.  E.g. <code>http://vimeo.com/12345678</code>');
  t('Thumbnail Image');
  t('Vimeo Direct Download URL');
  t('Vimeo URL');

  return $field_instances;
}
