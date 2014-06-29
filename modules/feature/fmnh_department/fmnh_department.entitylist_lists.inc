<?php
/**
 * @file
 * fmnh_department.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_department_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'collections_of_department';
  $list->title = 'Collections of department';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'CollectionsOfDepartmentEFQ',
  );
  $export['collections_of_department'] = $list;

  return $export;
}
