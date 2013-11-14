<?php
/**
 * @file
 * dept_div_collections_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dept_div_collections_list_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dept_div_collections_list';
  $view->description = 'Displays Individual Collections associated with the Department/Division Collection landing page.';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['path'] = '[path]';
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
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'department_division' => 'department_division',
  );
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
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

  /* Display: Block: Dept/Div Collections List */
  $handler = $view->new_display('block', 'Block: Dept/Div Collections List', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_collection_image_header']['element_class'] = 'field-name-field-image';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image_header']['type'] = 'styles_file_content-third';
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
  $handler->display->display_options['fields']['entity_id_1']['alter']['max_length'] = '275';
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'field-name-field-lede';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '<li></li>';
  $handler->display->display_options['fields']['entity_id_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_2']['element_class'] = 'field-name-field-link';
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['click_sort_column'] = 'url';
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
  $handler->display->display_options['fields']['entity_id_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['entity_id_2']['separator'] = '';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'explore/our-collections/%/collections/feed';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $export['dept_div_collections_list'] = $view;

  return $export;
}
