<?php
/**
 * @file
 * fmnh_program.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_program_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'programs_for_audience';
  $list->title = 'Programs for audience';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'ProgramsByAudienceEFQ',
  );
  $export['programs_for_audience'] = $list;

  return $export;
}
