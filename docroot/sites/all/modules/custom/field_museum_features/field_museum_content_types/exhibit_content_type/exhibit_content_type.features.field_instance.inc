<?php
/**
 * @file
 * exhibit_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function exhibit_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-exhibit-field_body_link'
  $field_instances['node-exhibit-field_body_link'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 8,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_body_link',
    'label' => 'Exhibition Site Link',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_branding_image'
  $field_instances['node-exhibit-field_branding_image'] = array(
    'bundle' => 'exhibit',
    'deleted' => 0,
    'description' => 'This is the main image displayed when viewing the Exhibit Detail Page. This image is also used as a thumbnail in the Exhibit Browser.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'styles',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'styles_image_article-original-aspect',
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
    'field_name' => 'field_branding_image',
    'label' => 'Branding Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'original-aspect-thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_enddate'
  $field_instances['node-exhibit-field_enddate'] = array(
    'bundle' => 'exhibit',
    'default_value' => array(
      0 => array(
        'value' => 1893477600,
        'value_string' => 'Jan 1 2030',
      ),
    ),
    'deleted' => 0,
    'description' => 'This field is <b>required</b> for all exhibit types. However, for permanent exhibits the end date will not be displayed. Set the end date for permanent exhibits to a date in the future such as Jan 1 2030.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'integerdate',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'format_custom_string' => 'D M j, Y',
          'format_option' => 'custom',
        ),
        'type' => 'integerdate_date_default',
        'weight' => 1,
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_enddate',
    'label' => 'End Date',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'integerdate',
      'settings' => array(
        'format' => 'M j Y',
      ),
      'type' => 'integerdate_date_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_exhibit_image'
  $field_instances['node-exhibit-field_exhibit_image'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This image is used as a thumbnail in Related Content and Featured Content areas. Make sure it crops well to fit those formats.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exhibit_image',
    'label' => 'Image',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_exhibit_ticketing_url'
  $field_instances['node-exhibit-field_exhibit_ticketing_url'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
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
    'field_name' => 'field_exhibit_ticketing_url',
    'label' => 'Exhibition Ticketing Link',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_image'
  $field_instances['node-exhibit-field_image'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This image is used as a thumbnail in Related Content and Featured Content areas. Make sure it crops well to fit those formats.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-exhibit-field_startdate'
  $field_instances['node-exhibit-field_startdate'] = array(
    'bundle' => 'exhibit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter dates in the format "Mon DD YYYY", such as Nov 13 1969 or Jun 17 1979. <br />
This field is <b>required</b> for all exhibit types. However, for permanent exhibits the date will not be displayed. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'integerdate',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
          'format_custom_string' => 'D M j, Y',
          'format_option' => 'custom',
        ),
        'type' => 'integerdate_date_default',
        'weight' => 0,
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_startdate',
    'label' => 'Start Date',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'integerdate',
      'settings' => array(
        'format' => 'M j Y',
      ),
      'type' => 'integerdate_date_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Branding Image');
  t('End Date');
  t('Enter dates in the format "Mon DD YYYY", such as Nov 13 1969 or Jun 17 1979. <br />
This field is <b>required</b> for all exhibit types. However, for permanent exhibits the date will not be displayed. ');
  t('Exhibition Site Link');
  t('Exhibition Ticketing Link');
  t('Image');
  t('Start Date');
  t('This field is <b>required</b> for all exhibit types. However, for permanent exhibits the end date will not be displayed. Set the end date for permanent exhibits to a date in the future such as Jan 1 2030.');
  t('This image is used as a thumbnail in Related Content and Featured Content areas. Make sure it crops well to fit those formats.');
  t('This is the main image displayed when viewing the Exhibit Detail Page. This image is also used as a thumbnail in the Exhibit Browser.');

  return $field_instances;
}
