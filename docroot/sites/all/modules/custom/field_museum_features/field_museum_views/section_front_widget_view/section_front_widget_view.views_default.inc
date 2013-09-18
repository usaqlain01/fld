<?php
function section_front_widget_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'section_front_widget';
$view->description = '';
$view->tag = '';
$view->base_table = 'file_managed';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['total_pages'] = '1';
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager'] = 'bottom';
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager_fields'] = array(
  'entity_id_3' => 0,
  'entity_id_2' => 0,
  'entity_id' => 0,
  'entity_id_1' => 0,
  'fid' => 0,
);
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['controls'] = 'top';
$handler->display->display_options['style_options']['views_slideshow_cycle']['controls_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['slide_counter'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['slide_counter_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_timeout'] = '4000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_continuous'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_speed'] = '1000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_next'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_prev'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_pager'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_before'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_after'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_end'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_easing'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_shuffle'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_sync'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_random'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_fit'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_pause'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_autostop'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_cleartype'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_nowrap'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_rev'] = '0';
$handler->display->display_options['style_options']['mode'] = 'views_slideshow_cycle';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'entity_id_1' => 'entity_id_1',
);
$handler->display->display_options['row_options']['hide_empty'] = 0;
/* Relationship: Fields: field_imagefrontref (field_imagefrontref) - nid */
$handler->display->display_options['relationships']['field_imagefrontref_nid']['id'] = 'field_imagefrontref_nid';
$handler->display->display_options['relationships']['field_imagefrontref_nid']['table'] = 'field_data_field_imagefrontref';
$handler->display->display_options['relationships']['field_imagefrontref_nid']['field'] = 'field_imagefrontref_nid';
$handler->display->display_options['relationships']['field_imagefrontref_nid']['label'] = 'section front';
$handler->display->display_options['relationships']['field_imagefrontref_nid']['required'] = 0;
/* Field: Fields: file */
$handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
$handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_file';
$handler->display->display_options['fields']['entity_id_3']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_3']['label'] = '';
$handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_3']['type'] = 'styles_file_content-full';
/* Field: Fields: field_imagename */
$handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
$handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_imagename';
$handler->display->display_options['fields']['entity_id_2']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_2']['label'] = '';
$handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
/* Field: Fields: field_imageactionlinks */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_imageactionlinks';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['label'] = '';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['group_column'] = 'attributes';
/* Field: Fields: field_description */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_description';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
/* Field: File: File ID */
$handler->display->display_options['fields']['fid']['id'] = 'fid';
$handler->display->display_options['fields']['fid']['table'] = 'file_managed';
$handler->display->display_options['fields']['fid']['field'] = 'fid';
$handler->display->display_options['fields']['fid']['group_type'] = 'count';
$handler->display->display_options['fields']['fid']['label'] = 'THIS FIELD IS USED TO MAKE IT DISTINCT.';
$handler->display->display_options['fields']['fid']['exclude'] = TRUE;
$handler->display->display_options['fields']['fid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['fid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['fid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['fid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['fid']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['fid']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['fid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['fid']['alter']['html'] = 0;
$handler->display->display_options['fields']['fid']['hide_empty'] = 0;
$handler->display->display_options['fields']['fid']['empty_zero'] = 0;
/* Sort criterion: Fields: field_weight (field_weight) */
$handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
$handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
$handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
/* Argument: Node: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_imagefrontref_nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;

/* Display: Section Front Block */
$handler = $view->new_display('block', 'Section Front Block', 'section_front');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager'] = 'top';
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager_fields'] = array(
  'entity_id_3' => 0,
  'entity_id_2' => 0,
  'entity_id_1' => 0,
  'entity_id' => 0,
  'fid' => 0,
);
$handler->display->display_options['style_options']['views_slideshow_cycle']['pager_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['controls'] = 'top';
$handler->display->display_options['style_options']['views_slideshow_cycle']['controls_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['slide_counter'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['slide_counter_weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_timeout'] = '4000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_continuous'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_speed'] = '1000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_next'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_prev'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_pager'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_before'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_after'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_end'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_easing'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_shuffle'] = '';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_sync'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_random'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_fit'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_pause'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_autostop'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_cleartype'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_nowrap'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_rev'] = '0';
$handler->display->display_options['style_options']['mode'] = 'views_slideshow_cycle';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'entity_id_1' => 'entity_id_1',
);
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$translatables['section_front_widget'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('section front'),
  t('THIS FIELD IS USED TO MAKE IT DISTINCT.'),
  t('All'),
  t('Section Front Block'),
);

$export[section_front_widget] = $view;
return $export;
}