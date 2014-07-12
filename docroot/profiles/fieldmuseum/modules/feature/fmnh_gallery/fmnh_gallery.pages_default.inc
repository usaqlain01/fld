<?php
/**
 * @file
 * fmnh_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fmnh_gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Gallery',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
              'media_gallery' => 'media_gallery',
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
  $display->layout = 'c9';
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
  $display->uuid = '295ba8a6-0783-434c-9168-651fcb894829';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63b75b23-7b36-4734-b5f3-691a6aa5a51b';
    $pane->panel = 'main';
    $pane->type = 'gallery';
    $pane->subtype = 'gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63b75b23-7b36-4734-b5f3-691a6aa5a51b';
    $display->content['new-63b75b23-7b36-4734-b5f3-691a6aa5a51b'] = $pane;
    $display->panels['main'][0] = 'new-63b75b23-7b36-4734-b5f3-691a6aa5a51b';
    $pane = new stdClass();
    $pane->pid = 'new-c3b1ab9b-435c-4323-894e-36b6b98ad0a3';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'update',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'c3b1ab9b-435c-4323-894e-36b6b98ad0a3';
    $display->content['new-c3b1ab9b-435c-4323-894e-36b6b98ad0a3'] = $pane;
    $display->panels['main'][1] = 'new-c3b1ab9b-435c-4323-894e-36b6b98ad0a3';
    $pane = new stdClass();
    $pane->pid = 'new-6deda338-14a6-41b2-a60f-3ef82757b46b';
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
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'section',
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
    $pane->uuid = '6deda338-14a6-41b2-a60f-3ef82757b46b';
    $display->content['new-6deda338-14a6-41b2-a60f-3ef82757b46b'] = $pane;
    $display->panels['nav'][0] = 'new-6deda338-14a6-41b2-a60f-3ef82757b46b';
    $pane = new stdClass();
    $pane->pid = 'new-0b674d7f-bfe4-4af6-8d51-afd548b2f071';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0b674d7f-bfe4-4af6-8d51-afd548b2f071';
    $display->content['new-0b674d7f-bfe4-4af6-8d51-afd548b2f071'] = $pane;
    $display->panels['nav'][1] = 'new-0b674d7f-bfe4-4af6-8d51-afd548b2f071';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
