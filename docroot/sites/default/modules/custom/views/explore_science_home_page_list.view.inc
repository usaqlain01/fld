<?php
$view = new view;
$view->name = 'explore_science_home_page_list';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'Explore Science Home Page List';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Featured Science';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['use_more_text'] = 'View all';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
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
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['entity_id_1']['type'] = 'custom_content-third';
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
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'text_plain';
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
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  886 => '886',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'topic';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['path'] = 'explore/featured-science';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'explore/featured-science/feed';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
  'block_1' => 0,
);
$handler->display->display_options['sitename_title'] = 0;

/* Display: Featured Science Block */
$handler = $view->new_display('block', 'Featured Science Block', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$translatables['explore_science_home_page_list'] = array(
  t('Defaults'),
  t('Featured Science'),
  t('View all'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('node/[nid]'),
  t('Page'),
  t('more'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Feed'),
  t('Featured Science Block'),
);
