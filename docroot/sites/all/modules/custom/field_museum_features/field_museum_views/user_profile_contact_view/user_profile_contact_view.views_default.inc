<?php
function user_profile_contact_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'user_profile_contact';
$view->description = 'Contact box in user profile pages.';
$view->tag = '';
$view->base_table = 'users';
$view->human_name = 'User Profile Contact';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Fields: field_email */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = 'Email';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'email';
$handler->display->display_options['fields']['entity_id_1']['type'] = 'invisimail_html_entities';
$handler->display->display_options['fields']['entity_id_1']['settings'] = array(
  'chunk' => 0,
  'link' => 1,
);
/* Field: Fields: field_office */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_office';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = 'Office';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'text_plain';
/* Field: Fields: field_fax */
$handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
$handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_fax';
$handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_2']['label'] = 'Fax';
$handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_2']['type'] = 'text_plain';
/* Argument: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['uid']['not'] = 0;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$translatables['user_profile_contact'] = array(
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
  t('Email'),
  t('Office'),
  t('Fax'),
  t('All'),
  t('Block'),
);

$export['user_profile_contact'] = $view;
return $export;
}
