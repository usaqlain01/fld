<?php
/**
 * @file
 * fmnh_calendar.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_calendar_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'calendar';
  $page->task = 'page';
  $page->admin_title = 'Calendar';
  $page->admin_description = '';
  $page->path = 'at-the-field/calendar/!term';
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
    'title' => 'Calendar',
    'name' => 'main-menu',
    'weight' => '3',
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
        'input_form' => 'tid',
        'vids' => array(
          1 => 0,
        ),
        'breadcrumb' => 1,
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
  $handler->name = 'page_calendar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'calendar';
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
  $display->uuid = '88c633b0-4dab-40c2-b254-3e54f705ef91';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-485903cc-2e44-42cb-a3e9-b9697b3c5913';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'fmnh_calendar-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
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
    $pane->uuid = '485903cc-2e44-42cb-a3e9-b9697b3c5913';
    $display->content['new-485903cc-2e44-42cb-a3e9-b9697b3c5913'] = $pane;
    $display->panels['main'][0] = 'new-485903cc-2e44-42cb-a3e9-b9697b3c5913';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-485903cc-2e44-42cb-a3e9-b9697b3c5913';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['calendar'] = $page;

  return $pages;

}
