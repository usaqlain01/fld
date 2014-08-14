<?php
/**
 * @file
 * fmnh_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fmnh_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x2' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x3' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x2' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x3' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'entity_label' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'square' => array(
        'custom_settings' => TRUE,
      ),
      'primary_2x1' => array(
        'custom_settings' => TRUE,
      ),
      'headshot' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'banner_5x2' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'banner_5x3' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'primary_2x1' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'headshot' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x2' => array(
        'custom_settings' => TRUE,
      ),
      'banner_5x3' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_modules';
  $strongarm->value = array(
    'profile_picture' => 'profile_picture',
    'media' => 'media',
  );
  $export['imagecrop_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup';
  $strongarm->value = 'basic';
  $export['imagecrop_popup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup_height';
  $strongarm->value = '600';
  $export['imagecrop_popup_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_popup_width';
  $strongarm->value = '700';
  $export['imagecrop_popup_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_rotation';
  $strongarm->value = 0;
  $export['imagecrop_rotation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_scale_default';
  $strongarm->value = 1;
  $export['imagecrop_scale_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_scale_step';
  $strongarm->value = '50';
  $export['imagecrop_scale_step'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_show_cancel_button';
  $strongarm->value = 0;
  $export['imagecrop_show_cancel_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_skip_preview';
  $strongarm->value = 0;
  $export['imagecrop_skip_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_theme';
  $strongarm->value = 'admin_theme';
  $export['imagecrop_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagecrop_ui_controls';
  $strongarm->value = 0;
  $export['imagecrop_ui_controls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'entity_label' => 0,
    'diff_standard' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'media_gallery_thumbnail' => 0,
    'media_gallery_lightbox' => 0,
    'media_gallery_detail' => 0,
    'media_gallery_block_thumbnail' => 0,
    'media_gallery_collection_thumbnail' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'entity_label' => 0,
    'diff_standard' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'media_gallery_thumbnail' => 0,
    'media_gallery_lightbox' => 0,
    'media_gallery_detail' => 0,
    'media_gallery_block_thumbnail' => 0,
    'media_gallery_collection_thumbnail' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'entity_label' => 0,
    'diff_standard' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'media_gallery_thumbnail' => 0,
    'media_gallery_lightbox' => 0,
    'media_gallery_detail' => 0,
    'media_gallery_block_thumbnail' => 0,
    'media_gallery_collection_thumbnail' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_model_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_model_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_model_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_model_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_model_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'entity_label' => 0,
    'diff_standard' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'media_gallery_thumbnail' => 0,
    'media_gallery_lightbox' => 0,
    'media_gallery_detail' => 0,
    'media_gallery_block_thumbnail' => 0,
    'media_gallery_collection_thumbnail' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_model_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_model_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_model_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 'default',
    'entity_label' => 0,
    'diff_standard' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'media_gallery_thumbnail' => 0,
    'media_gallery_lightbox' => 0,
    'media_gallery_detail' => 0,
    'media_gallery_block_thumbnail' => 0,
    'media_gallery_collection_thumbnail' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_audio_pattern';
  $strongarm->value = '';
  $export['pathauto_file_audio_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_document_pattern';
  $strongarm->value = '';
  $export['pathauto_file_document_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_image_pattern';
  $strongarm->value = '';
  $export['pathauto_file_image_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_model_pattern';
  $strongarm->value = '';
  $export['pathauto_file_model_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = '';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_video_pattern';
  $strongarm->value = '';
  $export['pathauto_file_video_pattern'] = $strongarm;

  return $export;
}
