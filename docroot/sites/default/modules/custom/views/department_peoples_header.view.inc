<?php
$view = new view;
$view->name = 'department_peoples_header';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'department_peoples_header';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Fields: field_people_tab_header */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_people_tab_header';
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
/* Argument: Node: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2));
$path = explode(\'/\', $internal_path);
return $path[1];';
$handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'department_division_page' => 'department_division_page',
);
$handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
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
  'department_division_page' => 'department_division_page',
);

/* Display: Block - Dept */
$handler = $view->new_display('block', 'Block - Dept', 'block_1');
$handler->display->display_options['block_description'] = 'People Tab Header Text - Dept';

/* Display: Block - Div */
$handler = $view->new_display('block', 'Block - Div', 'block_2');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: Node: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2).\'/\'.arg(3));
$path = explode(\'/\', $internal_path);
return $path[1];';
$handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'department_division_page' => 'department_division_page',
);
$handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
$handler->display->display_options['block_description'] = 'People Tab Header Text - Div';
$translatables['department_peoples_header'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('All'),
  t('Block - Dept'),
  t('People Tab Header Text - Dept'),
  t('Block - Div'),
  t('People Tab Header Text - Div'),
);

