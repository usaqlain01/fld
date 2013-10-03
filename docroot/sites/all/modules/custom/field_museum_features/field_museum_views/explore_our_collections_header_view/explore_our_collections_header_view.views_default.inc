<?php
/**
 * @file
 * explore_our_collections_header_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function explore_our_collections_header_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'explore_our_collections_header';
  $view->description = 'Header for the Explore Our Collections department landing page.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Explore Our Collections Header';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['text'] = '<a href="[path]/collections">[entity_id]</a>';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = '[path]/collections';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_square_thumbnail';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="[path]/collections">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'department_division_page' => 'department_division_page',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    67 => '67',
    78 => '78',
    85 => '85',
    90 => '90',
    104 => '104',
    109 => '109',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['explore_our_collections_header'] = $view;

  return $export;
}
