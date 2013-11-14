<?php
/**
 * @file
 * featured_links_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function featured_links_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_links';
  $view->description = 'Featured links block for the sidebar on "Secondary section front" and "Explore Our Collections" content type pages. The content comes from the \'field_links\' or \'field_featured_links\' fields of the current content.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Featured Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_link';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'field-name-field-link';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
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
    'hide_empty' => 1,
    'type' => 'default',
  );
  $handler->display->display_options['fields']['entity_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Link (field_link:url) */
  $handler->display->display_options['filters']['field_link_url']['id'] = 'field_link_url';
  $handler->display->display_options['filters']['field_link_url']['table'] = 'field_data_field_link';
  $handler->display->display_options['filters']['field_link_url']['field'] = 'field_link_url';
  $handler->display->display_options['filters']['field_link_url']['operator'] = 'not empty';

  /* Display: Featured Links Block */
  $handler = $view->new_display('block', 'Featured Links Block', 'block_1');
  $export['featured_links'] = $view;

  return $export;
}
