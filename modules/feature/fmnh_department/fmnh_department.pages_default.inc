<?php
/**
 * @file
 * fmnh_department.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fmnh_department_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_department';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Department',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Collections of department',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:collections_of_department',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'context' => array(
          0 => 'argument_entity_id:node_1',
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
              'department' => 'department',
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
  $display->layout = 'l14';
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
  $display->title = '';
  $display->uuid = '2548aa25-c1e0-433c-a01a-1c029779e710';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94cebefd-5546-4e4a-8d87-3da9dfd44e9e';
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
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '94cebefd-5546-4e4a-8d87-3da9dfd44e9e';
    $display->content['new-94cebefd-5546-4e4a-8d87-3da9dfd44e9e'] = $pane;
    $display->panels['main'][0] = 'new-94cebefd-5546-4e4a-8d87-3da9dfd44e9e';
    $pane = new stdClass();
    $pane->pid = 'new-727aca4f-b4a3-435b-a78c-be3d884e581f';
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
      'context' => 'relationship_entitylist_relationship:collections_of_department_1',
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
    $pane->uuid = '727aca4f-b4a3-435b-a78c-be3d884e581f';
    $display->content['new-727aca4f-b4a3-435b-a78c-be3d884e581f'] = $pane;
    $display->panels['main'][1] = 'new-727aca4f-b4a3-435b-a78c-be3d884e581f';
    $pane = new stdClass();
    $pane->pid = 'new-d883d44d-e9f7-459b-b30d-cdf8592c765c';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'relationship_entitylist_relationship:collections_of_department_1',
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
    $pane->uuid = 'd883d44d-e9f7-459b-b30d-cdf8592c765c';
    $display->content['new-d883d44d-e9f7-459b-b30d-cdf8592c765c'] = $pane;
    $display->panels['main'][2] = 'new-d883d44d-e9f7-459b-b30d-cdf8592c765c';
    $pane = new stdClass();
    $pane->pid = 'new-7e118f90-a617-4e80-8b36-7d3ed2b13436';
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
    $pane->uuid = '7e118f90-a617-4e80-8b36-7d3ed2b13436';
    $display->content['new-7e118f90-a617-4e80-8b36-7d3ed2b13436'] = $pane;
    $display->panels['nav'][0] = 'new-7e118f90-a617-4e80-8b36-7d3ed2b13436';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-94cebefd-5546-4e4a-8d87-3da9dfd44e9e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_department'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_department_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'department_collections';
  $page->task = 'page';
  $page->admin_title = 'Department collections';
  $page->admin_description = '';
  $page->path = 'node/%node/collections';
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
    'title' => 'Collections',
    'name' => 'navigation',
    'weight' => '2',
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
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_department_collections_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'department_collections';
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
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
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
  $display->title = '';
  $display->uuid = 'cc8a7f02-5cb5-4051-8a0e-788ba25cdcfe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a33b5bd4-707d-4530-83c0-da10c423864b';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'collections-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = 'a33b5bd4-707d-4530-83c0-da10c423864b';
    $display->content['new-a33b5bd4-707d-4530-83c0-da10c423864b'] = $pane;
    $display->panels['main'][0] = 'new-a33b5bd4-707d-4530-83c0-da10c423864b';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-a33b5bd4-707d-4530-83c0-da10c423864b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['department_collections'] = $page;

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
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
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
  $display->title = '';
  $display->uuid = '7fb0ee0d-2370-4e32-bd2b-5d75727b002d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9b169951-fe80-4a59-ad53-eccb8c0a6d51';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'people-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = '9b169951-fe80-4a59-ad53-eccb8c0a6d51';
    $display->content['new-9b169951-fe80-4a59-ad53-eccb8c0a6d51'] = $pane;
    $display->panels['main'][0] = 'new-9b169951-fe80-4a59-ad53-eccb8c0a6d51';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9b169951-fe80-4a59-ad53-eccb8c0a6d51';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['department_people'] = $page;

  return $pages;

}
