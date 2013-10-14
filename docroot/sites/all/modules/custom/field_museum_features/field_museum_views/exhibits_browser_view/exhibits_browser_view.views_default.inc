<?php
/**
 * @file
 * exhibits_browser_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibits_browser_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibits_browser';
  $view->description = 'Based on Single Column List View';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'From Evolving Planet to the Ancient Americas, there are so many exciting reasons to visit the Field Museum. Learn more below.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Content: Exhibition Type Tags (field_exhibition_type_tags) */
  $handler->display->display_options['relationships']['field_exhibition_type_tags_tid']['id'] = 'field_exhibition_type_tags_tid';
  $handler->display->display_options['relationships']['field_exhibition_type_tags_tid']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['relationships']['field_exhibition_type_tags_tid']['field'] = 'field_exhibition_type_tags_tid';
  /* Field: Content: Branding Image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'field-name-field-branding-image';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'image_style' => 'original-aspect-thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* Field: Content: Exhibition Type Tags */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_exhibition_type_tags (hidden)';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_enddate (hidden)';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['text'] = '[entity_id_3]';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => '\\t\\o M j, Y',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '<div class="exhibit-type-[entity_id_4]"><div class="show-dates">[entity_id_2] [entity_id_3]</div><div class="show-text">[entity_id_4] Exhibition</div></div>';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => 'M j, Y',
  );
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'field-name-field-lede';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_exhibition_type_tags_tid';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  /* Sort criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['sorts']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['sorts']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['sorts']['field_enddate_value']['field'] = 'field_enddate_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibit' => 'exhibit',
  );
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['filters']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['filters']['field_enddate_value']['field'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_enddate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_enddate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Start Date (field_startdate) */
  $handler->display->display_options['filters']['field_startdate_value']['id'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['filters']['field_startdate_value']['field'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_startdate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_startdate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    117 => '117',
    118 => '118',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'exhibit_type';
  $handler->display->display_options['filters']['tid_2']['hierarchy'] = 1;

  /* Display: Nodequeue Current */
  $handler = $view->new_display('page', 'Nodequeue Current', 'page_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'From Evolving Planet to the Ancient Americas, there are so many exciting reasons to visit the Field Museum. Learn more below.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'current';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'exhibits' => 'exhibits',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Branding Image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'field-name-field-branding-image';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'image_style' => 'original-aspect-thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* Field: Content: Exhibition Type Tags */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_exhibition_type_tags (hidden)';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_enddate (hidden)';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['text'] = '[entity_id_3]';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_3']['element_class'] = 'field-name-field-enddate';
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => '\\t\\o M j, Y',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '<div class="exhibit-type-[entity_id_4]"><div class="show-dates">[entity_id_2] [entity_id_3]</div><div class="show-text">[entity_id_4] Exhibition</div></div>';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_2']['element_class'] = 'field-name-field-startdate';
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => 'M j, Y',
  );
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'field-name-field-lede';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  /* Filter criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['filters']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['filters']['field_enddate_value']['field'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_enddate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_enddate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Start Date (field_startdate) */
  $handler->display->display_options['filters']['field_startdate_value']['id'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['filters']['field_startdate_value']['field'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_startdate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_startdate_value']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'happening/exhibits/browse/current';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Current Exhibitions';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Exhibits';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'devel';

  /* Display: Past Exhibitions */
  $handler = $view->new_display('page', 'Past Exhibitions', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Revisit the incredible array of exhibits previously shown at the FIeld Museum. Learn more below.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['sorts']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['sorts']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['sorts']['field_enddate_value']['field'] = 'field_enddate_value';
  $handler->display->display_options['sorts']['field_enddate_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibit' => 'exhibit',
  );
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['filters']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['filters']['field_enddate_value']['field'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_enddate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_enddate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Start Date (field_startdate) */
  $handler->display->display_options['filters']['field_startdate_value']['id'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['filters']['field_startdate_value']['field'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_startdate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_startdate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    118 => '118',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'exhibit_type';
  $handler->display->display_options['filters']['tid_2']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'happening/exhibits/browse/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Past Exhibitions';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['tab_options']['title'] = 'Exhibitions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Coming Soon */
  $handler = $view->new_display('page', 'Coming Soon', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Mark your calendars for the newest exhibits opening at the FIeld Museum. Learn more below.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Start Date (field_startdate) */
  $handler->display->display_options['sorts']['field_startdate_value']['id'] = 'field_startdate_value';
  $handler->display->display_options['sorts']['field_startdate_value']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['sorts']['field_startdate_value']['field'] = 'field_startdate_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibit' => 'exhibit',
  );
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: End Date (field_enddate) */
  $handler->display->display_options['filters']['field_enddate_value']['id'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['filters']['field_enddate_value']['field'] = 'field_enddate_value';
  $handler->display->display_options['filters']['field_enddate_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_enddate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_enddate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Start Date (field_startdate) */
  $handler->display->display_options['filters']['field_startdate_value']['id'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['filters']['field_startdate_value']['field'] = 'field_startdate_value';
  $handler->display->display_options['filters']['field_startdate_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_startdate_value']['value']['value'] = 'now';
  $handler->display->display_options['filters']['field_startdate_value']['value']['type'] = 'offset';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    117 => '117',
    118 => '118',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'exhibit_type';
  $handler->display->display_options['filters']['tid_2']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'happening/exhibits/browse/coming-soon';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coming Soon';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'happening/exhibits/browse/rss';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_1' => 0,
    'page_4' => 0,
  );

  /* Display: Current Exhibitions */
  $handler = $view->new_display('page', 'Current Exhibitions', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'From Gold to the Ancient Americas, there are so many reasons to visit the Field Museum. Learn more below:';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'custom_square_thumbnail';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
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
    'type' => 'media_original',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* Field: Content: Exhibition Type Tags */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_exhibition_type_tags (hidden)';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_enddate (hidden)';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['text'] = '[entity_id_3]';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => '\\t\\o M j, Y',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '<div class="exhibit-type-[entity_id_4]"><div class="show-dates">[entity_id_2] [entity_id_3]</div><div class="show-text">[entity_id_4] Exhibition</div></div>';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => 'M j, Y',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Recommended for';
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Topics';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = TRUE;
  $handler->display->display_options['path'] = 'happening/exhibits/browse/current';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Current Exhibitions';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['title'] = 'Exhibitions';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Current Exhibitions */
  $handler = $view->new_display('page', 'Current Exhibitions', 'page_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'From Evolving Planet to the Ancient Americas, there are so many exciting reasons to visit the Field Museum. Learn more below.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Branding Image */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_branding_image';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'image_style' => 'original-aspect-thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* Field: Content: Exhibition Type Tags */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_exhibition_type_tags (hidden)';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_enddate';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_enddate (hidden)';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['text'] = '[entity_id_3]';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => '\\t\\o M j, Y',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_startdate';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = '<div class="exhibit-type-[entity_id_4]"><div class="show-dates">[entity_id_2] [entity_id_3]</div><div class="show-text">[entity_id_4] Exhibition</div></div>';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'format_option' => 'custom',
    'format_custom_string' => 'M j, Y',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Recommended for';
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Topics';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = TRUE;
  $handler->display->display_options['path'] = 'happening/exhibits/browse';
  $handler->display->display_options['menu']['title'] = 'Current Exhibitions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['title'] = 'Exhibitions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['exhibits_browser'] = $view;

  return $export;
}
