<?php
/**
 * @file
 * fmnh_program.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fmnh_program_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Programs (Teacher professional development)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Educators',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '16',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'View: Programs: Filtered list of promos',
        'keyword' => 'view',
        'name' => 'view_from_argument:programs-ctools_context_1',
        'context' => array(
          0 => 'context_entity:taxonomy_term_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'program' => 'program',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:program:field_audience',
          'settings' => array(
            'field_audience' => array(
              'und' => array(
                0 => array(
                  'target_id' => '16',
                ),
              ),
            ),
            'field_audience_target_id' => array(
              16 => '16',
              11 => NULL,
              21 => NULL,
              31 => NULL,
              6 => NULL,
              26 => NULL,
              1436 => NULL,
              1451 => NULL,
              1456 => NULL,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'c4b';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content js--stickyParent',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '84c27369-f52d-4df8-addb-261ddaed260f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ade04418-6395-4302-84c8-0989233e2c14';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ade04418-6395-4302-84c8-0989233e2c14';
    $display->content['new-ade04418-6395-4302-84c8-0989233e2c14'] = $pane;
    $display->panels['main'][0] = 'new-ade04418-6395-4302-84c8-0989233e2c14';
    $pane = new stdClass();
    $pane->pid = 'new-267c0bfa-7fc1-4363-badc-ba0b10752492';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Further Exploration',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'explore__heading',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'explore',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '267c0bfa-7fc1-4363-badc-ba0b10752492';
    $display->content['new-267c0bfa-7fc1-4363-badc-ba0b10752492'] = $pane;
    $display->panels['main'][1] = 'new-267c0bfa-7fc1-4363-badc-ba0b10752492';
    $pane = new stdClass();
    $pane->pid = 'new-be2c9f7f-fbf5-4742-9a47-f37bd48b6587';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => NULL,
      'use_fields' => NULL,
      'fields' => NULL,
      'context' => 'relationship_view_from_argument:programs-ctools_context_1_1',
      'override_title' => 1,
      'override_title_text' => 'Other Programs',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'be2c9f7f-fbf5-4742-9a47-f37bd48b6587';
    $display->content['new-be2c9f7f-fbf5-4742-9a47-f37bd48b6587'] = $pane;
    $display->panels['main'][2] = 'new-be2c9f7f-fbf5-4742-9a47-f37bd48b6587';
    $pane = new stdClass();
    $pane->pid = 'new-66258765-b9d3-4c9f-b781-7c93eea79944';
    $pane->panel = 'nav';
    $pane->type = 'node_content_arbitrary';
    $pane->subtype = 'node_content_arbitrary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'property_path' => 'content[links][sharing]',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66258765-b9d3-4c9f-b781-7c93eea79944';
    $display->content['new-66258765-b9d3-4c9f-b781-7c93eea79944'] = $pane;
    $display->panels['nav'][0] = 'new-66258765-b9d3-4c9f-b781-7c93eea79944';
    $pane = new stdClass();
    $pane->pid = 'new-526e0081-a46d-401e-b954-2d49e55d8a81';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => 'section',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'navSection',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '526e0081-a46d-401e-b954-2d49e55d8a81';
    $display->content['new-526e0081-a46d-401e-b954-2d49e55d8a81'] = $pane;
    $display->panels['nav'][1] = 'new-526e0081-a46d-401e-b954-2d49e55d8a81';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ade04418-6395-4302-84c8-0989233e2c14';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Programs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'program' => 'program',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'c2c';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content js--stickyParent',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '84c27369-f52d-4df8-addb-261ddaed260f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ade04418-6395-4302-84c8-0989233e2c14';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ade04418-6395-4302-84c8-0989233e2c14';
    $display->content['new-ade04418-6395-4302-84c8-0989233e2c14'] = $pane;
    $display->panels['main'][0] = 'new-ade04418-6395-4302-84c8-0989233e2c14';
    $pane = new stdClass();
    $pane->pid = 'new-267c0bfa-7fc1-4363-badc-ba0b10752492';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Further Exploration',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'explore__heading',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'explore',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '267c0bfa-7fc1-4363-badc-ba0b10752492';
    $display->content['new-267c0bfa-7fc1-4363-badc-ba0b10752492'] = $pane;
    $display->panels['main'][1] = 'new-267c0bfa-7fc1-4363-badc-ba0b10752492';
    $pane = new stdClass();
    $pane->pid = 'new-66258765-b9d3-4c9f-b781-7c93eea79944';
    $pane->panel = 'nav';
    $pane->type = 'node_content_arbitrary';
    $pane->subtype = 'node_content_arbitrary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'property_path' => 'content[links][sharing]',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66258765-b9d3-4c9f-b781-7c93eea79944';
    $display->content['new-66258765-b9d3-4c9f-b781-7c93eea79944'] = $pane;
    $display->panels['nav'][0] = 'new-66258765-b9d3-4c9f-b781-7c93eea79944';
    $pane = new stdClass();
    $pane->pid = 'new-526e0081-a46d-401e-b954-2d49e55d8a81';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => 'section',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'navSection',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '526e0081-a46d-401e-b954-2d49e55d8a81';
    $display->content['new-526e0081-a46d-401e-b954-2d49e55d8a81'] = $pane;
    $display->panels['nav'][1] = 'new-526e0081-a46d-401e-b954-2d49e55d8a81';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ade04418-6395-4302-84c8-0989233e2c14';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_program_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'field_trip_programs_filtered';
  $page->task = 'page';
  $page->admin_title = 'Field trip programs';
  $page->admin_description = '';
  $page->path = 'educators/field-trip-programs/%term';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Field trip programs',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Grade level (tid)',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          16 => '16',
          1 => 0,
          6 => 0,
          11 => 0,
          26 => 0,
          36 => 0,
          41 => 0,
          46 => 0,
          51 => 0,
          31 => 0,
          21 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_field_trip_programs_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'field_trip_programs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'filtered by grade level',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'View: Field trip programs',
        'keyword' => 'view',
        'name' => 'view_from_argument:field_trip_programs-ctools_context_1',
        'context' => array(
          0 => 'argument_term_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l6a';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Field Trip Programs for %term:name';
  $display->uuid = '29dae451-7137-44fd-a6bc-fd5eb79071ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'relationship_view_from_argument:field_trip_programs-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
    $display->content['new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0'] = $pane;
    $display->panels['main'][0] = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
    $pane = new stdClass();
    $pane->pid = 'new-7480f094-23af-4ffa-8c1d-10da8efcc047';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => 'section',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'navSection',
          'attributes' => array(
            'role' => array(
              'enabled' => 1,
              'value' => 'navigation',
            ),
          ),
          'attributes_array' => array(
            'role' => 'navigation',
          ),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7480f094-23af-4ffa-8c1d-10da8efcc047';
    $display->content['new-7480f094-23af-4ffa-8c1d-10da8efcc047'] = $pane;
    $display->panels['nav'][0] = 'new-7480f094-23af-4ffa-8c1d-10da8efcc047';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['field_trip_programs_filtered'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs';
  $page->task = 'page';
  $page->admin_title = 'Programs';
  $page->admin_description = '';
  $page->path = 'at-the-field/programs';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Programs',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_programs_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'programs';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'unfiltered',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Programs: Active programs',
        'keyword' => 'view',
        'name' => 'view:programs-ctools_context_2',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l6';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'top' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Programs';
  $display->uuid = 'e5c22d08-7786-468b-b8ca-63fadd07acaa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:programs-ctools_context_2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
    $display->content['new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265'] = $pane;
    $display->panels['main'][0] = 'new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
    $pane = new stdClass();
    $pane->pid = 'new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => 'section',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'navSection',
          'attributes' => array(
            'role' => array(
              'enabled' => 1,
              'value' => 'navigation',
            ),
          ),
          'attributes_array' => array(
            'role' => 'navigation',
          ),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
    $display->content['new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5'] = $pane;
    $display->panels['nav'][0] = 'new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs_filtered';
  $page->task = 'page';
  $page->admin_title = 'Programs';
  $page->admin_description = '';
  $page->path = 'at-the-field/programs/%term';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Programs',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Audience (tid)',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          1 => '1',
          6 => 0,
          11 => 0,
          26 => 0,
          16 => 0,
          36 => 0,
          41 => 0,
          46 => 0,
          51 => 0,
          31 => 0,
          21 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_programs_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'programs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'filtered by audience',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'View: Programs: Filtered list of promos',
        'keyword' => 'view',
        'name' => 'view_from_argument:programs-ctools_context_1',
        'context' => array(
          0 => 'argument_term_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l6b';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Programs %term:name';
  $display->uuid = 'e5c22d08-7786-468b-b8ca-63fadd07acaa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34b16c20-c9f2-45f8-8885-a8b39d450214';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>%term:name Programs</h1>',
      'format' => 'unfiltered',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34b16c20-c9f2-45f8-8885-a8b39d450214';
    $display->content['new-34b16c20-c9f2-45f8-8885-a8b39d450214'] = $pane;
    $display->panels['main'][0] = 'new-34b16c20-c9f2-45f8-8885-a8b39d450214';
    $pane = new stdClass();
    $pane->pid = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'relationship_view_from_argument:programs-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '72f141a9-425f-458c-9151-e82e42ee0ff5';
    $display->content['new-72f141a9-425f-458c-9151-e82e42ee0ff5'] = $pane;
    $display->panels['main'][1] = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
    $pane = new stdClass();
    $pane->pid = 'new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => 'section',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'nav',
          'class_enable' => 1,
          'class' => 'navSection',
          'attributes' => array(
            'role' => array(
              'enabled' => 1,
              'value' => 'navigation',
            ),
          ),
          'attributes_array' => array(
            'role' => 'navigation',
          ),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
    $display->content['new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea'] = $pane;
    $display->panels['nav'][0] = 'new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs_filtered'] = $page;

  return $pages;

}
