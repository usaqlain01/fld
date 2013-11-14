<?php
/**
 * @file
 * ecco_news_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ecco_news_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ecco_news';
  $view->description = 'News Views for ECCo';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'ECCo News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
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
  $handler->display->display_options['fields']['field_blog_image']['type'] = 'styles_file_content-third-home';
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
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_content-third-home';
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
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_content-third-home';
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
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'styles_file_content-third-home';
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
  $handler->display->display_options['fields']['field_video_thumbnail_image']['type'] = 'styles_file_content-third-home';
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
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'photo_gallery' => 'photo_gallery',
    'podcast' => 'podcast',
    'video' => 'video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    776 => '776',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'research_areas';

  /* Display: Page: Urban Cons & Anthro News */
  $handler = $view->new_display('page', 'Page: Urban Cons & Anthro News', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ECCo Chicago Region News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'photo_gallery' => 'photo_gallery',
    'podcast' => 'podcast',
    'video' => 'video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    244 => '244',
    776 => '776',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'research_areas';
  $handler->display->display_options['path'] = 'explore/department/ecco/urban-news';

  /* Display: Feed: Urban Cons & Anthro News */
  $handler = $view->new_display('feed', 'Feed: Urban Cons & Anthro News', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Urban Anthropology and Conservation Team News';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'photo_gallery' => 'photo_gallery',
    'podcast' => 'podcast',
    'video' => 'video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    244 => '244',
    776 => '776',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'research_areas';
  $handler->display->display_options['path'] = 'explore/department/ecco/urban-news/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Page: Amazon/Andes News */
  $handler = $view->new_display('page', 'Page: Amazon/Andes News', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andes/Amazon Conservation News';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'photo_gallery' => 'photo_gallery',
    'podcast' => 'podcast',
    'video' => 'video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
  $handler->display->display_options['path'] = 'explore/department/ecco/amazon-andes-news';

  /* Display: Feed: Amazon/Andes News */
  $handler = $view->new_display('feed', 'Feed: Amazon/Andes News', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andes/Amazon Conservation News';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'photo_gallery' => 'photo_gallery',
    'podcast' => 'podcast',
    'video' => 'video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    776 => '776',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'research_areas';
  $handler->display->display_options['path'] = 'explore/department/ecco/amazon-andes-news/feed';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['ecco_news'] = $view;

  return $export;
}
