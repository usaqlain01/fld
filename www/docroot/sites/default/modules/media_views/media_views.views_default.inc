<?php

/**
 * @file
 * Provides default views for media
 */

/**
 * Implements hook_views_default_views().
 */
function media_views_views_default_views() {

$view = new view;
$view->name = 'media_browser_files';
$view->description = 'files';
$view->tag = 'files';
$view->base_table = 'file_managed';
$view->human_name = 'Library files';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'fid' => 'fid',
  'uri' => 'uri',
  'uri_1' => 'uri_1',
  'filename' => 'filename',
  'filesize' => 'filesize',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'fid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'uri' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'uri_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'filename' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'filesize' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['order'] = 'desc';
/* Field: File: File ID */
$handler->display->display_options['fields']['fid']['id'] = 'fid';
$handler->display->display_options['fields']['fid']['table'] = 'file_managed';
$handler->display->display_options['fields']['fid']['field'] = 'fid';
$handler->display->display_options['fields']['fid']['label'] = 'ID';
$handler->display->display_options['fields']['fid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['fid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['fid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['fid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['fid']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['fid']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['fid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['fid']['alter']['html'] = 0;
$handler->display->display_options['fields']['fid']['element_label_colon'] = 1;
$handler->display->display_options['fields']['fid']['element_default_classes'] = 1;
$handler->display->display_options['fields']['fid']['hide_empty'] = 0;
$handler->display->display_options['fields']['fid']['empty_zero'] = 0;
$handler->display->display_options['fields']['fid']['link_to_file'] = 0;
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['label'] = 'not displayed';
$handler->display->display_options['fields']['uri']['exclude'] = TRUE;
$handler->display->display_options['fields']['uri']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['uri']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['uri']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['uri']['alter']['trim'] = 0;
$handler->display->display_options['fields']['uri']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['uri']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['uri']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['uri']['alter']['html'] = 0;
$handler->display->display_options['fields']['uri']['element_label_colon'] = 1;
$handler->display->display_options['fields']['uri']['element_default_classes'] = 1;
$handler->display->display_options['fields']['uri']['hide_empty'] = 0;
$handler->display->display_options['fields']['uri']['empty_zero'] = 0;
$handler->display->display_options['fields']['uri']['link_to_file'] = 0;
$handler->display->display_options['fields']['uri']['file_download_path'] = 1;
/* Field: File: Path */
$handler->display->display_options['fields']['uri_1']['id'] = 'uri_1';
$handler->display->display_options['fields']['uri_1']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri_1']['field'] = 'uri';
$handler->display->display_options['fields']['uri_1']['label'] = 'Image';
$handler->display->display_options['fields']['uri_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['uri_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['uri_1']['alter']['path'] = 'media/browser?render=media-popup&fid=[fid]';
$handler->display->display_options['fields']['uri_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['uri_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['uri_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['uri_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['uri_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['uri_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['uri_1']['element_label_colon'] = 1;
$handler->display->display_options['fields']['uri_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['uri_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['uri_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['uri_1']['link_to_file'] = 0;
$handler->display->display_options['fields']['uri_1']['file_download_path'] = 0;
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['filename']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['filename']['alter']['path'] = 'media/browser?render=media-popup&fid=[fid]';
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
$handler->display->display_options['fields']['filename']['link_to_file'] = 0;
/* Field: File: Size */
$handler->display->display_options['fields']['filesize']['id'] = 'filesize';
$handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
$handler->display->display_options['fields']['filesize']['field'] = 'filesize';
$handler->display->display_options['fields']['filesize']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['filesize']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['filesize']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['filesize']['alter']['trim'] = 0;
$handler->display->display_options['fields']['filesize']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['filesize']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['filesize']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['filesize']['alter']['html'] = 0;
$handler->display->display_options['fields']['filesize']['element_label_colon'] = 1;
$handler->display->display_options['fields']['filesize']['element_default_classes'] = 1;
$handler->display->display_options['fields']['filesize']['hide_empty'] = 0;
$handler->display->display_options['fields']['filesize']['empty_zero'] = 0;
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
$handler->display->display_options['fields']['timestamp']['date_format'] = 'raw time ago';
/* Filter: File: Name */
$handler->display->display_options['filters']['filename']['id'] = 'filename';
$handler->display->display_options['filters']['filename']['table'] = 'file_managed';
$handler->display->display_options['filters']['filename']['field'] = 'filename';
$handler->display->display_options['filters']['filename']['operator'] = 'contains';
$handler->display->display_options['filters']['filename']['exposed'] = TRUE;
$handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
$handler->display->display_options['filters']['filename']['expose']['label'] = 'File: Name';
$handler->display->display_options['filters']['filename']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';

/* Display: Search */
$handler = $view->new_display('page', 'Search', 'page_1');
$handler->display->display_options['path'] = 'media/browser/files';
$translatables['media_browser_files'] = array(
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
  t('ID'),
  t('not displayed'),
  t('Image'),
  t('media/browser?render=media-popup&fid=[fid]'),
  t('Name'),
  t('Size'),
  t('Upload date'),
  t('File: Name'),
  t('Search'),
);

  $views[$view->name] = $view;
  return $views;
}