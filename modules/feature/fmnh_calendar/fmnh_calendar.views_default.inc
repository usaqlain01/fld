<?php
/**
 * @file
 * fmnh_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fmnh_calendar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fmnh_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_exhibit_or_program_target_id']['id'] = 'field_exhibit_or_program_target_id';
  $handler->display->display_options['relationships']['field_exhibit_or_program_target_id']['table'] = 'field_data_field_exhibit_or_program';
  $handler->display->display_options['relationships']['field_exhibit_or_program_target_id']['field'] = 'field_exhibit_or_program_target_id';
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
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_exhibit_or_program_target_id';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Events for %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Optionally filtered by related node\'s terms';
  $handler->display->display_options['pane_category']['name'] = 'Calendar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Starting */
  $handler = $view->new_display('panel_pane', 'Starting', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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

  /* Display: Ending */
  $handler = $view->new_display('panel_pane', 'Ending', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ending soon';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now +1 month';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2_1']['id'] = 'field_date_value2_1';
  $handler->display->display_options['filters']['field_date_value2_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2_1']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value2_1']['default_date'] = 'now';
  $export['fmnh_calendar'] = $view;

  $view = new view();
  $view->name = 'upcoming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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

  /* Display: Content Pane */
  $handler = $view->new_display('panel_pane', 'Content Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['pane_category']['name'] = 'Calendar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['upcoming_events'] = $view;

  return $export;
}
