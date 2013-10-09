<?php
/**
 * @file
 * dept_page_collections_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dept_page_collections_list_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dept_page_collections_list';
  $view->description = 'Displays Individual Collections associated with the Department/Division Page.';
  $view->tag = 'list';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['css_class'] = 'collapsible';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no collections available.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: Field: Department/Division tags (field_dept_division_tags) */
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['id'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['table'] = 'field_data_field_dept_division_tags';
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['field'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['relationships']['field_dept_division_tags_tid']['label'] = 'field_dept_division_tags';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Collection Thumbnail */
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['id'] = 'field_collection_thumbnail_image';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['table'] = 'field_data_field_collection_thumbnail_image';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['field'] = 'field_collection_thumbnail_image';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['alter']['text'] = '<a href="[path]">[field_collection_thumbnail_image]</a>';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_thumbnail_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn more';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_link';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Abbreviation (field_dept_div_abbr) */
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = TRUE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
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
    'individual_collection' => 'individual_collection',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'field_dept_division_tags_tid';
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
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Contextual filter: Taxonomy term: Abbreviation (field_dept_div_abbr) */
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = TRUE;
  $handler->display->display_options['path'] = 'explore/department/%/%/collections';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Contextual filter: Taxonomy term: Abbreviation (field_dept_div_abbr) */
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['id'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['table'] = 'field_data_field_dept_div_abbr';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['field'] = 'field_dept_div_abbr_value';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['relationship'] = 'field_dept_division_tags_tid';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_dept_div_abbr_value']['transform_dash'] = TRUE;
  $handler->display->display_options['path'] = 'explore/department/%/%/collections/feed';
  $export['dept_page_collections_list'] = $view;

  return $export;
}
