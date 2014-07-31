<?php
/**
 * @file
 * fieldmuseum.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function fieldmuseum_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c1_a';
  $panelizer->title = 'C1-a';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c1a';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e9b2550f-fd22-407c-ac32-e5aa06632837';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8dca415-982f-47df-bd93-215d00152af3';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'full',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8dca415-982f-47df-bd93-215d00152af3';
    $display->content['new-e8dca415-982f-47df-bd93-215d00152af3'] = $pane;
    $display->panels['main'][0] = 'new-e8dca415-982f-47df-bd93-215d00152af3';
    $pane = new stdClass();
    $pane->pid = 'new-81ea6170-12f7-4b45-a0bf-0810fcabf086';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '81ea6170-12f7-4b45-a0bf-0810fcabf086';
    $display->content['new-81ea6170-12f7-4b45-a0bf-0810fcabf086'] = $pane;
    $display->panels['main'][1] = 'new-81ea6170-12f7-4b45-a0bf-0810fcabf086';
    $pane = new stdClass();
    $pane->pid = 'new-31c828ce-5d31-488d-a3e0-46890a966b9b';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '31c828ce-5d31-488d-a3e0-46890a966b9b';
    $display->content['new-31c828ce-5d31-488d-a3e0-46890a966b9b'] = $pane;
    $display->panels['main'][2] = 'new-31c828ce-5d31-488d-a3e0-46890a966b9b';
    $pane = new stdClass();
    $pane->pid = 'new-886f7ad2-9adb-406c-b685-fb18c2ab4614';
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
      'level' => '1',
      'follow' => 'child',
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886f7ad2-9adb-406c-b685-fb18c2ab4614';
    $display->content['new-886f7ad2-9adb-406c-b685-fb18c2ab4614'] = $pane;
    $display->panels['nav'][0] = 'new-886f7ad2-9adb-406c-b685-fb18c2ab4614';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81ea6170-12f7-4b45-a0bf-0810fcabf086';
  $panelizer->display = $display;
  $export['node:page:c1_a'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c1_b';
  $panelizer->title = 'C1-b';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c1b';
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
  $display->uuid = '57ee232c-1cb5-4742-97dd-8c1572135d06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6863831d-67e8-4957-ac82-5b04561979ea';
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
      'identifier' => 'page__full__c1b',
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
    $pane->uuid = '6863831d-67e8-4957-ac82-5b04561979ea';
    $display->content['new-6863831d-67e8-4957-ac82-5b04561979ea'] = $pane;
    $display->panels['main'][0] = 'new-6863831d-67e8-4957-ac82-5b04561979ea';
    $pane = new stdClass();
    $pane->pid = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
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
      'context' => 'panelizer',
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
    $pane->uuid = '83634cf0-90f9-4dcb-af56-54620931333e';
    $display->content['new-83634cf0-90f9-4dcb-af56-54620931333e'] = $pane;
    $display->panels['nav'][0] = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
    $pane = new stdClass();
    $pane->pid = 'new-b1c63fae-debd-423a-b427-1649ed982fe6';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b1c63fae-debd-423a-b427-1649ed982fe6';
    $display->content['new-b1c63fae-debd-423a-b427-1649ed982fe6'] = $pane;
    $display->panels['nav'][1] = 'new-b1c63fae-debd-423a-b427-1649ed982fe6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6863831d-67e8-4957-ac82-5b04561979ea';
  $panelizer->display = $display;
  $export['node:page:c1_b'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c1_h';
  $panelizer->title = 'C1-h';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c1h';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
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
  $display->uuid = '57ee232c-1cb5-4742-97dd-8c1572135d06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '8982f2fd-87a0-4711-b174-62d2463ff55d';
    $display->content['new-8982f2fd-87a0-4711-b174-62d2463ff55d'] = $pane;
    $display->panels['main'][0] = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane = new stdClass();
    $pane->pid = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $display->content['new-d90645a6-7d67-4d38-9d48-04a5ea1faed4'] = $pane;
    $display->panels['main'][1] = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane = new stdClass();
    $pane->pid = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '954322dc-8305-491d-830c-06438dfa5dc6';
    $display->content['new-954322dc-8305-491d-830c-06438dfa5dc6'] = $pane;
    $display->panels['main'][2] = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane = new stdClass();
    $pane->pid = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
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
      'context' => 'panelizer',
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
    $pane->uuid = '83634cf0-90f9-4dcb-af56-54620931333e';
    $display->content['new-83634cf0-90f9-4dcb-af56-54620931333e'] = $pane;
    $display->panels['nav'][0] = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
    $pane = new stdClass();
    $pane->pid = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = '_active';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => '_active',
      'parent_mlid' => 0,
      'parent' => '_active:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
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
    $pane->uuid = 'fc0b78dd-e31c-433c-944b-e50078ca8698';
    $display->content['new-fc0b78dd-e31c-433c-944b-e50078ca8698'] = $pane;
    $display->panels['nav'][1] = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
  $panelizer->display = $display;
  $export['node:page:c1_h'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c3';
  $panelizer->title = 'C3';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c3';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
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
  $display->uuid = '57ee232c-1cb5-4742-97dd-8c1572135d06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '8982f2fd-87a0-4711-b174-62d2463ff55d';
    $display->content['new-8982f2fd-87a0-4711-b174-62d2463ff55d'] = $pane;
    $display->panels['main'][0] = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane = new stdClass();
    $pane->pid = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $display->content['new-d90645a6-7d67-4d38-9d48-04a5ea1faed4'] = $pane;
    $display->panels['main'][1] = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane = new stdClass();
    $pane->pid = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '954322dc-8305-491d-830c-06438dfa5dc6';
    $display->content['new-954322dc-8305-491d-830c-06438dfa5dc6'] = $pane;
    $display->panels['main'][2] = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane = new stdClass();
    $pane->pid = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
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
      'context' => 'panelizer',
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
    $pane->uuid = '83634cf0-90f9-4dcb-af56-54620931333e';
    $display->content['new-83634cf0-90f9-4dcb-af56-54620931333e'] = $pane;
    $display->panels['nav'][0] = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
    $pane = new stdClass();
    $pane->pid = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = '_active';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => '_active',
      'parent_mlid' => 0,
      'parent' => '_active:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
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
    $pane->uuid = 'fc0b78dd-e31c-433c-944b-e50078ca8698';
    $display->content['new-fc0b78dd-e31c-433c-944b-e50078ca8698'] = $pane;
    $display->panels['nav'][1] = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
  $panelizer->display = $display;
  $export['node:page:c3'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c3_a';
  $panelizer->title = 'C3-a';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c3';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
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
  $display->uuid = '57ee232c-1cb5-4742-97dd-8c1572135d06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '8982f2fd-87a0-4711-b174-62d2463ff55d';
    $display->content['new-8982f2fd-87a0-4711-b174-62d2463ff55d'] = $pane;
    $display->panels['main'][0] = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane = new stdClass();
    $pane->pid = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $display->content['new-d90645a6-7d67-4d38-9d48-04a5ea1faed4'] = $pane;
    $display->panels['main'][1] = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane = new stdClass();
    $pane->pid = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '954322dc-8305-491d-830c-06438dfa5dc6';
    $display->content['new-954322dc-8305-491d-830c-06438dfa5dc6'] = $pane;
    $display->panels['main'][2] = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane = new stdClass();
    $pane->pid = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
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
      'context' => 'panelizer',
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
    $pane->uuid = '83634cf0-90f9-4dcb-af56-54620931333e';
    $display->content['new-83634cf0-90f9-4dcb-af56-54620931333e'] = $pane;
    $display->panels['nav'][0] = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
    $pane = new stdClass();
    $pane->pid = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = '_active';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => '_active',
      'parent_mlid' => 0,
      'parent' => '_active:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
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
    $pane->uuid = 'fc0b78dd-e31c-433c-944b-e50078ca8698';
    $display->content['new-fc0b78dd-e31c-433c-944b-e50078ca8698'] = $pane;
    $display->panels['nav'][1] = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
  $panelizer->display = $display;
  $export['node:page:c3_a'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:c3_b';
  $panelizer->title = 'C3-b';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c3b';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
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
  $display->uuid = '57ee232c-1cb5-4742-97dd-8c1572135d06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '8982f2fd-87a0-4711-b174-62d2463ff55d';
    $display->content['new-8982f2fd-87a0-4711-b174-62d2463ff55d'] = $pane;
    $display->panels['main'][0] = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
    $pane = new stdClass();
    $pane->pid = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $display->content['new-d90645a6-7d67-4d38-9d48-04a5ea1faed4'] = $pane;
    $display->panels['main'][1] = 'new-d90645a6-7d67-4d38-9d48-04a5ea1faed4';
    $pane = new stdClass();
    $pane->pid = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '954322dc-8305-491d-830c-06438dfa5dc6';
    $display->content['new-954322dc-8305-491d-830c-06438dfa5dc6'] = $pane;
    $display->panels['main'][2] = 'new-954322dc-8305-491d-830c-06438dfa5dc6';
    $pane = new stdClass();
    $pane->pid = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
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
      'context' => 'panelizer',
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
    $pane->uuid = '83634cf0-90f9-4dcb-af56-54620931333e';
    $display->content['new-83634cf0-90f9-4dcb-af56-54620931333e'] = $pane;
    $display->panels['nav'][0] = 'new-83634cf0-90f9-4dcb-af56-54620931333e';
    $pane = new stdClass();
    $pane->pid = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = '_active';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => '_active',
      'parent_mlid' => 0,
      'parent' => '_active:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
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
    $pane->uuid = 'fc0b78dd-e31c-433c-944b-e50078ca8698';
    $display->content['new-fc0b78dd-e31c-433c-944b-e50078ca8698'] = $pane;
    $display->panels['nav'][1] = 'new-fc0b78dd-e31c-433c-944b-e50078ca8698';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8982f2fd-87a0-4711-b174-62d2463ff55d';
  $panelizer->display = $display;
  $export['node:page:c3_b'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'C1';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'c1';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content js--stickyParent',
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
  $display->title = '%node:title';
  $display->uuid = 'e9b2550f-fd22-407c-ac32-e5aa06632837';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b520a84f-34f6-4ac3-9520-e5c35b0b7fe7';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
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
    $pane->uuid = 'b520a84f-34f6-4ac3-9520-e5c35b0b7fe7';
    $display->content['new-b520a84f-34f6-4ac3-9520-e5c35b0b7fe7'] = $pane;
    $display->panels['main'][0] = 'new-b520a84f-34f6-4ac3-9520-e5c35b0b7fe7';
    $pane = new stdClass();
    $pane->pid = 'new-17863985-ae56-4df5-b5ed-ec14d8423be5';
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
    $pane->uuid = '17863985-ae56-4df5-b5ed-ec14d8423be5';
    $display->content['new-17863985-ae56-4df5-b5ed-ec14d8423be5'] = $pane;
    $display->panels['nav'][0] = 'new-17863985-ae56-4df5-b5ed-ec14d8423be5';
    $pane = new stdClass();
    $pane->pid = 'new-886f7ad2-9adb-406c-b685-fb18c2ab4614';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '886f7ad2-9adb-406c-b685-fb18c2ab4614';
    $display->content['new-886f7ad2-9adb-406c-b685-fb18c2ab4614'] = $pane;
    $display->panels['nav'][1] = 'new-886f7ad2-9adb-406c-b685-fb18c2ab4614';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b520a84f-34f6-4ac3-9520-e5c35b0b7fe7';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
