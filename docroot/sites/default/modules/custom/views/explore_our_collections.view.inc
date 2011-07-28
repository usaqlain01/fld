<?php
$view = new view;
$view->name = 'explore_our_collections';
$view->description = 'Display expandable/collapsible lists of available Department/Division Collection Landing Pages organized by Department';
$view->tag = 'fieldmain';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['css_class'] = 'collapsible collapsed';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
/* Sort criterion: Taxonomy: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  18 => '18',
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['operator'] = 'not';
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;

/* Display: Block: Anthropology */
$handler = $view->new_display('block', 'Block: Anthropology', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Anthropology';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'View label.';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'view all collections';
$handler->display->display_options['header']['area']['format'] = '1';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  67 => '67',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Block: Botany */
$handler = $view->new_display('block', 'Block: Botany', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Botany';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  78 => '78',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Block: ECCo */
$handler = $view->new_display('block', 'Block: ECCo', 'block_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Environment, Culture, and Conservation';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  85 => '85',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Block: Geology */
$handler = $view->new_display('block', 'Block: Geology', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Geology';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  90 => '90',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Block: Zoology */
$handler = $view->new_display('block', 'Block: Zoology', 'block_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Zoology';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  109 => '109',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Block: Library/Archives */
$handler = $view->new_display('block', 'Block: Library/Archives', 'block_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Library/Archives';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dept_div_collections_landing' => 'dept_div_collections_landing',
);
/* Filter: Taxonomy: Term ID (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
  104 => '104',
);
$handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

/* Display: Attachment: Anthropology */
$handler = $view->new_display('attachment', 'Attachment: Anthropology', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  67 => '67',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_1' => 'block_1',
  'default' => 0,
  'block_2' => 0,
  'block_3' => 0,
  'block_4' => 0,
  'block_5' => 0,
);

/* Display: Attachment: Botany */
$handler = $view->new_display('attachment', 'Attachment: Botany', 'attachment_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  78 => '78',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_2' => 'block_2',
  'default' => 0,
  'block_1' => 0,
  'block_3' => 0,
  'block_4' => 0,
  'block_5' => 0,
);

/* Display: Attachment: ECCo */
$handler = $view->new_display('attachment', 'Attachment: ECCo', 'attachment_6');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  85 => '85',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_6' => 'block_6',
  'default' => 0,
  'block_1' => 0,
  'block_2' => 0,
  'block_3' => 0,
  'block_4' => 0,
  'block_5' => 0,
);

/* Display: Attachment: Geology */
$handler = $view->new_display('attachment', 'Attachment: Geology', 'attachment_3');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  18 => '18',
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  90 => '90',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_3' => 'block_3',
  'default' => 0,
  'block_1' => 0,
  'block_2' => 0,
  'block_4' => 0,
  'block_5' => 0,
);

/* Display: Attachment: Zoology */
$handler = $view->new_display('attachment', 'Attachment: Zoology', 'attachment_4');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  109 => '109',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_4' => 'block_4',
  'default' => 0,
  'block_1' => 0,
  'block_2' => 0,
  'block_3' => 0,
  'block_5' => 0,
);

/* Display: Attachment: Library / Archives */
$handler = $view->new_display('attachment', 'Attachment: Library / Archives', 'attachment_5');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
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
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
$handler->display->display_options['fields']['nid']['link_to_node'] = 0;
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = 'Visit the [name] Department Page';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  104 => '104',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['displays'] = array(
  'block_5' => 'block_5',
  'default' => 0,
  'block_1' => 0,
  'block_2' => 0,
  'block_3' => 0,
  'block_4' => 0,
);
$translatables['explore_our_collections'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('node/[nid]'),
  t('Block: Anthropology'),
  t('Anthropology'),
  t('View label.'),
  t('view all collections'),
  t('Block: Botany'),
  t('Botany'),
  t('Block: ECCo'),
  t('Environment, Culture, and Conservation'),
  t('Block: Geology'),
  t('Geology'),
  t('Block: Zoology'),
  t('Zoology'),
  t('Block: Library/Archives'),
  t('Library/Archives'),
  t('Attachment: Anthropology'),
  t('Visit the [name] Department Page'),
  t('Attachment: Botany'),
  t('Attachment: ECCo'),
  t('Attachment: Geology'),
  t('Attachment: Zoology'),
  t('Attachment: Library / Archives'),
);

