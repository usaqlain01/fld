<?php
/**
 * @file
 * fmnh_calendar.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_calendar_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'upcoming_events';
  $list->title = 'Upcoming events';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'UpcomingEventsEFQ',
  );
  $export['upcoming_events'] = $list;

  return $export;
}
