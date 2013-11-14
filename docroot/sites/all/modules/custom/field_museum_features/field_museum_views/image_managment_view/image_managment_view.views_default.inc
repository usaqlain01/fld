<?php
function image_managment_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'image_managment';
$view->description = 'A bulk operations view for images/files';
$view->tag = '';
$view->base_table = 'file_managed';
$view->human_name = 'image_managment';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Advanced Image Browser';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'bulk';
$handler->display->display_options['style_options']['columns'] = array(
  'entity_id_1' => 'entity_id_1',
  'filename' => 'filename',
  'entity_id' => 'entity_id',
  'title' => 'title',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'entity_id_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'filename' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'entity_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['execution_type'] = '1';
$handler->display->display_options['style_options']['display_type'] = '0';
$handler->display->display_options['style_options']['skip_confirmation'] = 0;
$handler->display->display_options['style_options']['display_result'] = 1;
$handler->display->display_options['style_options']['merge_single_action'] = 1;
$handler->display->display_options['style_options']['hide_select_all'] = 0;
/* Relationship: File Usage: Node */
$handler->display->display_options['relationships']['file_to_node']['id'] = 'file_to_node';
$handler->display->display_options['relationships']['file_to_node']['table'] = 'file_usage';
$handler->display->display_options['relationships']['file_to_node']['field'] = 'file_to_node';
$handler->display->display_options['relationships']['file_to_node']['required'] = 0;
/* Field: Fields: file */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_file';
$handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['entity_id_1']['type'] = 'styles_file_original-aspect-thumbnail';
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['label'] = 'Image Filename';
$handler->display->display_options['fields']['filename']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['filename']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['filename']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['filename']['alter']['trim'] = 0;
$handler->display->display_options['fields']['filename']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['filename']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['filename']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['filename']['alter']['html'] = 0;
$handler->display->display_options['fields']['filename']['element_label_colon'] = 1;
$handler->display->display_options['fields']['filename']['element_default_classes'] = 1;
$handler->display->display_options['fields']['filename']['hide_empty'] = 0;
$handler->display->display_options['fields']['filename']['empty_zero'] = 0;
$handler->display->display_options['fields']['filename']['link_to_file'] = 1;
/* Field: Fields: field_restricted_media_flag */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_restricted_media_flag';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = 'Restricted?';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
/* Field: Node: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'file_to_node';
$handler->display->display_options['fields']['title']['label'] = 'Used on...';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: File: Upload date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
$handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
$handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
$handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
$handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
/* Filter: Fields: field_imagecaption (field_imagecaption) - value */
$handler->display->display_options['filters']['field_imagecaption_value']['id'] = 'field_imagecaption_value';
$handler->display->display_options['filters']['field_imagecaption_value']['table'] = 'field_data_field_imagecaption';
$handler->display->display_options['filters']['field_imagecaption_value']['field'] = 'field_imagecaption_value';
$handler->display->display_options['filters']['field_imagecaption_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_imagecaption_value']['expose']['operator'] = 'field_imagecaption_value_op';
$handler->display->display_options['filters']['field_imagecaption_value']['expose']['label'] = 'Caption';
$handler->display->display_options['filters']['field_imagecaption_value']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['field_imagecaption_value']['expose']['identifier'] = 'field_imagecaption_value';
$handler->display->display_options['filters']['field_imagecaption_value']['expose']['single'] = TRUE;
/* Filter: Fields: field_restricted_media_flag (field_restricted_media_flag) */
$handler->display->display_options['filters']['field_restricted_media_flag_value']['id'] = 'field_restricted_media_flag_value';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['table'] = 'field_data_field_restricted_media_flag';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['field'] = 'field_restricted_media_flag_value';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_restricted_media_flag_value']['expose']['operator'] = 'field_restricted_media_flag_value_op';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['expose']['label'] = 'Restrictions';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['field_restricted_media_flag_value']['expose']['identifier'] = 'field_restricted_media_flag_value';
$handler->display->display_options['filters']['field_restricted_media_flag_value']['expose']['reduce'] = 0;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'image_browser_advanced');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  6 => '6',
  5 => '5',
);
$handler->display->display_options['path'] = 'admin/config/workbench/imagebrowser';
$translatables['image_managment'] = array(
  t('Defaults'),
  t('Advanced Image Browser'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort By'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Node'),
  t('file'),
  t('Image Filename'),
  t('Restricted?'),
  t('Used on...'),
  t('Upload date'),
  t('Caption'),
  t('Restrictions'),
  t('Page'),
);

$export['image_managment'] = $view;
return $export;
}
