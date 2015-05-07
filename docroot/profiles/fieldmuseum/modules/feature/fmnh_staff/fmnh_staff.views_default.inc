<?php
/**
 * @file
 * fmnh_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fmnh_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['relationships']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_target_id']['field'] = 'field_department_target_id';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 — Staff';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['people'] = $view;

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any main profile';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Sort criterion: Field: Last Name (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'user';
  /* Sort criterion: Field: First Name (field_givenname) */
  $handler->display->display_options['sorts']['field_givenname_value']['id'] = 'field_givenname_value';
  $handler->display->display_options['sorts']['field_givenname_value']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['sorts']['field_givenname_value']['field'] = 'field_givenname_value';
  $handler->display->display_options['sorts']['field_givenname_value']['relationship'] = 'user';
  /* Contextual filter: Field: Department (field_department) */
  $handler->display->display_options['arguments']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['arguments']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_department_target_id']['title'] = '%1 — Staff';
  $handler->display->display_options['arguments']['field_department_target_id']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_department_target_id']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_department_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_department_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Field: Last Name (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';

  /* Display: Filter by profile departments */
  $handler = $view->new_display('ctools_context', 'Filter by profile departments', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  $handler->display->display_options['argument_input'] = array(
    'field_department_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
    ),
  );

  /* Display: Filter by home dept. */
  $handler = $view->new_display('ctools_context', 'Filter by home dept.', 'ctools_context_2');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Home Department (field_home_department) */
  $handler->display->display_options['arguments']['field_home_department_value']['id'] = 'field_home_department_value';
  $handler->display->display_options['arguments']['field_home_department_value']['table'] = 'field_data_field_home_department';
  $handler->display->display_options['arguments']['field_home_department_value']['field'] = 'field_home_department_value';
  $handler->display->display_options['arguments']['field_home_department_value']['relationship'] = 'user';
  $handler->display->display_options['arguments']['field_home_department_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_home_department_value']['title'] = '%1';
  $handler->display->display_options['arguments']['field_home_department_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_home_department_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_home_department_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_home_department_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_home_department_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_home_department_value']['transform_dash'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_home_department_value' => array(
      'type' => 'context',
      'context' => 'string.html_safe',
      'context_optional' => 1,
    ),
  );
  $export['staff'] = $view;

  $view = new view();
  $view->name = 'users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'user';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Field: Last Name (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  /* Sort criterion: Field: First Name (field_givenname) */
  $handler->display->display_options['sorts']['field_givenname_value']['id'] = 'field_givenname_value';
  $handler->display->display_options['sorts']['field_givenname_value']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['sorts']['field_givenname_value']['field'] = 'field_givenname_value';
  /* Contextual filter: Field: Home Department (field_home_department) */
  $handler->display->display_options['arguments']['field_home_department_value']['id'] = 'field_home_department_value';
  $handler->display->display_options['arguments']['field_home_department_value']['table'] = 'field_data_field_home_department';
  $handler->display->display_options['arguments']['field_home_department_value']['field'] = 'field_home_department_value';
  $handler->display->display_options['arguments']['field_home_department_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_home_department_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_home_department_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_home_department_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_home_department_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_home_department_value']['transform_dash'] = TRUE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Last Name (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';

  /* Display: filter by home department */
  $handler = $view->new_display('ctools_context', 'filter by home department', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'user';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  $handler->display->display_options['argument_input'] = array(
    'field_home_department_value' => array(
      'type' => 'context',
      'context' => 'string.html_safe',
      'context_optional' => 1,
    ),
  );

  /* Display: filter by profile departments */
  $handler = $view->new_display('ctools_context', 'filter by profile departments', 'ctools_context_2');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'user';
  $handler->display->display_options['row_options']['view_mode'] = 'summary';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Department (field_department) */
  $handler->display->display_options['arguments']['field_department_target_id']['id'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['table'] = 'field_data_field_department';
  $handler->display->display_options['arguments']['field_department_target_id']['field'] = 'field_department_target_id';
  $handler->display->display_options['arguments']['field_department_target_id']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_department_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_department_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_department_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_department_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_department_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
    ),
  );
  $export['users'] = $view;

  return $export;
}
