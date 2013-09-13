<?php
/**
 * @file
 * file_shared_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function file_shared_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_article_files'
  $field_instances['node-article-field_article_files'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Please include files, such as PDF\'s, Excel documents, Word documents, etc. that may help to provide more detail about this article.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_files',
    'label' => 'Associated Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls doc docx docm xlsm xlsx xlsb xlam ppt pptx pptm ppsx ppsm odt ods odp odg odf tiff tif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-article-field_audio_file'
  $field_instances['node-article-field_audio_file'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediaelement',
        'settings' => array(
          'controls' => 1,
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'download_link' => 0,
          'download_text' => 'Download',
          'height' => 30,
          'width' => 190,
        ),
        'type' => 'mediaelement_audio',
        'weight' => 5,
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_file',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'audio',
      'file_extensions' => 'mp3 aiff ogg flac wav',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-blog-field_article_files'
  $field_instances['node-blog-field_article_files'] = array(
    'bundle' => 'blog',
    'deleted' => 0,
    'description' => 'Please include files, such as PDF\'s, Excel documents, Word documents, etc. that may help to provide more detail about this article.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'file_default',
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
    'field_name' => 'field_article_files',
    'label' => 'Associated Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls doc docx docm xlsm xlsx xlsb xlam ppt pptx pptm ppsx ppsm odt ods odp odg odf tif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-blog-field_audio_file'
  $field_instances['node-blog-field_audio_file'] = array(
    'bundle' => 'blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediaelement',
        'settings' => array(
          'controls' => 1,
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'download_link' => 0,
          'download_text' => 'Download',
          'height' => 30,
          'width' => 190,
        ),
        'type' => 'mediaelement_audio',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_file',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'audio',
      'file_extensions' => 'mp3 aiff ogg flac wav',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Files');
  t('Audio');
  t('Please include files, such as PDF\'s, Excel documents, Word documents, etc. that may help to provide more detail about this article.');

  return $field_instances;
}
