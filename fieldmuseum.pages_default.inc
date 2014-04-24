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
  $display->title = 'About the museum';
  $display->uuid = '05b92cf7-3f90-4d23-bf7f-de74218319f7';
  $display->content = array();
  $display->panels = array();
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
  $display->title = 'Exhibitions and Events';
  $display->uuid = '6670015c-8d44-40ac-8664-5d85e449f8fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04a6e454-9660-438b-bd25-ea6e66c98f01';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04a6e454-9660-438b-bd25-ea6e66c98f01';
    $display->content['new-04a6e454-9660-438b-bd25-ea6e66c98f01'] = $pane;
    $display->panels['main'][0] = 'new-04a6e454-9660-438b-bd25-ea6e66c98f01';
    $pane = new stdClass();
    $pane->pid = 'new-cf15b6c0-56a4-4c28-b4ad-e1b2151282b8';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'upcoming_events-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf15b6c0-56a4-4c28-b4ad-e1b2151282b8';
    $display->content['new-cf15b6c0-56a4-4c28-b4ad-e1b2151282b8'] = $pane;
    $display->panels['main'][1] = 'new-cf15b6c0-56a4-4c28-b4ad-e1b2151282b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_and_events'] = $page;

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
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Exhibitions',
        'keyword' => 'view',
        'name' => 'view:exhibitions-ctools_context_1',
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
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
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
    $pane->pid = 'new-92d88d8b-df23-47e4-8205-1ebbd1441c3b';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(
        'title' => 'title',
      ),
      'context' => 'context_view:exhibitions-ctools_context_1_1',
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
    $pane->uuid = '92d88d8b-df23-47e4-8205-1ebbd1441c3b';
    $display->content['new-92d88d8b-df23-47e4-8205-1ebbd1441c3b'] = $pane;
    $display->panels['main'][2] = 'new-92d88d8b-df23-47e4-8205-1ebbd1441c3b';
    $pane = new stdClass();
    $pane->pid = 'new-40f9d913-1d3f-49c5-bbbd-d12e0e919624';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'upcoming_events-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '40f9d913-1d3f-49c5-bbbd-d12e0e919624';
    $display->content['new-40f9d913-1d3f-49c5-bbbd-d12e0e919624'] = $pane;
    $display->panels['main'][3] = 'new-40f9d913-1d3f-49c5-bbbd-d12e0e919624';
    $pane = new stdClass();
    $pane->pid = 'new-519f6547-3398-4381-9ed8-5bcea0341247';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Museum hours that link to map/directions',
      'title' => '',
      'body' => '### Hours

Open every day except Christmas. 9am-5pm.

### Location

[1400 S Lake Shore Drive Chicago, IL 60605][1]

   [1]: http://goo.gl/yjy8a
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '519f6547-3398-4381-9ed8-5bcea0341247';
    $display->content['new-519f6547-3398-4381-9ed8-5bcea0341247'] = $pane;
    $display->panels['main'][4] = 'new-519f6547-3398-4381-9ed8-5bcea0341247';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['plan_your_visit'] = $page;

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
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Shop',
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
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Subscribe',
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
  $display->uuid = '370002fa-5668-44b1-9cb8-f33407985b7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1fed67ed-dedc-4036-ae12-b3dca826af9e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Teacher Professional Development',
      'body' => 'Intent: show `program` content filtered by a term (TBD)',
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
    $pane->uuid = '1fed67ed-dedc-4036-ae12-b3dca826af9e';
    $display->content['new-1fed67ed-dedc-4036-ae12-b3dca826af9e'] = $pane;
    $display->panels['main'][0] = 'new-1fed67ed-dedc-4036-ae12-b3dca826af9e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1fed67ed-dedc-4036-ae12-b3dca826af9e';
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
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Tickets',
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
