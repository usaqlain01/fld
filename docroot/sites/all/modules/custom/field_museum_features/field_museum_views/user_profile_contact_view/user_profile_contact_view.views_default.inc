<?php
/**
 * @file
 * user_profile_contact_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profile_contact_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profile_contact';
  $view->description = 'Contact box in user profile pages.';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Contact';
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
  /* Field: User: Contact Info */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Email';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'field-name-field-email';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'invisimail_html_entities';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Field: User: Office */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_office';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_office';
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['type'] = 'text_plain';
  /* Field: User: Fax */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_fax';
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'text_plain';
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
  $export['user_profile_contact'] = $view;

  return $export;
}
