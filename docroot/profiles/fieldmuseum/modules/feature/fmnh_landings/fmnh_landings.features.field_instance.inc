<?php
/**
 * @file
 * fmnh_landings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_landings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_action_link'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_action_link'] = array(
    'bundle' => 'banner_description_and_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'excerpt' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_action_link',
    'label' => 'Action link',
    'required' => FALSE,
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
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_banner_description'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_banner_description'] = array(
    'bundle' => 'banner_description_and_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'excerpt' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_image'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_image'] = array(
    'bundle' => 'banner_description_and_list',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_formatter_class' => '',
          'file_view_mode' => 'banner_5x3',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'excerpt' => array(
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
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '[current-user:name]/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'png gif jpg jpeg',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_link'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_link'] = array(
    'bundle' => 'banner_description_and_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => 'contentLinks',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'excerpt' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => 'contentLinks',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'ul',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_more_link'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_more_link'] = array(
    'bundle' => 'banner_description_and_list',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Show a "read more" link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'excerpt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'div',
    'field_name' => 'field_more_link',
    'label' => 'More link',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-banner_description_and_list-field_read_more_label'
  $field_instances['fieldable_panels_pane-banner_description_and_list-field_read_more_label'] = array(
    'bundle' => 'banner_description_and_list',
    'default_value' => array(
      0 => array(
        'value' => 'Read more<span class="element-invisible"> about @title</span>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'excerpt' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_read_more_label',
    'label' => 'Read more label',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 0,
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 1,
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hero-field_headline'
  $field_instances['fieldable_panels_pane-hero-field_headline'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'hero__headline',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'h1',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 0,
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 1,
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hero-field_subheadline'
  $field_instances['fieldable_panels_pane-hero-field_subheadline'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'hero__subheadline',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'h2',
    'field_name' => 'field_subheadline',
    'label' => 'Subheadline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 0,
          'unfiltered_phrase_html' => 'unfiltered_phrase_html',
        ),
        'allowed_formats_toggle' => 1,
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-text-field_body'
  $field_instances['fieldable_panels_pane-text-field_body'] = array(
    'bundle' => 'text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_body',
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
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action link');
  t('Banner description');
  t('Body');
  t('Headline');
  t('Image');
  t('Link');
  t('More link');
  t('Read more label');
  t('Show a "read more" link.');
  t('Subheadline');

  return $field_instances;
}
