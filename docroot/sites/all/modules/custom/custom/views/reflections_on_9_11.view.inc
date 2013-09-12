<?php
$view = new view;
$view->name = 'reflections_on_9_11';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'Reflections on 9/11';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Reflections on 9/11';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = FALSE;
$handler->display->display_options['header']['area']['content'] = '<img src="/sites/default/files/9-11_Reflections_Cops.jpg" />';
$handler->display->display_options['header']['area']['format'] = '3';
/* Field: Node: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
$handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
$handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
$handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
/* Field: Fields: field_question */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_question';
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
/* Field: Fields: body */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '<div class="left-quote quotes">&ldquo;</div>[entity_id_1]<div class="right-quote quotes">&rdquo;</div>';
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
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
/* Field: Fields: field_firstname */
$handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
$handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_firstname';
$handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_2']['label'] = '';
$handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '[entity_id_2][entity_id_3][entity_id_4]';
$handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_2']['empty'] = 'Anonymous';
$handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_2']['type'] = 'text_plain';
/* Field: Fields: field_age */
$handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
$handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_age';
$handler->display->display_options['fields']['entity_id_3']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_3']['label'] = '';
$handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['text'] = ', [entity_id_3]';
$handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_3']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Fields: field_hometown */
$handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
$handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_hometown';
$handler->display->display_options['fields']['entity_id_4']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_4']['label'] = '';
$handler->display->display_options['fields']['entity_id_4']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['text'] = ', [entity_id_4]';
$handler->display->display_options['fields']['entity_id_4']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_4']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id_4']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_4']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_4']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_4']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_4']['type'] = 'text_plain';
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
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
  'reflections_on_9_11' => 'reflections_on_9_11',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'happening/reflectionson911';
$translatables['reflections_on_9_11'] = array(
  t('Defaults'),
  t('Reflections on 9/11'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('<img src="/sites/default/files/9-11_Reflections_Cops.jpg" />'),
  t('<div class="left-quote quotes">&ldquo;</div>[entity_id_1]<div class="right-quote quotes">&rdquo;</div>'),
  t('[entity_id_2][entity_id_3][entity_id_4]'),
  t('Anonymous'),
  t(', [entity_id_3]'),
  t(', [entity_id_4]'),
  t('Page'),
);
