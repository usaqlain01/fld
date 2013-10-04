<?php
/**
 * @file
 * wr_05_promo_content_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wr_05_promo_content_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wr_05_promo_content';
  $view->description = 'Second sidebar - Content tagged with at least one of the same tag elements associated with the page will display.';
  $view->tag = 'fieldmain';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Promotion';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-promotion';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_promo_image';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_promo_image';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'custom_square_thumbnail';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_description';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'trim_length' => '75',
    'toggle_add_ellipses' => '1',
    'toggle_link_more' => 'More',
    'toggle_link_less' => 'Less',
  );
  /* Field: Content: Featured Links */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_link';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'if (($node = menu_get_object()) && $items = field_get_items(\'node\', $node, \'field_topic\')) {
  $tids = array();
  foreach ($items as $term) {
    $tids[] = $term[\'tid\'];
  }
  return implode(\'+\', $tids);
}';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promotion_widget' => 'promotion_widget',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Image (field_promo_image:fid) */
  $handler->display->display_options['filters']['field_promo_image_fid']['id'] = 'field_promo_image_fid';
  $handler->display->display_options['filters']['field_promo_image_fid']['table'] = 'field_data_field_promo_image';
  $handler->display->display_options['filters']['field_promo_image_fid']['field'] = 'field_promo_image_fid';
  $handler->display->display_options['filters']['field_promo_image_fid']['operator'] = 'not empty';

  /* Display: Block: Promo widget */
  $handler = $view->new_display('block', 'Block: Promo widget', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['wr_05_promo_content'] = $view;

  return $export;
}
