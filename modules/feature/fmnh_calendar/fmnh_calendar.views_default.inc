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
  $view->name = 'events_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_editable' => 'title_editable',
    'field_date_editable' => 'field_date_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'title_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_program_target_id']['id'] = 'field_program_target_id';
  $handler->display->display_options['relationships']['field_program_target_id']['table'] = 'field_data_field_program';
  $handler->display->display_options['relationships']['field_program_target_id']['field'] = 'field_program_target_id';
  $handler->display->display_options['relationships']['field_program_target_id']['required'] = TRUE;
  /* Field: Content: Title (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['label'] = 'Title';
  $handler->display->display_options['fields']['title_editable']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '';
  /* Field: Content: Date (editable) */
  $handler->display->display_options['fields']['field_date_editable']['id'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_editable']['field'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_date_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_date_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_date_editable']['widget_type'] = 'date_popup';
  $handler->display->display_options['fields']['field_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_date_editable']['suppress_description'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_program_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Events for %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Calendar';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
  $export['events_admin'] = $view;

  return $export;
}
