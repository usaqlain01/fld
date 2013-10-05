<?php
/**
 * @file
 * what_the_fish_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function what_the_fish_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'what_the_fish';
  $view->description = 'The view that displays all video content on the What the Fish article';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'What the Fish';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'What the Fish';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['id'] = 'field_dept_div_header_image_1';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image_1']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_exhibit_image']['id'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['table'] = 'field_data_field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['field'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_exhibit_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_promotion_widget_image']['id'] = 'field_promotion_widget_image';
  $handler->display->display_options['fields']['field_promotion_widget_image']['table'] = 'field_data_field_promotion_widget_image';
  $handler->display->display_options['fields']['field_promotion_widget_image']['field'] = 'field_promotion_widget_image';
  $handler->display->display_options['fields']['field_promotion_widget_image']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_widget_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_widget_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_promotion_widget_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_widget_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_widget_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promotion_widget_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_podcast_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image_header']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['id'] = 'field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['table'] = 'field_data_field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['field'] = 'field_dept_div_coll_image_header';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_thumbnail';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1051 => '1051',
  );
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'topic';

  /* Display: Latest */
  $handler = $view->new_display('block', 'Latest', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_exhibit_image']['id'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['table'] = 'field_data_field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['field'] = 'field_exhibit_image';
  $handler->display->display_options['fields']['field_exhibit_image']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_exhibit_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibit_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_secondary_section_image']['id'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['table'] = 'field_data_field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['field'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_secondary_section_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_section_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_secondary_section_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_podcast_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_widget_left_rail_image']['id'] = 'field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['table'] = 'field_data_field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['field'] = 'field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['label'] = '';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_dept_div_coll_image_header']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_video_thumbnail_image']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_content-half';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, o';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['type'] = 'text_plain';
  $handler->display->display_options['block_description'] = 'What the Fish - Latest';

  /* Display: What the Fish List */
  $handler = $view->new_display('block', 'What the Fish List', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['block_description'] = 'What the Fish - The Rest';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Explore other Videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'explore/featured-science';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'explore/what-the-fish/feed';
  $handler->display->display_options['displays'] = array(
    'block_2' => 'block_2',
    'default' => 0,
    'block_3' => 0,
    'page_1' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Featured Science Block */
  $handler = $view->new_display('block', 'Featured Science Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $export['what_the_fish'] = $view;

  return $export;
}
