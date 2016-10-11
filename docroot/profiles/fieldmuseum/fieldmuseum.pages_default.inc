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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Webform',
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
              'webform' => 'webform',
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
  $display->layout = 'c1';
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
  $display->uuid = 'fa1535b2-248b-4a18-b358-ae2a0805a844';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6799110d-ada3-421d-8fb5-ecad7c92de86';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'l--body__content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6799110d-ada3-421d-8fb5-ecad7c92de86';
    $display->content['new-6799110d-ada3-421d-8fb5-ecad7c92de86'] = $pane;
    $display->panels['main'][0] = 'new-6799110d-ada3-421d-8fb5-ecad7c92de86';
    $pane = new stdClass();
    $pane->pid = 'new-f3c67a61-ddc4-4f22-b3ab-616dfc08f4a6';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'l--body__nav',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f3c67a61-ddc4-4f22-b3ab-616dfc08f4a6';
    $display->content['new-f3c67a61-ddc4-4f22-b3ab-616dfc08f4a6'] = $pane;
    $display->panels['nav'][0] = 'new-f3c67a61-ddc4-4f22-b3ab-616dfc08f4a6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6799110d-ada3-421d-8fb5-ecad7c92de86';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_google_cse_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'google_cse';
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
  $display->layout = 's';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7f3dc273-fc78-4572-90c7-7274f2105c27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a696acad-1f08-4b74-8e63-f433af356cb4';
    $pane->panel = 'main';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'google_cse',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
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
    $pane->uuid = 'a696acad-1f08-4b74-8e63-f433af356cb4';
    $display->content['new-a696acad-1f08-4b74-8e63-f433af356cb4'] = $pane;
    $display->panels['main'][0] = 'new-a696acad-1f08-4b74-8e63-f433af356cb4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a696acad-1f08-4b74-8e63-f433af356cb4';
  $handler->conf['display'] = $display;
  $export['search_google_cse_panel_context'] = $handler;

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
    'title' => 'Employee Groups',
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
    $pane->subtype = 'current:536';
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
  $display->title = 'Corporate Giving';
  $display->uuid = '500e50f1-c5be-4784-9fc8-510e1c3a07ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-066c873c-0672-4cc3-adb8-8a2caf559a79';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'current:311';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $display->content['new-fc09d2d5-fe5e-4be7-8729-867996f87b31'] = $pane;
    $display->panels['summary_a'][0] = 'new-fc09d2d5-fe5e-4be7-8729-867996f87b31';
    $pane = new stdClass();
    $pane->pid = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane->panel = 'summary_a';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '01791882-e256-439b-87b4-660c9ef7786e';
    $display->content['new-01791882-e256-439b-87b4-660c9ef7786e'] = $pane;
    $display->panels['summary_a'][1] = 'new-01791882-e256-439b-87b4-660c9ef7786e';
    $pane = new stdClass();
    $pane->pid = 'new-40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $pane->panel = 'summary_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 8101,
      'parent' => 'main-menu:8101',
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
      'override_title_heading' => 'h2',
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
    $pane->uuid = '40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $display->content['new-40c90d0d-75c9-4d22-be01-109892a1cbaa'] = $pane;
    $display->panels['summary_a'][2] = 'new-40c90d0d-75c9-4d22-be01-109892a1cbaa';
    $pane = new stdClass();
    $pane->pid = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane->panel = 'summary_b';
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
    $display->panels['summary_b'][0] = 'new-e2f497e4-c241-4534-aa3f-fe017d0e8475';
    $pane = new stdClass();
    $pane->pid = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane->panel = 'summary_c';
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
    $display->panels['summary_c'][0] = 'new-1480c26e-8f39-4694-8af6-3c83707610ef';
    $pane = new stdClass();
    $pane->pid = 'new-3995715a-6b07-45ca-8b06-21e8557a9119';
    $pane->panel = 'summary_c';
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
    $display->panels['summary_c'][1] = 'new-3995715a-6b07-45ca-8b06-21e8557a9119';
    $pane = new stdClass();
    $pane->pid = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane->panel = 'summary_d';
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
    $display->panels['summary_d'][0] = 'new-e0833bc3-72da-4d35-b137-52994c1002f1';
    $pane = new stdClass();
    $pane->pid = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane->panel = 'summary_e';
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
    $display->panels['summary_e'][0] = 'new-94d290ae-e000-4680-85ea-e13bc143bc3c';
    $pane = new stdClass();
    $pane->pid = 'new-d242941c-5bcb-4591-b636-249db9a738fa';
    $pane->panel = 'summary_e';
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
    $display->panels['summary_e'][1] = 'new-d242941c-5bcb-4591-b636-249db9a738fa';
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
    $pane->subtype = 'current:246';
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
  $handler->name = 'page-give_now__http_response_code';
  $handler->task = 'page';
  $handler->subtask = 'give_now';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/18141',
    'name' => 'http_response_code',
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
    'main' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c32b2e83-d097-478c-a3e2-c80fbfb16af5';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '19786',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c32b2e83-d097-478c-a3e2-c80fbfb16af5';
    $display->content['new-c32b2e83-d097-478c-a3e2-c80fbfb16af5'] = $pane;
    $display->panels['main'][0] = 'new-c32b2e83-d097-478c-a3e2-c80fbfb16af5';
    $pane = new stdClass();
    $pane->pid = 'new-337c47fb-b577-44bc-b793-403b8fb146ac';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '15886',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = '337c47fb-b577-44bc-b793-403b8fb146ac';
    $display->content['new-337c47fb-b577-44bc-b793-403b8fb146ac'] = $pane;
    $display->panels['main'][1] = 'new-337c47fb-b577-44bc-b793-403b8fb146ac';
    $pane = new stdClass();
    $pane->pid = 'new-e0ec235e-270a-4a9a-8e74-c4e4bd0f2ec7';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-11 17:00',
            'sunset' => '2017-01-01 17:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '20226',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e0ec235e-270a-4a9a-8e74-c4e4bd0f2ec7';
    $display->content['new-e0ec235e-270a-4a9a-8e74-c4e4bd0f2ec7'] = $pane;
    $display->panels['main'][2] = 'new-e0ec235e-270a-4a9a-8e74-c4e4bd0f2ec7';
    $pane = new stdClass();
    $pane->pid = 'new-d159f202-31bc-4b69-acd7-40cb3493a5f0';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '21481',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--primary',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd159f202-31bc-4b69-acd7-40cb3493a5f0';
    $display->content['new-d159f202-31bc-4b69-acd7-40cb3493a5f0'] = $pane;
    $display->panels['main'][3] = 'new-d159f202-31bc-4b69-acd7-40cb3493a5f0';
    $pane = new stdClass();
    $pane->pid = 'new-3a137e98-e2b6-4b27-8803-6bb3f0c6ffe9';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '561',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3a137e98-e2b6-4b27-8803-6bb3f0c6ffe9';
    $display->content['new-3a137e98-e2b6-4b27-8803-6bb3f0c6ffe9'] = $pane;
    $display->panels['main'][4] = 'new-3a137e98-e2b6-4b27-8803-6bb3f0c6ffe9';
    $pane = new stdClass();
    $pane->pid = 'new-8b8be7db-8724-4b9e-a42a-1f434514ab74';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '561',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8b8be7db-8724-4b9e-a42a-1f434514ab74';
    $display->content['new-8b8be7db-8724-4b9e-a42a-1f434514ab74'] = $pane;
    $display->panels['main'][5] = 'new-8b8be7db-8724-4b9e-a42a-1f434514ab74';
    $pane = new stdClass();
    $pane->pid = 'new-d5f05a84-3274-4e9d-8692-f4dceed42d98';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9881',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd5f05a84-3274-4e9d-8692-f4dceed42d98';
    $display->content['new-d5f05a84-3274-4e9d-8692-f4dceed42d98'] = $pane;
    $display->panels['main'][6] = 'new-d5f05a84-3274-4e9d-8692-f4dceed42d98';
    $pane = new stdClass();
    $pane->pid = 'new-ee08722e-0cd3-41a6-bb8b-ad831f6f426a';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '8036',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'ee08722e-0cd3-41a6-bb8b-ad831f6f426a';
    $display->content['new-ee08722e-0cd3-41a6-bb8b-ad831f6f426a'] = $pane;
    $display->panels['main'][7] = 'new-ee08722e-0cd3-41a6-bb8b-ad831f6f426a';
    $pane = new stdClass();
    $pane->pid = 'new-f4adf0a7-8ecf-4ce1-9c0c-7da922fdc98d';
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
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
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
    $pane->uuid = 'f4adf0a7-8ecf-4ce1-9c0c-7da922fdc98d';
    $display->content['new-f4adf0a7-8ecf-4ce1-9c0c-7da922fdc98d'] = $pane;
    $display->panels['summary_a'][0] = 'new-f4adf0a7-8ecf-4ce1-9c0c-7da922fdc98d';
    $pane = new stdClass();
    $pane->pid = 'new-77d37ea5-2880-4081-8f7b-5ddfb9537655';
    $pane->panel = 'summary_a';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-20 19:00',
            'sunset' => '2017-09-20 17:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'banner',
      'context' => 'context_entity:taxonomy_term_1',
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
    $pane->uuid = '77d37ea5-2880-4081-8f7b-5ddfb9537655';
    $display->content['new-77d37ea5-2880-4081-8f7b-5ddfb9537655'] = $pane;
    $display->panels['summary_a'][1] = 'new-77d37ea5-2880-4081-8f7b-5ddfb9537655';
    $pane = new stdClass();
    $pane->pid = 'new-0ab51121-6321-4678-a275-1ecb739b6dda';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'current:566';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-26 09:20',
            'sunset' => '2017-09-25 09:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '0ab51121-6321-4678-a275-1ecb739b6dda';
    $display->content['new-0ab51121-6321-4678-a275-1ecb739b6dda'] = $pane;
    $display->panels['summary_a'][2] = 'new-0ab51121-6321-4678-a275-1ecb739b6dda';
    $pane = new stdClass();
    $pane->pid = 'new-671b8833-f27c-429f-a0cb-99d9907f2279';
    $pane->panel = 'summary_a';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-16 09:00',
            'sunset' => '2016-09-20 19:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '21726',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '671b8833-f27c-429f-a0cb-99d9907f2279';
    $display->content['new-671b8833-f27c-429f-a0cb-99d9907f2279'] = $pane;
    $display->panels['summary_a'][3] = 'new-671b8833-f27c-429f-a0cb-99d9907f2279';
    $pane = new stdClass();
    $pane->pid = 'new-15964fcd-7c89-45a9-8bea-38a9f9c97e67';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:716';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-16 09:00',
            'sunset' => '2016-09-20 19:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '15964fcd-7c89-45a9-8bea-38a9f9c97e67';
    $display->content['new-15964fcd-7c89-45a9-8bea-38a9f9c97e67'] = $pane;
    $display->panels['summary_a'][4] = 'new-15964fcd-7c89-45a9-8bea-38a9f9c97e67';
    $pane = new stdClass();
    $pane->pid = 'new-c05b337f-b451-43da-9a40-38ca9da4feee';
    $pane->panel = 'summary_a';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '20521',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c05b337f-b451-43da-9a40-38ca9da4feee';
    $display->content['new-c05b337f-b451-43da-9a40-38ca9da4feee'] = $pane;
    $display->panels['summary_a'][5] = 'new-c05b337f-b451-43da-9a40-38ca9da4feee';
    $pane = new stdClass();
    $pane->pid = 'new-5c7e4829-74ee-4b8c-9985-56b615d4cb50';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:691';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '5c7e4829-74ee-4b8c-9985-56b615d4cb50';
    $display->content['new-5c7e4829-74ee-4b8c-9985-56b615d4cb50'] = $pane;
    $display->panels['summary_a'][6] = 'new-5c7e4829-74ee-4b8c-9985-56b615d4cb50';
    $pane = new stdClass();
    $pane->pid = 'new-6c883c9c-cd31-4e90-8521-a3c1dd2d6526';
    $pane->panel = 'summary_a';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2015-09-12 14:00',
            'sunset' => '2025-09-10 12:17',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '9901',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '6c883c9c-cd31-4e90-8521-a3c1dd2d6526';
    $display->content['new-6c883c9c-cd31-4e90-8521-a3c1dd2d6526'] = $pane;
    $display->panels['summary_a'][7] = 'new-6c883c9c-cd31-4e90-8521-a3c1dd2d6526';
    $pane = new stdClass();
    $pane->pid = 'new-ab89e0db-67e9-48a7-8893-8fa81127e36c';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:581';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ab89e0db-67e9-48a7-8893-8fa81127e36c';
    $display->content['new-ab89e0db-67e9-48a7-8893-8fa81127e36c'] = $pane;
    $display->panels['summary_a'][8] = 'new-ab89e0db-67e9-48a7-8893-8fa81127e36c';
    $pane = new stdClass();
    $pane->pid = 'new-7c4b0df9-3be6-4b44-9088-cd282093a511';
    $pane->panel = 'summary_a';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '20021',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '7c4b0df9-3be6-4b44-9088-cd282093a511';
    $display->content['new-7c4b0df9-3be6-4b44-9088-cd282093a511'] = $pane;
    $display->panels['summary_a'][9] = 'new-7c4b0df9-3be6-4b44-9088-cd282093a511';
    $pane = new stdClass();
    $pane->pid = 'new-30da2a5a-116e-430b-8fd4-41979bc94e7a';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:656';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '30da2a5a-116e-430b-8fd4-41979bc94e7a';
    $display->content['new-30da2a5a-116e-430b-8fd4-41979bc94e7a'] = $pane;
    $display->panels['summary_a'][10] = 'new-30da2a5a-116e-430b-8fd4-41979bc94e7a';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'f84c318e-b8e3-4c00-a60d-3dd10189ce1b';
    $display->content['new-f84c318e-b8e3-4c00-a60d-3dd10189ce1b'] = $pane;
    $display->panels['summary_a'][11] = 'new-f84c318e-b8e3-4c00-a60d-3dd10189ce1b';
    $pane = new stdClass();
    $pane->pid = 'new-8e1e97a5-9ea3-4c6f-adfb-a243410fa790';
    $pane->panel = 'summary_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Explode Science With Us!',
      'title' => '',
      'body' => '<h3 class="scale--5">Explore Science With Us</h3>
