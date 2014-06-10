<?php
/**
 * @file
 * fmnh_exhibit.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_exhibit_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'current_exhibitions';
  $list->title = 'Current exhibitions';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'CurrentExhibitionsEFQ',
  );
  $export['current_exhibitions'] = $list;

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'ending_soon_exhibition';
  $list->title = 'Ending soon exhibition';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'EndingSoonExhibitionsEFQ',
  );
  $export['ending_soon_exhibition'] = $list;

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'past_exhibitions';
  $list->title = 'Past exhibitions';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'PastExhibitionsEFQ',
  );
  $export['past_exhibitions'] = $list;

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'promoted_exhibitions';
  $list->title = 'Promoted exhibitions';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'PromotedExhibitionsEFQ',
  );
  $export['promoted_exhibitions'] = $list;

  return $export;
}
