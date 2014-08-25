<?php
/**
 * @file
 * fieldmuseum.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fieldmuseum_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'summary' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_wysiwyg' => 'filtered_wysiwyg',
          'full_html' => 'full_html',
          'full_wysiwyg' => 'full_wysiwyg',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-page-field_action_link'
  $field_instances['node-page-field_action_link'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '"CTA links." They may be displayed as button next to the title of this page or below the image.',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'promo' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_action_link',
    'label' => 'Action link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'button--cta',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-field_attachment'
  $field_instances['node-page-field_attachment'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc',
      'imagecrop' => array(
        '2x1_2400w' => 0,
        '5x2_2400w' => 0,
        '5x3_2400w' => 0,
        'large' => 0,
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
        'medium' => 0,
        'thumbnail' => 0,
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'model' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-page-field_image'
  $field_instances['node-page-field_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'primary_2x1',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'primary_2x1',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg gif jpeg png',
      'imagecrop' => array(
        '2x1_2400w' => '2x1_2400w',
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => '5x3_2400w',
        'large' => 0,
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
        'medium' => 0,
        'thumbnail' => 'thumbnail',
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'model' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page-field_references'
  $field_instances['node-page-field_references'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_references',
    'label' => 'References',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-page-field_summary'
  $field_instances['node-page-field_summary'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The message appears above the body and below the image on a full view of this page.',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'message message--cta',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'message message--cta',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'promo' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_summary',
    'label' => 'Message',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_wysiwyg' => 'filtered_wysiwyg',
          'full_html' => 'full_html',
          'full_wysiwyg' => 'full_wysiwyg',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-topic-field_banner_description'
  $field_instances['taxonomy_term-topic-field_banner_description'] = array(
    'bundle' => 'topic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_banner_description',
    'label' => 'Banner description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_wysiwyg' => 'filtered_wysiwyg',
          'full_html' => 'full_html',
          'full_wysiwyg' => 'full_wysiwyg',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-topic-field_banner_image'
  $field_instances['taxonomy_term-topic-field_banner_image'] = array(
    'bundle' => 'topic',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x2',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_banner_image',
    'label' => 'Banner image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg gif jpeg png',
      'imagecrop' => array(
        '2x1_2400w' => 0,
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => 0,
        'large' => 0,
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
        'medium' => 0,
        'thumbnail' => 0,
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'model' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-topic-field_image'
  $field_instances['taxonomy_term-topic-field_image'] = array(
    'bundle' => 'topic',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg gif jpeg png',
      'imagecrop' => array(
        '2x1_2400w' => '2x1_2400w',
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => '5x3_2400w',
        'large' => 0,
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
        'medium' => 0,
        'thumbnail' => 'thumbnail',
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'model' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('"CTA links." They may be displayed as button next to the title of this page or below the image.');
  t('Action link');
  t('Attachment');
  t('Banner description');
  t('Banner image');
  t('Body');
  t('Image');
  t('Message');
  t('References');
  t('The message appears above the body and below the image on a full view of this page.');

  return $field_instances;
}
