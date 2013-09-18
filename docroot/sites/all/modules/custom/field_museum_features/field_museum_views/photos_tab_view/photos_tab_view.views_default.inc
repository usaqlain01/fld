<?php
function photos_tab_view_views_default_views() {
$export = array();
$view = new view;
$view->name = 'photos_tab';
$view->description = 'Contents of the \'photos\' tab on Photo Gallery and Section Front node types.';
$view->tag = '';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['style_options']['fill_single_line'] = 1;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Fields: file */
$handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
$handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_file';
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
$handler->display->display_options['fields']['entity_id_1']['type'] = 'styles_file_square_thumbnail';
/* Field: Fields: field_imagename */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_imagename';
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
$handler->display->display_options['fields']['fid']['label'] = '';
$handler->display->display_options['fields']['fid']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['fid']['alter']['text'] = 'edit';
$handler->display->display_options['fields']['fid']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['fid']['alter']['path'] = 'media/[fid]/edit?destination=node/!1/photos';
$handler->display->display_options['fields']['fid']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['fid']['alter']['trim'] = 0;
$handler->display->display_options['fields']['fid']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['fid']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['fid']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['fid']['alter']['html'] = 0;
$handler->display->display_options['fields']['fid']['hide_empty'] = 0;
$handler->display->display_options['fields']['fid']['empty_zero'] = 0;
$handler->display->display_options['fields']['fid']['link_to_file'] = 0;
/* Sort criterion: File: Upload date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
$handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
$handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
/* Sort criterion: Fields: field_imagename (field_imagename) - format */
$handler->display->display_options['sorts']['field_imagename_format']['id'] = 'field_imagename_format';
$handler->display->display_options['sorts']['field_imagename_format']['table'] = 'field_data_field_imagename';
$handler->display->display_options['sorts']['field_imagename_format']['field'] = 'field_imagename_format';
$handler->display->display_options['sorts']['field_imagename_format']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_imagename_format']['expose']['label'] = 'Name';
/* Argument: Fields: field_imagefrontref (field_imagefrontref) - nid */
$handler->display->display_options['arguments']['field_imagefrontref_nid']['id'] = 'field_imagefrontref_nid';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['table'] = 'field_data_field_imagefrontref';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['field'] = 'field_imagefrontref_nid';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_imagefrontref_nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_imagefrontref_nid']['not'] = 0;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'photo_gallery');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are not yet any photos associated with this gallery.';
$handler->display->display_options['empty']['area']['format'] = '1';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Argument: Fields: field_imagegalleryref (field_imagegalleryref) - nid */
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['id'] = 'field_imagegalleryref_nid';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['table'] = 'field_data_field_imagegalleryref';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['field'] = 'field_imagegalleryref_nid';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['style_plugin'] = 'default_summary';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['field_imagegalleryref_nid']['not'] = 0;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'section_front');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are not yet any photos associated with this section front.';
$handler->display->display_options['empty']['area']['format'] = '1';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'home_page');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are not yet any photos associated with this home page.';
$handler->display->display_options['empty']['area']['format'] = '1';

$export[photos_tab] = $view;
return $export;
}