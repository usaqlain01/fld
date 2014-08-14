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
  $list->title = 'Menu children (hide children from other menus)';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerMenuTree';
  $list->handler_config = array(
    'entity_type' => 'node',
    'access' => 0,
    'menu_name' => 'main-menu',
  );
  $export['menu_children'] = $list;

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'menu_children_visible';
  $list->title = 'Menu children (show children in other menus)';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerMenuTree';
  $list->handler_config = array(
    'entity_type' => 'node',
    'access' => 1,
    'menu_name' => 'main-menu',
  );
  $export['menu_children_visible'] = $list;

  return $export;
}
