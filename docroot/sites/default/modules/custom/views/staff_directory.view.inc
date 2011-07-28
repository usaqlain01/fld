<?php
$view = new view;
$view->name = 'staff_directory';
$view->description = '';
$view->tag = '';
$view->base_table = 'users';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Fields: field_dept_division_tags (field_dept_division_tags) - tid */
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['required'] = 0;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['uid']['alter']['html'] = 0;
$handler->display->display_options['fields']['uid']['hide_empty'] = 0;
$handler->display->display_options['fields']['uid']['empty_zero'] = 0;
$handler->display->display_options['fields']['uid']['link_to_user'] = 0;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
$handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['picture']['alter']['html'] = 0;
$handler->display->display_options['fields']['picture']['hide_empty'] = 0;
$handler->display->display_options['fields']['picture']['empty_zero'] = 0;
$handler->display->display_options['fields']['picture']['imagecache_preset'] = 'square_thumbnail';
/* Field: Fields: field_givenname */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_givenname';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
/* Field: Fields: field_surname */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_surname';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '[entity_id] [entity_id_1]';
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'user/[uid]';
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
/* Field: Fields: field_position */
$handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
$handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_position';
$handler->display->display_options['fields']['entity_id_4']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_4']['label'] = '';
$handler->display->display_options['fields']['entity_id_4']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_4']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_4']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_4']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_4']['empty_zero'] = 0;
/* Field: Fields: field_dept_division_tags */
$handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
$handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_dept_division_tags';
$handler->display->display_options['fields']['entity_id_3']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_3']['label'] = '';
$handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_3']['click_sort_column'] = 'tid';
$handler->display->display_options['fields']['entity_id_3']['type'] = 'custom_comma_taxonomy_term_reference';
/* Sort criterion: Fields: field_surname (field_surname) - value */
$handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
$handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
$handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
/* Filter: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['use_operator'] = 0;
/* Filter: Taxonomy: Term ID */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['relationship'] = 'field_dept_division_tags_tid';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Department';
$handler->display->display_options['filters']['tid']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'department';
$handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
$handler->display->display_options['filters']['tid']['error_message'] = 1;
/* Filter: Fields: field_surname (field_surname) - value */
$handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
$handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';

/* Display: Page: Staff List */
$handler = $view->new_display('page', 'Page: Staff List', 'page_1');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['path'] = 'about/staff';

/* Display: Page: Executive Staff */
$handler = $view->new_display('page', 'Page: Executive Staff', 'page_2');
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['use_operator'] = 0;
/* Filter: Fields: field_surname (field_surname) - value */
$handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
$handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';
/* Filter: Fields: field_executive_staff (field_executive_staff) */
$handler->display->display_options['filters']['field_executive_staff_value']['id'] = 'field_executive_staff_value';
$handler->display->display_options['filters']['field_executive_staff_value']['table'] = 'field_data_field_executive_staff';
$handler->display->display_options['filters']['field_executive_staff_value']['field'] = 'field_executive_staff_value';
$handler->display->display_options['filters']['field_executive_staff_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['path'] = 'about/staff/executive';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$translatables['staff_directory'] = array(
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
  t('term from field_dept_division_tags'),
  t('Uid'),
  t('[entity_id] [entity_id_1]'),
  t('user/[uid]'),
  t('Department'),
  t('Page: Staff List'),
  t('Page: Executive Staff'),
);

