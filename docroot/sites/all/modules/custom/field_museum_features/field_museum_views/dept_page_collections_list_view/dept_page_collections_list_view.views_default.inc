<?php
function dept_page_collections_list_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'dept_page_collections_list';
$view->description = 'Displays Individual Collections associated with the Department/Division Page.';
$view->tag = 'list';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Collections';
$handler->display->display_options['css_class'] = 'collapsible';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are currently no collections available.';
$handler->display->display_options['empty']['area']['format'] = '1';
/* Relationship: Fields: field_dept_division_tags (field_dept_division_tags) - tid */
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['label'] = 'field_dept_division_tags';
$handler->display->display_options['relationships']['field_dept_division_tags_tid']['required'] = 1;
/* Field: Node: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['path']['alter']['trim'] = 0;
$handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['path']['alter']['html'] = 0;
$handler->display->display_options['fields']['path']['hide_empty'] = 0;
$handler->display->display_options['fields']['path']['empty_zero'] = 0;
$handler->display->display_options['fields']['path']['absolute'] = 0;
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'custom_content-third';
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'relationship' => 'none',
  'label' => '',
  'exclude' => 0,
  'alter' => array(
    'alter_text' => 0,
    'text' => '',
    'make_link' => 1,
    'path' => '[path]',
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
  'type' => 'custom_content-third',
);
/* Field: Node: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Fields: field_lede */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lede';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
/* Field: Node: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
$handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
$handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
$handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
$handler->display->display_options['fields']['view_node']['text'] = 'Learn more';
/* Field: Fields: field_link */
$handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
$handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_link';
$handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_2']['label'] = '';
$handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_2']['settings'] = array(
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
  'type' => 'default',
);
/* Sort criterion: Node: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Argument: Fields: field_dept_div_abbr (field_dept_div_abbr) - value */
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['glossary'] = 0;
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = 1;
/* Argument: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'individual_collection' => 'individual_collection',
);
/* Filter: Taxonomy: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  5 => '5',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'explore/department/%/collections';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'explore/department/%/collections/feed';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_2');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_action'] = 'empty';
$handler->display->display_options['arguments']['null']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['must_not_be'] = 0;
/* Argument: Fields: field_dept_div_abbr (field_dept_div_abbr) - value */
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['glossary'] = 0;
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = 1;
$handler->display->display_options['path'] = 'explore/department/%/%/collections';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
/* Argument: Fields: field_dept_div_abbr (field_dept_div_abbr) - value */
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['glossary'] = 0;
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
$handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = 1;
$handler->display->display_options['path'] = 'explore/department/%/%/collections/feed';
$translatables['dept_page_collections_list'] = array(
  t('Defaults'),
  t('Collections'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('There are currently no collections available.'),
  t('field_dept_division_tags'),
  t('[path]'),
  t('Learn more'),
  t('All'),
  t('Page'),
  t('Feed'),
);

$export[dept_page_collections_list] = $view;
return $export;
}