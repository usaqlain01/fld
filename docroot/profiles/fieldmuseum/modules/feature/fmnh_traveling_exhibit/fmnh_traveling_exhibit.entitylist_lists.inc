<?php
/**
 * @file
 * fmnh_traveling_exhibit.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_traveling_exhibit_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'traveling_exhibits';
  $list->title = 'Traveling exhibits';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'TravelingExhibitEFQ',
  );
  $export['traveling_exhibits'] = $list;

  return $export;
}
