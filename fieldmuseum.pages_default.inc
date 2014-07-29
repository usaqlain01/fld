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
  $display->layout = 'l5a';
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
  $display->title = 'About the museum';
  $display->uuid = '05b92cf7-3f90-4d23-bf7f-de74218319f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3baf46c9-6a3e-44a2-a634-1b2d51f36410';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:436';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
          'class' => 'callout',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3baf46c9-6a3e-44a2-a634-1b2d51f36410';
    $display->content['new-3baf46c9-6a3e-44a2-a634-1b2d51f36410'] = $pane;
    $display->panels['main'][0] = 'new-3baf46c9-6a3e-44a2-a634-1b2d51f36410';
    $pane = new stdClass();
    $pane->pid = 'new-ccbc8f6c-92f9-43f2-821b-2791ad7f34c2';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'about_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
          'class' => 'summaries--2up',
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
    $pane->uuid = 'ccbc8f6c-92f9-43f2-821b-2791ad7f34c2';
    $display->content['new-ccbc8f6c-92f9-43f2-821b-2791ad7f34c2'] = $pane;
    $display->panels['main'][1] = 'new-ccbc8f6c-92f9-43f2-821b-2791ad7f34c2';
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
  $page->name = 'annual_reports';
  $page->task = 'page';
  $page->admin_title = 'Annual reports';
  $page->admin_description = '';
  $page->path = 'about/annual-reports';
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
    'title' => 'Annual reports',
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
  $handler->name = 'page_annual_reports_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'annual_reports';
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
  $display->layout = 'l16';
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
  $display->title = 'Annual reports';
  $display->uuid = '499a77db-7e41-4944-a721-530bcc1759af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00ac3859-a009-441e-90c2-45a4cc3aac7b';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:281';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '00ac3859-a009-441e-90c2-45a4cc3aac7b';
    $display->content['new-00ac3859-a009-441e-90c2-45a4cc3aac7b'] = $pane;
    $display->panels['main'][0] = 'new-00ac3859-a009-441e-90c2-45a4cc3aac7b';
    $pane = new stdClass();
    $pane->pid = 'new-33e90da9-0505-4564-b841-012011f7318d';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:286';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '33e90da9-0505-4564-b841-012011f7318d';
    $display->content['new-33e90da9-0505-4564-b841-012011f7318d'] = $pane;
    $display->panels['main'][1] = 'new-33e90da9-0505-4564-b841-012011f7318d';
    $pane = new stdClass();
    $pane->pid = 'new-d2268eec-34c1-4e1d-a74b-b976b8a201cf';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:291';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'd2268eec-34c1-4e1d-a74b-b976b8a201cf';
    $display->content['new-d2268eec-34c1-4e1d-a74b-b976b8a201cf'] = $pane;
    $display->panels['main'][2] = 'new-d2268eec-34c1-4e1d-a74b-b976b8a201cf';
    $pane = new stdClass();
    $pane->pid = 'new-8cdc7120-c5c8-4a8d-95b6-4ac18cf06bfe';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:296';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8cdc7120-c5c8-4a8d-95b6-4ac18cf06bfe';
    $display->content['new-8cdc7120-c5c8-4a8d-95b6-4ac18cf06bfe'] = $pane;
    $display->panels['main'][3] = 'new-8cdc7120-c5c8-4a8d-95b6-4ac18cf06bfe';
    $pane = new stdClass();
    $pane->pid = 'new-12064513-15eb-4203-9392-d3b8b412160a';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:301';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '12064513-15eb-4203-9392-d3b8b412160a';
    $display->content['new-12064513-15eb-4203-9392-d3b8b412160a'] = $pane;
    $display->panels['main'][4] = 'new-12064513-15eb-4203-9392-d3b8b412160a';
    $pane = new stdClass();
    $pane->pid = 'new-a5792ed6-886c-470e-9d41-3f3fa319e8c3';
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
    $pane->uuid = 'a5792ed6-886c-470e-9d41-3f3fa319e8c3';
    $display->content['new-a5792ed6-886c-470e-9d41-3f3fa319e8c3'] = $pane;
    $display->panels['nav'][0] = 'new-a5792ed6-886c-470e-9d41-3f3fa319e8c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['annual_reports'] = $page;

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
    'type' => 'none',
    'settings' => NULL,
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
    $pane->pid = 'new-0f17fb83-5765-4ee2-8d5a-05f5c237513d';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:371';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f17fb83-5765-4ee2-8d5a-05f5c237513d';
    $display->content['new-0f17fb83-5765-4ee2-8d5a-05f5c237513d'] = $pane;
    $display->panels['main'][0] = 'new-0f17fb83-5765-4ee2-8d5a-05f5c237513d';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][1] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'body' => '<p class="p1">Become a part of the research at The Field Museum by participating in our Citizen Science projects, specially designed for community participation. Your efforts can make a very real impact on our work and knowledge about the world.</p>',
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
      'body' => '<p class="p1">Whether it&#39;s helicoptering into the Amazonian rainforest or working with communities right here in Chicagoland, our Science Action team takes the science we do at the Museum and puts it to work to make a lasting impact on the environment and local cultures. With the diversity of life and cultures severely threatened around the world, the Museum&#39;s scientific expertise can play a major role in ensuring a strong future where diversity can thrive. Since 1999, the Museum&#39;s efforts have assisted governments in protecting more than 30 million acres of wilderness, and our work in the Chicago region has focused on bringing people and nature together in communities like Calumet and the Kankakee region.&nbsp;</p>',
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
    'type' => 'none',
    'settings' => NULL,
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
    $pane->pid = 'new-ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:216';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b';
    $display->content['new-ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b'] = $pane;
    $display->panels['main'][0] = 'new-ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b';
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
    'type' => 'none',
    'settings' => NULL,
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
    $pane->pid = 'new-066c873c-0672-4cc3-adb8-8a2caf559a79';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:311';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '066c873c-0672-4cc3-adb8-8a2caf559a79';
    $display->content['new-066c873c-0672-4cc3-adb8-8a2caf559a79'] = $pane;
    $display->panels['main'][0] = 'new-066c873c-0672-4cc3-adb8-8a2caf559a79';
    $pane = new stdClass();
    $pane->pid = 'new-2436b32f-6de2-43a8-97ce-039eb7250f18';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:316';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '2436b32f-6de2-43a8-97ce-039eb7250f18';
    $display->content['new-2436b32f-6de2-43a8-97ce-039eb7250f18'] = $pane;
    $display->panels['main'][1] = 'new-2436b32f-6de2-43a8-97ce-039eb7250f18';
    $pane = new stdClass();
    $pane->pid = 'new-d6b3670e-0674-4810-b9dc-630ca41c5522';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:321';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'd6b3670e-0674-4810-b9dc-630ca41c5522';
    $display->content['new-d6b3670e-0674-4810-b9dc-630ca41c5522'] = $pane;
    $display->panels['main'][2] = 'new-d6b3670e-0674-4810-b9dc-630ca41c5522';
    $pane = new stdClass();
    $pane->pid = 'new-c1fb9d38-96a7-42b9-872f-6d2f99e69412';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:326';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c1fb9d38-96a7-42b9-872f-6d2f99e69412';
    $display->content['new-c1fb9d38-96a7-42b9-872f-6d2f99e69412'] = $pane;
    $display->panels['main'][3] = 'new-c1fb9d38-96a7-42b9-872f-6d2f99e69412';
    $pane = new stdClass();
    $pane->pid = 'new-e6d7bb55-3618-4d1f-aed0-d428c6cfd745';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:331';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e6d7bb55-3618-4d1f-aed0-d428c6cfd745';
    $display->content['new-e6d7bb55-3618-4d1f-aed0-d428c6cfd745'] = $pane;
    $display->panels['main'][4] = 'new-e6d7bb55-3618-4d1f-aed0-d428c6cfd745';
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
      'view_mode' => 'node:summary',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][5] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
    'main_classes' => '',
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
    $pane->pid = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $display->content['new-fc09d2d5-fe5e-4be7-8729-867996f87b31'] = $pane;
    $display->panels['main'][0] = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane = new stdClass();
    $pane->pid = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1480c26e-8f39-4694-8af6-3c83707610ef';
    $display->content['new-1480c26e-8f39-4694-8af6-3c83707610ef'] = $pane;
    $display->panels['main'][1] = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane = new stdClass();
    $pane->pid = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '01791882-e256-439b-87b4-660c9ef7786e';
    $display->content['new-01791882-e256-439b-87b4-660c9ef7786e'] = $pane;
    $display->panels['main'][2] = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane = new stdClass();
    $pane->pid = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e0833bc3-72da-4d35-b137-52994c1002f1';
    $display->content['new-e0833bc3-72da-4d35-b137-52994c1002f1'] = $pane;
    $display->panels['main'][3] = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane = new stdClass();
    $pane->pid = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1706250f-2770-40cb-a535-c9017e794271';
    $display->content['new-1706250f-2770-40cb-a535-c9017e794271'] = $pane;
    $display->panels['main'][4] = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane = new stdClass();
    $pane->pid = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $display->content['new-e2f497e4-c241-4534-aa3f-fe017d0e8475'] = $pane;
    $display->panels['main'][5] = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane = new stdClass();
    $pane->pid = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '94d290ae-e000-4680-85ea-e13bc143bc3c';
    $display->content['new-94d290ae-e000-4680-85ea-e13bc143bc3c'] = $pane;
    $display->panels['main'][6] = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane = new stdClass();
    $pane->pid = 'new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '4',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
    $display->content['new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67'] = $pane;
    $display->panels['main'][7] = 'new-0b3fb9f4-9cf7-4db5-a406-27ee5fbbae67';
    $pane = new stdClass();
    $pane->pid = 'new-9644a095-c91e-451c-82a7-71f6276c40d1';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '5',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '9644a095-c91e-451c-82a7-71f6276c40d1';
    $display->content['new-9644a095-c91e-451c-82a7-71f6276c40d1'] = $pane;
    $display->panels['main'][8] = 'new-9644a095-c91e-451c-82a7-71f6276c40d1';
    $pane = new stdClass();
    $pane->pid = 'new-7afc7293-f2a5-4615-8786-28dbed624515';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '6',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '7afc7293-f2a5-4615-8786-28dbed624515';
    $display->content['new-7afc7293-f2a5-4615-8786-28dbed624515'] = $pane;
    $display->panels['main'][9] = 'new-7afc7293-f2a5-4615-8786-28dbed624515';
    $pane = new stdClass();
    $pane->pid = 'new-907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '7',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $display->content['new-907188fe-d1af-49c9-9c97-b0c6906b21f7'] = $pane;
    $display->panels['main'][10] = 'new-907188fe-d1af-49c9-9c97-b0c6906b21f7';
    $pane = new stdClass();
    $pane->pid = 'new-f809b661-13d2-48a1-9692-e5ff6aacc767';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '8',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'f809b661-13d2-48a1-9692-e5ff6aacc767';
    $display->content['new-f809b661-13d2-48a1-9692-e5ff6aacc767'] = $pane;
    $display->panels['main'][11] = 'new-f809b661-13d2-48a1-9692-e5ff6aacc767';
  $display->hide_title = PANELS_TITLE_NONE;
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
    'type' => 'none',
    'settings' => NULL,
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
    'type' => 'none',
    'settings' => NULL,
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
      'body' => '<p>Visit The Field Museum&#39;s event spaces by clicking on each photo gallery!</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
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
      2 => array(
        'identifier' => 'View: Exhibitions: Current exhibitions',
        'keyword' => 'view',
        'name' => 'view:exhibitions-ctools_context_2',
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
    $pane->pid = 'new-3d52d8ec-4471-45da-abd9-e1a6b97a95af';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'exhibitions_and_events_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
          'class' => 'summaries--3up',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d52d8ec-4471-45da-abd9-e1a6b97a95af';
    $display->content['new-3d52d8ec-4471-45da-abd9-e1a6b97a95af'] = $pane;
    $display->panels['main'][0] = 'new-3d52d8ec-4471-45da-abd9-e1a6b97a95af';
    $pane = new stdClass();
    $pane->pid = 'new-58a5f1c6-6b3f-4ad6-a217-ca30d2398aea';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:exhibitions-ctools_context_2_1',
      'override_title' => 1,
      'override_title_text' => 'Exhibitions On The Museum Floor',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
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
          'class' => 'promos--3up',
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
    $pane->uuid = '58a5f1c6-6b3f-4ad6-a217-ca30d2398aea';
    $display->content['new-58a5f1c6-6b3f-4ad6-a217-ca30d2398aea'] = $pane;
    $display->panels['main'][1] = 'new-58a5f1c6-6b3f-4ad6-a217-ca30d2398aea';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'List: Field trip programs',
        'keyword' => 'list',
        'name' => 'entitylist:field_trip_programs',
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
  $display->title = 'Field Trip Programs';
  $display->uuid = '29dae451-7137-44fd-a6bc-fd5eb79071ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c139e748-5a08-4209-a01c-29c4ca5dee5b';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:96';
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
    $pane->uuid = 'c139e748-5a08-4209-a01c-29c4ca5dee5b';
    $display->content['new-c139e748-5a08-4209-a01c-29c4ca5dee5b'] = $pane;
    $display->panels['main'][0] = 'new-c139e748-5a08-4209-a01c-29c4ca5dee5b';
    $pane = new stdClass();
    $pane->pid = 'new-e757ca39-3d90-48a7-9b8c-c63cacdd1492';
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
      'context' => 'context_entitylist:field_trip_programs_1',
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
    $pane->uuid = 'e757ca39-3d90-48a7-9b8c-c63cacdd1492';
    $display->content['new-e757ca39-3d90-48a7-9b8c-c63cacdd1492'] = $pane;
    $display->panels['main'][1] = 'new-e757ca39-3d90-48a7-9b8c-c63cacdd1492';
    $pane = new stdClass();
    $pane->pid = 'new-88362ccc-79a4-472c-a091-6101815b41b1';
    $pane->panel = 'main';
    $pane->type = 'pager';
    $pane->subtype = 'pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'full',
      'context' => 'context_entitylist:field_trip_programs_1',
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
    $pane->uuid = '88362ccc-79a4-472c-a091-6101815b41b1';
    $display->content['new-88362ccc-79a4-472c-a091-6101815b41b1'] = $pane;
    $display->panels['main'][2] = 'new-88362ccc-79a4-472c-a091-6101815b41b1';
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
    'contexts' => array(),
  );
  $display = new panels_display();
  $display->layout = 'a';
  $display->layout_settings = array(
    'main_classes' => '',
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
    $pane->pid = 'new-e966d21d-e76b-40f6-aae4-3faced670733';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_landing_exhibitions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
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
          'class' => 'banners',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e966d21d-e76b-40f6-aae4-3faced670733';
    $display->content['new-e966d21d-e76b-40f6-aae4-3faced670733'] = $pane;
    $display->panels['main'][0] = 'new-e966d21d-e76b-40f6-aae4-3faced670733';
    $pane = new stdClass();
    $pane->pid = 'new-04373a0f-a137-4a2d-b95f-a8cd3d280013';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
          'class' => 'summaries--2up',
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
    $pane->uuid = '04373a0f-a137-4a2d-b95f-a8cd3d280013';
    $display->content['new-04373a0f-a137-4a2d-b95f-a8cd3d280013'] = $pane;
    $display->panels['main'][1] = 'new-04373a0f-a137-4a2d-b95f-a8cd3d280013';
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
    $pane->pid = 'new-e7e5075f-8f27-4c67-9072-1d13b6fb959f';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:276';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7e5075f-8f27-4c67-9072-1d13b6fb959f';
    $display->content['new-e7e5075f-8f27-4c67-9072-1d13b6fb959f'] = $pane;
    $display->panels['main'][0] = 'new-e7e5075f-8f27-4c67-9072-1d13b6fb959f';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][1] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
    'pipeline' => 'ipe',
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
  $display->title = 'Learning Resources';
  $display->uuid = '708b5437-1b34-43a0-8a9d-62d0b2b4ef59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:431';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4';
    $display->content['new-7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4'] = $pane;
    $display->panels['main'][0] = 'new-7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ff9ab0c7-b547-4b24-a50e-e8f190528c08';
    $display->content['new-ff9ab0c7-b547-4b24-a50e-e8f190528c08'] = $pane;
    $display->panels['main'][1] = 'new-ff9ab0c7-b547-4b24-a50e-e8f190528c08';
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
  $display->hide_title = PANELS_TITLE_FIXED;
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
    $pane->pid = 'new-a71e2534-a474-4c2d-ad4f-2f7b7e5f8da2';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:211';
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
    $pane->uuid = 'a71e2534-a474-4c2d-ad4f-2f7b7e5f8da2';
    $display->content['new-a71e2534-a474-4c2d-ad4f-2f7b7e5f8da2'] = $pane;
    $display->panels['main'][0] = 'new-a71e2534-a474-4c2d-ad4f-2f7b7e5f8da2';
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
    'type' => 'none',
    'settings' => NULL,
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
    $pane->pid = 'new-d482f41c-5279-4d9e-ae37-0c740b8bdee8';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:406';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd482f41c-5279-4d9e-ae37-0c740b8bdee8';
    $display->content['new-d482f41c-5279-4d9e-ae37-0c740b8bdee8'] = $pane;
    $display->panels['main'][0] = 'new-d482f41c-5279-4d9e-ae37-0c740b8bdee8';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f7f71483-fc24-473a-8a71-0bc1422e8b7e';
    $display->content['new-f7f71483-fc24-473a-8a71-0bc1422e8b7e'] = $pane;
    $display->panels['main'][1] = 'new-f7f71483-fc24-473a-8a71-0bc1422e8b7e';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1cb3abc0-9e75-41d7-915e-42d72338a9f1';
    $display->content['new-1cb3abc0-9e75-41d7-915e-42d72338a9f1'] = $pane;
    $display->panels['main'][2] = 'new-1cb3abc0-9e75-41d7-915e-42d72338a9f1';
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
    $pane->pid = 'new-20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:376';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18';
    $display->content['new-20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18'] = $pane;
    $display->panels['main'][0] = 'new-20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18';
    $pane = new stdClass();
    $pane->pid = 'new-ac84d492-44c6-4263-b7f5-990f45fd984c';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:381';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ac84d492-44c6-4263-b7f5-990f45fd984c';
    $display->content['new-ac84d492-44c6-4263-b7f5-990f45fd984c'] = $pane;
    $display->panels['main'][1] = 'new-ac84d492-44c6-4263-b7f5-990f45fd984c';
    $pane = new stdClass();
    $pane->pid = 'new-e686a46d-8ca1-492d-bdcb-81684421e563';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:386';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e686a46d-8ca1-492d-bdcb-81684421e563';
    $display->content['new-e686a46d-8ca1-492d-bdcb-81684421e563'] = $pane;
    $display->panels['main'][2] = 'new-e686a46d-8ca1-492d-bdcb-81684421e563';
    $pane = new stdClass();
    $pane->pid = 'new-3142854d-7534-4d75-b6f2-be5121d110e5';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:391';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3142854d-7534-4d75-b6f2-be5121d110e5';
    $display->content['new-3142854d-7534-4d75-b6f2-be5121d110e5'] = $pane;
    $display->panels['main'][3] = 'new-3142854d-7534-4d75-b6f2-be5121d110e5';
    $pane = new stdClass();
    $pane->pid = 'new-fad89da7-50db-40b8-851b-e288d7ad846b';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:396';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fad89da7-50db-40b8-851b-e288d7ad846b';
    $display->content['new-fad89da7-50db-40b8-851b-e288d7ad846b'] = $pane;
    $display->panels['main'][4] = 'new-fad89da7-50db-40b8-851b-e288d7ad846b';
    $pane = new stdClass();
    $pane->pid = 'new-11c2a399-a695-4261-a0d1-e2d7d02be257';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:401';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '11c2a399-a695-4261-a0d1-e2d7d02be257';
    $display->content['new-11c2a399-a695-4261-a0d1-e2d7d02be257'] = $pane;
    $display->panels['main'][5] = 'new-11c2a399-a695-4261-a0d1-e2d7d02be257';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][6] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
      'body' => '<p>The Field Museum is proud of the successful partnerships that are advancing science achievement across Chicago.</p>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
    $display->content['new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f'] = $pane;
    $display->panels['main'][0] = 'new-714f9c88-5ea5-4a1d-bb1a-cfb1e844200f';
    $pane = new stdClass();
    $pane->pid = 'new-a0e0c220-3e35-4a64-ad23-bb1262f2a9b9';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:116';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a0e0c220-3e35-4a64-ad23-bb1262f2a9b9';
    $display->content['new-a0e0c220-3e35-4a64-ad23-bb1262f2a9b9'] = $pane;
    $display->panels['main'][1] = 'new-a0e0c220-3e35-4a64-ad23-bb1262f2a9b9';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd96c4fbd-562e-450b-8b94-b3c184541430';
    $display->content['new-d96c4fbd-562e-450b-8b94-b3c184541430'] = $pane;
    $display->panels['main'][2] = 'new-d96c4fbd-562e-450b-8b94-b3c184541430';
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
    $pane->pid = 'new-966b0411-df66-4349-8a54-1e902c6482ee';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:141';
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
    $pane->uuid = '966b0411-df66-4349-8a54-1e902c6482ee';
    $display->content['new-966b0411-df66-4349-8a54-1e902c6482ee'] = $pane;
    $display->panels['main'][0] = 'new-966b0411-df66-4349-8a54-1e902c6482ee';
    $pane = new stdClass();
    $pane->pid = 'new-f9a683e8-8e79-478c-8e9a-6eeb91088c13';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:146';
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
    $pane->uuid = 'f9a683e8-8e79-478c-8e9a-6eeb91088c13';
    $display->content['new-f9a683e8-8e79-478c-8e9a-6eeb91088c13'] = $pane;
    $display->panels['main'][1] = 'new-f9a683e8-8e79-478c-8e9a-6eeb91088c13';
    $pane = new stdClass();
    $pane->pid = 'new-06d3d357-e918-47b2-bab0-86bba649fe84';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:151';
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
    $pane->uuid = '06d3d357-e918-47b2-bab0-86bba649fe84';
    $display->content['new-06d3d357-e918-47b2-bab0-86bba649fe84'] = $pane;
    $display->panels['main'][2] = 'new-06d3d357-e918-47b2-bab0-86bba649fe84';
    $pane = new stdClass();
    $pane->pid = 'new-7cfc8827-ab83-4e92-a8c9-2888bc83d114';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:156';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7cfc8827-ab83-4e92-a8c9-2888bc83d114';
    $display->content['new-7cfc8827-ab83-4e92-a8c9-2888bc83d114'] = $pane;
    $display->panels['main'][3] = 'new-7cfc8827-ab83-4e92-a8c9-2888bc83d114';
    $pane = new stdClass();
    $pane->pid = 'new-5f625595-1620-44b5-abc4-2853678efedf';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:161';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5f625595-1620-44b5-abc4-2853678efedf';
    $display->content['new-5f625595-1620-44b5-abc4-2853678efedf'] = $pane;
    $display->panels['main'][4] = 'new-5f625595-1620-44b5-abc4-2853678efedf';
    $pane = new stdClass();
    $pane->pid = 'new-193899f4-ecd8-4e6d-981f-2045716f4e6a';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:166';
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
    $pane->uuid = '193899f4-ecd8-4e6d-981f-2045716f4e6a';
    $display->content['new-193899f4-ecd8-4e6d-981f-2045716f4e6a'] = $pane;
    $display->panels['main'][5] = 'new-193899f4-ecd8-4e6d-981f-2045716f4e6a';
    $pane = new stdClass();
    $pane->pid = 'new-b7fa925c-b031-4cec-ab46-436597b779cd';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:171';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b7fa925c-b031-4cec-ab46-436597b779cd';
    $display->content['new-b7fa925c-b031-4cec-ab46-436597b779cd'] = $pane;
    $display->panels['main'][6] = 'new-b7fa925c-b031-4cec-ab46-436597b779cd';
    $pane = new stdClass();
    $pane->pid = 'new-0a088c0c-407d-49bc-92f5-b59547108e07';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:176';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0a088c0c-407d-49bc-92f5-b59547108e07';
    $display->content['new-0a088c0c-407d-49bc-92f5-b59547108e07'] = $pane;
    $display->panels['main'][7] = 'new-0a088c0c-407d-49bc-92f5-b59547108e07';
    $pane = new stdClass();
    $pane->pid = 'new-1d9d4fbb-93bf-47fb-857a-5fb189047f27';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:181';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '1d9d4fbb-93bf-47fb-857a-5fb189047f27';
    $display->content['new-1d9d4fbb-93bf-47fb-857a-5fb189047f27'] = $pane;
    $display->panels['main'][8] = 'new-1d9d4fbb-93bf-47fb-857a-5fb189047f27';
    $pane = new stdClass();
    $pane->pid = 'new-51663562-8bb2-4121-8e05-e218de6fab04';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:186';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '51663562-8bb2-4121-8e05-e218de6fab04';
    $display->content['new-51663562-8bb2-4121-8e05-e218de6fab04'] = $pane;
    $display->panels['main'][9] = 'new-51663562-8bb2-4121-8e05-e218de6fab04';
    $pane = new stdClass();
    $pane->pid = 'new-f2a9f053-48de-415d-811b-795b98dce475';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:426';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f2a9f053-48de-415d-811b-795b98dce475';
    $display->content['new-f2a9f053-48de-415d-811b-795b98dce475'] = $pane;
    $display->panels['main'][10] = 'new-f2a9f053-48de-415d-811b-795b98dce475';
    $pane = new stdClass();
    $pane->pid = 'new-85f01986-7f7e-42a9-8c28-f76225b9b12a';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:191';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '85f01986-7f7e-42a9-8c28-f76225b9b12a';
    $display->content['new-85f01986-7f7e-42a9-8c28-f76225b9b12a'] = $pane;
    $display->panels['main'][11] = 'new-85f01986-7f7e-42a9-8c28-f76225b9b12a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
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
    $pane->pid = 'new-1fe00b0d-6e05-4014-a209-f9ac11632439';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:231';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
          'class' => 'callout',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fe00b0d-6e05-4014-a209-f9ac11632439';
    $display->content['new-1fe00b0d-6e05-4014-a209-f9ac11632439'] = $pane;
    $display->panels['main'][0] = 'new-1fe00b0d-6e05-4014-a209-f9ac11632439';
    $pane = new stdClass();
    $pane->pid = 'new-ce3914bc-a7f4-4035-9e2e-389a73523c82';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:226';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'l--2up',
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
    $pane->uuid = 'ce3914bc-a7f4-4035-9e2e-389a73523c82';
    $display->content['new-ce3914bc-a7f4-4035-9e2e-389a73523c82'] = $pane;
    $display->panels['main'][1] = 'new-ce3914bc-a7f4-4035-9e2e-389a73523c82';
    $pane = new stdClass();
    $pane->pid = 'new-9963d2d2-d4a8-47d7-8f18-341343fd6b01';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'visit_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'summaries--2up',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9963d2d2-d4a8-47d7-8f18-341343fd6b01';
    $display->content['new-9963d2d2-d4a8-47d7-8f18-341343fd6b01'] = $pane;
    $display->panels['main'][2] = 'new-9963d2d2-d4a8-47d7-8f18-341343fd6b01';
    $pane = new stdClass();
    $pane->pid = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
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
    $pane->uuid = '09d12684-6f9a-45c4-b381-3723c89883ac';
    $display->content['new-09d12684-6f9a-45c4-b381-3723c89883ac'] = $pane;
    $display->panels['nav'][0] = 'new-09d12684-6f9a-45c4-b381-3723c89883ac';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $display->title = 'Research & Collections';
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
    $pane->uuid = '1d40aca6-d611-471f-b7d5-7539e227b24f';
    $display->content['new-1d40aca6-d611-471f-b7d5-7539e227b24f'] = $pane;
    $display->panels['nav'][0] = 'new-1d40aca6-d611-471f-b7d5-7539e227b24f';
    $pane = new stdClass();
    $pane->pid = 'new-85649d3d-47eb-403e-9114-5d87fe39f51b';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:206';
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
    $pane->uuid = '85649d3d-47eb-403e-9114-5d87fe39f51b';
    $display->content['new-85649d3d-47eb-403e-9114-5d87fe39f51b'] = $pane;
    $display->panels['top'][0] = 'new-85649d3d-47eb-403e-9114-5d87fe39f51b';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3ae6c59f-4c65-48c8-8ea2-247eea254045';
    $display->content['new-3ae6c59f-4c65-48c8-8ea2-247eea254045'] = $pane;
    $display->panels['top'][1] = 'new-3ae6c59f-4c65-48c8-8ea2-247eea254045';
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
  $display->title = 'Resources & Tools';
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
  $page->admin_title = 'Science';
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
    'title' => 'Science',
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
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Featured blogs',
        'keyword' => 'view',
        'name' => 'view:featured_blogs-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l3';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
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
  $display->title = '';
  $display->uuid = '86abd588-1ecf-4a03-926f-d7098a870c45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4d2fc89-5c96-4849-95d6-55610006d1d4';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:201';
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
    $pane->uuid = 'a4d2fc89-5c96-4849-95d6-55610006d1d4';
    $display->content['new-a4d2fc89-5c96-4849-95d6-55610006d1d4'] = $pane;
    $display->panels['main'][0] = 'new-a4d2fc89-5c96-4849-95d6-55610006d1d4';
    $pane = new stdClass();
    $pane->pid = 'new-b8bc1a03-fe11-40d7-b12d-1c5867eff4e6';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:featured_blogs-ctools_context_1_1',
      'override_title' => 1,
      'override_title_text' => 'Featured Blogs',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
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
          'class' => 'promos--3up',
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
    $pane->uuid = 'b8bc1a03-fe11-40d7-b12d-1c5867eff4e6';
    $display->content['new-b8bc1a03-fe11-40d7-b12d-1c5867eff4e6'] = $pane;
    $display->panels['main'][1] = 'new-b8bc1a03-fe11-40d7-b12d-1c5867eff4e6';
    $pane = new stdClass();
    $pane->pid = 'new-352ed864-2593-4e26-8f28-0da990df2c78';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_blogs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '352ed864-2593-4e26-8f28-0da990df2c78';
    $display->content['new-352ed864-2593-4e26-8f28-0da990df2c78'] = $pane;
    $display->panels['main'][2] = 'new-352ed864-2593-4e26-8f28-0da990df2c78';
    $pane = new stdClass();
    $pane->pid = 'new-75162e76-0a77-4e28-bd29-44ae68d61d2e';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:441';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '75162e76-0a77-4e28-bd29-44ae68d61d2e';
    $display->content['new-75162e76-0a77-4e28-bd29-44ae68d61d2e'] = $pane;
    $display->panels['main'][3] = 'new-75162e76-0a77-4e28-bd29-44ae68d61d2e';
    $pane = new stdClass();
    $pane->pid = 'new-f440ceb8-949e-4182-99c0-b1bd33d9c83d';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'science_landing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
          'class' => 'summaries--3up',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f440ceb8-949e-4182-99c0-b1bd33d9c83d';
    $display->content['new-f440ceb8-949e-4182-99c0-b1bd33d9c83d'] = $pane;
    $display->panels['main'][4] = 'new-f440ceb8-949e-4182-99c0-b1bd33d9c83d';
    $pane = new stdClass();
    $pane->pid = 'new-3df6a502-9ab4-463e-8ce7-902284fb7c79';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3df6a502-9ab4-463e-8ce7-902284fb7c79';
    $display->content['new-3df6a502-9ab4-463e-8ce7-902284fb7c79'] = $pane;
    $display->panels['nav'][0] = 'new-3df6a502-9ab4-463e-8ce7-902284fb7c79';
  $display->hide_title = PANELS_TITLE_NONE;
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
      1 => array(
        'identifier' => 'View: Featured blogs: Summaries',
        'keyword' => 'view',
        'name' => 'view:featured_blogs-ctools_context_2',
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
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
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
  $display->title = 'Blogs and Videos';
  $display->uuid = '231137e8-83c9-4391-ac05-3a37318043c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:featured_blogs-ctools_context_2_1',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'summaries--3up',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4';
    $display->content['new-0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4'] = $pane;
    $display->panels['main'][0] = 'new-0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4';
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
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'heading--stroked',
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
          'type' => '0',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['main'][1] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['main'][2] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
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
    'main_classes' => '',
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
    $pane->pid = 'new-f1ea71f8-4eea-4cc1-9d53-21e575c7e1a7';
    $pane->panel = 'callout';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:251';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
          'class' => 'callout',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1ea71f8-4eea-4cc1-9d53-21e575c7e1a7';
    $display->content['new-f1ea71f8-4eea-4cc1-9d53-21e575c7e1a7'] = $pane;
    $display->panels['callout'][0] = 'new-f1ea71f8-4eea-4cc1-9d53-21e575c7e1a7';
    $pane = new stdClass();
    $pane->pid = 'new-c5b3d226-9a86-4181-9bf0-bc8f822fa761';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:256';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'c5b3d226-9a86-4181-9bf0-bc8f822fa761';
    $display->content['new-c5b3d226-9a86-4181-9bf0-bc8f822fa761'] = $pane;
    $display->panels['main'][0] = 'new-c5b3d226-9a86-4181-9bf0-bc8f822fa761';
    $pane = new stdClass();
    $pane->pid = 'new-99925bed-f5a1-4765-825c-f82dde8c61d3';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:266';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '99925bed-f5a1-4765-825c-f82dde8c61d3';
    $display->content['new-99925bed-f5a1-4765-825c-f82dde8c61d3'] = $pane;
    $display->panels['main'][1] = 'new-99925bed-f5a1-4765-825c-f82dde8c61d3';
    $pane = new stdClass();
    $pane->pid = 'new-bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '1',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = 'bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $display->content['new-bd039c9e-92ab-4185-9b77-bec95dadf8ab'] = $pane;
    $display->panels['main'][2] = 'new-bd039c9e-92ab-4185-9b77-bec95dadf8ab';
    $pane = new stdClass();
    $pane->pid = 'new-a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:261';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $display->content['new-a370597d-6fcb-4a69-94fb-dd1a207a278f'] = $pane;
    $display->panels['main'][3] = 'new-a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $pane = new stdClass();
    $pane->pid = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:416';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $display->content['new-8b74bad4-3232-4f74-94b2-d30b5e04775c'] = $pane;
    $display->panels['main'][4] = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $pane = new stdClass();
    $pane->pid = 'new-ee38042d-18c9-4fb5-a00e-c2800a12b2a2';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:271';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ee38042d-18c9-4fb5-a00e-c2800a12b2a2';
    $display->content['new-ee38042d-18c9-4fb5-a00e-c2800a12b2a2'] = $pane;
    $display->panels['main'][5] = 'new-ee38042d-18c9-4fb5-a00e-c2800a12b2a2';
    $pane = new stdClass();
    $pane->pid = 'new-aaf330a6-e23e-4647-97d6-19a889c45625';
    $pane->panel = 'main';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'aaf330a6-e23e-4647-97d6-19a889c45625';
    $display->content['new-aaf330a6-e23e-4647-97d6-19a889c45625'] = $pane;
    $display->panels['main'][6] = 'new-aaf330a6-e23e-4647-97d6-19a889c45625';
    $pane = new stdClass();
    $pane->pid = 'new-6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $display->content['new-6240b3e6-3d67-4fd0-959d-66c23c863f19'] = $pane;
    $display->panels['main'][7] = 'new-6240b3e6-3d67-4fd0-959d-66c23c863f19';
    $pane = new stdClass();
    $pane->pid = 'new-b9d626ea-83ad-4571-9182-3d59d9de6f84';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b9d626ea-83ad-4571-9182-3d59d9de6f84';
    $display->content['new-b9d626ea-83ad-4571-9182-3d59d9de6f84'] = $pane;
    $display->panels['main'][8] = 'new-b9d626ea-83ad-4571-9182-3d59d9de6f84';
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
    $pane->pid = 'new-8384c91c-c8c6-4656-9cc9-fc3401d45b69';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:101';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8384c91c-c8c6-4656-9cc9-fc3401d45b69';
    $display->content['new-8384c91c-c8c6-4656-9cc9-fc3401d45b69'] = $pane;
    $display->panels['main'][0] = 'new-8384c91c-c8c6-4656-9cc9-fc3401d45b69';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
    $display->content['new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1'] = $pane;
    $display->panels['main'][1] = 'new-76b12dd7-fe1e-42d1-993e-724efd2eb7f1';
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
  $page->name = 'tickets_and_hours';
  $page->task = 'page';
  $page->admin_title = 'Tickets and hours';
  $page->admin_description = '';
  $page->path = 'visit/admission-and-hours';
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
    'title' => 'Admission and hours',
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
  $handler->name = 'page_tickets_and_hours_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tickets_and_hours';
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
  $display->layout = 'l8';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style' => 'naked',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21b6876f-4a2c-4f61-9a2d-f83113ff8675';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tickets_and_hours'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'virtual_tours';
  $page->task = 'page';
  $page->admin_title = 'Virtual tours';
  $page->admin_description = '';
  $page->path = 'visit/special-events/virtual-tours';
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
    'title' => 'Virtual tours',
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
  $handler->name = 'page_virtual_tours_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'virtual_tours';
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
        'identifier' => 'List: Menu children (hide children from other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children',
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
  $display->layout = 'l6a';
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
  $display->title = 'Virtual tours';
  $display->uuid = 'e0b8fa88-d458-47bc-8f61-345a65888900';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-151aacc7-17b2-40f0-8fd0-5e0343768db7';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:421';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '151aacc7-17b2-40f0-8fd0-5e0343768db7';
    $display->content['new-151aacc7-17b2-40f0-8fd0-5e0343768db7'] = $pane;
    $display->panels['main'][0] = 'new-151aacc7-17b2-40f0-8fd0-5e0343768db7';
    $pane = new stdClass();
    $pane->pid = 'new-8569e08e-d5d9-4ae9-950d-118d59485bdb';
    $pane->panel = 'main';
    $pane->type = 'entity_range';
    $pane->subtype = 'entity_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'range' => array(
        'offset' => '0',
        'limit' => '0',
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8569e08e-d5d9-4ae9-950d-118d59485bdb';
    $display->content['new-8569e08e-d5d9-4ae9-950d-118d59485bdb'] = $pane;
    $display->panels['main'][1] = 'new-8569e08e-d5d9-4ae9-950d-118d59485bdb';
    $pane = new stdClass();
    $pane->pid = 'new-e42d3cbb-24a9-48ef-9e54-f43f26537e4e';
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
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e42d3cbb-24a9-48ef-9e54-f43f26537e4e';
    $display->content['new-e42d3cbb-24a9-48ef-9e54-f43f26537e4e'] = $pane;
    $display->panels['nav'][0] = 'new-e42d3cbb-24a9-48ef-9e54-f43f26537e4e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e42d3cbb-24a9-48ef-9e54-f43f26537e4e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['virtual_tours'] = $page;

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
    'type' => 'none',
    'settings' => NULL,
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
    $pane->pid = 'new-0fd80b0c-b373-48b7-885c-51ba3901e65d';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:411';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fd80b0c-b373-48b7-885c-51ba3901e65d';
    $display->content['new-0fd80b0c-b373-48b7-885c-51ba3901e65d'] = $pane;
    $display->panels['main'][0] = 'new-0fd80b0c-b373-48b7-885c-51ba3901e65d';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][1] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
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
    $pane->pid = 'new-76d5adc3-161a-4db4-b930-f0afa027e788';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:351';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '76d5adc3-161a-4db4-b930-f0afa027e788';
    $display->content['new-76d5adc3-161a-4db4-b930-f0afa027e788'] = $pane;
    $display->panels['main'][0] = 'new-76d5adc3-161a-4db4-b930-f0afa027e788';
    $pane = new stdClass();
    $pane->pid = 'new-a8b26ef6-4d9d-4fda-857c-d765e7271036';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:356';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'a8b26ef6-4d9d-4fda-857c-d765e7271036';
    $display->content['new-a8b26ef6-4d9d-4fda-857c-d765e7271036'] = $pane;
    $display->panels['main'][1] = 'new-a8b26ef6-4d9d-4fda-857c-d765e7271036';
    $pane = new stdClass();
    $pane->pid = 'new-4434488e-b490-4a4e-a533-222897677239';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '2',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->uuid = '4434488e-b490-4a4e-a533-222897677239';
    $display->content['new-4434488e-b490-4a4e-a533-222897677239'] = $pane;
    $display->panels['main'][2] = 'new-4434488e-b490-4a4e-a533-222897677239';
    $pane = new stdClass();
    $pane->pid = 'new-83e97c76-07d5-40a6-9c93-bf537a54948e';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:366';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '83e97c76-07d5-40a6-9c93-bf537a54948e';
    $display->content['new-83e97c76-07d5-40a6-9c93-bf537a54948e'] = $pane;
    $display->panels['main'][3] = 'new-83e97c76-07d5-40a6-9c93-bf537a54948e';
    $pane = new stdClass();
    $pane->pid = 'new-f6712918-b369-489b-a75f-b2768bbd8d2e';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '1',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f6712918-b369-489b-a75f-b2768bbd8d2e';
    $display->content['new-f6712918-b369-489b-a75f-b2768bbd8d2e'] = $pane;
    $display->panels['main'][4] = 'new-f6712918-b369-489b-a75f-b2768bbd8d2e';
    $pane = new stdClass();
    $pane->pid = 'new-2fd9d26d-5624-40f1-8345-eadbaa144631';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:361';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2fd9d26d-5624-40f1-8345-eadbaa144631';
    $display->content['new-2fd9d26d-5624-40f1-8345-eadbaa144631'] = $pane;
    $display->panels['main'][5] = 'new-2fd9d26d-5624-40f1-8345-eadbaa144631';
    $pane = new stdClass();
    $pane->pid = 'new-b98b8c83-781c-4a2c-bdd0-defe437972a3';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '3',
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b98b8c83-781c-4a2c-bdd0-defe437972a3';
    $display->content['new-b98b8c83-781c-4a2c-bdd0-defe437972a3'] = $pane;
    $display->panels['main'][6] = 'new-b98b8c83-781c-4a2c-bdd0-defe437972a3';
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
