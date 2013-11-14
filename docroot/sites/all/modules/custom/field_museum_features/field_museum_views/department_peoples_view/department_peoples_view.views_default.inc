<?php
function department_peoples_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'department_peoples';
$view->description = 'People Tab on Department/Division Pages, Ticket 446';
$view->tag = '';
$view->base_table = 'users';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Staff';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'entity_id_2' => 'entity_id_2',
);
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['row_options']['hide_empty'] = 1;
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are no people associated with this department at this time.';
$handler->display->display_options['empty']['area']['format'] = '1';
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
$handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['picture']['alter']['html'] = 0;
$handler->display->display_options['fields']['picture']['hide_empty'] = 0;
$handler->display->display_options['fields']['picture']['empty_zero'] = 0;
$handler->display->display_options['fields']['picture']['imagecache_preset'] = 'square_thumbnail';
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['uid']['alter']['html'] = 0;
$handler->display->display_options['fields']['uid']['hide_empty'] = 0;
$handler->display->display_options['fields']['uid']['empty_zero'] = 0;
$handler->display->display_options['fields']['uid']['link_to_user'] = 1;
/* Field: Fields: field_givenname */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_givenname';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '(hidden)';
$handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['path'] = 'user/[uid]';
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'override' => array(
    'button' => 'Override',
  ),
  'relationship' => 'none',
  'label' => '',
  'exclude' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'link_class' => '',
    'alt' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'help' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 1,
    'ellipsis' => 1,
    'html' => 0,
    'strip_tags' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'type' => 'text_default',
);
/* Field: Fields: field_surname */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_surname';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '[entity_id] [entity_id_1]';
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'user/[uid]';
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['settings'] = array(
  'override' => array(
    'button' => 'Override',
  ),
  'relationship' => 'none',
  'label' => '',
  'exclude' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'link_class' => '',
    'alt' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'help' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 1,
    'ellipsis' => 1,
    'html' => 0,
    'strip_tags' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'type' => 'text_default',
);
/* Field: Fields: field_position */
$handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
$handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_position';
$handler->display->display_options['fields']['entity_id_3']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_3']['label'] = '';
$handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_3']['settings'] = array(
  'override' => array(
    'button' => 'Override',
  ),
  'relationship' => 'none',
  'label' => 'field_position',
  'exclude' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 0,
    'path' => '',
    'absolute' => 0,
    'link_class' => '',
    'alt' => '',
    'prefix' => '',
    'suffix' => '',
    'target' => '',
    'help' => '',
    'trim' => 0,
    'max_length' => '',
    'word_boundary' => 1,
    'ellipsis' => 1,
    'html' => 0,
    'strip_tags' => 0,
  ),
  'empty' => '',
  'empty_zero' => 0,
  'hide_empty' => 0,
  'type' => 'text_default',
);
/* Field: Fields: field_year_started */
$handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
$handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_year_started';
$handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_2']['label'] = 'Year Started at The Field';
$handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 1;
$handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
/* Sort criterion: Fields: field_surname (field_surname) - value */
$handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
$handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
$handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
/* Sort criterion: Fields: field_givenname (field_givenname) - value */
$handler->display->display_options['sorts']['field_givenname_value']['id'] = 'field_givenname_value';
$handler->display->display_options['sorts']['field_givenname_value']['table'] = 'field_data_field_givenname';
$handler->display->display_options['sorts']['field_givenname_value']['field'] = 'field_givenname_value';
/* Argument: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['uid']['validate_type'] = 'php';
$handler->display->display_options['arguments']['uid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$argument);
$path = explode(\'/\', $internal_path);
$nid = $path[1];

$node=node_load($nid);
$uids = array();
if (!empty($node->field_profiles[\'und\'])) {
  foreach ($node->field_profiles[\'und\'] as $user){
    $uids[] = $user[\'uid\'];
  }
} else { return FALSE; }
$handler->argument = implode(\'+\', $uids);
return TRUE;';
$handler->display->display_options['arguments']['uid']['validate_fail'] = 'empty';
$handler->display->display_options['arguments']['uid']['break_phrase'] = 1;
$handler->display->display_options['arguments']['uid']['not'] = 0;
/* Filter: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['use_operator'] = 0;

/* Display: Page - Dept */
$handler = $view->new_display('page', 'Page - Dept', 'page_1');
$handler->display->display_options['path'] = 'explore/department/%/people';

/* Display: Page - Div */
$handler = $view->new_display('page', 'Page - Div', 'page_2');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
/* Argument: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['uid']['validate_type'] = 'php';
$handler->display->display_options['arguments']['uid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$view->args[0].\'/\'.$argument);
$path = explode(\'/\', $internal_path);
$nid = $path[1];

$node=node_load($nid);
$uids = array();
if (!empty($node->field_profiles[\'und\'])) {
  foreach ($node->field_profiles[\'und\'] as $user){
    $uids[] = $user[\'uid\'];
  }
} else { return FALSE; }
$handler->argument = implode(\'+\', $uids);
return TRUE;';
$handler->display->display_options['arguments']['uid']['validate_fail'] = 'empty';
$handler->display->display_options['arguments']['uid']['break_phrase'] = 1;
$handler->display->display_options['arguments']['uid']['not'] = 0;
$handler->display->display_options['path'] = 'explore/department/%/%/people';
$translatables['department_peoples'] = array(
  t('Defaults'),
  t('Staff'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('There are no people associated with this department at this time.'),
  t('(hidden)'),
  t('user/[uid]'),
  t('[entity_id] [entity_id_1]'),
  t('Year Started at The Field'),
  t('All'),
  t('Page - Dept'),
  t('Page - Div'),
);


$export[department_peoples] = $view;
return $export;
}