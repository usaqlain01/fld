<?php
/**
 * @file
 * fmnh_program.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_program_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-program-body'.
  $field_instances['node-program-body'] = array(
    'bundle' => 'program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'article__body',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'promo' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'section',
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
          'php_code' => 'php_code',
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
            'php_code' => array(
              'weight' => 11,
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
      'display_summary' => 0,
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

  // Exported field_instance: 'node-program-field_always_visible'.
  $field_instances['node-program-field_always_visible'] = array(
    'bundle' => 'program',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If a program has no events linked to it, the program will not appear in the places it normally would. If the program should always be visible even if there are no planned events, check this box.',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
    'field_name' => 'field_always_visible',
    'label' => 'Always visible',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-program-field_audience'.
  $field_instances['node-program-field_audience'] = array(
    'bundle' => 'program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'summary' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audience',
    'label' => 'Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-program-field_banner_description'.
  $field_instances['node-program-field_banner_description'] = array(
    'bundle' => 'program',
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
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-program-field_banner_image'.
  $field_instances['node-program-field_banner_image'] = array(
    'bundle' => 'program',
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
        'weight' => 8,
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
    'field_name' => 'field_banner_image',
    'label' => 'Banner image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg gif jpeg png',
      'imagecrop' => array(
        '2x1_2400w' => '2x1_2400w',
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => '5x3_2400w',
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-program-field_grade_level'.
  $field_instances['node-program-field_grade_level'] = array(
    'bundle' => 'program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'summary' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_grade_level',
    'label' => 'Grade level',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-program-field_image'.
  $field_instances['node-program-field_image'] = array(
    'bundle' => 'program',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'primary_2x1',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'promo' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => 'promo__image',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image',
    'label' => 'Image',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '[current-user:name]/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'jpg gif jpeg png',
      'imagecrop' => array(
        '1x1_300w' => '1x1_300w',
        '2x1_2400w' => '2x1_2400w',
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => '5x3_2400w',
        'gallery_2400w' => 0,
        'headshot' => 0,
        'media_gallery_large' => 0,
        'media_gallery_thumbnail' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-program-field_references'.
  $field_instances['node-program-field_references'] = array(
    'bundle' => 'program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'promo' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'summary' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-program-field_specification'.
  $field_instances['node-program-field_specification'] = array(
    'bundle' => 'program',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>This field is parsed specially to display as a HTML definition list. To work with this field, you must use a colon ":" to separate your label from the description.</p>
<p><code>Label: Description</code></p>
',
    'display' => array(
      'banner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'promo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'summary' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
    'field_name' => 'field_specification',
    'label' => 'Specification',
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
      'text_processing' => 0,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>This field is parsed specially to display as a HTML definition list. To work with this field, you must use a colon ":" to separate your label from the description.</p>
<p><code>Label: Description</code></p>
');
  t('Always visible');
  t('Audience');
  t('Banner description');
  t('Banner image');
  t('Body');
  t('Grade level');
  t('If a program has no events linked to it, the program will not appear in the places it normally would. If the program should always be visible even if there are no planned events, check this box.');
  t('Image');
  t('References');
  t('Specification');

  return $field_instances;
}
