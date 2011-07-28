<?php
$view = new view;
$view->name = 'workbench_files';
$view->description = 'A list of all the files uploaded to the site, and nodes they appear on.';
$view->tag = 'Workbench';
$view->base_table = 'file_managed';
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'filemime' => 'filemime',
  'filename' => 'filename',
  'uri' => 'uri',
  'filesize' => 'filesize',
  'timestamp' => 'timestamp',
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'filemime' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'filename' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'uri' => array(
    'sortable' => 0,
    'align' => '',
    'separator' => '',
  ),
  'filesize' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'timestamp' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
/* Field: File: File ID */
$handler->display->display_options['fields']['fid']['id'] = 'fid';
$handler->display->display_options['fields']['fid']['table'] = 'file_managed';
$handler->display->display_options['fields']['fid']['field'] = 'fid';
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
$handler->display->display_options['fields']['fid']['link_to_file'] = 0;
/* Field: File: Mime type */
$handler->display->display_options['fields']['filemime']['id'] = 'filemime';
$handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
$handler->display->display_options['fields']['filemime']['field'] = 'filemime';
$handler->display->display_options['fields']['filemime']['label'] = 'Type';
$handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
$handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
$handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
$handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
$handler->display->display_options['fields']['filemime']['link_to_file'] = 0;
$handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
/* Field: Fields: file */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_file';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = 'Thumbnail';
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
$handler->display->display_options['fields']['entity_id']['type'] = 'styles_file_square_thumbnail';
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['filename']['alter']['text'] = '[filemime] [filename]';
$handler->display->display_options['fields']['filename']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['filename']['alter']['path'] = 'media/[fid]';
$handler->display->display_options['fields']['filename']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['filename']['alter']['trim'] = 0;
$handler->display->display_options['fields']['filename']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['filename']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['filename']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['filename']['alter']['html'] = 0;
$handler->display->display_options['fields']['filename']['hide_empty'] = 0;
$handler->display->display_options['fields']['filename']['empty_zero'] = 0;
$handler->display->display_options['fields']['filename']['link_to_file'] = 0;
/* Field: File: Size */
$handler->display->display_options['fields']['filesize']['id'] = 'filesize';
$handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
$handler->display->display_options['fields']['filesize']['field'] = 'filesize';
/* Field: File: Upload date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
/* Sort criterion: File: Upload date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter: File: Name */
$handler->display->display_options['filters']['filename']['id'] = 'filename';
$handler->display->display_options['filters']['filename']['table'] = 'file_managed';
$handler->display->display_options['filters']['filename']['field'] = 'filename';
$handler->display->display_options['filters']['filename']['operator'] = 'contains';
$handler->display->display_options['filters']['filename']['exposed'] = TRUE;
$handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
$handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
$handler->display->display_options['filters']['filename']['case'] = 1;
/* Filter: Fields: field_imagename (field_imagename) - format */
$handler->display->display_options['filters']['field_imagename_format']['id'] = 'field_imagename_format';
$handler->display->display_options['filters']['field_imagename_format']['table'] = 'field_data_field_imagename';
$handler->display->display_options['filters']['field_imagename_format']['field'] = 'field_imagename_format';
$handler->display->display_options['filters']['field_imagename_format']['operator'] = 'contains';
$handler->display->display_options['filters']['field_imagename_format']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_imagename_format']['expose']['operator'] = 'field_imagename_format_op';
$handler->display->display_options['filters']['field_imagename_format']['expose']['label'] = 'Image name';
$handler->display->display_options['filters']['field_imagename_format']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['field_imagename_format']['expose']['identifier'] = 'image_name';
$handler->display->display_options['filters']['field_imagename_format']['case'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'admin/config/workbench/page/files';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'File List';
$handler->display->display_options['menu']['description'] = 'List of all files uploaded to this site.';
$handler->display->display_options['menu']['weight'] = '0';
