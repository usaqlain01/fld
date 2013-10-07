<?php
/**
 * @file
 * department_peoples_header_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function department_peoples_header_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'department_peoples_header';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'department_peoples_header';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: People Tab Header Text */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_people_tab_header';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_people_tab_header';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'department_division_page' => 'department_division_page',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'department_division_page' => 'department_division_page',
  );

  /* Display: Block - Dept */
  $handler = $view->new_display('block', 'Block - Dept', 'block_1');
  $handler->display->display_options['block_description'] = 'People Tab Header Text - Dept';

  /* Display: Block - Div */
  $handler = $view->new_display('block', 'Block - Div', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2).\'/\'.arg(3));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'department_division_page' => 'department_division_page',
  );
  $handler->display->display_options['block_description'] = 'People Tab Header Text - Div';

  /* Display: Projects - Dept */
  $handler = $view->new_display('page', 'Projects - Dept', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Projects (field_projects) */
  $handler->display->display_options['relationships']['field_projects_nid']['id'] = 'field_projects_nid';
  $handler->display->display_options['relationships']['field_projects_nid']['table'] = 'field_data_field_projects';
  $handler->display->display_options['relationships']['field_projects_nid']['field'] = 'field_projects_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_podcast_image']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_podcast_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_subsection_homepage_image']['id'] = 'field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['table'] = 'field_data_field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['field'] = 'field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_secondary_section_image']['id'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['table'] = 'field_data_field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['field'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_secondary_section_image']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_secondary_section_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_section_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_secondary_section_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image_header']['type'] = 'styles_file_content-third';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id_1']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['max_length'] = '550';
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$argument);
$path = explode(\'/\', $internal_path);
$handler->argument = $path[1];
return TRUE;';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'explore/department/%/projects';

  /* Display: Projects Header - Dept */
  $handler = $view->new_display('attachment', 'Projects Header - Dept', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Tab Header Text */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_project_header';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_project_header';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$argument);
$path = explode(\'/\', $internal_path);
$handler->argument = $path[1];
return TRUE;';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: Projects - Div */
  $handler = $view->new_display('page', 'Projects - Div', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Projects (field_projects) */
  $handler->display->display_options['relationships']['field_projects_nid']['id'] = 'field_projects_nid';
  $handler->display->display_options['relationships']['field_projects_nid']['table'] = 'field_data_field_projects';
  $handler->display->display_options['relationships']['field_projects_nid']['field'] = 'field_projects_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_dept_div_header_image']['id'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['table'] = 'field_data_field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['field'] = 'field_dept_div_header_image';
  $handler->display->display_options['fields']['field_dept_div_header_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_dept_div_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dept_div_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dept_div_header_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_secondary_section_image']['id'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['table'] = 'field_data_field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['field'] = 'field_secondary_section_image';
  $handler->display->display_options['fields']['field_secondary_section_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_secondary_section_image']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_secondary_section_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_section_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_section_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_secondary_section_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_podcast_image']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_podcast_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_subsection_homepage_image']['id'] = 'field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['table'] = 'field_data_field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['field'] = 'field_subsection_homepage_image';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subsection_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsection_homepage_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Image Header */
  $handler->display->display_options['fields']['field_collection_image_header']['id'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['table'] = 'field_data_field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['field'] = 'field_collection_image_header';
  $handler->display->display_options['fields']['field_collection_image_header']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_collection_image_header']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_collection_image_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_collection_image_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image_header']['type'] = 'styles_file_content-third';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['type'] = 'styles_file_content-third';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Lede */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_lede';
  $handler->display->display_options['fields']['entity_id_1']['relationship'] = 'field_projects_nid';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['max_length'] = '550';
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2).\'/\'.arg(3));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$view->args[0].\'/\'.$argument);
$path = explode(\'/\', $internal_path);
$handler->argument = $path[1];
return TRUE;';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'explore/department/%/%/projects';

  /* Display: Projects Header - Div */
  $handler = $view->new_display('attachment', 'Projects Header - Div', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Tab Header Text */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_project_header';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_project_header';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.arg(2));
$path = explode(\'/\', $internal_path);
return $path[1];';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$internal_path = drupal_lookup_path(\'source\', \'explore/department/\'.$view->args[0].\'/\'.$argument);
$path = explode(\'/\', $internal_path);
$handler->argument = $path[1];
return TRUE;';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_1' => 0,
  );
  $export['department_peoples_header'] = $view;

  return $export;
}
