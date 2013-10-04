<?php
/**
 * @file
 * featured_content_field_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function featured_content_field_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_content_field';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'featured_content_field';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'node-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_exhibit_image']['id'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['table'] = 'field_data_field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['field'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_exhibit_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_secondary_section_image']['id'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['table'] = 'field_data_field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['field'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_secondary_section_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_section_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_secondary_section_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_exhibit_image_1']['id'] = 'field_exhibit_image_1';
  $handler->display->display_options['fields']['field_exhibit_image_1']['table'] = 'field_data_field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image_1']['field'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_exhibit_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image_1']['type'] = 'styles_file_content-half';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image_header']['type'] = 'styles_file_content-half';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['id'] = 'field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['table'] = 'field_data_field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['field'] = 'field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['type'] = 'styles_file_content-half';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['field_lede']['id'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['field_lede']['field'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['label'] = '';
  $handler->display->display_options['fields']['field_lede']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lede']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_lede']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = '.more-link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '<none>';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['featured_content_field'] = $view;

  return $export;
}
