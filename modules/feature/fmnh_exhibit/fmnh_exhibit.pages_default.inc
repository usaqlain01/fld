<?php
/**
 * @file
 * fmnh_exhibit.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_exhibit_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitions';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions';
  $page->admin_description = '';
  $page->path = 'at-the-field/exhibitions/!term';
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
    'title' => 'Exhibitions',
    'name' => 'main-menu',
    'weight' => '1',
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
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          1 => 0,
          2 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
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
  $handler->name = 'page_exhibitions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Events by audience',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:events_by_audience',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'context' => array(
          0 => 'argument_term_1',
        ),
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Exhibitions and Events';
  $display->uuid = '7e81430e-43cb-4607-8b8a-48199af90c46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f50b682b-dbb1-4e7f-aebb-9d70fb2143f0';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '10',
      ),
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'relationship_entitylist_relationship:events_by_audience_1',
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
    $pane->uuid = 'f50b682b-dbb1-4e7f-aebb-9d70fb2143f0';
    $display->content['new-f50b682b-dbb1-4e7f-aebb-9d70fb2143f0'] = $pane;
    $display->panels['main'][0] = 'new-f50b682b-dbb1-4e7f-aebb-9d70fb2143f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitions_coming_soon';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions coming soon';
  $page->admin_description = '';
  $page->path = 'at-the-field/exhibitions/coming-soon';
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
      1 => array(
        'name' => 'ruleset:events_starting_soon',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Coming soon',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_exhibitions_coming_soon_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions_coming_soon';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Events starting soon',
        'keyword' => 'list',
        'name' => 'entitylist:events_starting_soon',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Coming soon';
  $display->uuid = '7e81430e-43cb-4607-8b8a-48199af90c46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9ea3603-1b21-4dc1-9092-478b218cde8c';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '10',
      ),
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:events_starting_soon_1',
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
    $pane->uuid = 'a9ea3603-1b21-4dc1-9092-478b218cde8c';
    $display->content['new-a9ea3603-1b21-4dc1-9092-478b218cde8c'] = $pane;
    $display->panels['main'][0] = 'new-a9ea3603-1b21-4dc1-9092-478b218cde8c';
    $pane = new stdClass();
    $pane->pid = 'new-15f79041-1da0-46c6-a53e-ccd7bc43bbd2';
    $pane->panel = 'main';
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
      'expanded' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '15f79041-1da0-46c6-a53e-ccd7bc43bbd2';
    $display->content['new-15f79041-1da0-46c6-a53e-ccd7bc43bbd2'] = $pane;
    $display->panels['main'][1] = 'new-15f79041-1da0-46c6-a53e-ccd7bc43bbd2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_coming_soon'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitions_past';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions past';
  $page->admin_description = '';
  $page->path = 'at-the-field/exhibitions/past';
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
    'title' => 'Past Exhibitions',
    'name' => 'main-menu',
    'weight' => '1',
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
  $handler->name = 'page_exhibitions_past_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions_past';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7e81430e-43cb-4607-8b8a-48199af90c46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4b5e88b6-8647-449b-b196-c6b3487986d0';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
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
    $pane->uuid = '4b5e88b6-8647-449b-b196-c6b3487986d0';
    $display->content['new-4b5e88b6-8647-449b-b196-c6b3487986d0'] = $pane;
    $display->panels['main'][0] = 'new-4b5e88b6-8647-449b-b196-c6b3487986d0';
    $pane = new stdClass();
    $pane->pid = 'new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
    $pane->panel = 'main';
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
      'expanded' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
    $display->content['new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9'] = $pane;
    $display->panels['main'][1] = 'new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-4b5e88b6-8647-449b-b196-c6b3487986d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_past'] = $page;

  return $pages;

}