<ul class="contentLinks ">
	<li class="contentLinks__item"><a href="/science/blog">Science Blogs &amp; Videos</a></li>
	<li class="contentLinks__item"><a href="/science/research">Research &amp; Collections</a></li>
	<li class="contentLinks__item"><a href="/science/conservation">Conservation &amp; Community</a></li>
	<li class="contentLinks__item"><a href="/at-the-field/programs/meet-scientist">Meet A Scientist</a></li>
</ul>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '8e1e97a5-9ea3-4c6f-adfb-a243410fa790';
    $display->content['new-8e1e97a5-9ea3-4c6f-adfb-a243410fa790'] = $pane;
    $display->panels['summary_a'][12] = 'new-8e1e97a5-9ea3-4c6f-adfb-a243410fa790';
    $pane = new stdClass();
    $pane->pid = 'new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
    $pane->panel = 'summary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:556';
    $pane->shown = FALSE;
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
    $display->content['new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc'] = $pane;
    $display->panels['summary_a'][13] = 'new-053eadd0-b8e7-4df7-8182-8b1fa1ec39bc';
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
    $pane->pid = 'new-a5e608e3-f1d3-4da6-b8f4-3d96b1bd88c8';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => NULL,
            'sunset' => '2016-09-17 14:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '21306',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a5e608e3-f1d3-4da6-b8f4-3d96b1bd88c8';
    $display->content['new-a5e608e3-f1d3-4da6-b8f4-3d96b1bd88c8'] = $pane;
    $display->panels['summary_b'][1] = 'new-a5e608e3-f1d3-4da6-b8f4-3d96b1bd88c8';
    $pane = new stdClass();
    $pane->pid = 'new-3d453207-0c26-4634-a278-11ecb148dfd1';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:711';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => NULL,
            'sunset' => '2016-09-17 14:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'naked',
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
    $pane->uuid = '3d453207-0c26-4634-a278-11ecb148dfd1';
    $display->content['new-3d453207-0c26-4634-a278-11ecb148dfd1'] = $pane;
    $display->panels['summary_b'][2] = 'new-3d453207-0c26-4634-a278-11ecb148dfd1';
    $pane = new stdClass();
    $pane->pid = 'new-18495c36-87d1-4bdf-ae72-396b7889b8d1';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-17 14:00',
            'sunset' => '2017-09-17 17:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '9901',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '18495c36-87d1-4bdf-ae72-396b7889b8d1';
    $display->content['new-18495c36-87d1-4bdf-ae72-396b7889b8d1'] = $pane;
    $display->panels['summary_b'][3] = 'new-18495c36-87d1-4bdf-ae72-396b7889b8d1';
    $pane = new stdClass();
    $pane->pid = 'new-596028eb-0f7c-4621-ab0b-97a2986c3083';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'current:601';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sunrise_sunset',
          'settings' => array(
            'sunrise' => '2016-09-17 14:00',
            'sunset' => '2017-09-05 17:00',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '596028eb-0f7c-4621-ab0b-97a2986c3083';
    $display->content['new-596028eb-0f7c-4621-ab0b-97a2986c3083'] = $pane;
    $display->panels['summary_b'][4] = 'new-596028eb-0f7c-4621-ab0b-97a2986c3083';
    $pane = new stdClass();
    $pane->pid = 'new-b57175a1-373f-481c-81d6-89a58e83bd4a';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9651',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b57175a1-373f-481c-81d6-89a58e83bd4a';
    $display->content['new-b57175a1-373f-481c-81d6-89a58e83bd4a'] = $pane;
    $display->panels['summary_b'][5] = 'new-b57175a1-373f-481c-81d6-89a58e83bd4a';
    $pane = new stdClass();
    $pane->pid = 'new-8163ab9b-bf72-48ae-bd9e-ecde388fd394';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'current:701';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8163ab9b-bf72-48ae-bd9e-ecde388fd394';
    $display->content['new-8163ab9b-bf72-48ae-bd9e-ecde388fd394'] = $pane;
    $display->panels['summary_b'][6] = 'new-8163ab9b-bf72-48ae-bd9e-ecde388fd394';
    $pane = new stdClass();
    $pane->pid = 'new-17565d7f-9821-4d6c-9c18-c16f5346c994';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7566',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '17565d7f-9821-4d6c-9c18-c16f5346c994';
    $display->content['new-17565d7f-9821-4d6c-9c18-c16f5346c994'] = $pane;
    $display->panels['summary_b'][7] = 'new-17565d7f-9821-4d6c-9c18-c16f5346c994';
    $pane = new stdClass();
    $pane->pid = 'new-f4e3dd7c-7ead-4719-9b46-aa2be127acba';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:671';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f4e3dd7c-7ead-4719-9b46-aa2be127acba';
    $display->content['new-f4e3dd7c-7ead-4719-9b46-aa2be127acba'] = $pane;
    $display->panels['summary_b'][8] = 'new-f4e3dd7c-7ead-4719-9b46-aa2be127acba';
    $pane = new stdClass();
    $pane->pid = 'new-9fbc2cce-d51d-4701-b9f4-11572e747cfc';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9881',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '9fbc2cce-d51d-4701-b9f4-11572e747cfc';
    $display->content['new-9fbc2cce-d51d-4701-b9f4-11572e747cfc'] = $pane;
    $display->panels['summary_b'][9] = 'new-9fbc2cce-d51d-4701-b9f4-11572e747cfc';
    $pane = new stdClass();
    $pane->pid = 'new-df2eaef5-e874-49ca-8ce2-2f51686a407c';
    $pane->panel = 'summary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:651';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'naked',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'df2eaef5-e874-49ca-8ce2-2f51686a407c';
    $display->content['new-df2eaef5-e874-49ca-8ce2-2f51686a407c'] = $pane;
    $display->panels['summary_b'][10] = 'new-df2eaef5-e874-49ca-8ce2-2f51686a407c';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '03c85560-2098-43ee-8420-f26f6f41d842';
    $display->content['new-03c85560-2098-43ee-8420-f26f6f41d842'] = $pane;
    $display->panels['summary_b'][11] = 'new-03c85560-2098-43ee-8420-f26f6f41d842';
    $pane = new stdClass();
    $pane->pid = 'new-4b3de0e1-9766-48d3-8d39-f77d9927cb87';
    $pane->panel = 'summary_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'field trips',
      'title' => '',
      'body' => '  <a class="node node-event view-mode-banner banner banner--secondary" about="/educators/field-trips" typeof="schema:Event sioc:Item foaf:Document" href="/educators/field-trips">
  <figure>
  <img class="banner__image js--pictureFill" srcset="https://www.fieldmuseum.org/sites/default/files/styles/5x2_2400w/public/GN90383_05d.jpg?itok=OV14lw9S 2400w,https://www.fieldmuseum.org/sites/default/files/styles/5x2_1600w/public/GN90383_05d.jpg?itok=Nis5cB7f 1600w,https://www.fieldmuseum.org/sites/default/files/styles/5x2_1200w/public/GN90383_05d.jpg?itok=BsRF0Tky 1200w,https://www.fieldmuseum.org/sites/default/files/styles/5x2_1000w/public/GN90383_05d.jpg?itok=YxF3xVFq 1000w,https://www.fieldmuseum.org/sites/default/files/styles/5x2_800w/public/GN90383_05d.jpg?itok=Rqg65iQq 800w,https://www.fieldmuseum.org/sites/default/files/styles/5x2_500w/public/GN90383_05d.jpg?itok=GBFGVoKA 500w" sizes="(min-width: 118.8125em) calc(100% - 555px),(min-width: 100.0625em) calc(100% - 380px),(min-width: 81.3125em) calc(100% - 325px),(min-width: 62.5625em) calc(100% - 300px),100vw" typeof="foaf:Image" src="https://www.fieldmuseum.org/sites/default/files/styles/5x2_800w/public/GN90383_05d.jpg?itok=Rqg65iQq" alt="">    <figcaption class="banner__description">
      
  <p>Visit over two dozen exhibits to journey to another place and time, experience a new culture, study real artifacts and specimens, and engage with Field Museum scientists and educators along the way.</p>    </figcaption>
  </figure>
</a>

 
  
<h3 class="summary__title">
    <a href="/educators/field-trips">Field Trips</a>
</h3>

<div class="summary__description">
  
  <p>Illinois school groups receive free general admission with pre-registration and can experience ticketed exhibitions and 3D movies at a discounted rate. Get started mapping your focused field trip today by exploring popular content connections, planning student learning experiences, or reviewing our Field Trip Planning Guide!</p></div>
',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '4b3de0e1-9766-48d3-8d39-f77d9927cb87';
    $display->content['new-4b3de0e1-9766-48d3-8d39-f77d9927cb87'] = $pane;
    $display->panels['summary_b'][12] = 'new-4b3de0e1-9766-48d3-8d39-f77d9927cb87';
    $pane = new stdClass();
    $pane->pid = 'new-f9126474-b3ad-4275-b18c-1bf04352d01d';
    $pane->panel = 'summary_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'This week at the field header',
      'title' => '',
      'body' => '<h3 class="scale--4">This Week at the Field<h3>',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'f9126474-b3ad-4275-b18c-1bf04352d01d';
    $display->content['new-f9126474-b3ad-4275-b18c-1bf04352d01d'] = $pane;
    $display->panels['summary_b'][13] = 'new-f9126474-b3ad-4275-b18c-1bf04352d01d';
    $pane = new stdClass();
    $pane->pid = 'new-fe76340e-2b72-479f-94e7-8af5b372ed18';
    $pane->panel = 'summary_b';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'fe76340e-2b72-479f-94e7-8af5b372ed18';
    $display->content['new-fe76340e-2b72-479f-94e7-8af5b372ed18'] = $pane;
    $display->panels['summary_b'][14] = 'new-fe76340e-2b72-479f-94e7-8af5b372ed18';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '068cd16e-eeeb-4c11-b499-3580eec2e766';
    $display->content['new-068cd16e-eeeb-4c11-b499-3580eec2e766'] = $pane;
    $display->panels['summary_b'][15] = 'new-068cd16e-eeeb-4c11-b499-3580eec2e766';
    $pane = new stdClass();
    $pane->pid = 'new-90505db1-2d4a-4db9-ba27-15f7db4c2ed6';
    $pane->panel = 'summary_b';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '17851',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'banner',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '90505db1-2d4a-4db9-ba27-15f7db4c2ed6';
    $display->content['new-90505db1-2d4a-4db9-ba27-15f7db4c2ed6'] = $pane;
    $display->panels['summary_b'][16] = 'new-90505db1-2d4a-4db9-ba27-15f7db4c2ed6';
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
    $pane->subtype = 'current:431';
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
    $pane->subtype = 'current:211';
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
        'offset' => '1',
        'limit' => '0',
      ),
      'view_mode' => 'node:summary',
      'use_pager' => FALSE,
      'pager_id' => 0,
      'context' => 'context_entitylist:menu_children_visible_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
  $display->title = 'Museum Publications';
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
  $page->path = 'science/labs';
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
    'title' => 'Labs & Tools',
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
  $display->title = 'Labs and Tools';
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
    'title' => 'series',
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
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '21',
            1 => array(),
            6 => array(),
            11 => array(),
            26 => array(),
            16 => array(),
            36 => array(),
            41 => array(),
            46 => array(),
            51 => array(),
            31 => array(),
            21 => array(
              1216 => '1216',
              1301 => '1301',
              781 => '781',
              926 => '926',
              1316 => '1316',
              941 => '941',
              1421 => '1421',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
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
    $pane->pid = 'new-f889ff40-3b49-488f-afea-d0b4edcfb7b3';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page title',
      'title' => '',
      'body' => '<h1>Blogs & Videos: %term:name</h1>',
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
    $pane->uuid = 'f889ff40-3b49-488f-afea-d0b4edcfb7b3';
    $display->content['new-f889ff40-3b49-488f-afea-d0b4edcfb7b3'] = $pane;
    $display->panels['main'][0] = 'new-f889ff40-3b49-488f-afea-d0b4edcfb7b3';
    $pane = new stdClass();
    $pane->pid = 'new-d5732372-9ba3-4417-9185-0ee0ad490a7e';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'primary_2x1',
      ),
      'context' => 'argument_term_1',
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5732372-9ba3-4417-9185-0ee0ad490a7e';
    $display->content['new-d5732372-9ba3-4417-9185-0ee0ad490a7e'] = $pane;
    $display->panels['main'][1] = 'new-d5732372-9ba3-4417-9185-0ee0ad490a7e';
    $pane = new stdClass();
    $pane->pid = 'new-f7f8ae1c-eeea-444b-88b5-c2fe30d7fd28';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f7f8ae1c-eeea-444b-88b5-c2fe30d7fd28';
    $display->content['new-f7f8ae1c-eeea-444b-88b5-c2fe30d7fd28'] = $pane;
    $display->panels['main'][2] = 'new-f7f8ae1c-eeea-444b-88b5-c2fe30d7fd28';
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
      'override_title' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '16bd296a-65df-4c10-ace2-6ab923bf700a';
    $display->content['new-16bd296a-65df-4c10-ace2-6ab923bf700a'] = $pane;
    $display->panels['main'][3] = 'new-16bd296a-65df-4c10-ace2-6ab923bf700a';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
    $display->content['new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1'] = $pane;
    $display->panels['main'][4] = 'new-2c6fb7c4-4c49-480b-9b90-a30a85c76ff1';
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_science_blogs_filtered_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'science_blogs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'non-series',
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
    $pane->pid = 'new-f889ff40-3b49-488f-afea-d0b4edcfb7b3';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page title',
      'title' => '',
      'body' => '<h1>Blogs & Videos: %term:name</h1>',
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
    $pane->uuid = 'f889ff40-3b49-488f-afea-d0b4edcfb7b3';
    $display->content['new-f889ff40-3b49-488f-afea-d0b4edcfb7b3'] = $pane;
    $display->panels['main'][0] = 'new-f889ff40-3b49-488f-afea-d0b4edcfb7b3';
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
      'override_title' => 0,
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
      'style' => 'naked',
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
    $pane->pid = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $pane->panel = 'summary_c';
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
    $display->panels['summary_c'][0] = 'new-8b74bad4-3232-4f74-94b2-d30b5e04775c';
    $pane = new stdClass();
    $pane->pid = 'new-02799c49-c186-4dbf-bffb-a32712fecd21';
    $pane->panel = 'summary_d';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
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
    $display->panels['summary_d'][0] = 'new-02799c49-c186-4dbf-bffb-a32712fecd21';
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
    'destination' => 'https://tickets.fieldmuseum.org/',
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
  Tickets &amp; Hours
