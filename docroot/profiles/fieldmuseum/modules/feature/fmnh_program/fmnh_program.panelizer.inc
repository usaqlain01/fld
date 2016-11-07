<?php
/**
 * @file
 * fmnh_program.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function fmnh_program_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Field trip program';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program';
  $panelizer->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:program:c4';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'c4';
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
  $display->title = '%node:title';
  $display->uuid = '9f258dd9-bfab-489a-bec9-849411d01252';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:program:c4';
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
  $pane->shown = FALSE;
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
  $pane->pid = 'new-56cce475-ed51-40a7-aa4a-1b2995d13e78';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'field_trip_programs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'arguments' => array(
      'field_grade_level_target_id' => '%node:field-grade-level',
    ),
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
  $pane->uuid = '56cce475-ed51-40a7-aa4a-1b2995d13e78';
  $display->content['new-56cce475-ed51-40a7-aa4a-1b2995d13e78'] = $pane;
  $display->panels['main'][2] = 'new-56cce475-ed51-40a7-aa4a-1b2995d13e78';
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
  $panelizer->display = $display;
  $export['node:program:c4'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Virtual visits';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program';
  $panelizer->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:program:c4_a';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'c4a';
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
  $display->title = '%node:title';
  $display->uuid = '9f258dd9-bfab-489a-bec9-849411d01252';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:program:c4_a';
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
    'context' => 'panelizer',
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
  $panelizer->display = $display;
  $export['node:program:c4_a'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Teacher professional development program';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program';
  $panelizer->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:program:c4_b';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->uuid = '9f258dd9-bfab-489a-bec9-849411d01252';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:program:c4_b';
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
    'context' => 'panelizer',
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
  $pane->pid = 'new-b4b78170-2da2-49cb-8ce0-27f3579da2a8';
  $pane->panel = 'main';
  $pane->type = 'panels_mini';
  $pane->subtype = 'teacher_professional_development';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'context' => array(
      0 => 'panelizer',
    ),
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
  $pane->uuid = 'b4b78170-2da2-49cb-8ce0-27f3579da2a8';
  $display->content['new-b4b78170-2da2-49cb-8ce0-27f3579da2a8'] = $pane;
  $display->panels['main'][2] = 'new-b4b78170-2da2-49cb-8ce0-27f3579da2a8';
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
  $panelizer->display = $display;
  $export['node:program:c4_b'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program';
  $panelizer->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:program:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->title = '%node:title';
  $display->uuid = '9f258dd9-bfab-489a-bec9-849411d01252';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:program:default';
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
    'context' => 'panelizer',
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
  $panelizer->display = $display;
  $export['node:program:default'] = $panelizer;

  return $export;
}
