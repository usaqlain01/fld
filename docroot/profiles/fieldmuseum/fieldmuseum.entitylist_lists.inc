<?php
/**
 * @file
 * fieldmuseum.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fieldmuseum_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'menu_children';
  $list->title = 'Menu children';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerMenuTree';
  $list->handler_config = array(
    'entity_type' => 'node',
  );
  $export['menu_children'] = $list;

  return $export;
}
