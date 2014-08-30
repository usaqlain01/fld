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
  $display->title = 'About the Museum';
  $display->uuid = '05b92cf7-3f90-4d23-bf7f-de74218319f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3baf46c9-6a3e-44a2-a634-1b2d51f36410';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:436';
    $pane->shown = FALSE;
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
  $display->title = 'Annual Reports';
  $display->uuid = '499a77db-7e41-4944-a721-530bcc1759af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b338a46e-f4cc-4470-975b-5b05d656cdf5';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:536';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b338a46e-f4cc-4470-975b-5b05d656cdf5';
    $display->content['new-b338a46e-f4cc-4470-975b-5b05d656cdf5'] = $pane;
    $display->panels['main'][0] = 'new-b338a46e-f4cc-4470-975b-5b05d656cdf5';
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
      'view_mode' => 'node:summary',
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
      'style' => 'semantic_panels',
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
  $page->path = 'science/citizen-science';
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
    'title' => 'Citizen Science',
    'name' => 'main-menu',
    'weight' => '-49',
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
        'identifier' => 'List: Menu children (show children in other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children_visible',
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
  $display->layout = 'l6c';
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
  $display->title = 'Citizen Science';
  $display->uuid = '8cde62ee-0aa7-4c9d-a99b-ede543299d0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1a3e273-40ed-4d78-b2ae-09d56a6c6e8a';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:486';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1a3e273-40ed-4d78-b2ae-09d56a6c6e8a';
    $display->content['new-f1a3e273-40ed-4d78-b2ae-09d56a6c6e8a'] = $pane;
    $display->panels['main'][0] = 'new-f1a3e273-40ed-4d78-b2ae-09d56a6c6e8a';
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
      'view_mode' => 'node:promo',
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
  $display->title_pane = '0';
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
        'identifier' => 'List: Menu children (show children in other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children_visible',
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
  $display->title = 'Conservation & Community';
  $display->uuid = 'd13a4cc2-43a3-4b2d-8787-8fa340e2c254';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a405e51a-5b32-4192-821a-e52826281b07';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:496';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a405e51a-5b32-4192-821a-e52826281b07';
    $display->content['new-a405e51a-5b32-4192-821a-e52826281b07'] = $pane;
    $display->panels['main'][0] = 'new-a405e51a-5b32-4192-821a-e52826281b07';
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
      'view_mode' => 'node:promo',
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df892670-1900-49ec-8177-f53b249c6f1d';
    $display->content['new-df892670-1900-49ec-8177-f53b249c6f1d'] = $pane;
    $display->panels['main'][1] = 'new-df892670-1900-49ec-8177-f53b249c6f1d';
    $pane = new stdClass();
    $pane->pid = 'new-5465e72c-6e0f-4013-980f-1f80ff4d112e';
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
    $pane->uuid = '5465e72c-6e0f-4013-980f-1f80ff4d112e';
    $display->content['new-5465e72c-6e0f-4013-980f-1f80ff4d112e'] = $pane;
    $display->panels['nav'][0] = 'new-5465e72c-6e0f-4013-980f-1f80ff4d112e';
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
  $display->title = 'Contact Us';
  $display->uuid = '8cfd6e26-54e1-4b71-99f6-2a5791512e6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca1c30ce-6d9d-4203-81d7-b96031d032d9';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14951',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca1c30ce-6d9d-4203-81d7-b96031d032d9';
    $display->content['new-ca1c30ce-6d9d-4203-81d7-b96031d032d9'] = $pane;
    $display->panels['main'][0] = 'new-ca1c30ce-6d9d-4203-81d7-b96031d032d9';
    $pane = new stdClass();
    $pane->pid = 'new-46126256-3db9-411d-938f-cfb17f471a75';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:451';
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
          'class' => 'l--3up',
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
    $pane->uuid = '46126256-3db9-411d-938f-cfb17f471a75';
    $display->content['new-46126256-3db9-411d-938f-cfb17f471a75'] = $pane;
    $display->panels['main'][1] = 'new-46126256-3db9-411d-938f-cfb17f471a75';
    $pane = new stdClass();
    $pane->pid = 'new-76d5367a-15f2-42d0-8384-933bf238bf2d';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:456';
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
          'class' => 'l--3up',
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
    $pane->uuid = '76d5367a-15f2-42d0-8384-933bf238bf2d';
    $display->content['new-76d5367a-15f2-42d0-8384-933bf238bf2d'] = $pane;
    $display->panels['main'][2] = 'new-76d5367a-15f2-42d0-8384-933bf238bf2d';
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
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ca1c30ce-6d9d-4203-81d7-b96031d032d9';
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
  $display->title = 'Contact/Request a Proposal';
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
    $pane->style = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b';
    $display->content['new-ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b'] = $pane;
    $display->panels['main'][0] = 'new-ecb00a47-a9a3-4ccd-95ef-a1b7f43ba89b';
    $pane = new stdClass();
    $pane->pid = 'new-f8c32de1-03d8-4695-97bd-088c46433393';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1046',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'f8c32de1-03d8-4695-97bd-088c46433393';
    $display->content['new-f8c32de1-03d8-4695-97bd-088c46433393'] = $pane;
    $display->panels['main'][1] = 'new-f8c32de1-03d8-4695-97bd-088c46433393';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '066c873c-0672-4cc3-adb8-8a2caf559a79';
    $display->content['new-066c873c-0672-4cc3-adb8-8a2caf559a79'] = $pane;
    $display->panels['main'][0] = 'new-066c873c-0672-4cc3-adb8-8a2caf559a79';
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
      'settings' => array(
        'element_title' => array(
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l4';
  $display->layout_settings = array(
    'main_classes' => '',
    'summary_a_classes' => 'summary',
    'summary_b_classes' => 'summary',
    'summary_c_classes' => 'summary',
    'summary_d_classes' => 'summary',
    'summary_e_classes' => 'summary',
    'summary_f_classes' => 'summary',
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
      'summary_a' => NULL,
      'summary_b' => NULL,
      'summary_c' => NULL,
      'summary_d' => NULL,
      'summary_e' => NULL,
      'summary_f' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Educators';
  $display->uuid = '2de777c9-eb1b-437b-b6ac-14327e1c20df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f202f7e1-765c-4b8b-8904-3a3553d99b90';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:541';
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
    $pane->uuid = 'f202f7e1-765c-4b8b-8904-3a3553d99b90';
    $display->content['new-f202f7e1-765c-4b8b-8904-3a3553d99b90'] = $pane;
    $display->panels['main'][0] = 'new-f202f7e1-765c-4b8b-8904-3a3553d99b90';
    $pane = new stdClass();
    $pane->pid = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:56';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'excerpt callout',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1706250f-2770-40cb-a535-c9017e794271';
    $display->content['new-1706250f-2770-40cb-a535-c9017e794271'] = $pane;
    $display->panels['main'][1] = 'new-1706250f-2770-40cb-a535-c9017e794271';
    $pane = new stdClass();
    $pane->pid = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:26';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $display->panels['summary_a'][0] = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane = new stdClass();
    $pane->pid = 'new-40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $pane->panel = 'summary_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1711,
      'parent' => 'main-menu:1711',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = '40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $display->content['new-40c90d0d-75c9-4d22-be01-109892a1cbaa'] = $pane;
    $display->panels['summary_a'][1] = 'new-40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $pane = new stdClass();
    $pane->pid = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:31';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '01791882-e256-439b-87b4-660c9ef7786e';
    $display->content['new-01791882-e256-439b-87b4-660c9ef7786e'] = $pane;
    $display->panels['summary_b'][0] = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane = new stdClass();
    $pane->pid = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane->panel = 'summary_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:36';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = 'e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $display->content['new-e2f497e4-c241-4534-aa3f-fe017d0e8475'] = $pane;
    $display->panels['summary_c'][0] = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane = new stdClass();
    $pane->pid = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane->panel = 'summary_d';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:41';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '1480c26e-8f39-4694-8af6-3c83707610ef';
    $display->content['new-1480c26e-8f39-4694-8af6-3c83707610ef'] = $pane;
    $display->panels['summary_d'][0] = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane = new stdClass();
    $pane->pid = 'new-3995715a-6b07-45ca-8b06-21e8557a9119';
    $pane->panel = 'summary_d';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1721,
      'parent' => 'main-menu:1721',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = '3995715a-6b07-45ca-8b06-21e8557a9119';
    $display->content['new-3995715a-6b07-45ca-8b06-21e8557a9119'] = $pane;
    $display->panels['summary_d'][1] = 'new-3995715a-6b07-45ca-8b06-21e8557a9119';
    $pane = new stdClass();
    $pane->pid = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane->panel = 'summary_e';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:46';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = 'e0833bc3-72da-4d35-b137-52994c1002f1';
    $display->content['new-e0833bc3-72da-4d35-b137-52994c1002f1'] = $pane;
    $display->panels['summary_e'][0] = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane = new stdClass();
    $pane->pid = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane->panel = 'summary_f';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:51';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '94d290ae-e000-4680-85ea-e13bc143bc3c';
    $display->content['new-94d290ae-e000-4680-85ea-e13bc143bc3c'] = $pane;
    $display->panels['summary_f'][0] = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane = new stdClass();
    $pane->pid = 'new-d242941c-5bcb-4591-b636-249db9a738fa';
    $pane->panel = 'summary_f';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 8136,
      'parent' => 'main-menu:8136',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = 'd242941c-5bcb-4591-b636-249db9a738fa';
    $display->content['new-d242941c-5bcb-4591-b636-249db9a738fa'] = $pane;
    $display->panels['summary_f'][1] = 'new-d242941c-5bcb-4591-b636-249db9a738fa';
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
  $display->title = 'Educators Blog';
  $display->uuid = '231137e8-83c9-4391-ac05-3a37318043c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c649ccf2-f4c0-4094-aa19-4ba5b3101d84';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:476';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c649ccf2-f4c0-4094-aa19-4ba5b3101d84';
    $display->content['new-c649ccf2-f4c0-4094-aa19-4ba5b3101d84'] = $pane;
    $display->panels['main'][0] = 'new-c649ccf2-f4c0-4094-aa19-4ba5b3101d84';
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
      'style' => 'naked',
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
  $display->title = 'Event Spaces';
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
      'view_mode' => 'node:promo',
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
      'body' => '<h1>Galleries</h1>
',
      'format' => 'unfiltered',
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
      'view_mode' => 'node:promo',
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
    'top_a_classes' => 'summary',
    'top_b_classes' => 'summary',
    'top_c_classes' => 'summary',
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
  $display->title = 'Exhibitions & Events';
  $display->uuid = '6670015c-8d44-40ac-8664-5d85e449f8fc';
  $display->content = array();
  $display->panels = array();
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
      'override_title_text' => 'Exhibitions at the Museum',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58a5f1c6-6b3f-4ad6-a217-ca30d2398aea';
    $display->content['new-58a5f1c6-6b3f-4ad6-a217-ca30d2398aea'] = $pane;
    $display->panels['main'][0] = 'new-58a5f1c6-6b3f-4ad6-a217-ca30d2398aea';
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
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'summary__title',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => 'at-the-field/exhibitions',
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
          'class' => 'summary__description',
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
          'class' => 'summary',
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
    $pane->uuid = '4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $display->content['new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919'] = $pane;
    $display->panels['top_a'][0] = 'new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $pane = new stdClass();
    $pane->pid = 'new-0cf52d2e-5105-430c-9f19-f3c9915f85e3';
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
      'identifier' => 'content',
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
    $pane->uuid = '0cf52d2e-5105-430c-9f19-f3c9915f85e3';
    $display->content['new-0cf52d2e-5105-430c-9f19-f3c9915f85e3'] = $pane;
    $display->panels['top_a'][1] = 'new-0cf52d2e-5105-430c-9f19-f3c9915f85e3';
    $pane = new stdClass();
    $pane->pid = 'new-d660e9e1-5e72-4eed-8a92-05b999184a57';
    $pane->panel = 'top_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:246';
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
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'summary__title',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => 'at-the-field/programs',
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
          'class' => 'summary__description',
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
          'class' => 'summary',
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
    $pane->uuid = 'd660e9e1-5e72-4eed-8a92-05b999184a57';
    $display->content['new-d660e9e1-5e72-4eed-8a92-05b999184a57'] = $pane;
    $display->panels['top_b'][0] = 'new-d660e9e1-5e72-4eed-8a92-05b999184a57';
    $pane = new stdClass();
    $pane->pid = 'new-704fc89d-c7d3-4af2-b9c9-4b3f3b17b6e1';
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
      'identifier' => 'content',
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
    $pane->uuid = '704fc89d-c7d3-4af2-b9c9-4b3f3b17b6e1';
    $display->content['new-704fc89d-c7d3-4af2-b9c9-4b3f3b17b6e1'] = $pane;
    $display->panels['top_b'][1] = 'new-704fc89d-c7d3-4af2-b9c9-4b3f3b17b6e1';
    $pane = new stdClass();
    $pane->pid = 'new-fded155c-c084-4715-8753-d829eafa8e07';
    $pane->panel = 'top_c';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'summary__title',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => 'at-the-field/calendar',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'ul',
          'class_enable' => 1,
          'class' => 'eventsList',
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
    $pane->uuid = 'fded155c-c084-4715-8753-d829eafa8e07';
    $display->content['new-fded155c-c084-4715-8753-d829eafa8e07'] = $pane;
    $display->panels['top_c'][0] = 'new-fded155c-c084-4715-8753-d829eafa8e07';
    $pane = new stdClass();
    $pane->pid = 'new-622df94a-5450-4d20-b893-b125d1f819ff';
    $pane->panel = 'top_c';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = FALSE;
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
      'identifier' => 'content',
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
    $pane->uuid = '622df94a-5450-4d20-b893-b125d1f819ff';
    $display->content['new-622df94a-5450-4d20-b893-b125d1f819ff'] = $pane;
    $display->panels['top_c'][1] = 'new-622df94a-5450-4d20-b893-b125d1f819ff';
    $pane = new stdClass();
    $pane->pid = 'new-47424989-820b-4539-9d0f-2a1c369d118b';
    $pane->panel = 'top_c';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/at-the-field/calendar" class="link--more">Full events calendar</a>',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '47424989-820b-4539-9d0f-2a1c369d118b';
    $display->content['new-47424989-820b-4539-9d0f-2a1c369d118b'] = $pane;
    $display->panels['top_c'][2] = 'new-47424989-820b-4539-9d0f-2a1c369d118b';
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
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'The Brain Scoop',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '1301',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'a';
  $display->layout_settings = array(
    'main_classes' => '',
    'summary_a_classes' => 'summary',
    'summary_b_classes' => 'summary',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'banners' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'summary_a' => NULL,
      'summary_b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f5bf6f5f-7fca-4f9c-b612-be9e75c740de';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '791',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5bf6f5f-7fca-4f9c-b612-be9e75c740de';
    $display->content['new-f5bf6f5f-7fca-4f9c-b612-be9e75c740de'] = $pane;
    $display->panels['main'][0] = 'new-f5bf6f5f-7fca-4f9c-b612-be9e75c740de';
    $pane = new stdClass();
    $pane->pid = 'new-2bdf4afe-d11b-4cd2-97e1-27a788a5d6a1';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '896',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2bdf4afe-d11b-4cd2-97e1-27a788a5d6a1';
    $display->content['new-2bdf4afe-d11b-4cd2-97e1-27a788a5d6a1'] = $pane;
    $display->panels['main'][1] = 'new-2bdf4afe-d11b-4cd2-97e1-27a788a5d6a1';
    $pane = new stdClass();
    $pane->pid = 'new-88e950fb-c0f9-4f0f-b6ab-7dbb54f84914';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9916',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88e950fb-c0f9-4f0f-b6ab-7dbb54f84914';
    $display->content['new-88e950fb-c0f9-4f0f-b6ab-7dbb54f84914'] = $pane;
    $display->panels['main'][2] = 'new-88e950fb-c0f9-4f0f-b6ab-7dbb54f84914';
    $pane = new stdClass();
    $pane->pid = 'new-22bdca7e-aa61-475c-8dab-4df6de5476cb';
    $pane->panel = 'summary_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Science at The Field header',
      'title' => '',
      'body' => '<h2 class="heading--stroked">Science at The Field</h2>
',
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
    $pane->uuid = '22bdca7e-aa61-475c-8dab-4df6de5476cb';
    $display->content['new-22bdca7e-aa61-475c-8dab-4df6de5476cb'] = $pane;
    $display->panels['summary_a'][0] = 'new-22bdca7e-aa61-475c-8dab-4df6de5476cb';
    $pane = new stdClass();
    $pane->pid = 'new-e2a04211-ffc0-4b58-b715-082458df4c99';
    $pane->panel = 'summary_a';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9906',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2a04211-ffc0-4b58-b715-082458df4c99';
    $display->content['new-e2a04211-ffc0-4b58-b715-082458df4c99'] = $pane;
    $display->panels['summary_a'][1] = 'new-e2a04211-ffc0-4b58-b715-082458df4c99';
    $pane = new stdClass();
    $pane->pid = 'new-0a50c677-cbcc-42ec-8b58-4a5c9677bdd6';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:546';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0a50c677-cbcc-42ec-8b58-4a5c9677bdd6';
    $display->content['new-0a50c677-cbcc-42ec-8b58-4a5c9677bdd6'] = $pane;
    $display->panels['summary_a'][2] = 'new-0a50c677-cbcc-42ec-8b58-4a5c9677bdd6';
    $pane = new stdClass();
    $pane->pid = 'new-f84c318e-b8e3-4c00-a60d-3dd10189ce1b';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:516';
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
    $pane->uuid = 'f84c318e-b8e3-4c00-a60d-3dd10189ce1b';
    $display->content['new-f84c318e-b8e3-4c00-a60d-3dd10189ce1b'] = $pane;
    $display->panels['summary_a'][3] = 'new-f84c318e-b8e3-4c00-a60d-3dd10189ce1b';
    $pane = new stdClass();
    $pane->pid = 'new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:556';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
    $display->content['new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc'] = $pane;
    $display->panels['summary_a'][4] = 'new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
    $pane = new stdClass();
    $pane->pid = 'new-9c7c967d-f6dd-4d2e-9592-fcc315666935';
    $pane->panel = 'summary_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Events at The Field header',
      'title' => '',
      'body' => '<h2 class="heading--stroked">Events at The Field</h2>',
      'format' => 'filtered_wysiwyg',
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
    $pane->uuid = '9c7c967d-f6dd-4d2e-9592-fcc315666935';
    $display->content['new-9c7c967d-f6dd-4d2e-9592-fcc315666935'] = $pane;
    $display->panels['summary_b'][0] = 'new-9c7c967d-f6dd-4d2e-9592-fcc315666935';
    $pane = new stdClass();
    $pane->pid = 'new-5a088fd3-0b7e-47bd-a6f7-05eb427cc767';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14981',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a088fd3-0b7e-47bd-a6f7-05eb427cc767';
    $display->content['new-5a088fd3-0b7e-47bd-a6f7-05eb427cc767'] = $pane;
    $display->panels['summary_b'][1] = 'new-5a088fd3-0b7e-47bd-a6f7-05eb427cc767';
    $pane = new stdClass();
    $pane->pid = 'new-23e857a7-d4c1-4650-ba71-d5da16c8f547';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:551';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23e857a7-d4c1-4650-ba71-d5da16c8f547';
    $display->content['new-23e857a7-d4c1-4650-ba71-d5da16c8f547'] = $pane;
    $display->panels['summary_b'][2] = 'new-23e857a7-d4c1-4650-ba71-d5da16c8f547';
    $pane = new stdClass();
    $pane->pid = 'new-03c85560-2098-43ee-8420-f26f6f41d842';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:516';
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
    $pane->uuid = '03c85560-2098-43ee-8420-f26f6f41d842';
    $display->content['new-03c85560-2098-43ee-8420-f26f6f41d842'] = $pane;
    $display->panels['summary_b'][3] = 'new-03c85560-2098-43ee-8420-f26f6f41d842';
    $pane = new stdClass();
    $pane->pid = 'new-fe76340e-2b72-479f-94e7-8af5b372ed18';
    $pane->panel = 'summary_b';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
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
          'type' => 'ul',
          'class_enable' => 1,
          'class' => 'eventsList',
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
    $pane->uuid = 'fe76340e-2b72-479f-94e7-8af5b372ed18';
    $display->content['new-fe76340e-2b72-479f-94e7-8af5b372ed18'] = $pane;
    $display->panels['summary_b'][4] = 'new-fe76340e-2b72-479f-94e7-8af5b372ed18';
    $pane = new stdClass();
    $pane->pid = 'new-068cd16e-eeeb-4c11-b499-3580eec2e766';
    $pane->panel = 'summary_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Full event calendar link',
      'title' => '',
      'body' => '<a class="link--more" href="/at-the-field/calendar">Full Events Calendar</a>',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '068cd16e-eeeb-4c11-b499-3580eec2e766';
    $display->content['new-068cd16e-eeeb-4c11-b499-3580eec2e766'] = $pane;
    $display->panels['summary_b'][5] = 'new-068cd16e-eeeb-4c11-b499-3580eec2e766';
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
  $display->title = 'Individual Giving';
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
      'view_mode' => 'node:summary',
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
      'style' => 'semantic_panels',
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
  $handler->weight = -29;
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
        'identifier' => 'View: Learning resources',
        'keyword' => 'view',
        'name' => 'view:learning_resources-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l15';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4';
    $display->content['new-7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4'] = $pane;
    $display->panels['main'][0] = 'new-7e5ed173-6aed-41f8-b2a1-cb6763ac6aa4';
    $pane = new stdClass();
    $pane->pid = 'new-59012f6c-7ffe-4976-bd1a-83f2ce6aff8f';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:learning_resources-ctools_context_1_1',
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
    $pane->uuid = '59012f6c-7ffe-4976-bd1a-83f2ce6aff8f';
    $display->content['new-59012f6c-7ffe-4976-bd1a-83f2ce6aff8f'] = $pane;
    $display->panels['main'][1] = 'new-59012f6c-7ffe-4976-bd1a-83f2ce6aff8f';
    $pane = new stdClass();
    $pane->pid = 'new-06ccb6d7-cebb-4e7f-b829-eb7f66de3b73';
    $pane->panel = 'main';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:learning_resources-ctools_context_1_1',
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
    $pane->uuid = '06ccb6d7-cebb-4e7f-b829-eb7f66de3b73';
    $display->content['new-06ccb6d7-cebb-4e7f-b829-eb7f66de3b73'] = $pane;
    $display->panels['main'][2] = 'new-06ccb6d7-cebb-4e7f-b829-eb7f66de3b73';
    $pane = new stdClass();
    $pane->pid = 'new-cb297965-20ec-4fa6-b0eb-bef4111c81c2';
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
    $pane->uuid = 'cb297965-20ec-4fa6-b0eb-bef4111c81c2';
    $display->content['new-cb297965-20ec-4fa6-b0eb-bef4111c81c2'] = $pane;
    $display->panels['nav'][0] = 'new-cb297965-20ec-4fa6-b0eb-bef4111c81c2';
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
    'title' => 'Meeting Spaces',
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
  $display->title = 'Meeting Spaces';
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
      'view_mode' => 'node:promo',
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
          'type' => 'header',
          'class_enable' => 1,
          'class' => 'l--flex--titleButton',
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
    'title' => 'Membership Info',
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
      2 => array(
        'identifier' => 'List: Menu children (show children in other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children_visible',
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
  $display->layout = 'l10c';
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
  $display->title = 'Membership Info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18';
    $display->content['new-20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18'] = $pane;
    $display->panels['main'][0] = 'new-20b9cdda-7ffd-4ad9-89b0-6d5cece2fd18';
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
        'limit' => '0',
      ),
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_visible_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 1,
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][1] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-09172b22-4a0f-4397-ba0b-480a2220dd98';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Membership Blog',
      'body' => '<p>Stay up to date with all the news and happenings for Field Museum members!</p>
<p><a class="link--more" href="http://fieldmusefacelift.devcloud.acquia-sites.com/support/members/blog">Read the Blog</a></p>
',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
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
        'add_default_classes' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09172b22-4a0f-4397-ba0b-480a2220dd98';
    $display->content['new-09172b22-4a0f-4397-ba0b-480a2220dd98'] = $pane;
    $display->panels['main'][2] = 'new-09172b22-4a0f-4397-ba0b-480a2220dd98';
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
  $display->title = 'Partnerships';
  $display->uuid = 'dab4abb4-9cb8-495d-b8de-496c2608e946';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a1bb898-f430-43b3-b256-6d06659cb2db';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:481';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a1bb898-f430-43b3-b256-6d06659cb2db';
    $display->content['new-0a1bb898-f430-43b3-b256-6d06659cb2db'] = $pane;
    $display->panels['main'][0] = 'new-0a1bb898-f430-43b3-b256-6d06659cb2db';
    $pane = new stdClass();
    $pane->pid = 'new-a0e0c220-3e35-4a64-ad23-bb1262f2a9b9';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:116';
    $pane->shown = FALSE;
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
      'view_mode' => 'node:promo',
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
  $display->title_pane = '0';
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
    'title' => 'Plan your Special Event',
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
  $display->title = 'Plan your Special Event';
  $display->uuid = 'ebab7262-033c-4242-a61d-94bfbaf7cd5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2fa2669-b997-4b85-ac29-f16be2b34d04';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>Plan Your Special Event</h1>',
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
    $pane->uuid = 'e2fa2669-b997-4b85-ac29-f16be2b34d04';
    $display->content['new-e2fa2669-b997-4b85-ac29-f16be2b34d04'] = $pane;
    $display->panels['main'][0] = 'new-e2fa2669-b997-4b85-ac29-f16be2b34d04';
    $pane = new stdClass();
    $pane->pid = 'new-581ed6b7-fe2f-4771-8049-1daa9ffc1096';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'plan_your_special_event_landing';
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
    $pane->uuid = '581ed6b7-fe2f-4771-8049-1daa9ffc1096';
    $display->content['new-581ed6b7-fe2f-4771-8049-1daa9ffc1096'] = $pane;
    $display->panels['main'][1] = 'new-581ed6b7-fe2f-4771-8049-1daa9ffc1096';
    $pane = new stdClass();
    $pane->pid = 'new-9721a1b3-a020-44c0-830e-1f549e9e5809';
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
    $pane->uuid = '9721a1b3-a020-44c0-830e-1f549e9e5809';
    $display->content['new-9721a1b3-a020-44c0-830e-1f549e9e5809'] = $pane;
    $display->panels['nav'][0] = 'new-9721a1b3-a020-44c0-830e-1f549e9e5809';
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
  $display->title = 'Plan your Visit';
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
  $display->title = 'Publications';
  $display->uuid = '5cf2f779-14ca-4bad-8d58-c0e373cb4690';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-068e6429-58ab-44c9-a1e2-b4fd18093dfd';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:506';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '068e6429-58ab-44c9-a1e2-b4fd18093dfd';
    $display->content['new-068e6429-58ab-44c9-a1e2-b4fd18093dfd'] = $pane;
    $display->panels['main'][0] = 'new-068e6429-58ab-44c9-a1e2-b4fd18093dfd';
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
      'view_mode' => 'node:promo',
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
    $pane->uuid = '50840a1c-a85d-4284-a73d-9e9c0d257ecc';
    $display->content['new-50840a1c-a85d-4284-a73d-9e9c0d257ecc'] = $pane;
    $display->panels['main'][1] = 'new-50840a1c-a85d-4284-a73d-9e9c0d257ecc';
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
  $display->hide_title = PANELS_TITLE_FIXED;
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
    $pane->pid = 'new-cf81603a-49e4-417c-8344-b4864d5bd9be';
    $pane->panel = 'bottom';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'callout excerpt',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf81603a-49e4-417c-8344-b4864d5bd9be';
    $display->content['new-cf81603a-49e4-417c-8344-b4864d5bd9be'] = $pane;
    $display->panels['bottom'][0] = 'new-cf81603a-49e4-417c-8344-b4864d5bd9be';
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
        'limit' => '4',
      ),
      'view_mode' => 'node:promo',
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
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--2up',
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
        'identifier' => 'List: Menu children (show children in other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children_visible',
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
  $display->layout = 'l6c';
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
  $display->title = 'Resources & Tools';
  $display->uuid = '4aaab591-7563-4741-b367-7eb3834321bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4194d256-4856-4125-8fba-cb2133e8b65c';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:501';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4194d256-4856-4125-8fba-cb2133e8b65c';
    $display->content['new-4194d256-4856-4125-8fba-cb2133e8b65c'] = $pane;
    $display->panels['main'][0] = 'new-4194d256-4856-4125-8fba-cb2133e8b65c';
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
      'view_mode' => 'node:promo',
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
    'main_classes' => '',
    'summary_a_classes' => 'summary',
    'summary_b_classes' => 'summary',
    'summary_c_classes' => 'summary',
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
      'summary_a' => NULL,
      'summary_b' => NULL,
      'summary_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Science';
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
    $pane->shown = FALSE;
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
    $pane = new stdClass();
    $pane->pid = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '35903402-4dca-4000-b537-7a426de082bf';
    $display->content['new-35903402-4dca-4000-b537-7a426de082bf'] = $pane;
    $display->panels['summary_a'][0] = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane = new stdClass();
    $pane->pid = 'new-14da5a52-52d3-4af7-94ae-ad1abdbc6240';
    $pane->panel = 'summary_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 16441,
      'parent' => 'main-menu:16441',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = '14da5a52-52d3-4af7-94ae-ad1abdbc6240';
    $display->content['new-14da5a52-52d3-4af7-94ae-ad1abdbc6240'] = $pane;
    $display->panels['summary_a'][1] = 'new-14da5a52-52d3-4af7-94ae-ad1abdbc6240';
    $pane = new stdClass();
    $pane->pid = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $display->content['new-023119be-c0ab-4ebb-a46c-d3283e1e25a1'] = $pane;
    $display->panels['summary_b'][0] = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane = new stdClass();
    $pane->pid = 'new-b6163922-c853-44b0-86d7-286147a58ede';
    $pane->panel = 'summary_b';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1731,
      'parent' => 'main-menu:1731',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = 'b6163922-c853-44b0-86d7-286147a58ede';
    $display->content['new-b6163922-c853-44b0-86d7-286147a58ede'] = $pane;
    $display->panels['summary_b'][1] = 'new-b6163922-c853-44b0-86d7-286147a58ede';
    $pane = new stdClass();
    $pane->pid = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
    $pane->panel = 'summary_c';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = 'd866853d-695d-4c9b-ae0b-df338e6ada8e';
    $display->content['new-d866853d-695d-4c9b-ae0b-df338e6ada8e'] = $pane;
    $display->panels['summary_c'][0] = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
    $pane = new stdClass();
    $pane->pid = 'new-b7c248b0-3db2-4abf-99a8-daf9c3fe0a5d';
    $pane->panel = 'summary_c';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1706,
      'parent' => 'main-menu:1706',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = 'b7c248b0-3db2-4abf-99a8-daf9c3fe0a5d';
    $display->content['new-b7c248b0-3db2-4abf-99a8-daf9c3fe0a5d'] = $pane;
    $display->panels['summary_c'][1] = 'new-b7c248b0-3db2-4abf-99a8-daf9c3fe0a5d';
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
    $pane->pid = 'new-c2ac414d-700f-4771-a62f-ba0a525f83a8';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:521';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2ac414d-700f-4771-a62f-ba0a525f83a8';
    $display->content['new-c2ac414d-700f-4771-a62f-ba0a525f83a8'] = $pane;
    $display->panels['main'][0] = 'new-c2ac414d-700f-4771-a62f-ba0a525f83a8';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4';
    $display->content['new-0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4'] = $pane;
    $display->panels['main'][1] = 'new-0a50c70e-b787-4fc7-8a6f-9f0dadec5ba4';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['main'][2] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['main'][3] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
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
        'input_form' => 'tid',
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
        'breadcrumb' => 0,
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
  $display->title = 'Blogs & Videos: %term:name';
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
      'override_title_text' => 'Blogs & Videos: %term:name',
    );
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'naked',
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
    'title' => 'Support the Museum',
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
    'summary_a_classes' => 'summary',
    'summary_b_classes' => 'summary',
    'summary_c_classes' => 'summary',
    'summary_d_classes' => 'summary',
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
      'summary_a' => NULL,
      'summary_b' => NULL,
      'summary_c' => NULL,
      'summary_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Support the Museum';
  $display->uuid = '0277acda-f6f0-4ac8-b9f0-bf97f2e6d425';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1ea71f8-4eea-4cc1-9d53-21e575c7e1a7';
    $pane->panel = 'callout';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:251';
    $pane->shown = FALSE;
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
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:256';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $display->panels['summary_a'][0] = 'new-c5b3d226-9a86-4181-9bf0-bc8f822fa761';
    $pane = new stdClass();
    $pane->pid = 'new-84bdf258-9373-4afa-a7df-3be9ba382dce';
    $pane->panel = 'summary_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1746,
      'parent' => 'main-menu:1746',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = '84bdf258-9373-4afa-a7df-3be9ba382dce';
    $display->content['new-84bdf258-9373-4afa-a7df-3be9ba382dce'] = $pane;
    $display->panels['summary_a'][1] = 'new-84bdf258-9373-4afa-a7df-3be9ba382dce';
    $pane = new stdClass();
    $pane->pid = 'new-a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:261';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = 'a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $display->content['new-a370597d-6fcb-4a69-94fb-dd1a207a278f'] = $pane;
    $display->panels['summary_b'][0] = 'new-a370597d-6fcb-4a69-94fb-dd1a207a278f';
    $pane = new stdClass();
    $pane->pid = 'new-f064e1c6-8a1f-46a7-838d-9fd1f7b944c8';
    $pane->panel = 'summary_b';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1726,
      'parent' => 'main-menu:1726',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'content',
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
    $pane->uuid = 'f064e1c6-8a1f-46a7-838d-9fd1f7b944c8';
    $display->content['new-f064e1c6-8a1f-46a7-838d-9fd1f7b944c8'] = $pane;
    $display->panels['summary_b'][1] = 'new-f064e1c6-8a1f-46a7-838d-9fd1f7b944c8';
    $pane = new stdClass();
    $pane->pid = 'new-02799c49-c186-4dbf-bffb-a32712fecd21';
    $pane->panel = 'summary_c';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9566',
      'links' => 1,
      'leave_node_title' => 1,
      'identifier' => 'summary__naked',
      'build_mode' => 'summary',
      'link_node_title' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '02799c49-c186-4dbf-bffb-a32712fecd21';
    $display->content['new-02799c49-c186-4dbf-bffb-a32712fecd21'] = $pane;
    $display->panels['summary_c'][0] = 'new-02799c49-c186-4dbf-bffb-a32712fecd21';
    $pane = new stdClass();
    $pane->pid = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $pane->panel = 'summary_d';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:416';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $display->content['new-8b74bad4-3232-4f74-94b2-d30b5e04775c'] = $pane;
    $display->panels['summary_d'][0] = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
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
    'title' => 'Teacher Professional Development',
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
        'entity_id' => '16',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'List: Menu children (hide children from other menus)',
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
    'relationships' => array(
      1 => array(
        'identifier' => 'View: Programs: Filtered list of promos',
        'keyword' => 'view',
        'name' => 'view_from_argument:programs-ctools_context_1',
        'context' => array(
          0 => 'context_entity:taxonomy_term_1',
        ),
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'l6c';
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
  $display->title = 'Teacher Professional Development';
  $display->uuid = '370002fa-5668-44b1-9cb8-f33407985b7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4540b20-9a1c-46d1-913a-15dd911c3c4f';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:446';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4540b20-9a1c-46d1-913a-15dd911c3c4f';
    $display->content['new-e4540b20-9a1c-46d1-913a-15dd911c3c4f'] = $pane;
    $display->panels['main'][0] = 'new-e4540b20-9a1c-46d1-913a-15dd911c3c4f';
    $pane = new stdClass();
    $pane->pid = 'new-66be89a6-7dbf-421a-aaf7-13cc3f9fd881';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'relationship_view_from_argument:programs-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'section',
          'class_enable' => 1,
          'class' => 'promos--2up',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66be89a6-7dbf-421a-aaf7-13cc3f9fd881';
    $display->content['new-66be89a6-7dbf-421a-aaf7-13cc3f9fd881'] = $pane;
    $display->panels['main'][1] = 'new-66be89a6-7dbf-421a-aaf7-13cc3f9fd881';
    $pane = new stdClass();
    $pane->pid = 'new-8de52818-362a-4441-bb71-327b65fef848';
    $pane->panel = 'main';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_view_from_argument:programs-ctools_context_1_1',
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
    $pane->uuid = '8de52818-362a-4441-bb71-327b65fef848';
    $display->content['new-8de52818-362a-4441-bb71-327b65fef848'] = $pane;
    $display->panels['main'][2] = 'new-8de52818-362a-4441-bb71-327b65fef848';
    $pane = new stdClass();
    $pane->pid = 'new-e263d975-8428-4e42-8aa5-43d5ae3b28cc';
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
      'context' => 'context_entitylist:menu_children_1',
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
          'class' => 'promos--2up',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e263d975-8428-4e42-8aa5-43d5ae3b28cc';
    $display->content['new-e263d975-8428-4e42-8aa5-43d5ae3b28cc'] = $pane;
    $display->panels['main'][3] = 'new-e263d975-8428-4e42-8aa5-43d5ae3b28cc';
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
  $display->title_pane = '0';
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
    'type' => 'none',
    'settings' => NULL,
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
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
  );
  $display->panel_settings = array(
    'style' => 'naked',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'nav' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tickets & Hours';
  $display->uuid = '21b6876f-4a2c-4f61-9a2d-f83113ff8675';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e8fabf3-d899-4a77-80d5-4d26e655e35d';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h1>
  Tickets & Hours
</h1>
<section class="callout">
  <p>
    The Field Museum is open from 9am-5pm every day of the year, except Christmas Day. Last admission is at 4pm daily.
  </p>
</section>
<p>
  The Crown Family PlayLab is free with Basic admission and is open Thursdays through Mondays from 10am to 4pm. The last admission for the PlayLab is 3pm. <a href="/at-the-field/exhibitions/crown-family-playlab" class="link--more">Find Out More</a>
</p>
<h2 class="heading--stroked">
  CityPASS
</h2>
<div class="l--2up">
  <div class="l--module">
    <p>
      <strong>Save 49%</strong> or more on admission to 5 famous Chicago attractions!
    </p>
    <a href="/visit/admission-and-hours/citypass-ticket-book" class="button--cta">Explore the CityPASS</a>
  </div>
  <div class="l--module">
    <ul class="priceList">
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Adults </span> <span class="priceList__price">$94</span>
      </div>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Children </span> <span class="priceList__price">$79</span>
      </div>
      <p class="priceList__condition">
        (ages 3 – 11)
      </p>
      </li>
    </ul>
    <a href="http://www.citypass.com/chicago?mv_source=field&campaign=citypass-ticket-book" class="button--buy" data-analytics="ticketing-city-pass"> <span class="button__leader"> <svg class="icon icon--ticket-2" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> </span> Buy CityPASS Online </a>
  </div>
</div>
<h2 class="heading--stroked">
  Field Museum Tickets
</h2>

<!-- CAXY: This will only be displayed at wide content column widths. That CSS is NOT written yet, but the markup is complete. -->
<section class="tickets is--visible--wide">
  <header class="tickets__header">
    <h4 class="tickets__heading">
      <svg class="icon icon--ticket-3 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-3"></use> </svg> All-Access
    </h4>
    <h4 class="tickets__heading">
      <svg class="icon icon--ticket-2 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> Discovery
    </h4>
    <h4 class="tickets__heading">
      <svg class="icon icon--ticket-1 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> Basic
    </h4>
    <p class="tickets__details">
      See it all! Our All-Access Pass entitles you entry into all <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> at The Field Museum.
    </p>
    <p class="tickets__details">
      Explore all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> at The Field Museum, plus one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> or <a href="/at-the-field/exhibitions/ticketed">ticketed exhibition</a>.
    </p>
    <p class="tickets__details">
      Enjoy all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
    </p>
    <button class="tickets__toggle js--toggleTickets">Learn More About Our Ticket Packages</button>
  </header>
  <section class="ticketMatrix">
    <div class="ticketMatrix__column">
      <h3 class="ticketMatrix__heading">
        <a href="/at-the-field/exhibitions/permanent" class="ticketMatrix__link">Permanent Exhibitions</a>
      </h3>
      <h3 class="ticketMatrix__heading">
        <a href="/at-the-field/exhibitions/ticketed" class="ticketMatrix__link">Ticketed Exhibitions</a>
      </h3>
      <h3 class="ticketMatrix__heading">
        <a href="/at-the-field/exhibitions/3d-movie" class="ticketMatrix__link">3D Movies</a>
      </h3>
    </div>
    <div class="ticketMatrix__column">
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text">
        <p>
          Your <strong>All-Access Pass</strong> includes a single 3D movie.
        </p>
      </div>
    </div>
    <div class="ticketMatrix__column">
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double">
        <p>
          Your <strong>Discovery Pass</strong> includes a single ticketed exhibition or 3D movie.
        </p>
      </div>
    </div>
    <div class="ticketMatrix__column">
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double ticketMatrix__cell--disabled">
        <p>
          Ticketed exhibitions and 3D movies are not included with <strong>Basic admission</strong>.
        </p>
      </div>
    </div>
  </section>
  <section class="tickets__pricing">
    <ul class="priceList">
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Adults </span> <span class="priceList__price">$31</span>
      </div>
      <p class="priceList__condition">
        &nbsp;
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Children </span> <span class="priceList__price">$21</span>
      </div>
      <p class="priceList__condition">
        (ages 3 – 11)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Seniors </span> <span class="priceList__price">$25</span>
      </div>
      <p class="priceList__condition">
        (ages 65+)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Students </span> <span class="priceList__price">$25</span>
      </div>
      <p class="priceList__condition">
        (w/ valid ID)
      </p>
      </li>
    </ul>
    <ul class="priceList">
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Adults </span> <span class="priceList__price">$25</span>
      </div>
      <p class="priceList__condition">
        &nbsp;
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Children </span> <span class="priceList__price">$18</span>
      </div>
      <p class="priceList__condition">
        (ages 3 – 11)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Seniors </span> <span class="priceList__price">$20</span>
      </div>
      <p class="priceList__condition">
        (ages 65+)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Students </span> <span class="priceList__price">$20</span>
      </div>
      <p class="priceList__condition">
        (w/ valid ID)
      </p>
      </li>
    </ul>
    <ul class="priceList">
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Adults </span> <span class="priceList__price">$18</span>
      </div>
      <p class="priceList__condition">
        &nbsp;
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Children </span> <span class="priceList__price">$13</span>
      </div>
      <p class="priceList__condition">
        (ages 3 – 11)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Seniors </span> <span class="priceList__price">$15</span>
      </div>
      <p class="priceList__condition">
        (ages 65+)
      </p>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Students </span> <span class="priceList__price">$15</span>
      </div>
      <p class="priceList__condition">
        (w/ valid ID)
      </p>
      </li>
    </ul>
  </section>
  <section class="tickets__buttons">
    <div class="tickets__button">
      <a href="http://tickets.fieldmuseum.org" class="button--buy button--full" data-analytics="ticketing-all-access"> <span class="button__leader"> <svg class="icon icon--ticket-3" viewbox="0 0 500 500"> <use xlink:href="#ticket-3"></use> </svg> </span> All-Access Pass </a>
    </div>
    <div class="tickets__button">
      <a href="http://tickets.fieldmuseum.org" class="button--buy button--full" data-analytics="ticketing-discovery"> <span class="button__leader"> <svg class="icon icon--ticket-2" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> </span> Discovery Pass </a>
    </div>
    <div class="tickets__button">
      <a href="http://tickets.fieldmuseum.org" class="button--buy button--full" data-analytics="ticketing-basic"> <span class="button__leader"> <svg class="icon icon--ticket-1" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> </span> Basic Pass </a>
    </div>
  </section>
</section>

<!-- CAXY: This will only be displayed at narrow content column widths. That CSS is NOT written yet, but the markup is complete. -->
<section class="tickets--stacked is--visible--narrow">
  <section class="tickets__type">
    <article class="tickets__article">
      <h4 class="tickets__heading">
        <svg class="icon icon--ticket-3 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-3"></use> </svg> All-Access
      </h4>
      <p class="tickets__details">
        See it all! Our All-Access Pass entitles you entry into all <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> at The Field Museum.
      </p>
      <ul class="priceList">
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Adults </span> <span class="priceList__price">$31</span>
        </div>
        <p class="priceList__condition">
          &nbsp;
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Children </span> <span class="priceList__price">$21</span>
        </div>
        <p class="priceList__condition">
          (ages 3 – 11)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Seniors </span> <span class="priceList__price">$25</span>
        </div>
        <p class="priceList__condition">
          (ages 65+)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Students </span> <span class="priceList__price">$25</span>
        </div>
        <p class="priceList__condition">
          (w/ valid ID)
        </p>
        </li>
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">Permanent Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/ticketed">Ticketed Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/3d-movies">3D Movies</a></li>
      </ul>
      <p class="tickets__disclaimer">
        Your <strong>All-Access Pass</strong> includes a single 3D movie.
      </p>
    </article>
  </section>
  <section class="tickets__type">
    <article class="tickets__article">
      <h4 class="tickets__heading">
        <svg class="icon icon--ticket-2 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> Discovery
      </h4>
      <p class="tickets__details">
        Explore all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> at The Field Museum, plus <a href="/at-the-field/exhibitions/3d-movie">one 3D movie</a> or <a href="/at-the-field/exhibitions/ticketed">ticketed exhibition</a>.
      </p>
      <ul class="priceList">
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Adults </span> <span class="priceList__price">$25</span>
        </div>
        <p class="priceList__condition">
          &nbsp;
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Children </span> <span class="priceList__price">$18</span>
        </div>
        <p class="priceList__condition">
          (ages 3 – 11)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Seniors </span> <span class="priceList__price">$20</span>
        </div>
        <p class="priceList__condition">
          (ages 65+)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Students </span> <span class="priceList__price">$20</span>
        </div>
        <p class="priceList__condition">
          (w/ valid ID)
        </p>
        </li>
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">Permanent Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/ticketed">Ticketed Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/3d-movie">3D Movies</a></li>
      </ul>
      <p class="tickets__disclaimer">
        Your <strong>Discovery Pass</strong> includes a single ticketed exhibition or 3D movie.
      </p>
    </article>
  </section>
  <section class="tickets__type">
    <article class="tickets__article">
      <h4 class="tickets__heading">
        <svg class="icon icon--ticket-1 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> Basic
      </h4>
      <p class="tickets__details">
        Enjoy all of the <a href="/at-the-field/exhibitions/permanent">permanent exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
      </p>
      <ul class="priceList">
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Adults </span> <span class="priceList__price">$18</span>
        </div>
        <p class="priceList__condition">
          &nbsp;
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Children </span> <span class="priceList__price">$13</span>
        </div>
        <p class="priceList__condition">
          (ages 3 – 11)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Seniors </span> <span class="priceList__price">$15</span>
        </div>
        <p class="priceList__condition">
          (ages 65+)
        </p>
        </li>
        <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label"> Students </span> <span class="priceList__price">$15</span>
        </div>
        <p class="priceList__condition">
          (w/ valid ID)
        </p>
        </li>
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">Permanent Exhibitions</a></li>
      </ul>
      <p class="tickets__disclaimer">
        Ticketed exhibitions and 3D movies are not included with <strong>Basic admission</strong>.
      </p>
    </article>
  </section>
</section>
<h2 class="heading--stroked">
  Membership Pricing
</h2>
<table>
  <thead>
    <tr>
      <th>Individual</th>
      <th>Family Plus</th>
      <th>Family</th>
      <th>Student & Senior</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td class="is--centered">
      <p>
        $85 for 1yr<br />
        $160 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $145 for 1yr<br />
        $280 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $120 for 1yr<br />
        $230 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $70 for 1yr<br />
        $130 for 2yrs
      </p>
      </td>
    </tr>
  </tbody>
</table>
<a href="/support/members/member-benefits" class="button--cta">View Member Benefits</a>
',
      'format' => 'unfiltered',
      'substitute' => TRUE,
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
    $pane->uuid = '7e8fabf3-d899-4a77-80d5-4d26e655e35d';
    $display->content['new-7e8fabf3-d899-4a77-80d5-4d26e655e35d'] = $pane;
    $display->panels['main'][0] = 'new-7e8fabf3-d899-4a77-80d5-4d26e655e35d';
    $pane = new stdClass();
    $pane->pid = 'new-5bc88435-61bd-440e-bf27-29bb212bd739';
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
    $pane->uuid = '5bc88435-61bd-440e-bf27-29bb212bd739';
    $display->content['new-5bc88435-61bd-440e-bf27-29bb212bd739'] = $pane;
    $display->panels['nav'][0] = 'new-5bc88435-61bd-440e-bf27-29bb212bd739';
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
    'type' => 'none',
    'settings' => NULL,
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
  $display->title = 'Virtual Tours';
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
      'view_mode' => 'node:promo',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
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
    'title' => 'Volunteer at The Field',
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
        'identifier' => 'List: Menu children (show children in other menus)',
        'keyword' => 'list',
        'name' => 'entitylist:menu_children_visible',
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
  $display->title = 'Volunteer at The Field';
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
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_1',
      'override_title' => 1,
      'override_title_text' => 'Ways to Volunteer',
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $display->content['new-db17e7e2-36cf-47b7-b2ba-9801ef172b31'] = $pane;
    $display->panels['main'][1] = 'new-db17e7e2-36cf-47b7-b2ba-9801ef172b31';
    $pane = new stdClass();
    $pane->pid = 'new-48c3e2c0-e9ea-406a-91b9-93321101a402';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:531';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '48c3e2c0-e9ea-406a-91b9-93321101a402';
    $display->content['new-48c3e2c0-e9ea-406a-91b9-93321101a402'] = $pane;
    $display->panels['main'][2] = 'new-48c3e2c0-e9ea-406a-91b9-93321101a402';
    $pane = new stdClass();
    $pane->pid = 'new-2a6ace9d-12d3-4311-b05e-818e94f66450';
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
    $pane->uuid = '2a6ace9d-12d3-4311-b05e-818e94f66450';
    $display->content['new-2a6ace9d-12d3-4311-b05e-818e94f66450'] = $pane;
    $display->panels['main'][3] = 'new-2a6ace9d-12d3-4311-b05e-818e94f66450';
    $pane = new stdClass();
    $pane->pid = 'new-557c3803-9ba9-4268-8b60-475a0764f6e3';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:526';
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
          'type' => 'article',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'l--1up',
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
    $pane->uuid = '557c3803-9ba9-4268-8b60-475a0764f6e3';
    $display->content['new-557c3803-9ba9-4268-8b60-475a0764f6e3'] = $pane;
    $display->panels['main'][4] = 'new-557c3803-9ba9-4268-8b60-475a0764f6e3';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l10';
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
  $display->title = 'Ways to Give';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76d5adc3-161a-4db4-b930-f0afa027e788';
    $display->content['new-76d5adc3-161a-4db4-b930-f0afa027e788'] = $pane;
    $display->panels['main'][0] = 'new-76d5adc3-161a-4db4-b930-f0afa027e788';
    $pane = new stdClass();
    $pane->pid = 'new-23d796d6-201d-4aa6-8da7-0017e2e7b21e';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ways_to_give_landing';
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
    $pane->uuid = '23d796d6-201d-4aa6-8da7-0017e2e7b21e';
    $display->content['new-23d796d6-201d-4aa6-8da7-0017e2e7b21e'] = $pane;
    $display->panels['main'][1] = 'new-23d796d6-201d-4aa6-8da7-0017e2e7b21e';
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
