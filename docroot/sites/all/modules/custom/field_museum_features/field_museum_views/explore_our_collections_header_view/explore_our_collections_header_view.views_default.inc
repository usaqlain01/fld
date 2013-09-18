<?php
function explore_our_collections_header_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'explore_our_collections_header';
$view->description = 'Header for the Explore Our Collections department landing page.';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'Explore Our Collections Header';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['path']['alter']['trim'] = 0;
$handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['path']['alter']['html'] = 0;
$handler->display->display_options['fields']['path']['element_label_colon'] = 1;
$handler->display->display_options['fields']['path']['element_default_classes'] = 1;
$handler->display->display_options['fields']['path']['hide_empty'] = 0;
$handler->display->display_options['fields']['path']['empty_zero'] = 0;
$handler->display->display_options['fields']['path']['absolute'] = 0;
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['text'] = '<a href="[path]/collections">[entity_id]</a>';
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'data';
$handler->display->display_options['fields']['entity_id']['type'] = 'custom_square_thumbnail';
/* Field: Taxonomy: Term */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['name']['alter']['text'] = '<a href="[path]/collections">[name]</a>';
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['element_label_colon'] = 1;
$handler->display->display_options['fields']['name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
/* Sort criterion: Node: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'department_division_page' => 'department_division_page',
);
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Taxonomy: Term */
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
$handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'department_division';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$translatables['explore_our_collections_header'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Path'),
  t('<a href="[path]/collections">[entity_id]</a>'),
  t('<a href="[path]/collections">[name]</a>'),
  t('Block'),
);

$export[explore_our_collections_header] = $view;
return $export;
}