</h1>
<section class="callout">
  <p>
    The Field Museum is open from 9am-5pm every day of the year except Christmas Day. Last admission is at 4pm daily.
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
      <strong>Save 53% or more</strong> on All-Access Field Museum admission plus 4 other famous Chicago attractions!
    </p>
    <a href="http://www.citypass.com/chicago?mv_source=field&campaign=admissions-hours-explore" class="button--cta">Explore the CityPASS</a>
  </div>
  <div class="l--module">
    <ul class="priceList">
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Adults </span> <span class="priceList__price">$98</span>
      </div>
      </li>
      <li class="priceList__item">
      <div class="priceList__details">
        <span class="priceList__label"> Children </span> <span class="priceList__price">$82</span>
      </div>
      <p class="priceList__condition">
        (ages 3 – 11)
      </p>
      </li>
    </ul>
    <a href="http://www.citypass.com/chicago?mv_source=field&campaign=admissions-hours" class="button--buy" data-analytics="ticketing-city-pass"> <span class="button__leader"> <svg class="icon icon--ticket-2" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> </span> Buy CityPASS Online </a>
  </div>
</div>

<h2 class="heading--stroked">
  Field Museum Tickets
</h2>

<section class="callout">
<p>See <em><a href="https://www.fieldmuseum.org/at-the-field/exhibitions/chinas-first-emperor-and-his-terracotta-warriors">China\'s First Emperor and His Terracotta Warriors</a></em> with a blockbuster All-Access Pass or Discovery Pass.</p><p>Your blockbuster pass gives you access to the only exhibition of these larger-than-life warriors in North America this year, on view at The Field Museum through January 8, 2017.</p>
</section>

