<?php
/**
 * @file
 * fmnh_staff.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_staff_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'staff';
  $list->title = 'Staff';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerViews';
  $list->handler_config = array(
    'view' => 'staff:ctools_context_1',
  );
  $export['staff'] = $list;

  return $export;
}
