<?php
/**
 * @file
 * our_collections_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function our_collections_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'our_collections';
  $view->description = 'Block with image and lede (pulled from Dept/Div Collections Landing content type) that links to one Dept/Div Collections Landing page.';
  $view->tag = 'widget';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Our Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All Collections';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_image_header';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_image_header';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'field-name-field-image-header';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '450';
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'field-name-field-lede';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
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
      'trim' => 1,
      'max_length' => '200',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 1,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'type' => 'text_default',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['text'] = 'learn more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View All %1 Collections';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$node = node_load(arg(1));
if ($node && !empty($node->field_dept_division_tags[LANGUAGE_NONE])) {
  $tids = array();
  foreach ($node->field_dept_division_tags[LANGUAGE_NONE] as $term) {
    $tids[] = $term[\'tid\'];
  }
  return implode(\'+\', $tids);
}';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
    'dept_div_collections_landing' => 'dept_div_collections_landing',
  );

  /* Display: View Our Collections Widget */
  $handler = $view->new_display('block', 'View Our Collections Widget', 'main_block');
  $export['our_collections'] = $view;

  return $export;
}
