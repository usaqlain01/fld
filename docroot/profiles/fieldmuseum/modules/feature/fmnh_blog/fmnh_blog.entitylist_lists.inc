<?php
/**
 * @file
 * fmnh_blog.entitylist_lists.inc
 */

/**
 * Implements hook_entitylist_defaults().
 */
function fmnh_blog_entitylist_defaults() {
  $export = array();

  $list = new EntityList();
  $list->disabled = FALSE; /* Edit this to true to make a default list disabled initially */
  $list->api_version = 1;
  $list->name = 'blogs';
  $list->title = 'Blogs';
  $list->description = '';
  $list->content_type = 0;
  $list->handler_plugin = 'EntityListHandlerEFQ';
  $list->handler_config = array(
    'class_name' => 'BlogListEFQ',
  );
  $export['blogs'] = $list;

  return $export;
}
