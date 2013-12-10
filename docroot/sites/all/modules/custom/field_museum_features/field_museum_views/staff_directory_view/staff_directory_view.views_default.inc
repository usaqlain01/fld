<?php
/**
 * @file
 * staff_directory_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function staff_directory_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff_directory';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
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
  /* Relationship: Field: Department/Division tags (field_dept_division_tags) */
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'square_thumbnail';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_givenname';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_surname';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '[entity_id] [entity_id_1]';
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = TRUE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_position';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  /* Field: Field: Department/Division tags */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_dept_division_tags';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_dept_division_tags';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['delta_offset'] = '0';
  /* Sort criterion: User: Last Name (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'department';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: User: Last Name (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';

  /* Display: Page: Staff List */
  $handler = $view->new_display('page', 'Page: Staff List', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Staff';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['path'] = 'about/staff';

  /* Display: Page: Executive Staff */
  $handler = $view->new_display('page', 'Page: Executive Staff', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: User: Last Name (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';
  /* Filter criterion: User: Executive Staff (field_executive_staff) */
  $handler->display->display_options['filters']['field_executive_staff_value']['id'] = 'field_executive_staff_value';
  $handler->display->display_options['filters']['field_executive_staff_value']['table'] = 'field_data_field_executive_staff';
  $handler->display->display_options['filters']['field_executive_staff_value']['field'] = 'field_executive_staff_value';
  $handler->display->display_options['filters']['field_executive_staff_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'about/staff/executive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['staff_directory'] = $view;

  return $export;
}
