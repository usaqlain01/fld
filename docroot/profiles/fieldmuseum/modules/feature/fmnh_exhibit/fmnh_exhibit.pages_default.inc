<?php
/**
 * @file
 * fmnh_exhibit.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fmnh_exhibit_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Exhibit',
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
              'exhibit' => 'exhibit',
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
  $display->layout = 'c2e';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ade04418-6395-4302-84c8-0989233e2c14';
    $display->content['new-ade04418-6395-4302-84c8-0989233e2c14'] = $pane;
    $display->panels['main'][0] = 'new-ade04418-6395-4302-84c8-0989233e2c14';
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
    $pane->uuid = '526e0081-a46d-401e-b954-2d49e55d8a81';
    $display->content['new-526e0081-a46d-401e-b954-2d49e55d8a81'] = $pane;
    $display->panels['nav'][1] = 'new-526e0081-a46d-401e-b954-2d49e55d8a81';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ade04418-6395-4302-84c8-0989233e2c14';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}

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
    'title' => 'filter by audience',
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
    'main_classes' => '',
    'nav_classes' => 'navSection',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
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
    $pane = new stdClass();
    $pane->pid = 'new-90ae8192-1ee7-4a89-8f78-aafe8d6f9e7c';
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
    $pane->uuid = '90ae8192-1ee7-4a89-8f78-aafe8d6f9e7c';
    $display->content['new-90ae8192-1ee7-4a89-8f78-aafe8d6f9e7c'] = $pane;
    $display->panels['nav'][0] = 'new-90ae8192-1ee7-4a89-8f78-aafe8d6f9e7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_exhibitions_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'unfiltered',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Upcoming events',
        'keyword' => 'list',
        'name' => 'entitylist:upcoming_events',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 12,
        ),
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l6';
  $display->layout_settings = array(
    'top_classes' => '',
    'main_classes' => 'promos--3up',
    'nav_classes' => 'navSection',
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
        'limit' => '12',
      ),
      'view_mode' => 'node:promo',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:upcoming_events_1',
      'override_title' => 0,
      'override_title_text' => '',
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
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f50b682b-dbb1-4e7f-aebb-9d70fb2143f0';
    $display->content['new-f50b682b-dbb1-4e7f-aebb-9d70fb2143f0'] = $pane;
    $display->panels['main'][0] = 'new-f50b682b-dbb1-4e7f-aebb-9d70fb2143f0';
    $pane = new stdClass();
    $pane->pid = 'new-c1530b2a-006d-4514-aabc-59d1c34e5346';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'context_entitylist:upcoming_events_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1530b2a-006d-4514-aabc-59d1c34e5346';
    $display->content['new-c1530b2a-006d-4514-aabc-59d1c34e5346'] = $pane;
    $display->panels['main'][1] = 'new-c1530b2a-006d-4514-aabc-59d1c34e5346';
    $pane = new stdClass();
    $pane->pid = 'new-224d8a6e-280b-415f-81a3-0f88bb7bbca5';
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
    $pane->uuid = '224d8a6e-280b-415f-81a3-0f88bb7bbca5';
    $display->content['new-224d8a6e-280b-415f-81a3-0f88bb7bbca5'] = $pane;
    $display->panels['nav'][0] = 'new-224d8a6e-280b-415f-81a3-0f88bb7bbca5';
    $pane = new stdClass();
    $pane->pid = 'new-84b9323a-e86c-4631-80fc-a86707006e97';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:91';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84b9323a-e86c-4631-80fc-a86707006e97';
    $display->content['new-84b9323a-e86c-4631-80fc-a86707006e97'] = $pane;
    $display->panels['top'][0] = 'new-84b9323a-e86c-4631-80fc-a86707006e97';
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
  $display->layout = 'l6b';
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
      'view_mode' => 'node:promo',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:events_starting_soon_1',
      'override_title' => 0,
      'override_title_text' => '',
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
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9ea3603-1b21-4dc1-9092-478b218cde8c';
    $display->content['new-a9ea3603-1b21-4dc1-9092-478b218cde8c'] = $pane;
    $display->panels['main'][0] = 'new-a9ea3603-1b21-4dc1-9092-478b218cde8c';
    $pane = new stdClass();
    $pane->pid = 'new-4164d88b-60c7-46ad-9409-12520932d45f';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4164d88b-60c7-46ad-9409-12520932d45f';
    $display->content['new-4164d88b-60c7-46ad-9409-12520932d45f'] = $pane;
    $display->panels['main'][1] = 'new-4164d88b-60c7-46ad-9409-12520932d45f';
    $pane = new stdClass();
    $pane->pid = 'new-f92c11a6-d513-4ff5-a5d5-a6b5543df162';
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
    $pane->uuid = 'f92c11a6-d513-4ff5-a5d5-a6b5543df162';
    $display->content['new-f92c11a6-d513-4ff5-a5d5-a6b5543df162'] = $pane;
    $display->panels['nav'][0] = 'new-f92c11a6-d513-4ff5-a5d5-a6b5543df162';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Past exhibitions',
        'keyword' => 'list',
        'name' => 'entitylist:past_exhibitions',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 12,
        ),
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l6b';
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
  $display->title = 'Past exhibitions';
  $display->uuid = '7e81430e-43cb-4607-8b8a-48199af90c46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34d076f8-7b27-486f-8d5f-092e5becf028';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '12',
      ),
      'view_mode' => 'node:promo',
      'use_pager' => TRUE,
      'pager_id' => 0,
      'context' => 'context_entitylist:past_exhibitions_1',
      'override_title' => 0,
      'override_title_text' => '',
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
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--3up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34d076f8-7b27-486f-8d5f-092e5becf028';
    $display->content['new-34d076f8-7b27-486f-8d5f-092e5becf028'] = $pane;
    $display->panels['main'][0] = 'new-34d076f8-7b27-486f-8d5f-092e5becf028';
    $pane = new stdClass();
    $pane->pid = 'new-ddab44fa-78bd-4bc6-b179-e24df4943c47';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'context_entitylist:past_exhibitions_1',
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
    $pane->uuid = 'ddab44fa-78bd-4bc6-b179-e24df4943c47';
    $display->content['new-ddab44fa-78bd-4bc6-b179-e24df4943c47'] = $pane;
    $display->panels['main'][1] = 'new-ddab44fa-78bd-4bc6-b179-e24df4943c47';
    $pane = new stdClass();
    $pane->pid = 'new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
    $display->content['new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9'] = $pane;
    $display->panels['nav'][0] = 'new-f17202f1-92ec-475c-9d8d-8e1d2faddbd9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_past'] = $page;

  return $pages;

}
