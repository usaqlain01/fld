<?php
function microsite_widgets_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'microsite_widgets';
$view->description = 'Feeds of related content widgets for microsites.';
$view->tag = 'fieldmain';
$view->base_table = 'node';
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Related Content';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'GROUPING FIELD';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nid']['alter']['html'] = 0;
$handler->display->display_options['fields']['nid']['hide_empty'] = 0;
$handler->display->display_options['fields']['nid']['empty_zero'] = 0;
/* Field: Node: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = 'RSS TITLE';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
/* Field: Node: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = 'RSS LINK';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['path']['alter']['trim'] = 0;
$handler->display->display_options['fields']['path']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['path']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['path']['alter']['html'] = 0;
$handler->display->display_options['fields']['path']['hide_empty'] = 0;
$handler->display->display_options['fields']['path']['empty_zero'] = 0;
$handler->display->display_options['fields']['path']['absolute'] = 1;
/* Field: Node: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'RSS DATE';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['created']['alter']['trim'] = 0;
$handler->display->display_options['fields']['created']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['created']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['created']['alter']['html'] = 0;
$handler->display->display_options['fields']['created']['hide_empty'] = 0;
$handler->display->display_options['fields']['created']['empty_zero'] = 0;
/* Field: Node: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Fields: field_image */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['entity_id']['type'] = 'custom_microsite-widgets';
/* Sort criterion: Node: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Node: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Argument: Taxonomy: Term */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'empty';
$handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['validate_type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
$handler->display->display_options['arguments']['name']['validate_options']['transform'] = '1';
$handler->display->display_options['arguments']['name']['glossary'] = 0;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = 1;
$handler->display->display_options['arguments']['name']['add_table'] = 1;
$handler->display->display_options['arguments']['name']['require_value'] = 0;
/* Argument: Node: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_action'] = 'empty';
$handler->display->display_options['arguments']['type']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['type']['title'] = '%1 Related Content: %2';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
/* Filter: Node: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter: Node: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'exhibit' => 'exhibit',
  'individual_collection' => 'individual_collection',
  'photo_gallery' => 'photo_gallery',
  'podcast' => 'podcast',
  'video' => 'video',
);
/* Filter: Taxonomy: Vocabulary machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'exhibit' => 'exhibit',
);

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['style_options']['mission_description'] = FALSE;
$handler->display->display_options['row_plugin'] = 'feed_fields';
$handler->display->display_options['row_options']['hide_empty'] = 0;
$handler->display->display_options['row_options']['rss_elements'] = array(
  'title' => 'title_1',
  'link' => 'path',
  'publish_date' => 'created',
  'guid' => 'path',
);
$handler->display->display_options['path'] = 'microsite-widgets';
$handler->display->display_options['sitename_title'] = 0;

$export[microsite_widgets] = $view;
return $export;
}