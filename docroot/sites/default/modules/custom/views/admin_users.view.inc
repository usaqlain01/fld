<?php
$view = new view;
$view->name = 'admin_users';
$view->description = 'Emulates the Drupal user administration page.';
$view->tag = '';
$view->base_table = 'users';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer users';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 20;
$handler->display->display_options['style_plugin'] = 'bulk';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'status' => 'status',
  'rid' => 'rid',
  'created' => 'created',
  'access' => 'access',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'created';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'status' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'rid' => array(
    'align' => '',
    'separator' => '',
  ),
  'created' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'access' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['order'] = 'desc';
$handler->display->display_options['style_options']['selected_operations'] = array(
  'user_user_operations_block' => 'user_user_operations_block',
  'views_bulk_operations_delete_user_action' => 'views_bulk_operations_delete_user_action',
  'views_bulk_operations_script_action' => 'views_bulk_operations_script_action',
  'views_bulk_operations_profile_action' => 'views_bulk_operations_profile_action',
  'views_bulk_operations_user_roles_action' => 'views_bulk_operations_user_roles_action',
  'user_user_operations_unblock' => 'user_user_operations_unblock',
);
$handler->display->display_options['style_options']['execution_type'] = '1';
$handler->display->display_options['style_options']['display_type'] = '0';
$handler->display->display_options['style_options']['skip_confirmation'] = 0;
$handler->display->display_options['style_options']['display_result'] = 1;
$handler->display->display_options['style_options']['merge_single_action'] = 1;
$handler->display->display_options['style_options']['hide_select_all'] = 0;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Username';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_user'] = 1;
$handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
/* Field: User: Active */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['status']['alter']['trim'] = 0;
$handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['status']['alter']['html'] = 0;
$handler->display->display_options['fields']['status']['hide_empty'] = 0;
$handler->display->display_options['fields']['status']['empty_zero'] = 0;
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['rid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['rid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['rid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['rid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['rid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['rid']['alter']['html'] = 0;
$handler->display->display_options['fields']['rid']['hide_empty'] = 0;
$handler->display->display_options['fields']['rid']['empty_zero'] = 0;
$handler->display->display_options['fields']['rid']['type'] = 'ul';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['created']['alter']['trim'] = 0;
$handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['created']['alter']['html'] = 0;
$handler->display->display_options['fields']['created']['hide_empty'] = 0;
$handler->display->display_options['fields']['created']['empty_zero'] = 0;
$handler->display->display_options['fields']['created']['date_format'] = 'raw time span';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['access']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['access']['alter']['trim'] = 0;
$handler->display->display_options['fields']['access']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['access']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['access']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['access']['alter']['html'] = 0;
$handler->display->display_options['fields']['access']['hide_empty'] = 0;
$handler->display->display_options['fields']['access']['empty_zero'] = 0;
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
$handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
$handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
$handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
/* Filter: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
/* Filter: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
/* Filter: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
/* Filter: Fields: field_surname (field_surname) - value */
$handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
$handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_surname_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_surname_value']['expose']['operator'] = 'field_surname_value_op';
$handler->display->display_options['filters']['field_surname_value']['expose']['label'] = 'Last Name';
$handler->display->display_options['filters']['field_surname_value']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['field_surname_value']['expose']['identifier'] = 'field_surname_value';
$handler->display->display_options['filters']['field_surname_value']['expose']['single'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'admin/user/user2';
$translatables['admin_users'] = array(
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
  t('Username'),
  t('Active'),
  t('Roles'),
  t('Member for'),
  t('Last access'),
  t('Operations'),
  t('Role'),
  t('Last Name'),
  t('Page'),
);
