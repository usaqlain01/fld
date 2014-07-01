<?php
/**
 * @file
 * fmnh_learning_resource.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_learning_resource_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'learning_resources';
  $list->title = 'Learning resources';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'LearningResourcesListEFQ',
  );
  $export['learning_resources'] = $list;

  return $export;
}
