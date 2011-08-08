<?php
$view = new view;
$view->name = 'c_r_weekly_newsletter';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'C&R Weekly Newsletter';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
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
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Sort criterion: Node: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'newsletter' => 'newsletter',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'C&R Weekly News';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'explore/c-r-weekly-news';
$translatables['c_r_weekly_newsletter'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Block'),
  t('C&R Weekly News'),
  t('Page'),
);
