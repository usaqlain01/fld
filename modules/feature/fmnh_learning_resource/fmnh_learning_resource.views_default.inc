<?php
/**
 * @file
 * fmnh_learning_resource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fmnh_learning_resource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'learning_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Learning resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'learning_resource' => 'learning_resource',
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['argument_input'] = array(
    'field_grade_level_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
    ),
  );
  $export['learning_resources'] = $view;

  return $export;
}
