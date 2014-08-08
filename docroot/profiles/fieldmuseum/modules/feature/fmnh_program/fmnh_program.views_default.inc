<?php
/**
 * @file
 * fmnh_program.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fmnh_program_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'field_trip_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Field trip programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'promo';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Grade level (field_grade_level) */
  $handler->display->display_options['arguments']['field_grade_level_target_id']['id'] = 'field_grade_level_target_id';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['field'] = 'field_grade_level_target_id';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_grade_level_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_grade_level_target_id']['validate_options']['vocabularies'] = array(
    'grade_level' => 'grade_level',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program' => 'program',
  );
  /* Filter criterion: Content: Grade level (field_grade_level) */
  $handler->display->display_options['filters']['field_grade_level_target_id']['id'] = 'field_grade_level_target_id';
  $handler->display->display_options['filters']['field_grade_level_target_id']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['filters']['field_grade_level_target_id']['field'] = 'field_grade_level_target_id';
  $handler->display->display_options['filters']['field_grade_level_target_id']['operator'] = 'not empty';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'promo';
  $handler->display->display_options['argument_input'] = array(
    'field_grade_level_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
    ),
  );
  $export['field_trip_programs'] = $view;

  $view = new view();
  $view->name = 'program_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Program events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'event';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Content: Exhibit or program (field_program) */
  $handler->display->display_options['arguments']['field_program_target_id']['id'] = 'field_program_target_id';
  $handler->display->display_options['arguments']['field_program_target_id']['table'] = 'field_data_field_program';
  $handler->display->display_options['arguments']['field_program_target_id']['field'] = 'field_program_target_id';
  $handler->display->display_options['arguments']['field_program_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_program_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_program_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_program_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Programs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_program_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Exhibit or program (field_program)',
    ),
  );
  $export['program_events'] = $view;

  $view = new view();
  $view->name = 'programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'promo';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_program_node']['id'] = 'reverse_field_program_node';
  $handler->display->display_options['relationships']['reverse_field_program_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_program_node']['field'] = 'reverse_field_program_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program' => 'program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Always visible (field_always_visible) */
  $handler->display->display_options['filters']['field_always_visible_value']['id'] = 'field_always_visible_value';
  $handler->display->display_options['filters']['field_always_visible_value']['table'] = 'field_data_field_always_visible';
  $handler->display->display_options['filters']['field_always_visible_value']['field'] = 'field_always_visible_value';
  $handler->display->display_options['filters']['field_always_visible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_always_visible_value']['group'] = 2;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'reverse_field_program_node';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Admin page */
  $handler = $view->new_display('page', 'Admin page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Programs admin';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'at-the-field/programs/admin';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Filtered list of promos */
  $handler = $view->new_display('ctools_context', 'Filtered list of promos', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'promo';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Audience (field_audience) */
  $handler->display->display_options['arguments']['field_audience_target_id']['id'] = 'field_audience_target_id';
  $handler->display->display_options['arguments']['field_audience_target_id']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_target_id']['field'] = 'field_audience_target_id';
  $handler->display->display_options['arguments']['field_audience_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['title'] = 'Programs %1';
  $handler->display->display_options['arguments']['field_audience_target_id']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_audience_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_target_id']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['argument_input'] = array(
    'field_audience_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
    ),
  );

  /* Display: Active programs */
  $handler = $view->new_display('ctools_context', 'Active programs', 'ctools_context_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active programs';
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'promo';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'programs:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $export['programs'] = $view;

  return $export;
}
