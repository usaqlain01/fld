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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l5a';
  $display->layout_settings = array(
    'main_classes' => 'summaries--2up',
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
  $display->title = 'About the museum';
  $display->uuid = '05b92cf7-3f90-4d23-bf7f-de74218319f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f5b18cb-4c7d-4d65-b463-eb1763c3535b';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '9f5b18cb-4c7d-4d65-b463-eb1763c3535b';
    $display->content['new-9f5b18cb-4c7d-4d65-b463-eb1763c3535b'] = $pane;
    $display->panels['main'][0] = 'new-9f5b18cb-4c7d-4d65-b463-eb1763c3535b';
    $pane = new stdClass();
    $pane->pid = 'new-8144f213-c1fa-4600-a604-3150416f7243';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8144f213-c1fa-4600-a604-3150416f7243';
    $display->content['new-8144f213-c1fa-4600-a604-3150416f7243'] = $pane;
    $display->panels['nav'][0] = 'new-8144f213-c1fa-4600-a604-3150416f7243';
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
  $page->admin_title = 'Auxiliary groups';
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
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Auxiliary Groups',
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
  $handler->name = 'page_auxiliary_groups_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'auxiliary_groups';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10b';
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
  $display->title = 'Auxiliary Groups';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][0] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04529f33-a545-44ef-890b-55ff0c31e062';
    $display->content['new-04529f33-a545-44ef-890b-55ff0c31e062'] = $pane;
    $display->panels['nav'][0] = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['auxiliary_groups'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'citizen_science';
  $page->task = 'page';
  $page->admin_title = 'Citizen science';
  $page->admin_description = '';
  $page->path = 'science/community-science';
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
    'title' => 'Citizen science',
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
  $handler->name = 'page_citizen_science_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'citizen_science';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6c';
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
  $display->title = 'Citizen Science';
  $display->uuid = '8cde62ee-0aa7-4c9d-a99b-ede543299d0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f857977f-6aa4-4335-aba6-7a691e65d11f';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<p>Words go here.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f857977f-6aa4-4335-aba6-7a691e65d11f';
    $display->content['new-f857977f-6aa4-4335-aba6-7a691e65d11f'] = $pane;
    $display->panels['main'][0] = 'new-f857977f-6aa4-4335-aba6-7a691e65d11f';
    $pane = new stdClass();
    $pane->pid = 'new-30c19363-e3ad-4342-a884-a2f4cf3edffd';
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
      'context' => 'context_entitylist:menu_children_1',
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
          'class' => 'promos--2up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30c19363-e3ad-4342-a884-a2f4cf3edffd';
    $display->content['new-30c19363-e3ad-4342-a884-a2f4cf3edffd'] = $pane;
    $display->panels['main'][1] = 'new-30c19363-e3ad-4342-a884-a2f4cf3edffd';
    $pane = new stdClass();
    $pane->pid = 'new-875794e6-9060-457f-9072-481c0d94daff';
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
      'depth' => '1',
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
    $pane->uuid = '875794e6-9060-457f-9072-481c0d94daff';
    $display->content['new-875794e6-9060-457f-9072-481c0d94daff'] = $pane;
    $display->panels['nav'][0] = 'new-875794e6-9060-457f-9072-481c0d94daff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f857977f-6aa4-4335-aba6-7a691e65d11f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['citizen_science'] = $page;

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
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Conservation & Community',
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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->title = 'Conservation & Community';
  $display->uuid = 'd13a4cc2-43a3-4b2d-8787-8fa340e2c254';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ebb1f5b0-9656-44b1-a9fd-6cb55ecd2233';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Description',
      'title' => '',
      'body' => '<p>Words go here.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebb1f5b0-9656-44b1-a9fd-6cb55ecd2233';
    $display->content['new-ebb1f5b0-9656-44b1-a9fd-6cb55ecd2233'] = $pane;
    $display->panels['main'][0] = 'new-ebb1f5b0-9656-44b1-a9fd-6cb55ecd2233';
    $pane = new stdClass();
    $pane->pid = 'new-df892670-1900-49ec-8177-f53b249c6f1d';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'df892670-1900-49ec-8177-f53b249c6f1d';
    $display->content['new-df892670-1900-49ec-8177-f53b249c6f1d'] = $pane;
    $display->panels['main'][1] = 'new-df892670-1900-49ec-8177-f53b249c6f1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conservation_efforts'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = '';
  $page->path = 'about/contact';
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
    'title' => 'Contact Us',
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
  $handler->name = 'page_contact_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l11a';
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
  $display->title = '';
  $display->uuid = '8cfd6e26-54e1-4b71-99f6-2a5791512e6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
    $display->content['new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b'] = $pane;
    $display->panels['nav'][0] = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us_rfp';
  $page->task = 'page';
  $page->admin_title = 'Contact us/RFP';
  $page->admin_description = '';
  $page->path = 'visit/special-events/contact';
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
    'title' => 'Contact Us/RFP',
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
  $handler->name = 'page_contact_us_rfp_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact_us_rfp';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l11';
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
  $display->title = '';
  $display->uuid = '8cfd6e26-54e1-4b71-99f6-2a5791512e6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
    $display->content['new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b'] = $pane;
    $display->panels['nav'][0] = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8dfd8a66-eff7-4ddd-b48e-2f2366e3f88b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us_rfp'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'corporate_giving';
  $page->task = 'page';
  $page->admin_title = 'Corporate giving';
  $page->admin_description = '';
  $page->path = 'support/ways-to-give/corporate-giving';
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
    'title' => 'Corporate giving',
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
  $handler->name = 'page_corporate_giving_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'corporate_giving';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10a';
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
  $display->title = 'Corporate giving';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][0] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04529f33-a545-44ef-890b-55ff0c31e062';
    $display->content['new-04529f33-a545-44ef-890b-55ff0c31e062'] = $pane;
    $display->panels['nav'][0] = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['corporate_giving'] = $page;

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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l4';
  $display->layout_settings = array(
    'top_a_classes' => 'summary',
    'top_b_classes' => 'summary',
    'top_c_classes' => 'summary',
    'middle_a_classes' => 'summary',
    'middle_b_classes' => 'summary',
    'middle_c_classes' => 'summary',
    'bottom_a_classes' => 'summary',
    'bottom_b_classes' => 'summary',
    'bottom_c_classes' => 'summary',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'middle_a' => NULL,
      'middle_b' => NULL,
      'middle_c' => NULL,
      'bottom_a' => NULL,
      'bottom_b' => NULL,
      'bottom_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Educators';
  $display->uuid = '2de777c9-eb1b-437b-b6ac-14327e1c20df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f809b661-13d2-48a1-9692-e5ff6aacc767';
    $pane->panel = 'bottom_a';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '8',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'f809b661-13d2-48a1-9692-e5ff6aacc767';
    $display->content['new-f809b661-13d2-48a1-9692-e5ff6aacc767'] = $pane;
    $display->panels['bottom_a'][0] = 'new-f809b661-13d2-48a1-9692-e5ff6aacc767';
    $pane = new stdClass();
    $pane->pid = 'new-9644a095-c91e-451c-82a7-71f6276c40d1';
    $pane->panel = 'middle_a';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '5',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '9644a095-c91e-451c-82a7-71f6276c40d1';
    $display->content['new-9644a095-c91e-451c-82a7-71f6276c40d1'] = $pane;
    $display->panels['middle_a'][0] = 'new-9644a095-c91e-451c-82a7-71f6276c40d1';
    $pane = new stdClass();
    $pane->pid = 'new-7afc7293-f2a5-4615-8786-28dbed624515';
    $pane->panel = 'middle_b';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '6',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '7afc7293-f2a5-4615-8786-28dbed624515';
    $display->content['new-7afc7293-f2a5-4615-8786-28dbed624515'] = $pane;
    $display->panels['middle_b'][0] = 'new-7afc7293-f2a5-4615-8786-28dbed624515';
    $pane = new stdClass();
    $pane->pid = 'new-907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $pane->panel = 'middle_c';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '7',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $display->content['new-907188fe-d1af-49c9-9c97-b0c6906b21f7'] = $pane;
    $display->panels['middle_c'][0] = 'new-907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $pane = new stdClass();
    $pane->pid = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane->panel = 'top_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:26';
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
    $pane->uuid = 'fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $display->content['new-fc09d2d5-fe5e-4be7-8729-867996f87b31'] = $pane;
    $display->panels['top_a'][0] = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane = new stdClass();
    $pane->pid = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane->panel = 'top_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:41';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1480c26e-8f39-4694-8af6-3c83707610ef';
    $display->content['new-1480c26e-8f39-4694-8af6-3c83707610ef'] = $pane;
    $display->panels['top_a'][1] = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane = new stdClass();
    $pane->pid = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane->panel = 'top_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:31';
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
    $pane->uuid = '01791882-e256-439b-87b4-660c9ef7786e';
    $display->content['new-01791882-e256-439b-87b4-660c9ef7786e'] = $pane;
    $display->panels['top_b'][0] = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane = new stdClass();
    $pane->pid = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane->panel = 'top_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:46';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e0833bc3-72da-4d35-b137-52994c1002f1';
    $display->content['new-e0833bc3-72da-4d35-b137-52994c1002f1'] = $pane;
    $display->panels['top_b'][1] = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane = new stdClass();
    $pane->pid = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane->panel = 'top_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:56';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1706250f-2770-40cb-a535-c9017e794271';
    $display->content['new-1706250f-2770-40cb-a535-c9017e794271'] = $pane;
    $display->panels['top_b'][2] = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane = new stdClass();
    $pane->pid = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane->panel = 'top_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:36';
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
    $pane->uuid = 'e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $display->content['new-e2f497e4-c241-4534-aa3f-fe017d0e8475'] = $pane;
    $display->panels['top_c'][0] = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane = new stdClass();
    $pane->pid = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane->panel = 'top_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:51';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94d290ae-e000-4680-85ea-e13bc143bc3c';
    $display->content['new-94d290ae-e000-4680-85ea-e13bc143bc3c'] = $pane;
    $display->panels['top_c'][1] = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane = new stdClass();
    $pane->pid = 'new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
    $pane->panel = 'top_c';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '4',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
    $display->content['new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67'] = $pane;
    $display->panels['top_c'][2] = 'new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['educators'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'educators_blogs';
  $page->task = 'page';
  $page->admin_title = 'Educators blogs';
  $page->admin_description = '';
  $page->path = 'educators/blog';
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
    'title' => 'Educators blog',
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
  $handler->name = 'page_educators_blogs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'educators_blogs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '806',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Blogs',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:blogs',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'context' => array(
          0 => 'context_entity:taxonomy_term_1',
        ),
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'l13';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '231137e8-83c9-4391-ac05-3a37318043c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
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
      'context' => 'relationship_entitylist_relationship:blogs_1',
      'override_title' => 1,
      'override_title_text' => 'Recent Blog Posts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['main'][0] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
    $pane = new stdClass();
    $pane->pid = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'relationship_entitylist_relationship:blogs_1',
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
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['main'][1] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane = new stdClass();
    $pane->pid = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9221d713-ef05-46d6-bfde-29cb849c03e4';
    $display->content['new-9221d713-ef05-46d6-bfde-29cb849c03e4'] = $pane;
    $display->panels['nav'][0] = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['educators_blogs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'event_spaces';
  $page->task = 'page';
  $page->admin_title = 'Event spaces';
  $page->admin_description = '';
  $page->path = 'visit/special-events/event-spaces';
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
    'title' => 'Event spaces',
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
  $handler->name = 'page_event_spaces_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'event_spaces';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6a';
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
  $display->title = 'Event spaces';
  $display->uuid = '3f815a04-1f8d-4b95-a900-d1b6f6e2a88e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc11d019-4564-48d4-9c11-0a710d64ed40';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:11';
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
    $pane->uuid = 'dc11d019-4564-48d4-9c11-0a710d64ed40';
    $display->content['new-dc11d019-4564-48d4-9c11-0a710d64ed40'] = $pane;
    $display->panels['main'][0] = 'new-dc11d019-4564-48d4-9c11-0a710d64ed40';
    $pane = new stdClass();
    $pane->pid = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b4067b-e275-4c42-850a-1398c1585f8c';
    $display->content['new-62b4067b-e275-4c42-850a-1398c1585f8c'] = $pane;
    $display->panels['main'][1] = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
    $pane = new stdClass();
    $pane->pid = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
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
      'depth' => '2',
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
    $pane->uuid = '49bd503e-78e5-4a94-bdff-beb98cca1b06';
    $display->content['new-49bd503e-78e5-4a94-bdff-beb98cca1b06'] = $pane;
    $display->panels['nav'][0] = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['event_spaces'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'event_spaces_gallery';
  $page->task = 'page';
  $page->admin_title = 'Event spaces gallery';
  $page->admin_description = '';
  $page->path = 'visit/special-events/gallery';
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
    'title' => 'Galleries',
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
  $handler->name = 'page_event_spaces_gallery_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'event_spaces_gallery';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6a';
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
  $display->title = 'Galleries';
  $display->uuid = '3f815a04-1f8d-4b95-a900-d1b6f6e2a88e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-114a9a57-6172-4857-9772-c1ca35452dc7';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<p>Text goes here.</p><p>Text goes here.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '114a9a57-6172-4857-9772-c1ca35452dc7';
    $display->content['new-114a9a57-6172-4857-9772-c1ca35452dc7'] = $pane;
    $display->panels['main'][0] = 'new-114a9a57-6172-4857-9772-c1ca35452dc7';
    $pane = new stdClass();
    $pane->pid = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b4067b-e275-4c42-850a-1398c1585f8c';
    $display->content['new-62b4067b-e275-4c42-850a-1398c1585f8c'] = $pane;
    $display->panels['main'][1] = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
    $pane = new stdClass();
    $pane->pid = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
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
      'depth' => '2',
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
    $pane->uuid = '49bd503e-78e5-4a94-bdff-beb98cca1b06';
    $display->content['new-49bd503e-78e5-4a94-bdff-beb98cca1b06'] = $pane;
    $display->panels['nav'][0] = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['event_spaces_gallery'] = $page;

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
    'pipeline' => 'ipe',
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
        'pager_id' => 0,
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
          'limit' => 0,
        ),
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array(
    'top_a_classes' => 'summary',
    'top_b_classes' => 'summary',
    'top_c_classes' => 'summary',
    'bottom_classes' => 'promos--3up',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'hero' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Exhibitions and Events';
  $display->uuid = '6670015c-8d44-40ac-8664-5d85e449f8fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-91b6980d-0fb6-4d6a-a3e2-52f60d261004';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][0] = 'new-91b6980d-0fb6-4d6a-a3e2-52f60d261004';
    $pane = new stdClass();
    $pane->pid = 'new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $pane->panel = 'top_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:16';
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
    $pane->uuid = '4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $display->content['new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919'] = $pane;
    $display->panels['top_a'][0] = 'new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $pane = new stdClass();
    $pane->pid = 'new-d88ad931-925d-48f0-a374-c7e2dee74efc';
    $pane->panel = 'top_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1856,
      'parent' => 'main-menu:1856',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = 'd88ad931-925d-48f0-a374-c7e2dee74efc';
    $display->content['new-d88ad931-925d-48f0-a374-c7e2dee74efc'] = $pane;
    $display->panels['top_a'][1] = 'new-d88ad931-925d-48f0-a374-c7e2dee74efc';
    $pane = new stdClass();
    $pane->pid = 'new-817218f4-b4e1-41ff-a37d-5ce3784a9ae3';
    $pane->panel = 'top_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Programs summary',
      'title' => 'Programs',
      'body' => '<p class="p1">Meet a real scientist, doze with the dinos or go on a behind-the-scenes tour. Our unique programs promise to give you an experience unlike any other.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '817218f4-b4e1-41ff-a37d-5ce3784a9ae3';
    $display->content['new-817218f4-b4e1-41ff-a37d-5ce3784a9ae3'] = $pane;
    $display->panels['top_b'][0] = 'new-817218f4-b4e1-41ff-a37d-5ce3784a9ae3';
    $pane = new stdClass();
    $pane->pid = 'new-b6571185-95c9-4c61-bb37-49ae442632e2';
    $pane->panel = 'top_b';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1866,
      'parent' => 'main-menu:1866',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b6571185-95c9-4c61-bb37-49ae442632e2';
    $display->content['new-b6571185-95c9-4c61-bb37-49ae442632e2'] = $pane;
    $display->panels['top_b'][1] = 'new-b6571185-95c9-4c61-bb37-49ae442632e2';
    $pane = new stdClass();
    $pane->pid = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $pane->panel = 'top_c';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '5',
      ),
      'view_mode' => 'node:event',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $display->content['new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441'] = $pane;
    $display->panels['top_c'][0] = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $pane = new stdClass();
    $pane->pid = 'new-795a4513-d951-452c-95e5-5d5a1e54f65b';
    $pane->panel = 'top_c';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1851,
      'parent' => 'main-menu:1851',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '795a4513-d951-452c-95e5-5d5a1e54f65b';
    $display->content['new-795a4513-d951-452c-95e5-5d5a1e54f65b'] = $pane;
    $display->panels['top_c'][1] = 'new-795a4513-d951-452c-95e5-5d5a1e54f65b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_and_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'field_trip_programs';
  $page->task = 'page';
  $page->admin_title = 'Field trip programs';
  $page->admin_description = '';
  $page->path = 'educators/field-trip-programs';
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
    'title' => 'Field trip programs',
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
  $handler->name = 'page_field_trip_programs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'field_trip_programs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l6a';
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
  $display->title = 'Field trip programs';
  $display->uuid = '29dae451-7137-44fd-a6bc-fd5eb79071ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7480f094-23af-4ffa-8c1d-10da8efcc047';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7480f094-23af-4ffa-8c1d-10da8efcc047';
    $display->content['new-7480f094-23af-4ffa-8c1d-10da8efcc047'] = $pane;
    $display->panels['nav'][0] = 'new-7480f094-23af-4ffa-8c1d-10da8efcc047';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['field_trip_programs'] = $page;

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
    'pipeline' => 'ipe',
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
  $display->layout = 'a';
  $display->layout_settings = array(
    'main_classes' => '',
    'banners_classes' => 'banners',
    'bottom_left_classes' => 'l--module',
    'bottom_right_classes' => 'l--module',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'banners' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane->panel = 'banners';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $display->content['new-0b7e8763-317f-435a-bfbe-fd05c7d12506'] = $pane;
    $display->panels['banners'][0] = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane = new stdClass();
    $pane->pid = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane->panel = 'banners';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $display->content['new-e17aa475-ebcc-44d9-a2c8-5475e37c1548'] = $pane;
    $display->panels['banners'][1] = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane = new stdClass();
    $pane->pid = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $pane->panel = 'banners';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $display->content['new-64c4c056-b3c7-4afd-8796-35e7f9d62988'] = $pane;
    $display->panels['banners'][2] = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $pane = new stdClass();
    $pane->pid = 'new-fec69ff5-25a8-443c-93af-cd001bcf34c7';
    $pane->panel = 'bottom_left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'scale--5',
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
          'type' => '',
          'class_enable' => 0,
          'class' => '',
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
    $pane->uuid = 'fec69ff5-25a8-443c-93af-cd001bcf34c7';
    $display->content['new-fec69ff5-25a8-443c-93af-cd001bcf34c7'] = $pane;
    $display->panels['bottom_left'][0] = 'new-fec69ff5-25a8-443c-93af-cd001bcf34c7';
    $pane = new stdClass();
    $pane->pid = 'new-12c86a1b-c1d3-46e0-bf3c-d426de58831b';
    $pane->panel = 'bottom_right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'scale--5',
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
          'type' => '',
          'class_enable' => 0,
          'class' => '',
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
    $pane->uuid = '12c86a1b-c1d3-46e0-bf3c-d426de58831b';
    $display->content['new-12c86a1b-c1d3-46e0-bf3c-d426de58831b'] = $pane;
    $display->panels['bottom_right'][0] = 'new-12c86a1b-c1d3-46e0-bf3c-d426de58831b';
    $pane = new stdClass();
    $pane->pid = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $pane->panel = 'bottom_right';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '5',
      ),
      'view_mode' => 'node:event',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:upcoming_events_1',
      'override_title' => 1,
      'override_title_text' => 'Upcoming events',
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
    $pane->uuid = '66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $display->content['new-66560f6a-fd8b-4229-8ef3-55e405440b6d'] = $pane;
    $display->panels['bottom_right'][1] = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'individual_giving';
  $page->task = 'page';
  $page->admin_title = 'Individual giving';
  $page->admin_description = '';
  $page->path = 'support/ways-to-give/individual-giving';
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
    'title' => 'Individual giving',
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
  $handler->name = 'page_individual_giving_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'individual_giving';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10';
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
  $display->title = 'Individual giving';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][0] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04529f33-a545-44ef-890b-55ff0c31e062';
    $display->content['new-04529f33-a545-44ef-890b-55ff0c31e062'] = $pane;
    $display->panels['nav'][0] = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['individual_giving'] = $page;

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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Learning resources',
        'keyword' => 'list',
        'name' => 'entitylist:learning_resources',
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
  $display->layout = 'l15';
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
  $display->title = '';
  $display->uuid = '708b5437-1b34-43a0-8a9d-62d0b2b4ef59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff9ab0c7-b547-4b24-a50e-e8f190528c08';
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
      'context' => 'context_entitylist:learning_resources_1',
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
    $pane->uuid = 'ff9ab0c7-b547-4b24-a50e-e8f190528c08';
    $display->content['new-ff9ab0c7-b547-4b24-a50e-e8f190528c08'] = $pane;
    $display->panels['main'][0] = 'new-ff9ab0c7-b547-4b24-a50e-e8f190528c08';
    $pane = new stdClass();
    $pane->pid = 'new-171d9aa8-a3b0-4063-8d2e-187cc4a54118';
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
    $pane->uuid = '171d9aa8-a3b0-4063-8d2e-187cc4a54118';
    $display->content['new-171d9aa8-a3b0-4063-8d2e-187cc4a54118'] = $pane;
    $display->panels['nav'][0] = 'new-171d9aa8-a3b0-4063-8d2e-187cc4a54118';
    $pane = new stdClass();
    $pane->pid = 'new-f76843b6-0432-472e-bcec-5009ff8ddb2a';
    $pane->panel = 'nav';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'context_entitylist:learning_resources_1',
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
    $pane->uuid = 'f76843b6-0432-472e-bcec-5009ff8ddb2a';
    $display->content['new-f76843b6-0432-472e-bcec-5009ff8ddb2a'] = $pane;
    $display->panels['nav'][1] = 'new-f76843b6-0432-472e-bcec-5009ff8ddb2a';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
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
  $page->name = 'meeting_spaces';
  $page->task = 'page';
  $page->admin_title = 'Meeting spaces';
  $page->admin_description = '';
  $page->path = 'visit/special-events/meeting-spaces';
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
    'title' => 'Meeting spaces',
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
  $handler->name = 'page_meeting_spaces_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'meeting_spaces';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6a';
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
  $display->title = 'Meeting spaces';
  $display->uuid = '3f815a04-1f8d-4b95-a900-d1b6f6e2a88e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-114a9a57-6172-4857-9772-c1ca35452dc7';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<p>Text goes here.</p><p>Text goes here.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '114a9a57-6172-4857-9772-c1ca35452dc7';
    $display->content['new-114a9a57-6172-4857-9772-c1ca35452dc7'] = $pane;
    $display->panels['main'][0] = 'new-114a9a57-6172-4857-9772-c1ca35452dc7';
    $pane = new stdClass();
    $pane->pid = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b4067b-e275-4c42-850a-1398c1585f8c';
    $display->content['new-62b4067b-e275-4c42-850a-1398c1585f8c'] = $pane;
    $display->panels['main'][1] = 'new-62b4067b-e275-4c42-850a-1398c1585f8c';
    $pane = new stdClass();
    $pane->pid = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
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
      'depth' => '2',
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
    $pane->uuid = '49bd503e-78e5-4a94-bdff-beb98cca1b06';
    $display->content['new-49bd503e-78e5-4a94-bdff-beb98cca1b06'] = $pane;
    $display->panels['nav'][0] = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-49bd503e-78e5-4a94-bdff-beb98cca1b06';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['meeting_spaces'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'membership_blog';
  $page->task = 'page';
  $page->admin_title = 'Membership blog';
  $page->admin_description = '';
  $page->path = 'support/members/blog';
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
    'title' => 'Blog',
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
  $handler->name = 'page_membership_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'membership_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '1311',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Blogs',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:blogs',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'context' => array(
          0 => 'context_entity:taxonomy_term_1',
        ),
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'l13a';
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
  $display->title = 'Membership Blog';
  $display->uuid = '32f6d18d-364c-45a1-8958-ddedfaf17c6e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f7f71483-fc24-473a-8a71-0bc1422e8b7e';
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
      'context' => 'relationship_entitylist_relationship:blogs_1',
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
    $pane->uuid = 'f7f71483-fc24-473a-8a71-0bc1422e8b7e';
    $display->content['new-f7f71483-fc24-473a-8a71-0bc1422e8b7e'] = $pane;
    $display->panels['main'][0] = 'new-f7f71483-fc24-473a-8a71-0bc1422e8b7e';
    $pane = new stdClass();
    $pane->pid = 'new-1cb3abc0-9e75-41d7-915e-42d72338a9f1';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'relationship_entitylist_relationship:blogs_1',
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
    $pane->uuid = '1cb3abc0-9e75-41d7-915e-42d72338a9f1';
    $display->content['new-1cb3abc0-9e75-41d7-915e-42d72338a9f1'] = $pane;
    $display->panels['main'][1] = 'new-1cb3abc0-9e75-41d7-915e-42d72338a9f1';
    $pane = new stdClass();
    $pane->pid = 'new-60206382-eaed-4201-aced-5e05fcc29c5a';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60206382-eaed-4201-aced-5e05fcc29c5a';
    $display->content['new-60206382-eaed-4201-aced-5e05fcc29c5a'] = $pane;
    $display->panels['nav'][0] = 'new-60206382-eaed-4201-aced-5e05fcc29c5a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['membership_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'museum_members';
  $page->task = 'page';
  $page->admin_title = 'Membership info';
  $page->admin_description = '';
  $page->path = 'support/members';
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
    'title' => 'Membership info',
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
  $handler->name = 'page_museum_members_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'museum_members';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10c';
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
  $display->title = 'Membership info';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][0] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04529f33-a545-44ef-890b-55ff0c31e062';
    $display->content['new-04529f33-a545-44ef-890b-55ff0c31e062'] = $pane;
    $display->panels['nav'][0] = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['museum_members'] = $page;

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
  $page->name = 'partnerships';
  $page->task = 'page';
  $page->admin_title = 'Partnerships';
  $page->admin_description = '';
  $page->path = 'educators/partnerships';
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
    'title' => 'Partnerships',
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
  $handler->name = 'page_partnerships_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'partnerships';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6c';
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
  $display->title = 'Partnerships';
  $display->uuid = 'dab4abb4-9cb8-495d-b8de-496c2608e946';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<p>Words go here.</p>',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = '714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
    $display->content['new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f'] = $pane;
    $display->panels['main'][0] = 'new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
    $pane = new stdClass();
    $pane->pid = 'new-d96c4fbd-562e-450b-8b94-b3c184541430';
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
      'context' => 'context_entitylist:menu_children_1',
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
          'class' => 'promos--2up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd96c4fbd-562e-450b-8b94-b3c184541430';
    $display->content['new-d96c4fbd-562e-450b-8b94-b3c184541430'] = $pane;
    $display->panels['main'][1] = 'new-d96c4fbd-562e-450b-8b94-b3c184541430';
    $pane = new stdClass();
    $pane->pid = 'new-f6c9d760-bc6c-4468-a2c8-22b32eae7931';
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
      'follow' => 'active',
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
    $pane->uuid = 'f6c9d760-bc6c-4468-a2c8-22b32eae7931';
    $display->content['new-f6c9d760-bc6c-4468-a2c8-22b32eae7931'] = $pane;
    $display->panels['nav'][0] = 'new-f6c9d760-bc6c-4468-a2c8-22b32eae7931';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partnerships'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'plan_your_special_event';
  $page->task = 'page';
  $page->admin_title = 'Plan your special event';
  $page->admin_description = '';
  $page->path = 'visit/special-events';
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
    'title' => 'Plan your special event',
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
  $handler->name = 'page_plan_your_special_event_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'plan_your_special_event';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10';
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
  $display->title = 'Plan your special event';
  $display->uuid = 'ebab7262-033c-4242-a61d-94bfbaf7cd5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b7ed825-5caf-4d99-b1de-a0271b6a6fa0';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '6b7ed825-5caf-4d99-b1de-a0271b6a6fa0';
    $display->content['new-6b7ed825-5caf-4d99-b1de-a0271b6a6fa0'] = $pane;
    $display->panels['main'][0] = 'new-6b7ed825-5caf-4d99-b1de-a0271b6a6fa0';
    $pane = new stdClass();
    $pane->pid = 'new-f3dfd01b-dd70-4ae2-91cb-04a5ad61ef21';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f3dfd01b-dd70-4ae2-91cb-04a5ad61ef21';
    $display->content['new-f3dfd01b-dd70-4ae2-91cb-04a5ad61ef21'] = $pane;
    $display->panels['nav'][0] = 'new-f3dfd01b-dd70-4ae2-91cb-04a5ad61ef21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6b7ed825-5caf-4d99-b1de-a0271b6a6fa0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['plan_your_special_event'] = $page;

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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array(
    'callout_classes' => 'callout',
    'top_a_classes' => 'l--module',
    'top_b_classes' => 'l--module',
    'top_c_classes' => 'l--module',
    'bottom_a_classes' => 'summary',
    'bottom_b_classes' => 'summary',
    'bottom_c_classes' => 'summary',
    'bottom_d_classes' => 'summary',
    'nav_classes' => 'navSection',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'callout' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'bottom_b' => NULL,
      'bottom_c' => NULL,
      'bottom_d' => NULL,
      'top_a' => NULL,
      'bottom_a' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Plan your visit';
  $display->uuid = '0e1fa6d2-0164-4626-b7f4-3dbb72c3c3fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $pane->panel = 'bottom_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
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
    $pane->uuid = '8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $display->content['new-8c0a829e-465b-4961-ad1c-946e8b698ea7'] = $pane;
    $display->panels['bottom_a'][0] = 'new-8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $pane = new stdClass();
    $pane->pid = 'new-31a06e62-c97c-4ced-b6bc-6124749653ae';
    $pane->panel = 'bottom_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:5';
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
    $pane->uuid = '31a06e62-c97c-4ced-b6bc-6124749653ae';
    $display->content['new-31a06e62-c97c-4ced-b6bc-6124749653ae'] = $pane;
    $display->panels['bottom_b'][0] = 'new-31a06e62-c97c-4ced-b6bc-6124749653ae';
    $pane = new stdClass();
    $pane->pid = 'new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $pane->panel = 'bottom_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
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
    $pane->uuid = '74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $display->content['new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7'] = $pane;
    $display->panels['bottom_c'][0] = 'new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $pane = new stdClass();
    $pane->pid = 'new-ce89612a-6c18-4325-86b9-17c1e9e705a5';
    $pane->panel = 'bottom_d';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
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
    $pane->uuid = 'ce89612a-6c18-4325-86b9-17c1e9e705a5';
    $display->content['new-ce89612a-6c18-4325-86b9-17c1e9e705a5'] = $pane;
    $display->panels['bottom_d'][0] = 'new-ce89612a-6c18-4325-86b9-17c1e9e705a5';
    $pane = new stdClass();
    $pane->pid = 'new-4c07d9c4-da40-4cf8-9eab-71cccbff43df';
    $pane->panel = 'callout';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Hours',
      'title' => '',
      'body' => '<p class="p1">The Field Museum is open from 9am-5pm every day of the year except Christmas Day. Last admission is at 4pm daily.</p>',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = '4c07d9c4-da40-4cf8-9eab-71cccbff43df';
    $display->content['new-4c07d9c4-da40-4cf8-9eab-71cccbff43df'] = $pane;
    $display->panels['callout'][0] = 'new-4c07d9c4-da40-4cf8-9eab-71cccbff43df';
    $pane = new stdClass();
    $pane->pid = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
    $pane->panel = 'nav';
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
    $display->panels['nav'][0] = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
    $pane = new stdClass();
    $pane->pid = 'new-af1aca4e-03ba-4da1-b553-6e81480c9a91';
    $pane->panel = 'top_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'All-Access Tickets',
      'title' => 'All-Access Tickets',
      'body' => '<p class="p1">Make the most of your visit with access to all of our exhibitions plus a 3D movie. Our best value!</p>',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = 'af1aca4e-03ba-4da1-b553-6e81480c9a91';
    $display->content['new-af1aca4e-03ba-4da1-b553-6e81480c9a91'] = $pane;
    $display->panels['top_a'][0] = 'new-af1aca4e-03ba-4da1-b553-6e81480c9a91';
    $pane = new stdClass();
    $pane->pid = 'new-2f1047d9-be5e-4d5e-8dc4-2c8e7aca516d';
    $pane->panel = 'top_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Price list',
      'title' => '',
      'body' => '            <ul class="priceList">
              <li class="priceList__item">
                <div class="priceList__details">
                  <span class="priceList__label">
                    
                  </span>
                  <span class="priceList__price">$</span>
                </div>
                <p class="priceList__condition"></p>
              </li>
              <li class="priceList__item">
                <div class="priceList__details">
                  <span class="priceList__label">
                    
                  </span>
                  <span class="priceList__price">$</span>
                </div>
                <p class="priceList__condition"></p>
              </li>
              <li class="priceList__item">
                <div class="priceList__details">
                  <span class="priceList__label">
                    
                  </span>
                  <span class="priceList__price">$</span>
                </div>
                <p class="priceList__condition"></p>
              </li>
              <li class="priceList__item">
                <div class="priceList__details">
                  <span class="priceList__label">
                    
                  </span>
                  <span class="priceList__price">$</span>
                </div>
                <p class="priceList__condition"></p>
              </li>
            </ul>
',
      'format' => 'unfiltered',
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
    $pane->uuid = '2f1047d9-be5e-4d5e-8dc4-2c8e7aca516d';
    $display->content['new-2f1047d9-be5e-4d5e-8dc4-2c8e7aca516d'] = $pane;
    $display->panels['top_b'][0] = 'new-2f1047d9-be5e-4d5e-8dc4-2c8e7aca516d';
    $pane = new stdClass();
    $pane->pid = 'new-f97a12d3-5e05-4a44-9291-d34a0596f502';
    $pane->panel = 'top_c';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ticket links',
      'title' => '',
      'body' => '            <a href="#" class="button--purchase">Purchase Tickets</a>
            <a href="#" class="button--cta button--small">View Ticket Packages</a>
',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = 'f97a12d3-5e05-4a44-9291-d34a0596f502';
    $display->content['new-f97a12d3-5e05-4a44-9291-d34a0596f502'] = $pane;
    $display->panels['top_c'][0] = 'new-f97a12d3-5e05-4a44-9291-d34a0596f502';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6c';
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
  $display->title = '';
  $display->uuid = '5cf2f779-14ca-4bad-8d58-c0e373cb4690';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-50840a1c-a85d-4284-a73d-9e9c0d257ecc';
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
      'context' => 'context_entitylist:menu_children_1',
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
          'class' => 'promos--2up',
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
    $pane->uuid = '50840a1c-a85d-4284-a73d-9e9c0d257ecc';
    $display->content['new-50840a1c-a85d-4284-a73d-9e9c0d257ecc'] = $pane;
    $display->panels['main'][0] = 'new-50840a1c-a85d-4284-a73d-9e9c0d257ecc';
    $pane = new stdClass();
    $pane->pid = 'new-53011743-b715-40e7-b7ec-609fba52937e';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53011743-b715-40e7-b7ec-609fba52937e';
    $display->content['new-53011743-b715-40e7-b7ec-609fba52937e'] = $pane;
    $display->panels['nav'][0] = 'new-53011743-b715-40e7-b7ec-609fba52937e';
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
  $handler->name = 'page_research_collections_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'research_collections';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6d';
  $display->layout_settings = array(
    'top_classes' => '',
    'bottom_classes' => '',
    'nav_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Research and Collections';
  $display->uuid = '96b9dabb-2f52-4198-8d88-21d92f5f3449';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d40aca6-d611-471f-b7d5-7539e227b24f';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d40aca6-d611-471f-b7d5-7539e227b24f';
    $display->content['new-1d40aca6-d611-471f-b7d5-7539e227b24f'] = $pane;
    $display->panels['nav'][0] = 'new-1d40aca6-d611-471f-b7d5-7539e227b24f';
    $pane = new stdClass();
    $pane->pid = 'new-3ae6c59f-4c65-48c8-8ea2-247eea254045';
    $pane->panel = 'top';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '3ae6c59f-4c65-48c8-8ea2-247eea254045';
    $display->content['new-3ae6c59f-4c65-48c8-8ea2-247eea254045'] = $pane;
    $display->panels['top'][0] = 'new-3ae6c59f-4c65-48c8-8ea2-247eea254045';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6c';
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
  $display->title = 'Resources and tools';
  $display->uuid = '4aaab591-7563-4741-b367-7eb3834321bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bbab65cc-3714-497b-95d4-b4887e07ea3e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Words go here.</p>',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = 'bbab65cc-3714-497b-95d4-b4887e07ea3e';
    $display->content['new-bbab65cc-3714-497b-95d4-b4887e07ea3e'] = $pane;
    $display->panels['main'][0] = 'new-bbab65cc-3714-497b-95d4-b4887e07ea3e';
    $pane = new stdClass();
    $pane->pid = 'new-b8137fd2-a9ab-41d5-b3f6-fe048d273ae8';
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
      'context' => 'context_entitylist:menu_children_1',
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
          'class' => 'promos--2up',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b8137fd2-a9ab-41d5-b3f6-fe048d273ae8';
    $display->content['new-b8137fd2-a9ab-41d5-b3f6-fe048d273ae8'] = $pane;
    $display->panels['main'][1] = 'new-b8137fd2-a9ab-41d5-b3f6-fe048d273ae8';
    $pane = new stdClass();
    $pane->pid = 'new-d38dc685-f869-4604-ab07-98ade10c4df4';
    $pane->panel = 'nav';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 'child',
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'parent' => 'main-menu:0',
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
    $display->panels['nav'][0] = 'new-d38dc685-f869-4604-ab07-98ade10c4df4';
  $display->hide_title = PANELS_TITLE_FIXED;
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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l3';
  $display->layout_settings = array(
    'callout_classes' => '',
    'top_a_classes' => 'promo',
    'top_b_classes' => 'promo',
    'top_c_classes' => 'promo',
    'middle_classes' => '',
    'bottom_a_classes' => 'summary',
    'bottom_b_classes' => 'summary',
    'bottom_c_classes' => 'summary',
    'nav_classes' => 'navSection',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
      'callout' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'bottom_a' => NULL,
      'bottom_b' => NULL,
      'bottom_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Science and Research';
  $display->uuid = '86abd588-1ecf-4a03-926f-d7098a870c45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane->panel = 'bottom_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:8';
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
    $pane->uuid = '35903402-4dca-4000-b537-7a426de082bf';
    $display->content['new-35903402-4dca-4000-b537-7a426de082bf'] = $pane;
    $display->panels['bottom_a'][0] = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane = new stdClass();
    $pane->pid = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane->panel = 'bottom_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:9';
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
    $pane->uuid = '023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $display->content['new-023119be-c0ab-4ebb-a46c-d3283e1e25a1'] = $pane;
    $display->panels['bottom_b'][0] = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane = new stdClass();
    $pane->pid = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
    $pane->panel = 'bottom_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:10';
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
    $pane->uuid = 'd866853d-695d-4c9b-ae0b-df338e6ada8e';
    $display->content['new-d866853d-695d-4c9b-ae0b-df338e6ada8e'] = $pane;
    $display->panels['bottom_c'][0] = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
    $pane = new stdClass();
    $pane->pid = 'new-947d2ddb-1bc9-4494-9877-1abb6ccde6ca';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '947d2ddb-1bc9-4494-9877-1abb6ccde6ca';
    $display->content['new-947d2ddb-1bc9-4494-9877-1abb6ccde6ca'] = $pane;
    $display->panels['nav'][0] = 'new-947d2ddb-1bc9-4494-9877-1abb6ccde6ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['science_and_research'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'science_blogs';
  $page->task = 'page';
  $page->admin_title = 'Science blogs';
  $page->admin_description = '';
  $page->path = 'science/blog';
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
    'title' => 'Blogs & videos',
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
  $handler->name = 'page_science_blogs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'science_blogs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '901',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Blogs',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:blogs',
        'use_pager' => TRUE,
        'pager_id' => NULL,
        'range' => array(
          'offset' => 0,
          'limit' => 10,
        ),
        'context' => array(
          0 => 'context_entity:taxonomy_term_1',
        ),
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'l12';
  $display->layout_settings = array(
    'top_classes' => '',
    'top_a_classes' => '',
    'top_b_classes' => '',
    'top_c_classes' => '',
    'bottom_classes' => '',
    'nav_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blogs and Videos';
  $display->uuid = '231137e8-83c9-4391-ac05-3a37318043c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
    $pane->panel = 'bottom';
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
      'context' => 'relationship_entitylist_relationship:blogs_1',
      'override_title' => 1,
      'override_title_text' => 'Recent Blog Posts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['bottom'][0] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
    $pane = new stdClass();
    $pane->pid = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane->panel = 'bottom';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'relationship_entitylist_relationship:blogs_1',
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
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['bottom'][1] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane = new stdClass();
    $pane->pid = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9221d713-ef05-46d6-bfde-29cb849c03e4';
    $display->content['new-9221d713-ef05-46d6-bfde-29cb849c03e4'] = $pane;
    $display->panels['nav'][0] = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['science_blogs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'science_blogs_filtered';
  $page->task = 'page';
  $page->admin_title = 'Science blogs filtered';
  $page->admin_description = '';
  $page->path = 'science/blog/%term';
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
    'title' => 'Blogs & videos',
    'name' => 'main-menu',
    'weight' => '0',
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
          21 => '21',
          1 => 0,
          6 => 0,
          11 => 0,
          26 => 0,
          16 => 0,
          36 => 0,
          41 => 0,
          46 => 0,
          51 => 0,
          31 => 0,
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
  $handler->name = 'page_science_blogs_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'science_blogs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'List: Blogs',
        'keyword' => 'list',
        'name' => 'entitylist_relationship:blogs',
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
  $display->layout = 'l13';
  $display->layout_settings = array(
    'main_classes' => '',
    'nav_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'top_c' => NULL,
      'bottom' => NULL,
      'nav' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '231137e8-83c9-4391-ac05-3a37318043c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
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
      'context' => 'relationship_entitylist_relationship:blogs_1',
      'override_title' => 1,
      'override_title_text' => 'Recent Blog Posts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['main'][0] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
    $pane = new stdClass();
    $pane->pid = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'relationship_entitylist_relationship:blogs_1',
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
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['main'][1] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $pane = new stdClass();
    $pane->pid = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9221d713-ef05-46d6-bfde-29cb849c03e4';
    $display->content['new-9221d713-ef05-46d6-bfde-29cb849c03e4'] = $pane;
    $display->panels['nav'][0] = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9221d713-ef05-46d6-bfde-29cb849c03e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['science_blogs_filtered'] = $page;

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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l5';
  $display->layout_settings = array(
    'callout_classes' => '',
    'top_a_classes' => 'summary',
    'top_b_classes' => 'summary',
    'bottom_a_classes' => 'summary',
    'bottom_b_classes' => 'summary',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'callout' => NULL,
      'top_a' => NULL,
      'top_b' => NULL,
      'bottom_a' => NULL,
      'bottom_b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Support the museum';
  $display->uuid = '0277acda-f6f0-4ac8-b9f0-bf97f2e6d425';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $pane->panel = 'bottom_a';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '3',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $display->content['new-6240b3e6-3d67-4fd0-959d-66c23c863f19'] = $pane;
    $display->panels['bottom_a'][0] = 'new-6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $pane = new stdClass();
    $pane->pid = 'new-b9d626ea-83ad-4571-9182-3d59d9de6f84';
    $pane->panel = 'bottom_b';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '4',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'b9d626ea-83ad-4571-9182-3d59d9de6f84';
    $display->content['new-b9d626ea-83ad-4571-9182-3d59d9de6f84'] = $pane;
    $display->panels['bottom_b'][0] = 'new-b9d626ea-83ad-4571-9182-3d59d9de6f84';
    $pane = new stdClass();
    $pane->pid = 'new-4ac0e991-f4ae-431a-ba53-edc576c52b81';
    $pane->panel = 'callout';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Callout',
      'title' => '',
      'body' => '<p>Callout text.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ac0e991-f4ae-431a-ba53-edc576c52b81';
    $display->content['new-4ac0e991-f4ae-431a-ba53-edc576c52b81'] = $pane;
    $display->panels['callout'][0] = 'new-4ac0e991-f4ae-431a-ba53-edc576c52b81';
    $pane = new stdClass();
    $pane->pid = 'new-bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $pane->panel = 'top_a';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '1',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $display->content['new-bd039c9e-92ab-4185-9b77-bec95dadf8ab'] = $pane;
    $display->panels['top_a'][0] = 'new-bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $pane = new stdClass();
    $pane->pid = 'new-aaf330a6-e23e-4647-97d6-19a889c45625';
    $pane->panel = 'top_b';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '2',
      'view_mode' => 'node:teaser',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'aaf330a6-e23e-4647-97d6-19a889c45625';
    $display->content['new-aaf330a6-e23e-4647-97d6-19a889c45625'] = $pane;
    $display->panels['top_b'][0] = 'new-aaf330a6-e23e-4647-97d6-19a889c45625';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
  $display->layout = 'l6c';
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
  $display->title = 'Teacher professional development';
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
    $pane = new stdClass();
    $pane->pid = 'new-b5823e7b-8977-408e-8b6f-41dbf8122c92';
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
      'follow' => 'active',
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
    $pane->uuid = 'b5823e7b-8977-408e-8b6f-41dbf8122c92';
    $display->content['new-b5823e7b-8977-408e-8b6f-41dbf8122c92'] = $pane;
    $display->panels['nav'][0] = 'new-b5823e7b-8977-408e-8b6f-41dbf8122c92';
  $display->hide_title = PANELS_TITLE_FIXED;
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
  $page->name = 'virtual_visits';
  $page->task = 'page';
  $page->admin_title = 'Virtual visits';
  $page->admin_description = '';
  $page->path = 'educators/virtual-visits';
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
    'title' => 'Virtual visits',
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
  $handler->name = 'page_virtual_visits_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'virtual_visits';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l6a';
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
  $display->uuid = '54f7cabb-c571-4d8d-8883-940257f44929';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76a45531-1880-4858-8329-d8e7d860dd51';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Description',
      'title' => '',
      'body' => '<p style="text-align: left;"><!--MEDIA-WRAPPER-START-1--></p><div class="media-image media-element file-media-original" data-file_info="%7B%22type%22:%22media%22,%22view_mode%22:%22media_original%22,%22fid%22:%2280831%22%7D" id="styles-3"><img alt="" attributes="Array" fields="" src="http://fieldmuseum.org/sites/default/files/Virtual%20Visits%20Logo_smalll_0.jpg" title="" typeof="foaf:Image" wysiwyg="1"></div><p style="text-align: left;">Can&rsquo;t come to The Field Museum? Let us bring The Field experience to your classroom. Virtual Visits from The Field extends science directly into your classroom through LIVE video broadcasts from The Field Museum.</p><p style="text-align: left;"> &bull;&nbsp; Meet and chat with a scientist in real time. <br><span style="line-height: 1.538em;">&bull;&nbsp; Visit a behind-the-scenes lab. </span><br><br><span style="line-height: 1.538em;">Virtual Visits from The Field gives students an unparalleled chance to connect the research occurring at the Museum with learning in their own classroom.&nbsp;Using a 60-minute live broadcast, students can see, hear, and interact with researchers during a behind-the-scenes &ldquo;visit&rdquo; to the Museum&rsquo;s state-of-the-art laboratory.&nbsp;All programs are NGSS aligned.</span></p><p>Questions? Please contact us at <a href="mailto:virtualvisits@fieldmuseum.org?subject=Inquiry%20from%20website">Virtual Visits from The Field</a>.</p><p><strong>Pricing </strong><br><span style="line-height: 1.538em;">35 students or less - $125 <br>36 students or more - $250</span></p><p><strong>Technology Requirements </strong><br>Virtual Visits is streamed live via video conferencing. Participating classrooms need a high speed Internet connection. Classrooms are encouraged to run off of a wired connection.<br>Questions? Contact the Virtual Visits Team.&nbsp;<br><br><strong>A note regarding squirrel specimens </strong><br>The squirrel specimens used in Virtual Visits from The Field were found dead on the side of the road and brought into the Museum by Museum staff or community members from around the state of Illinois.&nbsp;<br>Major Sponsor:&nbsp;</p><p style="background-color: transparent;"><!--MEDIA-WRAPPER-START-2--></p><div class="media-image media-element file-media-original" data-file_info="%7B%22type%22:%22media%22,%22view_mode%22:%22media_original%22,%22fid%22:%2278656%22%7D" id="styles-4"><img alt="" attributes="Array" fields="" src="http://fieldmuseum.org/sites/default/files/Target_Red_RGB_300x75%20copy_2.jpg" title="" typeof="foaf:Image" wysiwyg="1"></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76a45531-1880-4858-8329-d8e7d860dd51';
    $display->content['new-76a45531-1880-4858-8329-d8e7d860dd51'] = $pane;
    $display->panels['main'][0] = 'new-76a45531-1880-4858-8329-d8e7d860dd51';
    $pane = new stdClass();
    $pane->pid = 'new-61828bf9-f2f5-4684-a8a4-f25f5af43451';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '61828bf9-f2f5-4684-a8a4-f25f5af43451';
    $display->content['new-61828bf9-f2f5-4684-a8a4-f25f5af43451'] = $pane;
    $display->panels['main'][1] = 'new-61828bf9-f2f5-4684-a8a4-f25f5af43451';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76a45531-1880-4858-8329-d8e7d860dd51';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['virtual_visits'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteer';
  $page->task = 'page';
  $page->admin_title = 'Volunteer';
  $page->admin_description = '';
  $page->path = 'support/volunteer';
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
    'title' => 'Volunteer',
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
  $handler->name = 'page_volunteer_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'volunteer';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10d';
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
  $display->title = 'Volunteer';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][0] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04529f33-a545-44ef-890b-55ff0c31e062';
    $display->content['new-04529f33-a545-44ef-890b-55ff0c31e062'] = $pane;
    $display->panels['nav'][0] = 'new-04529f33-a545-44ef-890b-55ff0c31e062';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer'] = $page;

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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Menu children',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
        'use_pager' => FALSE,
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
  $display->layout = 'l10';
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
  $display->title = 'Ways to give';
  $display->uuid = 'fe1d18c2-5f59-4c25-9aaa-928505089749';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dec9f2bb-00af-4966-ba94-9f7d1e07ae0b';
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
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'dec9f2bb-00af-4966-ba94-9f7d1e07ae0b';
    $display->content['new-dec9f2bb-00af-4966-ba94-9f7d1e07ae0b'] = $pane;
    $display->panels['main'][0] = 'new-dec9f2bb-00af-4966-ba94-9f7d1e07ae0b';
    $pane = new stdClass();
    $pane->pid = 'new-bcf09a9b-0a46-4142-aa67-1e54ece897e9';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bcf09a9b-0a46-4142-aa67-1e54ece897e9';
    $display->content['new-bcf09a9b-0a46-4142-aa67-1e54ece897e9'] = $pane;
    $display->panels['nav'][0] = 'new-bcf09a9b-0a46-4142-aa67-1e54ece897e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ways_to_give'] = $page;

  return $pages;

}
