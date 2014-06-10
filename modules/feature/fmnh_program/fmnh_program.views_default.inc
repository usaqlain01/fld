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
  /* Contextual filter: Content: Audience (field_audience) */
  $handler->display->display_options['arguments']['field_audience_target_id']['id'] = 'field_audience_target_id';
  $handler->display->display_options['arguments']['field_audience_target_id']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_target_id']['field'] = 'field_audience_target_id';
  $handler->display->display_options['arguments']['field_audience_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['title'] = 'Programs for %1';
  $handler->display->display_options['arguments']['field_audience_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_target_id']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_target_id']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_audience_target_id']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_target_id']['validate']['fail'] = 'empty';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Programs';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_audience_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Audience (field_audience)',
    ),
  );
  $export['programs'] = $view;

  return $export;
}
