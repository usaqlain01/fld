<?php
/**
 * @file
 * photo_gallery_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function photo_gallery_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = 'A gallery of the photos on a photo gallery';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'entity_id_1' => 0,
    'entity_id' => 0,
    'entity_id_3' => 0,
    'rendered' => 0,
    'rendered_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'rendered_1' => 'rendered_1',
    'entity_id_1' => 0,
    'entity_id' => 0,
    'entity_id_3' => 0,
    'rendered' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: Photo Gallery Reference (field_imagegalleryref) */
  $handler->display->display_options['relationships']['field_imagegalleryref_nid']['id'] = 'field_imagegalleryref_nid';
  $handler->display->display_options['relationships']['field_imagegalleryref_nid']['table'] = 'field_data_field_imagegalleryref';
  $handler->display->display_options['relationships']['field_imagegalleryref_nid']['field'] = 'field_imagegalleryref_nid';
  $handler->display->display_options['relationships']['field_imagegalleryref_nid']['label'] = 'gallery';
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_imagename';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_imagename';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_imagecaption';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_imagecaption';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  /* Field: File: More Information */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_more_info_link';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_more_info_link';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['type'] = 'custom_link_field_url';
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered_1']['id'] = 'rendered_1';
  $handler->display->display_options['fields']['rendered_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered_1']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_1']['file_view_mode'] = 'preview';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_imagegalleryref_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';

  /* Display: Gallery */
  $handler = $view->new_display('block', 'Gallery', 'photo_gallery');
  $export['photo_gallery'] = $view;

  return $export;
}
