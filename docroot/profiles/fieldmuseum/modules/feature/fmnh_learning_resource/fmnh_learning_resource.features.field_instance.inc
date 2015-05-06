<?php
/**
 * @file
 * fmnh_learning_resource.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_learning_resource_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-learning_resource-body'
  $field_instances['node-learning_resource-body'] = array(
    'bundle' => 'learning_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
          'field_formatter_class' => 'resource__description',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
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

  // Exported field_instance: 'node-learning_resource-field_attachment'
  $field_instances['node-learning_resource-field_attachment'] = array(
    'bundle' => 'learning_resource',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_attachment',
    'label' => 'Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '[current-user:name]/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'pdf mp3 mp4 txt',
      'imagecrop' => array(
        '2x1_2400w' => 0,
        '5x2_2400w' => '5x2_2400w',
        '5x3_2400w' => '5x3_2400w',
        'large' => 'large',
        'media_gallery_large' => 'media_gallery_large',
        'media_gallery_thumbnail' => 'media_gallery_thumbnail',
        'medium' => 'medium',
        'thumbnail' => 'thumbnail',
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'pdf_to_image',
      'settings' => array(
        'pdf_to_image' => array(
          'density' => '25x25',
          'extra_args' => '',
          'hide_imagefield' => 0,
          'target_field' => 'field_image',
        ),
        'progress_indicator' => NULL,
      ),
      'type' => 'pdf_to_image',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-learning_resource-field_grade_level'
  $field_instances['node-learning_resource-field_grade_level'] = array(
    'bundle' => 'learning_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grade_level',
    'label' => 'Grade level',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-learning_resource-field_image'
  $field_instances['node-learning_resource-field_image'] = array(
    'bundle' => 'learning_resource',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'preview',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg gif jpeg png',
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
      'weight' => 46,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachment');
  t('Body');
  t('Grade level');
  t('Image');

  return $field_instances;
}
