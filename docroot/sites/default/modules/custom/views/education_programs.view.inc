<?php
$view = new view;
$view->name = 'education_programs';
$view->description = 'Program Views for Education';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'Education Programs';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Programs';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['use_more_text'] = 'View all';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
$handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 1;
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['entity_id_1']['type'] = 'custom_content-third-home';
/* Field: Node: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Node: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['created']['alter']['trim'] = 0;
$handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['created']['alter']['html'] = 0;
$handler->display->display_options['fields']['created']['element_label_colon'] = 1;
$handler->display->display_options['fields']['created']['element_default_classes'] = 1;
$handler->display->display_options['fields']['created']['hide_empty'] = 0;
$handler->display->display_options['fields']['created']['empty_zero'] = 0;
/* Field: Fields: field_lede */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
/* Sort criterion: Node: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'minute';
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';

/* Display: Page: Adult Programs */
$handler = $view->new_display('page', 'Page: Adult Programs', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Adult Programs';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  61 => '61',
  56 => '56',
  59 => '59',
  50 => '50',
  339 => '339',
  54 => '54',
  55 => '55',
  53 => '53',
  60 => '60',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/adults';

/* Display: Feed: Adult Programs */
$handler = $view->new_display('feed', 'Feed: Adult Programs', 'feed_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Adult Programs';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  61 => '61',
  56 => '56',
  59 => '59',
  50 => '50',
  339 => '339',
  54 => '54',
  55 => '55',
  53 => '53',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/adults/feed';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
  'page_2' => 0,
  'page_3' => 0,
  'page_4' => 0,
  'page_5' => 0,
);
$handler->display->display_options['sitename_title'] = 0;

/* Display: Page: Educator Programs */
$handler = $view->new_display('page', 'Page: Educator Programs', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Educator Programs';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  51 => '51',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/educators';

/* Display: Feed: Educator Programs */
$handler = $view->new_display('feed', 'Feed: Educator Programs', 'feed_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Educator Programs';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  51 => '51',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/educators/feed';
$handler->display->display_options['displays'] = array(
  'page_2' => 'page_2',
  'default' => 0,
  'page_1' => 0,
  'page_3' => 0,
  'page_4' => 0,
  'page_5' => 0,
);
$handler->display->display_options['sitename_title'] = 0;

/* Display: Page: Family Programs */
$handler = $view->new_display('page', 'Page: Family Programs', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Family Programs';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  57 => '57',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/families';

/* Display: Feed: Family Programs */
$handler = $view->new_display('feed', 'Feed: Family Programs', 'feed_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Family Programs';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  57 => '57',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/families/feed';
$handler->display->display_options['displays'] = array(
  'page_3' => 'page_3',
  'default' => 0,
  'page_1' => 0,
  'page_2' => 0,
  'page_4' => 0,
  'page_5' => 0,
);
$handler->display->display_options['sitename_title'] = 0;

/* Display: Page: Scout Programs */
$handler = $view->new_display('page', 'Page: Scout Programs', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Scout Programs';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  781 => '781',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/scouts';

/* Display: Feed: Scout Programs */
$handler = $view->new_display('feed', 'Feed: Scout Programs', 'feed_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Scout Programs';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  781 => '781',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/scouts/feed';
$handler->display->display_options['displays'] = array(
  'page_4' => 'page_4',
  'default' => 0,
  'page_1' => 0,
  'page_2' => 0,
  'page_3' => 0,
  'page_5' => 0,
);
$handler->display->display_options['sitename_title'] = 0;

/* Display: Page: Teen Programs */
$handler = $view->new_display('page', 'Page: Teen Programs', 'page_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Teen Programs';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  52 => '52',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/teens';

/* Display: Feed: Teen Programs */
$handler = $view->new_display('feed', 'Feed: Teen Programs', 'feed_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Teen Programs';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  297 => '297',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  52 => '52',
);
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'audience';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  84 => '84',
);
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'department_division';
$handler->display->display_options['path'] = 'happening/programs/teens/feed';
$handler->display->display_options['displays'] = array(
  'page_5' => 'page_5',
  'default' => 0,
  'page_1' => 0,
  'page_2' => 0,
  'page_3' => 0,
  'page_4' => 0,
);
$handler->display->display_options['sitename_title'] = 0;
$translatables['education_programs'] = array(
  t('Defaults'),
  t('Programs'),
  t('View all'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Nid'),
  t('node/[nid]'),
  t('Page: Adult Programs'),
  t('Adult Programs'),
  t('more'),
  t('Feed: Adult Programs'),
  t('Page: Educator Programs'),
  t('Educator Programs'),
  t('Feed: Educator Programs'),
  t('Page: Family Programs'),
  t('Family Programs'),
  t('Feed: Family Programs'),
  t('Page: Scout Programs'),
  t('Scout Programs'),
  t('Feed: Scout Programs'),
  t('Page: Teen Programs'),
  t('Teen Programs'),
  t('Feed: Teen Programs'),
);
