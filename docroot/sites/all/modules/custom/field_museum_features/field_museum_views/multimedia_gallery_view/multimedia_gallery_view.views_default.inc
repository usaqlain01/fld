<?php
function multimedia_gallery_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'multimedia_gallery';
$view->description = 'This view creates the general multimedia gallery under \'Explore and Learn\'';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['type']['alter']['trim'] = 0;
$handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['type']['alter']['html'] = 0;
$handler->display->display_options['fields']['type']['hide_empty'] = 0;
$handler->display->display_options['fields']['type']['empty_zero'] = 0;
$handler->display->display_options['fields']['type']['link_to_node'] = 0;
$handler->display->display_options['fields']['type']['machine_name'] = 1;
/* Field: Node: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['path']['alter']['text'] = '<A href=[path]>[entity_id]</a>';
$handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['path']['alter']['trim'] = 0;
$handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['path']['alter']['html'] = 0;
$handler->display->display_options['fields']['path']['hide_empty'] = 0;
$handler->display->display_options['fields']['path']['empty_zero'] = 0;
$handler->display->display_options['fields']['path']['absolute'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['link_class'] = '[type]';
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['link_class'] = '[type]-thumb';
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'custom_content-third';
/* Field: Node: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Sort criterion: Node: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
$handler->display->display_options['filters']['type_1']['expose']['use_operator'] = 0;
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['use_operator'] = 0;
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Media Type';
$handler->display->display_options['filters']['type']['expose']['use_operator'] = 0;
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
/* Filter: Node: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'not';
$handler->display->display_options['filters']['title']['value'] = 'Events';
/* Filter: Node: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'not';
$handler->display->display_options['filters']['title_1']['value'] = 'Press';

/* Display: Gallery Page Display */
$handler = $view->new_display('page', 'Gallery Page Display', 'gallery_page_display');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Multimedia Gallery';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = FALSE;
$handler->display->display_options['header']['area']['content'] = 'Learn more about the Field Museum\'s collections, exhibits, events, and archives. Explore our image, video and podcast repository.';
$handler->display->display_options['path'] = 'about/gallery';
$handler->display->display_options['menu']['title'] = 'Multimedia Gallery';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'explore/gallery/feed';
$handler->display->display_options['displays'] = array(
  'gallery_page_display' => 'gallery_page_display',
  'default' => 0,
);
$translatables['multimedia_gallery'] = array(
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
  t('<A href=[path]>[entity_id]</a>'),
  t('[path]'),
  t('Media Type'),
  t('Gallery Page Display'),
  t('Multimedia Gallery'),
  t('Learn more about the Field Museum\'s collections, exhibits, events, and archives. Explore our image, video and podcast repository.'),
  t('Feed'),
);

$export[multimedia_gallery] = $view;
return $export;
}