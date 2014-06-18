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

  return $export;
}
