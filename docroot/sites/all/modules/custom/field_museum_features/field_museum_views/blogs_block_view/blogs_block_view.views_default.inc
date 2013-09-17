<?php
/**
 * @file
 * blogs_block_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function blogs_block_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blogs_block';
  $view->description = 'Blogs Block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'blogs block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Blog Posts';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'custom_content-third';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'by [name]';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Department/Division tags (field_dept_division_tags) */
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['relationship'] = 'uid_1';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_options']['code'] = '// special case for explore science page = node/60
if (arg(1) == 60) {
  return \'67+77+78+85+90+686+104+371+103+109+681\';  //taxo IDs of all science departments
}
// find matching topic terms and use OR
$node = node_load(arg(1));
if ($node && !empty($node->field_dept_division_tags[LANGUAGE_NONE])) {
  $tids = array();
  foreach ($node->field_dept_division_tags[LANGUAGE_NONE] as $term) {
    $tids[] = $term[\'tid\'];
  }
  return implode(\'+\', $tids);
}';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Block: Blogs by Dept */
  $handler = $view->new_display('block', 'Block: Blogs by Dept', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = ' - [name]';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'explore/blogs';

  /* Display: Feed: Page - no argument */
  $handler = $view->new_display('feed', 'Feed: Page - no argument', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'explore/blogs/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Link */
  $handler->display->display_options['empty']['link']['id'] = 'link';
  $handler->display->display_options['empty']['link']['table'] = 'views';
  $handler->display->display_options['empty']['link']['field'] = 'link';
  $handler->display->display_options['empty']['link']['text'] = '< Back to Explore Science';
  $handler->display->display_options['empty']['link']['path'] = 'explore';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '< Back to [title]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Department/Division tags (field_dept_division_tags) */
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['default_argument_options']['vocabularies'] = array(
    'department_division' => 'department_division',
  );
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['validate_options']['vocabularies'] = array(
    'department_division' => 'department_division',
  );
  $handler->display->display_options['arguments']['field_dept_division_tags_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'department_division_page' => 'department_division_page',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
  );
  $export['blogs_block'] = $view;

  return $export;
}
