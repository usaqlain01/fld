<?php
/**
 * @file
 * homepage_centerstage_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_centerstage_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_centerstage';
  $view->description = 'Homepage centerstage media files view';
  $view->tag = '';
  $view->base_table = 'file_managed';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: Section Reference (field_imagefrontref) */
  $handler->display->display_options['relationships']['field_imagefrontref_nid']['id'] = 'field_imagefrontref_nid';
  $handler->display->display_options['relationships']['field_imagefrontref_nid']['table'] = 'field_data_field_imagefrontref';
  $handler->display->display_options['relationships']['field_imagefrontref_nid']['field'] = 'field_imagefrontref_nid';
  $handler->display->display_options['relationships']['field_imagefrontref_nid']['required'] = TRUE;
  /* Field: File: Homepage Image Link */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_homepage_image_link';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_homepage_image_link';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_homepage_image_link';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['entity_id_3']['type'] = 'link_plain';
  $handler->display->display_options['fields']['entity_id_3']['group_column'] = 'url';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_file';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['path'] = '[entity_id_3]';
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = FALSE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_imagename';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_imagename';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_description';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Field: Homepage/Section Front Sort Order (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_imagefrontref_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_page' => 'home_page',
  );

  /* Display: Block: Homepage centerstage */
  $handler = $view->new_display('block', 'Block: Homepage centerstage', 'block_1');
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
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['homepage_centerstage'] = $view;

  return $export;
}
