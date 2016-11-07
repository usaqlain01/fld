<?php
/**
 * @file
 * fmnh_department.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_department_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'department_people';
  $page->task = 'page';
  $page->admin_title = 'Department people';
  $page->admin_description = '';
  $page->path = 'node/%node/people';
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
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'department' => 'department',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'People',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'node',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_department_people_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'department_people';
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
        'identifier' => 'View: users: filter by profile departments',
        'keyword' => 'view',
        'name' => 'view_from_argument:users-ctools_context_2',
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l17a';
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
  $display->title = '%node:title — Staff';
  $display->uuid = '7fb0ee0d-2370-4e32-bd2b-5d75727b002d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_department_people_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f84c354c-94b2-4a2e-989c-3db04ed193ae';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1>%node:title &mdash; People</h1>',
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
  $pane->uuid = 'f84c354c-94b2-4a2e-989c-3db04ed193ae';
  $display->content['new-f84c354c-94b2-4a2e-989c-3db04ed193ae'] = $pane;
  $display->panels['main'][0] = 'new-f84c354c-94b2-4a2e-989c-3db04ed193ae';
  $pane = new stdClass();
  $pane->pid = 'new-95ec96aa-b64d-4bd2-832c-56fd3e1fc2ff';
  $pane->panel = 'main';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'relationship_view_from_argument:staff-ctools_context_1_1',
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
        'class' => 'persons--2up',
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
  $pane->uuid = '95ec96aa-b64d-4bd2-832c-56fd3e1fc2ff';
  $display->content['new-95ec96aa-b64d-4bd2-832c-56fd3e1fc2ff'] = $pane;
  $display->panels['main'][1] = 'new-95ec96aa-b64d-4bd2-832c-56fd3e1fc2ff';
  $pane = new stdClass();
  $pane->pid = 'new-1ad66abe-6586-4a18-abd1-a48c2697fb6f';
  $pane->panel = 'main';
  $pane->type = 'views_pager';
  $pane->subtype = 'views_pager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'relationship_view_from_argument:staff-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1ad66abe-6586-4a18-abd1-a48c2697fb6f';
  $display->content['new-1ad66abe-6586-4a18-abd1-a48c2697fb6f'] = $pane;
  $display->panels['main'][2] = 'new-1ad66abe-6586-4a18-abd1-a48c2697fb6f';
  $pane = new stdClass();
  $pane->pid = 'new-07320c6f-b9f8-420f-8b45-d7262cf86ef7';
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
        'attributes' => array(
          'role' => array(
            'enabled' => 1,
            'value' => 'navigation',
          ),
          'aria-label' => array(
            'enabled' => 1,
            'value' => 'Section Menu',
          ),
        ),
        'attributes_array' => array(
          'role' => 'navigation',
          'aria-label' => 'Section Menu',
        ),
      ),
      'add_default_classes' => 1,
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '07320c6f-b9f8-420f-8b45-d7262cf86ef7';
  $display->content['new-07320c6f-b9f8-420f-8b45-d7262cf86ef7'] = $pane;
  $display->panels['nav'][0] = 'new-07320c6f-b9f8-420f-8b45-d7262cf86ef7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-95ec96aa-b64d-4bd2-832c-56fd3e1fc2ff';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['department_people'] = $page;

  return $pages;

}