<style scoped>
  .noTcwPricing,
  .noTcw .tcwPricing {
    display: none !important;
  }
  .tcwPricing,
  .noTcw .noTcwPricing {
    display: block !important;
  }
</style>

<span class="toggle"><a class="toggle__option toggle__option--selected" href="javascript:void(0);" onclick="jQuery(this).parent().parent().removeClass(\'noTcw\')"><em>Terracotta Warriors</em> blockbuster passes</a><a class="toggle__option" href="javascript:void(0);" onclick="jQuery(this).parent().parent().addClass(\'noTcw\')">Non-blockbuster passes</a></span>

<!-- CAXY: This will only be displayed at wide content column widths. That CSS is NOT written yet, but the markup is complete. -->
<section class="tickets is--visible--wide">
  <header class="tickets__header">
    <h4 class="tickets__heading">
      <svg class="icon icon--ticket-3 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-3"></use> </svg> All-Access
    </h4>
    <h4 class="tickets__heading">
      <svg class="icon icon--ticket-2 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> Discovery
    </h4>
    <h4 class="tickets__heading tcwPricing" style="padding-top: 1em;
    padding-bottom: .75em;
    margin: 0 !important;
    background: #aaa;
    border-radius: 0 3px 0 0;">
      <svg class="icon icon--ticket-1 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> Basic
    </h4>
 <h4 class="tickets__heading noTcwPricing">
      <svg class="icon icon--ticket-1 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> Basic
    </h4>
      <p class="tickets__details tcwPricing">
        See it all! With an All-Access Pass you can experience all <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum.
      </p>
      <p class="tickets__details noTcwPricing">
        With an All-Access Pass you can experience <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum.
      </p>

      <p class="tickets__details tcwPricing">
        Explore all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum, plus <em>Terracotta Warriors</em>.
      </p>
      <p class="tickets__details noTcwPricing">
        Explore all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum, plus <a href="/at-the-field/exhibitions/3d-movie">one 3D movie</a> or <a href="/at-the-field/exhibitions/ticketed">ticketed exhibition</a>.
      </p>
      <p class="tickets__details tcwPricing">
        Enjoy all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>  or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
      </p>
      <p class="tickets__details noTcwPricing">
        Enjoy all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
      </p>
    <button class="tickets__toggle js--toggleTickets" data-analytics="view-packages">Learn More About Our Ticket Packages</button>
  </header>
  <section class="ticketMatrix">
    <div class="ticketMatrix__column">
      <h3 class="ticketMatrix__heading">
        <a href="/at-the-field/exhibitions/permanent" class="ticketMatrix__link">General Admission Exhibitions</a>
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
      <div class="ticketMatrix__cell ticketMatrix__cell--text tcwPricing">
        See <em>Terracotta Warriors</em> and other ticketed exhibitions.
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text noTcwPricing">
        See ticketed exhibitions, excluding <em>Terracotta Warriors</em>.
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text tcwPricing">
        <p>
          Your <strong>All-Access Pass</strong> also includes a single 3D movie.
        </p>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text noTcwPricing">
        <p>
          Your <strong>All-Access Pass</strong> includes a single 3D movie.
        </p>
      </div>
    </div>
    <div class="ticketMatrix__column">
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double tcwPricing">
        <p>
          See <em>Terracotta Warriors</em> with your blockbuster <strong>Discovery Pass</strong>. 
        </p>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double noTcwPricing">
        <p>
          Your <strong>Discovery Pass</strong> includes a 3D movie or single ticketed exhibition, excluding <em>Terracotta Warriors</em>.
        </p>
      </div>
    </div>
    <div class="ticketMatrix__column">
      <div class="ticketMatrix__cell">
        <i class="icon--circle ticketMatrix__icon"></i>
      </div>
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double ticketMatrix__cell--disabled tcwPricing">
        <p>
          <em>Terracotta Warriors</em>, other ticketed exhibitions, and 3D movies are not included with <strong>Basic admission</strong>.
        </p>
      </div>      
      <div class="ticketMatrix__cell ticketMatrix__cell--text ticketMatrix__cell--double ticketMatrix__cell--disabled noTcwPricing">
        <p>
          Ticketed exhibitions and 3D movies are not included with <strong>Basic admission</strong>.
        </p>
      </div>
    </div>
  </section>
  <section class="tickets__pricing">
    <ul class="priceList noTcwPricing">
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$35</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$24</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$30</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$30</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li>
    </ul>
    <ul class="priceList noTcwPricing">
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$29</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$20</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$25</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$25</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li>
    </ul>
    <ul class="priceList noTcwPricing">
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$22</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$15</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$19</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$19</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li>
    </ul>
    <ul class="priceList tcwPricing">
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$38</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$26</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$32</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$32</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li>
    </ul>
    <ul class="priceList tcwPricing">
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$31</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$22</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$26</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$26</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li>
    </ul>
    <ul class="priceList tcwPricing" style="background:#e9e9e9;">
      <!--li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Adults
          </span>
          <span class="priceList__price">$22</span>
        </div>
        <p class="priceList__condition">&nbsp;</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Children
          </span>
          <span class="priceList__price">$15</span>
        </div>
        <p class="priceList__condition">(ages 3 – 11)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Seniors
          </span>
          <span class="priceList__price">$19</span>
        </div>
        <p class="priceList__condition">(ages 65+)</p>
      </li>
      <li class="priceList__item">
        <div class="priceList__details">
          <span class="priceList__label">
            Students
          </span>
          <span class="priceList__price">$19</span>
        </div>
        <p class="priceList__condition">(w/ valid ID)</p>
      </li-->
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
      <p class="tickets__details tcwPricing">
        See it all! With an All-Access Pass you can experience all <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum.
      </p>
      <p class="tickets__details noTcwPricing">
        See it all! With an All-Access Pass you can experience all <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> excluding <em>Terracotta Warriors</em>, one <a href="/at-the-field/exhibitions/3d-movie">3D movie</a> and all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum.
      </p>
      <ul class="priceList noTcwPricing">
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$35</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$24</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$30</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$30</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li>
      </ul>
      <ul class="priceList tcwPricing">
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$38</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$26</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$32</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$32</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li>
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">General Admission Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/ticketed">Ticketed Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/3d-movie">3D Movies</a></li>
      </ul>
      <p class="tickets__disclaimer tcwPricing">
        Your blockbuster <strong>All-Access Pass</strong> includes a single 3D movie.
      </p>
      <p class="tickets__disclaimer noTcwPricing">
        Your <strong>All-Access Pass</strong> includes a single 3D movie.
      </p>
    </article>
  </section>
  <section class="tickets__type">
    <article class="tickets__article">
      <h4 class="tickets__heading">
        <svg class="icon icon--ticket-2 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-2"></use> </svg> Discovery
      </h4>
      <p class="tickets__details tcwPricing">
        Explore all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum, plus <em>Terracotta Warriors</em>.
      </p>
      <p class="tickets__details noTcwPricing">
        Explore all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> at The Field Museum, plus <a href="/at-the-field/exhibitions/3d-movie">one 3D movie</a> or <a href="/at-the-field/exhibitions/ticketed">ticketed exhibition</a> excluding <em>Terracotta Warriors</em>.
      </p>
      <ul class="priceList noTcwPricing">
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$29</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$20</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$25</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$25</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li>
      </ul>
      <ul class="priceList tcwPricing">
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$31</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$22</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$26</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$26</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li>
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">General Admission Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/ticketed">Ticketed Exhibitions</a></li>
        <li><a href="/at-the-field/exhibitions/3d-movie">3D Movies</a></li>
      </ul>
      <p class="tickets__disclaimer tcwPricing">
        Your blockbuster <strong>Discovery Pass</strong> includes a single ticket to the Terracotta Warriors.
      </p>
      <p class="tickets__disclaimer noTcwPricing">
        Your <strong>Discovery Pass</strong> includes a single ticketed exhibition or 3D movie.
      </p>
    </article>
  </section>
  <section class="tickets__type">
    <article class="tickets__article">
      <h4 class="tickets__heading">
        <svg class="icon icon--ticket-1 tickets__icon" viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> Basic
      </h4>
      <p class="tickets__details tcwPricing">
        Enjoy all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> such as <em>Terracotta Warriors</em> or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
      </p>
      <p class="tickets__details noTcwPricing">
        Enjoy all <a href="/at-the-field/exhibitions/permanent">general admission exhibitions</a> of the Museum. This package does not include <a href="/at-the-field/exhibitions/ticketed">ticketed exhibitions</a> or <a href="/at-the-field/exhibitions/3d-movie">3D movies</a>.
      </p>
      <ul class="priceList noTcwPricing">
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$22</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$15</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$19</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$19</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li>
      </ul>
      <ul class="priceList tcwPricing" style="background:#e9e9e9;">
        <!--li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Adults
            </span>
            <span class="priceList__price">$22</span>
          </div>
          <p class="priceList__condition">&nbsp;</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Children
            </span>
            <span class="priceList__price">$15</span>
          </div>
          <p class="priceList__condition">(ages 3 – 11)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Seniors
            </span>
            <span class="priceList__price">$19</span>
          </div>
          <p class="priceList__condition">(ages 65+)</p>
        </li>
        <li class="priceList__item">
          <div class="priceList__details">
            <span class="priceList__label">
              Students
            </span>
            <span class="priceList__price">$19</span>
          </div>
          <p class="priceList__condition">(w/ valid ID)</p>
        </li-->
      </ul>
      <h5 class="tickets__subheading">
        Includes:
      </h5>
      <ul class="tickets__included">
        <li><a href="/at-the-field/exhibitions/permanent">General Admission Exhibitions</a></li>
      </ul>
      <p class="tickets__disclaimer tcwPricing">
        <em>Terracotta Warriors</em>, other ticketed exhibitions, and 3D movies are not included with <strong>Basic admission</strong>.
      </p>
      <p class="tickets__disclaimer noTcwPricing">
        Ticketed exhibitions and 3D movies are not included with <strong>Basic admission</strong>.
      </p>
    </article>
  </section>
