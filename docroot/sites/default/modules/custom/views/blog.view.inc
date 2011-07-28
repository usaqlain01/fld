<?php
$view = new view;
$view->name = 'blog';
$view->description = 'My blog';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'This person has not yet written any blog posts.';
$handler->display->display_options['empty']['area']['format'] = '1';
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
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['type'] = 'custom_content-third';
/* Field: Fields: field_lede */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'trim_length' => '300',
);
/* Sort criterion: Node: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Argument: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['validate_fail'] = 'ignore';
$handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['uid']['not'] = 0;
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  303 => '303',
  301 => '301',
  302 => '302',
  300 => '300',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';
/* Filter: Fields: field_science_focus (field_science_focus) - tid */
$handler->display->display_options['filters']['field_science_focus_tid']['id'] = 'field_science_focus_tid';
$handler->display->display_options['filters']['field_science_focus_tid']['table'] = 'field_data_field_science_focus';
$handler->display->display_options['filters']['field_science_focus_tid']['field'] = 'field_science_focus_tid';
$handler->display->display_options['filters']['field_science_focus_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['operator'] = 'field_science_focus_tid_op';
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['label'] = 'Fields: field_science_focus (field_science_focus) - tid';
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['identifier'] = 'field_science_focus_tid';
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['field_science_focus_tid']['expose']['single'] = TRUE;

/* Display: Block: Collaborator */
$handler = $view->new_display('block', 'Block: Collaborator', 'block_1');
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
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  303 => '303',
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;

/* Display: Block: All */
$handler = $view->new_display('block', 'Block: All', 'block_2');
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
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Science';
$handler->display->display_options['filters']['tid']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'science';
$handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'science_focus';
$handler->display->display_options['filters']['tid']['error_message'] = 1;

/* Display: Block: Outreach */
$handler = $view->new_display('block', 'Block: Outreach', 'block_3');
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
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  301 => '301',
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Science';
$handler->display->display_options['filters']['tid_2']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'science';
$handler->display->display_options['filters']['tid_2']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'science_focus';
$handler->display->display_options['filters']['tid_2']['error_message'] = 1;

/* Display: Block: Research */
$handler = $view->new_display('block', 'Block: Research', 'block_4');
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
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  302 => '302',
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Science';
$handler->display->display_options['filters']['tid_2']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'science';
$handler->display->display_options['filters']['tid_2']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'science_focus';
$handler->display->display_options['filters']['tid_2']['error_message'] = 1;

/* Display: Block: Work */
$handler = $view->new_display('block', 'Block: Work', 'block_5');
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
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  300 => '300',
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Science';
$handler->display->display_options['filters']['tid_2']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'science';
$handler->display->display_options['filters']['tid_2']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'science_focus';
$handler->display->display_options['filters']['tid_2']['error_message'] = 1;

/* Display: Block: Latest blog entries */
$handler = $view->new_display('block', 'Block: Latest blog entries', 'block_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest blog entries';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'created' => 'created',
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'created' => array(
    'sortable' => 0,
    'align' => '',
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 0,
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Link */
$handler->display->display_options['footer']['link']['id'] = 'link';
$handler->display->display_options['footer']['link']['table'] = 'views';
$handler->display->display_options['footer']['link']['field'] = 'link';
$handler->display->display_options['footer']['link']['empty'] = TRUE;
$handler->display->display_options['footer']['link']['text'] = 'View all';
$handler->display->display_options['footer']['link']['path'] = 'user/!1/blog';
$handler->display->display_options['footer']['link']['class'] = 'more-link';
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['fields']['created']['hide_empty'] = 0;
$handler->display->display_options['fields']['created']['empty_zero'] = 0;
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
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['row_options']['item_length'] = 'fulltext';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['title'] = 'Field Museum Blogs - %1';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['validate_fail'] = 'ignore';
$handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['uid']['not'] = 0;
$handler->display->display_options['path'] = 'user/%/blog/feed';
$handler->display->display_options['displays'] = array(
  'default' => 0,
  'block_1' => 0,
  'block_2' => 0,
  'block_3' => 0,
  'block_4' => 0,
  'block_5' => 0,
  'block_6' => 0,
  'block_7' => 0,
);

/* Display: Block: News */
$handler = $view->new_display('block', 'Block: News', 'block_7');
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['optional'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
$handler->display->display_options['filters']['type']['expose']['single'] = TRUE;
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  344 => '344',
);
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'blog_category';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['value'] = '';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
$handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'topic';
$handler->display->display_options['filters']['tid_1']['error_message'] = 1;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';
/* Filter: Taxonomy: Term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Science';
$handler->display->display_options['filters']['tid_2']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'science';
$handler->display->display_options['filters']['tid_2']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'science_focus';
$handler->display->display_options['filters']['tid_2']['error_message'] = 1;
$translatables['blog'] = array(
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
  t('This person has not yet written any blog posts.'),
  t('All'),
  t('Node: Type'),
  t('Topic'),
  t('Fields: field_science_focus (field_science_focus) - tid'),
  t('Block: Collaborator'),
  t('Block: All'),
  t('Science'),
  t('Block: Outreach'),
  t('Block: Research'),
  t('Block: Work'),
  t('Block: Latest blog entries'),
  t('Latest blog entries'),
  t('View all'),
  t('Feed'),
  t('Field Museum Blogs - %1'),
  t('Block: News'),
);
