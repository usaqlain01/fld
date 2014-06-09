<?php
/**
 * @file
 * fieldmuseum.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fieldmuseum_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site_panel_context';
  $handler->task = 'contact_site';
  $handler->subtask = '';
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
  $display->uuid = '50a7125f-46b1-4406-966b-ffc9bb0d803c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-531a2b8d-f9b2-4cdd-9343-dba47f623979';
    $pane->panel = 'main';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '531a2b8d-f9b2-4cdd-9343-dba47f623979';
    $display->content['new-531a2b8d-f9b2-4cdd-9343-dba47f623979'] = $pane;
    $display->panels['main'][0] = 'new-531a2b8d-f9b2-4cdd-9343-dba47f623979';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-531a2b8d-f9b2-4cdd-9343-dba47f623979';
  $handler->conf['display'] = $display;
  $export['contact_site_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function fieldmuseum_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_the_museum';
  $page->task = 'page';
  $page->admin_title = 'About the museum';
  $page->admin_description = '';
  $page->path = 'about';
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
    'title' => 'About the museum',
    'name' => 'main-menu',
    'weight' => '6',
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
  $handler->name = 'page_about_the_museum_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_the_museum';
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
  $display->layout = 'l5a';
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
  $display->title = 'About the museum';
  $display->uuid = '05b92cf7-3f90-4d23-bf7f-de74218319f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dfab5014-6e3f-46c9-b52e-baff09478dc9';
    $pane->panel = 'main';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 'active',
      'depth' => 0,
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
    $pane->uuid = 'dfab5014-6e3f-46c9-b52e-baff09478dc9';
    $display->content['new-dfab5014-6e3f-46c9-b52e-baff09478dc9'] = $pane;
    $display->panels['main'][0] = 'new-dfab5014-6e3f-46c9-b52e-baff09478dc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_the_museum'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'auxiliary_groups';
  $page->task = 'page';
  $page->admin_title = 'Auxiliary Groups';
  $page->admin_description = '';
  $page->path = 'support/ways-to-give/auxiliary-groups';
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
    'title' => 'Auxiliary Groups',
    'name' => 'main-menu',
    'weight' => '6',
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
  $handler->name = 'page_auxiliary_groups_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'auxiliary_groups';
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
  $display->uuid = 'f2e7bd54-6085-4c34-aa63-01b247d16dad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bb9442f-803f-4ee0-a34e-ffc29e4bbe32';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Auxiliary Groups',
      'body' => 'Intention: include summaries of each group that encourage users to find out more about each.',
      'format' => 'markdown',
      'substitute' => TRUE,
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
    $pane->uuid = '5bb9442f-803f-4ee0-a34e-ffc29e4bbe32';
    $display->content['new-5bb9442f-803f-4ee0-a34e-ffc29e4bbe32'] = $pane;
    $display->panels['main'][0] = 'new-5bb9442f-803f-4ee0-a34e-ffc29e4bbe32';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-5bb9442f-803f-4ee0-a34e-ffc29e4bbe32';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['auxiliary_groups'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'conservation_efforts';
  $page->task = 'page';
  $page->admin_title = 'Conservation efforts';
  $page->admin_description = '';
  $page->path = 'science/conservation';
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
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Conservation efforts',
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
  $handler->name = 'page_conservation_efforts_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'conservation_efforts';
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
  $display->uuid = 'd13a4cc2-43a3-4b2d-8787-8fa340e2c254';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conservation_efforts'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'educators';
  $page->task = 'page';
  $page->admin_title = 'Educators';
  $page->admin_description = '';
  $page->path = 'educators';
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
    'title' => 'Educators',
    'name' => 'main-menu',
    'weight' => '4',
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
  $handler->name = 'page_educators_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'educators';
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
  $display->title = 'Educators';
  $display->uuid = '2de777c9-eb1b-437b-b6ac-14327e1c20df';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['educators'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitions_and_events';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions and events';
  $page->admin_description = 'The Exhibitions & Events section is the current “Happening at the Field” section with a simplified name. This section should serve to answer the question, “What will I be able to see and do when I\'m at The Field?” It will achieve this by housing all information about floor exhibitions, programs for visitors, and events at the Field. These items drive the visit decision for a large percentage of users that we talked to (see research findings document). The URL, /at-the-field, speaks to the greater purpose of the section as visitors browse, and works better as a single "sentence" when you\'ve driven down into the various subsections within this area of the site.';
  $page->path = 'at-the-field';
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
    'title' => 'Exhibitions & Events',
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
  $handler->name = 'page_exhibitions_and_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions_and_events';
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
        'identifier' => 'List: Current exhibitions',
        'keyword' => 'list',
        'name' => 'entitylist:current_exhibitions',
        'use_pager' => FALSE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 3,
        ),
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'List: Upcoming events',
        'keyword' => 'list_2',
        'name' => 'entitylist:upcoming_events',
        'use_pager' => FALSE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 5,
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
  $display->title = 'Exhibitions and Events';
  $display->uuid = '6670015c-8d44-40ac-8664-5d85e449f8fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-91b6980d-0fb6-4d6a-a3e2-52f60d261004';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '3',
      ),
      'view_mode' => 'node:banner',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:current_exhibitions_1',
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
    $pane->uuid = '91b6980d-0fb6-4d6a-a3e2-52f60d261004';
    $display->content['new-91b6980d-0fb6-4d6a-a3e2-52f60d261004'] = $pane;
    $display->panels['main'][0] = 'new-91b6980d-0fb6-4d6a-a3e2-52f60d261004';
    $pane = new stdClass();
    $pane->pid = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '5',
      ),
      'view_mode' => 'node:entity_label',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:upcoming_events_1',
      'override_title' => 1,
      'override_title_text' => 'Upcoming events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $display->content['new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441'] = $pane;
    $display->panels['main'][1] = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $pane = new stdClass();
    $pane->pid = 'new-9a1d7e41-1a00-4092-a52a-a24e228add45';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9a1d7e41-1a00-4092-a52a-a24e228add45';
    $display->content['new-9a1d7e41-1a00-4092-a52a-a24e228add45'] = $pane;
    $display->panels['main'][2] = 'new-9a1d7e41-1a00-4092-a52a-a24e228add45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_and_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'give_now';
  $page->task = 'page';
  $page->admin_title = 'Give now';
  $page->admin_description = '';
  $page->path = 'give-now';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Give now',
    'name' => 'menu-header-menu',
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
  $handler->name = 'page_give_now_http_response';
  $handler->task = 'page';
  $handler->subtask = 'give_now';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'http://enews.fieldmuseum.org/site/PageServer?pagename=api_donate&donate=now',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['give_now'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Promoted exhibitions',
        'keyword' => 'list',
        'name' => 'entitylist:promoted_exhibitions',
        'use_pager' => FALSE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 3,
        ),
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'List: Upcoming events',
        'keyword' => 'list_2',
        'name' => 'entitylist:upcoming_events',
        'use_pager' => FALSE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 5,
        ),
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l1';
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
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2014-05-27 00:00',
            'sunset' => '2014-05-28 00:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Alert',
      'title' => 'Alert!',
      'body' => 'This alert is disabled.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $display->content['new-baf3edc8-ca96-43b1-b8ba-41d81a45b067'] = $pane;
    $display->panels['main'][0] = 'new-baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $pane = new stdClass();
    $pane->pid = 'new-e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Free-form message',
      'title' => '',
      'body' => 'Lorem ipsum dolor sit amet, alii nominati periculis in vis, reque apeirian ei mei. Ut mei justo electram aliquando, an quo persius antiopam iracundia. Malorum quaerendum ut nam, te quo aliquam maiorum voluptatum. Ad aliquam comprehensam vel. Brute viderer reprimique ne usu. Lucilius euripidis voluptatum nec ut.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $display->content['new-e8032d89-b651-4f3e-b068-b3ee68d055fe'] = $pane;
    $display->panels['main'][1] = 'new-e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $pane = new stdClass();
    $pane->pid = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '1',
      'view_mode' => 'node:banner',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:promoted_exhibitions_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $display->content['new-0b7e8763-317f-435a-bfbe-fd05c7d12506'] = $pane;
    $display->panels['main'][2] = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane = new stdClass();
    $pane->pid = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '2',
      'view_mode' => 'node:banner',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:promoted_exhibitions_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $display->content['new-e17aa475-ebcc-44d9-a2c8-5475e37c1548'] = $pane;
    $display->panels['main'][3] = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane = new stdClass();
    $pane->pid = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '3',
      'view_mode' => 'node:banner',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:promoted_exhibitions_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $display->content['new-64c4c056-b3c7-4afd-8796-35e7f9d62988'] = $pane;
    $display->panels['main'][4] = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $pane = new stdClass();
    $pane->pid = 'new-f4d1dbd0-5126-4765-b649-fed5d90dd473';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f4d1dbd0-5126-4765-b649-fed5d90dd473';
    $display->content['new-f4d1dbd0-5126-4765-b649-fed5d90dd473'] = $pane;
    $display->panels['main'][5] = 'new-f4d1dbd0-5126-4765-b649-fed5d90dd473';
    $pane = new stdClass();
    $pane->pid = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '5',
      ),
      'view_mode' => 'node:token',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:upcoming_events_1',
      'override_title' => 1,
      'override_title_text' => 'Upcoming events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $display->content['new-66560f6a-fd8b-4229-8ef3-55e405440b6d'] = $pane;
    $display->panels['main'][6] = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'learning_resources';
  $page->task = 'page';
  $page->admin_title = 'Learning resources';
  $page->admin_description = '';
  $page->path = 'educators/resources';
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
    'title' => 'Learning Resources',
    'name' => 'main-menu',
    'weight' => '5',
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
  $handler->name = 'page_learning_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'learning_resources';
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
  $display->uuid = '708b5437-1b34-43a0-8a9d-62d0b2b4ef59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6894e231-1fcb-4f06-b82e-7e6875f92480';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Learning resources',
      'body' => 'Intention: List of content in this section. View can be filtered with a TBD vocabulary.',
      'format' => 'markdown',
      'substitute' => TRUE,
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
    $pane->uuid = '6894e231-1fcb-4f06-b82e-7e6875f92480';
    $display->content['new-6894e231-1fcb-4f06-b82e-7e6875f92480'] = $pane;
    $display->panels['main'][0] = 'new-6894e231-1fcb-4f06-b82e-7e6875f92480';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6894e231-1fcb-4f06-b82e-7e6875f92480';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['learning_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'make_a_gift';
  $page->task = 'page';
  $page->admin_title = 'Make a gift';
  $page->admin_description = '';
  $page->path = 'support/make-a-gift';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Make a gift',
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
  $handler->name = 'page_make_a_gift_http_response';
  $handler->task = 'page';
  $handler->subtask = 'make_a_gift';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'http://enews.fieldmuseum.org/site/PageServer?pagename=api_donate&donate=now',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['make_a_gift'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newsletter_archive';
  $page->task = 'page';
  $page->admin_title = 'Newsletter archive';
  $page->admin_description = '';
  $page->path = 'science/resources/newsletters';
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
    'title' => 'Newsletter archive',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_newsletter_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'newsletter_archive';
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
  $display->uuid = 'fbc45dfd-d841-47a3-95f4-e7b980eaf3f2';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newsletter_archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'plan_your_visit';
  $page->task = 'page';
  $page->admin_title = 'Plan your visit';
  $page->admin_description = '';
  $page->path = 'visit';
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
    'title' => 'Plan your visit',
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
  $handler->name = 'page_plan_your_visit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'plan_your_visit';
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
  $display->title = 'Plan your visit';
  $display->uuid = '0e1fa6d2-0164-4626-b7f4-3dbb72c3c3fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
    $pane->panel = 'main';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 'child',
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '09d12684-6f9a-45c4-b381-3723c89883ac';
    $display->content['new-09d12684-6f9a-45c4-b381-3723c89883ac'] = $pane;
    $display->panels['main'][0] = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['plan_your_visit'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publications';
  $page->task = 'page';
  $page->admin_title = 'Publications';
  $page->admin_description = '';
  $page->path = 'science/resources/publications';
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
    'title' => 'Publications',
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
  $handler->name = 'page_publications_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'publications';
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
  $display->uuid = '5cf2f779-14ca-4bad-8d58-c0e373cb4690';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_collections';
  $page->task = 'page';
  $page->admin_title = 'Research & collections';
  $page->admin_description = '';
  $page->path = 'science/research';
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
    'title' => 'Research & Collections',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_research_collections_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research_collections';
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
  $display->uuid = 'f436dcf0-4bbc-4cc9-8ce2-6995af08308e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4e3eacb8-331b-4619-a7b9-66107ce20b2c';
    $pane->panel = 'main';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 'child',
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '4e3eacb8-331b-4619-a7b9-66107ce20b2c';
    $display->content['new-4e3eacb8-331b-4619-a7b9-66107ce20b2c'] = $pane;
    $display->panels['main'][0] = 'new-4e3eacb8-331b-4619-a7b9-66107ce20b2c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-4e3eacb8-331b-4619-a7b9-66107ce20b2c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_collections'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research_resources';
  $page->task = 'page';
  $page->admin_title = 'Research resources';
  $page->admin_description = '';
  $page->path = 'science/resources';
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
    'title' => 'Research resources',
    'name' => 'main-menu',
    'weight' => '5',
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
  $handler->name = 'page_research_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'research_resources';
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
  $display->uuid = '4aaab591-7563-4741-b367-7eb3834321bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d38dc685-f869-4604-ab07-98ade10c4df4';
    $pane->panel = 'main';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 'child',
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = 'd38dc685-f869-4604-ab07-98ade10c4df4';
    $display->content['new-d38dc685-f869-4604-ab07-98ade10c4df4'] = $pane;
    $display->panels['main'][0] = 'new-d38dc685-f869-4604-ab07-98ade10c4df4';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d38dc685-f869-4604-ab07-98ade10c4df4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'science_and_research';
  $page->task = 'page';
  $page->admin_title = 'Science and research';
  $page->admin_description = '';
  $page->path = 'science';
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
    'title' => 'Science & Research',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_science_and_research_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'science_and_research';
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
  $display->title = 'Science and Research';
  $display->uuid = '86abd588-1ecf-4a03-926f-d7098a870c45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Introduction',
      'title' => '',
      'body' => 'Intent: provide an introduction to The Field\'s research and spell out your scientific mission statement.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $display->content['new-9a08e76d-af3d-4f08-ae40-71a25e52853d'] = $pane;
    $display->panels['main'][0] = 'new-9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $pane = new stdClass();
    $pane->pid = 'new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'blog-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $display->content['new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0'] = $pane;
    $display->panels['main'][1] = 'new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $pane = new stdClass();
    $pane->pid = 'new-a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured collection',
      'title' => 'Fishes Dried Skeleton Collection',
      'body' => '(for example)',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $display->content['new-a3bdc9ce-2dd1-4c89-8390-aa956641015b'] = $pane;
    $display->panels['main'][2] = 'new-a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $pane = new stdClass();
    $pane->pid = 'new-45e77207-718d-4343-9c77-2c9ef6214178';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Science Newsflash',
      'title' => 'Sue\'s Microbes go to Space',
      'body' => 'What do cheerleaders, microbes, and dinosaur skeletons have in common?  They are all part of a project taking place onboard the International Space Station! Talk about worlds colliding!
',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '45e77207-718d-4343-9c77-2c9ef6214178';
    $display->content['new-45e77207-718d-4343-9c77-2c9ef6214178'] = $pane;
    $display->panels['main'][3] = 'new-45e77207-718d-4343-9c77-2c9ef6214178';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['science_and_research'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'shop';
  $page->task = 'page';
  $page->admin_title = 'Shop';
  $page->admin_description = '';
  $page->path = 'shop';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'The Museum Store',
    'name' => 'menu-header-menu',
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
  $handler->name = 'page_shop_http_response';
  $handler->task = 'page';
  $handler->subtask = 'shop';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'http://store.fieldmuseum.org',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['shop'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'subscribe';
  $page->task = 'page';
  $page->admin_title = 'Subscribe';
  $page->admin_description = '';
  $page->path = 'subscribe';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Subscribe',
    'name' => 'navigation',
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
  $handler->name = 'page_subscribe_http_response';
  $handler->task = 'page';
  $handler->subtask = 'subscribe';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'http://enews.fieldmuseum.org/site/Survey?ACTION_REQUIRED=URI_ACTION_USER_REQUESTS&SURVEY_ID=1761#mainstage',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['subscribe'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'support_the_museum';
  $page->task = 'page';
  $page->admin_title = 'Support the museum';
  $page->admin_description = '';
  $page->path = 'support';
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
    'title' => 'Support the museum',
    'name' => 'main-menu',
    'weight' => '5',
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
  $handler->name = 'page_support_the_museum_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'support_the_museum';
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
  $display->title = 'Support the museum';
  $display->uuid = '0277acda-f6f0-4ac8-b9f0-bf97f2e6d425';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Call to action',
      'title' => '',
      'body' => 'Intention: a clear call to action to why donations from the community are such an important part of The Field achieving its goals.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd560624f-ff81-4642-a5a9-4b25a794bc7e';
    $display->content['new-d560624f-ff81-4642-a5a9-4b25a794bc7e'] = $pane;
    $display->panels['main'][0] = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
    $pane = new stdClass();
    $pane->pid = 'new-71d3136f-4c89-4cbd-b034-ded39e90c364';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Ways to give',
      'body' => 'Intent: There should also be brief summaries about each of the areas within the section that explain that type of giving and provide a call to action to click through to find out more .
',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71d3136f-4c89-4cbd-b034-ded39e90c364';
    $display->content['new-71d3136f-4c89-4cbd-b034-ded39e90c364'] = $pane;
    $display->panels['main'][1] = 'new-71d3136f-4c89-4cbd-b034-ded39e90c364';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['support_the_museum'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'teacher_professional_development';
  $page->task = 'page';
  $page->admin_title = 'Teacher professional development';
  $page->admin_description = '';
  $page->path = 'educators/professional-development';
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
    'title' => 'Teacher professional development',
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
  $handler->name = 'page_teacher_professional_development_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'teacher_professional_development';
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
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '21',
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
  $display->title = '';
  $display->uuid = '370002fa-5668-44b1-9cb8-f33407985b7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'programs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:taxonomy_term_1',
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
    $pane->uuid = '76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
    $display->content['new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1'] = $pane;
    $display->panels['main'][0] = 'new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['teacher_professional_development'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tickets';
  $page->task = 'page';
  $page->admin_title = 'Tickets';
  $page->admin_description = '';
  $page->path = 'tickets';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Buy Tickets',
    'name' => 'menu-header-menu',
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
  $handler->name = 'page_tickets_http_response';
  $handler->task = 'page';
  $handler->subtask = 'tickets';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'https://tickets.fieldmuseum.org/public/',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['tickets'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ways_to_give';
  $page->task = 'page';
  $page->admin_title = 'Ways to Give';
  $page->admin_description = '';
  $page->path = 'support/ways-to-give';
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
    'title' => 'Ways to Give',
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
  $handler->name = 'page_ways_to_give_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ways_to_give';
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
  $display->uuid = 'fe1d18c2-5f59-4c25-9aaa-928505089749';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-717c7453-7c83-416f-b4f0-d58316cfe1dc';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Ways to Give',
      'body' => 'Intention: 

* tell a compelling story about how donations have a direct impact on The Field advancing it\'s mission forward
* include summaries of each of the ways that a person could give to the organization, with calls to action for potential donors to find out more by clicking through to the page that has the extended information for each giving opportunity.',
      'format' => 'markdown',
      'substitute' => TRUE,
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
    $pane->uuid = '717c7453-7c83-416f-b4f0-d58316cfe1dc';
    $display->content['new-717c7453-7c83-416f-b4f0-d58316cfe1dc'] = $pane;
    $display->panels['main'][0] = 'new-717c7453-7c83-416f-b4f0-d58316cfe1dc';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-717c7453-7c83-416f-b4f0-d58316cfe1dc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ways_to_give'] = $page;

  return $pages;

}
