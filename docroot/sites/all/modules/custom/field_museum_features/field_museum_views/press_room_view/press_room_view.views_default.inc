<?php
/**
 * @file
 * press_room_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_room_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_room';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Press Room';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';

  /* Display: Press Release Archives */
  $handler = $view->new_display('page', 'Press Release Archives', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Release Archives';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Field Museum Exhibitions';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    461 => '461',
    406 => '406',
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  $handler->display->display_options['path'] = 'about/press/archives';

  /* Display: Attachment: Press Releases by Year */
  $handler = $view->new_display('attachment', 'Attachment: Press Releases by Year', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases by Year';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'created';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Press Releases by Year';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    461 => '461',
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Buzzworthy Topics (Media) */
  $handler = $view->new_display('page', 'Buzzworthy Topics (Media)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buzzworthy Topics';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Museum Media Alerts';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Check back later for updates!';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    806 => '806',
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_3']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_3']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_3']['value'] = array(
    461 => '461',
  );
  $handler->display->display_options['filters']['tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['tid_3']['vocabulary'] = 'topic';
  $handler->display->display_options['path'] = 'about/press/buzzworthy';

  /* Display: Attachment: Buzzworthy Topics (Visitors) */
  $handler = $view->new_display('attachment', 'Attachment: Buzzworthy Topics (Visitors)', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Articles of Interest to Our Visitors';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    295 => '295',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    806 => '806',
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_3']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_3']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_3']['value'] = array(
    461 => '461',
  );
  $handler->display->display_options['filters']['tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['tid_3']['vocabulary'] = 'topic';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Exhibition Press Releases */
  $handler = $view->new_display('page', 'Exhibition Press Releases', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibition Press Releases';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([entity_id])';
  /* Field: Content: Exhibition Type Tags */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_exhibition_type_tags';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '[entity_id_1] Exhibitions';
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    406 => '406',
    676 => '676',
  );
  $handler->display->display_options['filters']['tid_2']['group'] = 1;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Exhibition Type Tags (field_exhibition_type_tags) */
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['id'] = 'field_exhibition_type_tags_tid';
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['table'] = 'field_data_field_exhibition_type_tags';
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['field'] = 'field_exhibition_type_tags_tid';
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['value'] = array(
    117 => '117',
    118 => '118',
  );
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['vocabulary'] = 'exhibit_type';
  $handler->display->display_options['filters']['field_exhibition_type_tags_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_3']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_3']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_3']['value'] = array(
    461 => '461',
  );
  $handler->display->display_options['filters']['tid_3']['group'] = 1;
  $handler->display->display_options['filters']['tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['tid_3']['vocabulary'] = 'topic';
  $handler->display->display_options['path'] = 'about/press/exhibitions';

  /* Display: Scientific Releases */
  $handler = $view->new_display('page', 'Scientific Releases', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Scientific Releases';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'created';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    746 => '746',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    108 => '108',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'department_division';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['operator'] = 'and';
  $handler->display->display_options['filters']['tid_2']['value'] = array(
    676 => '676',
    20 => '20',
  );
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_3']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_3']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_3']['value'] = array(
    461 => '461',
  );
  $handler->display->display_options['filters']['tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['tid_3']['vocabulary'] = 'topic';
  $handler->display->display_options['path'] = 'about/press/science';
  $export['press_room'] = $view;

  return $export;
}
