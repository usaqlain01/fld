<?php
/**
 * @file
 * fmnh_faq.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fmnh_faq_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'faq';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_topic',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_faq_topic_target_id']['id'] = 'field_faq_topic_target_id';
  $handler->display->display_options['relationships']['field_faq_topic_target_id']['table'] = 'field_data_field_faq_topic';
  $handler->display->display_options['relationships']['field_faq_topic_target_id']['field'] = 'field_faq_topic_target_id';
  $handler->display->display_options['relationships']['field_faq_topic_target_id']['required'] = TRUE;
  /* Field: Content: FAQ Topic */
  $handler->display->display_options['fields']['field_faq_topic']['id'] = 'field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['table'] = 'field_data_field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['field'] = 'field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['label'] = '';
  $handler->display->display_options['fields']['field_faq_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_topic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_faq_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_faq_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topic']['settings'] = array(
    'link' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_faq_topic']['field_api_classes'] = TRUE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_faq_topic_target_id';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_faq_topic_target_id';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'faq:attachment_1';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'FAQ';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_topic',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'navFaqs__item';
  $handler->display->display_options['style_options']['class'] = 'navFaqs__list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: FAQ Topic */
  $handler->display->display_options['fields']['field_faq_topic']['id'] = 'field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['table'] = 'field_data_field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['field'] = 'field_faq_topic';
  $handler->display->display_options['fields']['field_faq_topic']['label'] = '';
  $handler->display->display_options['fields']['field_faq_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_topic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_faq_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_faq_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_faq_topic']['settings'] = array(
    'link' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_faq_topic']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '#node-[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'navFaqs__link';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $export['faq'] = $view;

  return $export;
}