</section>


<h2 class="heading--stroked">
  Offers
</h2>
<dl>
  <dt>Chicago Residents</dt>
  <dd>Chicago residents can save $5 or more on the price of their ticket.</dd>
  <dt>Museums for All</dt>
  <dd>Illinois families with EBT (Link) or WIC cards receive $3 Basic admission per person for up to six people.</dd>
  <dt>Active Military Personnel</dt>
  <dd>Active Military Personnel are welcome to enjoy complimentary Basic admission to the Museum.</dd>
  <dt>Illinois Teachers</dt>
  <dd>Illinois teachers (pre-K through 12) receive complimentary Basic admission to the Museum.</dd>
</dl>
<small>All special offers are available with valid ID and must be purchased on arrival at The Field Museum.</small>

<h2 class="heading--stroked">
  Membership Pricing
</h2>
<table>
  <thead>
    <tr>
      <th>Individual</th>
      <th>Family Plus</th>
      <th>Family</th>
      <th>Student &amp; Senior</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td class="is--centered">
      <p>
        $95 for 1yr<br />
        $180 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $175 for 1yr<br />
        $335 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $145 for 1yr<br />
        $275 for 2yrs
      </p>
      </td>
      <td class="is--centered">
      <p>
        $80 for 1yr<br />
        $150 for 2yrs
      </p>
      </td>
    </tr>
  </tbody>
</table>
<a href="/support/members/member-benefits" class="button--cta">View Member Benefits</a>',
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
