<?php
/**
 * @file
 * user_profile_name_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profile_name_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profile_name';
  $view->description = 'For displaying the user name on a profile page.';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Name';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_givenname';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_surname';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_givenname';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_givenname';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_3']['element_class'] = 'field-name-field-givenname';
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_surname';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_4']['element_class'] = 'field-name-field-surname';
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = FALSE;
  $export['user_profile_name'] = $view;

  return $export;
}
