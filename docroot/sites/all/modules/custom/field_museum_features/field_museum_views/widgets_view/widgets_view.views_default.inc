<?php
/**
 * @file
 * widgets_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function widgets_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'widgets';
  $view->description = 'Widgets on Section front and Secondary section front';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Welcome';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Featured Links */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_link';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_widget_left_rail_image']['id'] = 'field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['table'] = 'field_data_field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['field'] = 'field_widget_left_rail_image';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['label'] = '';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['alter']['path'] = '[entity_id_1]';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_widget_left_rail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_widget_left_rail_image']['type'] = 'styles_file_original';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn more';
  /* Sort criterion: Field: Homepage/Section Front Sort Order (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'widget' => 'widget',
  );

  /* Display: Block: Section front widgets */
  $handler = $view->new_display('block', 'Block: Section front widgets', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Homepage/Section Front Sort Order (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $export['widgets'] = $view;

  return $export;
}
