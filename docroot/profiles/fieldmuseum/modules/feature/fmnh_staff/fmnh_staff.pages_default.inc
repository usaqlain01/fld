<?php
/**
 * @file
 * fmnh_staff.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_staff_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff';
  $page->task = 'page';
  $page->admin_title = 'Staff';
  $page->admin_description = '';
  $page->path = 'about/staff';
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
    'title' => 'Staff',
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
  $handler->name = 'page_staff_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff';
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
        'identifier' => 'View: Staff',
        'keyword' => 'view',
        'name' => 'view:staff-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l17';
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
  $display->title = 'Staff';
  $display->uuid = '830a5467-f87b-4108-93ed-24041d42dd0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'departments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $display->content['new-ccb0fd05-9876-459e-b8a1-74aa05b154d2'] = $pane;
    $display->panels['main'][0] = 'new-ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $pane = new stdClass();
    $pane->pid = 'new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:staff-ctools_context_1_1',
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
    $pane->uuid = '3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $display->content['new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f'] = $pane;
    $display->panels['main'][1] = 'new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $pane = new stdClass();
    $pane->pid = 'new-548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $pane->panel = 'main';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:staff-ctools_context_1_1',
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
    $pane->uuid = '548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $display->content['new-548b08e3-1d22-43c7-8a1f-111cf2de41cd'] = $pane;
    $display->panels['main'][2] = 'new-548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $pane = new stdClass();
    $pane->pid = 'new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
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
    $pane->uuid = '68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
    $display->content['new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e'] = $pane;
    $display->panels['nav'][0] = 'new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_filtered';
  $page->task = 'page';
  $page->admin_title = 'Staff';
  $page->admin_description = '';
  $page->path = 'about/staff/%node';
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
    'title' => 'Staff',
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
  $handler->name = 'page_staff_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_filtered';
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
        'identifier' => 'View: Staff',
        'keyword' => 'view',
        'name' => 'view_from_argument:staff-ctools_context_1',
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
  $display->layout = 'l17';
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
  $display->title = 'Staff';
  $display->uuid = '830a5467-f87b-4108-93ed-24041d42dd0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'departments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $display->content['new-ccb0fd05-9876-459e-b8a1-74aa05b154d2'] = $pane;
    $display->panels['main'][0] = 'new-ccb0fd05-9876-459e-b8a1-74aa05b154d2';
    $pane = new stdClass();
    $pane->pid = 'new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $pane->panel = 'main';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:staff-ctools_context_1_1',
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
    $pane->uuid = '3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $display->content['new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f'] = $pane;
    $display->panels['main'][1] = 'new-3ad9bba9-21c9-4c83-b88c-90f0b7b1bc8f';
    $pane = new stdClass();
    $pane->pid = 'new-548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $pane->panel = 'main';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:staff-ctools_context_1_1',
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
    $pane->uuid = '548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $display->content['new-548b08e3-1d22-43c7-8a1f-111cf2de41cd'] = $pane;
    $display->panels['main'][2] = 'new-548b08e3-1d22-43c7-8a1f-111cf2de41cd';
    $pane = new stdClass();
    $pane->pid = 'new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
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
    $pane->uuid = '68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
    $display->content['new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e'] = $pane;
    $display->panels['nav'][0] = 'new-68ce6f91-e6b7-4da9-8fa7-5e506d1f296e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_filtered'] = $page;

  return $pages;

}
