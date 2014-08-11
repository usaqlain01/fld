<?php
/**
 * @file
 * fieldmuseum.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fieldmuseum_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Region';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'coble';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'main_a' => NULL,
      'main_b' => NULL,
      'secondary_a' => NULL,
      'secondary_b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cfcfa5fc-8f11-418f-883d-9107208210c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36800bff-f3f7-45d6-a62c-c8db32431e3b';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1681,
      'parent' => 'main-menu:1681',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->uuid = '36800bff-f3f7-45d6-a62c-c8db32431e3b';
    $display->content['new-36800bff-f3f7-45d6-a62c-c8db32431e3b'] = $pane;
    $display->panels['main_a'][0] = 'new-36800bff-f3f7-45d6-a62c-c8db32431e3b';
    $pane = new stdClass();
    $pane->pid = 'new-77c4ebde-d30e-41bc-ba81-af01fbedd455';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1686,
      'parent' => 'main-menu:1686',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->uuid = '77c4ebde-d30e-41bc-ba81-af01fbedd455';
    $display->content['new-77c4ebde-d30e-41bc-ba81-af01fbedd455'] = $pane;
    $display->panels['main_a'][1] = 'new-77c4ebde-d30e-41bc-ba81-af01fbedd455';
    $pane = new stdClass();
    $pane->pid = 'new-7fd930ec-4b11-44f0-8a03-73d528a64e2a';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1691,
      'parent' => 'main-menu:1691',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->uuid = '7fd930ec-4b11-44f0-8a03-73d528a64e2a';
    $display->content['new-7fd930ec-4b11-44f0-8a03-73d528a64e2a'] = $pane;
    $display->panels['main_a'][2] = 'new-7fd930ec-4b11-44f0-8a03-73d528a64e2a';
    $pane = new stdClass();
    $pane->pid = 'new-98aa8b19-c2e5-49c5-9ac1-1ecfc46e68c9';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1676,
      'parent' => 'main-menu:1676',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->uuid = '98aa8b19-c2e5-49c5-9ac1-1ecfc46e68c9';
    $display->content['new-98aa8b19-c2e5-49c5-9ac1-1ecfc46e68c9'] = $pane;
    $display->panels['main_a'][3] = 'new-98aa8b19-c2e5-49c5-9ac1-1ecfc46e68c9';
    $pane = new stdClass();
    $pane->pid = 'new-df245276-3911-4b8d-852c-550ad952fdf0';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1696,
      'parent' => 'main-menu:1696',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'df245276-3911-4b8d-852c-550ad952fdf0';
    $display->content['new-df245276-3911-4b8d-852c-550ad952fdf0'] = $pane;
    $display->panels['main_a'][4] = 'new-df245276-3911-4b8d-852c-550ad952fdf0';
    $pane = new stdClass();
    $pane->pid = 'new-2db08ebc-583e-414d-b4f7-2bb76e4ed0ae';
    $pane->panel = 'main_a';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 8781,
      'parent' => 'main-menu:8781',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => 'footer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h6',
          'class_enable' => 1,
          'class' => 'navFooter__heading',
          'attributes' => array(),
          'link_enabled' => 0,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2db08ebc-583e-414d-b4f7-2bb76e4ed0ae';
    $display->content['new-2db08ebc-583e-414d-b4f7-2bb76e4ed0ae'] = $pane;
    $display->panels['main_a'][5] = 'new-2db08ebc-583e-414d-b4f7-2bb76e4ed0ae';
    $pane = new stdClass();
    $pane->pid = 'new-85e07ff1-3c95-4e44-8e7b-dfbeab9c1794';
    $pane->panel = 'main_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
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
          'class' => 'pageFooter__social',
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
    $pane->uuid = '85e07ff1-3c95-4e44-8e7b-dfbeab9c1794';
    $display->content['new-85e07ff1-3c95-4e44-8e7b-dfbeab9c1794'] = $pane;
    $display->panels['main_b'][0] = 'new-85e07ff1-3c95-4e44-8e7b-dfbeab9c1794';
    $pane = new stdClass();
    $pane->pid = 'new-04855e97-840e-4cd9-9337-b2131ab33580';
    $pane->panel = 'secondary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:336';
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
    $pane->uuid = '04855e97-840e-4cd9-9337-b2131ab33580';
    $display->content['new-04855e97-840e-4cd9-9337-b2131ab33580'] = $pane;
    $display->panels['secondary_a'][0] = 'new-04855e97-840e-4cd9-9337-b2131ab33580';
    $pane = new stdClass();
    $pane->pid = 'new-1b6b3565-5603-40cf-83f6-132e0dbacc6f';
    $pane->panel = 'secondary_a';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:341';
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
    $pane->uuid = '1b6b3565-5603-40cf-83f6-132e0dbacc6f';
    $display->content['new-1b6b3565-5603-40cf-83f6-132e0dbacc6f'] = $pane;
    $display->panels['secondary_a'][1] = 'new-1b6b3565-5603-40cf-83f6-132e0dbacc6f';
    $pane = new stdClass();
    $pane->pid = 'new-c7aba39b-4671-4fa5-804b-3fd98bc7b240';
    $pane->panel = 'secondary_b';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:346';
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
    $pane->uuid = 'c7aba39b-4671-4fa5-804b-3fd98bc7b240';
    $display->content['new-c7aba39b-4671-4fa5-804b-3fd98bc7b240'] = $pane;
    $display->panels['secondary_b'][0] = 'new-c7aba39b-4671-4fa5-804b-3fd98bc7b240';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = 'Region';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cbfb9024-4680-4b8c-a992-477fc3adc4b6';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = 'cbfb9024-4680-4b8c-a992-477fc3adc4b6';
    $display->content['new-cbfb9024-4680-4b8c-a992-477fc3adc4b6'] = $pane;
    $display->panels['hero'][0] = 'new-cbfb9024-4680-4b8c-a992-477fc3adc4b6';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_about';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (about)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c808ef36-2bfe-4645-8f10-7256f41dc6b4';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:61';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = 'c808ef36-2bfe-4645-8f10-7256f41dc6b4';
    $display->content['new-c808ef36-2bfe-4645-8f10-7256f41dc6b4'] = $pane;
    $display->panels['hero'][0] = 'new-c808ef36-2bfe-4645-8f10-7256f41dc6b4';
    $pane = new stdClass();
    $pane->pid = 'new-b8efb35b-3316-4911-be47-4e609c6b2fbf';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'about',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
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
    $pane->uuid = 'b8efb35b-3316-4911-be47-4e609c6b2fbf';
    $display->content['new-b8efb35b-3316-4911-be47-4e609c6b2fbf'] = $pane;
    $display->panels['hero'][1] = 'new-b8efb35b-3316-4911-be47-4e609c6b2fbf';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_about'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_at_the_field';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (at the field)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b80a7348-a8cb-42ba-9769-b3ed923919fc';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:86';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'at-the-field',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = 'b80a7348-a8cb-42ba-9769-b3ed923919fc';
    $display->content['new-b80a7348-a8cb-42ba-9769-b3ed923919fc'] = $pane;
    $display->panels['hero'][0] = 'new-b80a7348-a8cb-42ba-9769-b3ed923919fc';
    $pane = new stdClass();
    $pane->pid = 'new-a3edb486-89bb-4fe7-9625-5aeb149b5017';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'at-the-field',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
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
    $pane->uuid = 'a3edb486-89bb-4fe7-9625-5aeb149b5017';
    $display->content['new-a3edb486-89bb-4fe7-9625-5aeb149b5017'] = $pane;
    $display->panels['hero'][1] = 'new-a3edb486-89bb-4fe7-9625-5aeb149b5017';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_at_the_field'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_educators';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (educators)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6ca484f-acc7-4a91-8053-8923d2e5b5a2';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:81';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'educators',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = 'e6ca484f-acc7-4a91-8053-8923d2e5b5a2';
    $display->content['new-e6ca484f-acc7-4a91-8053-8923d2e5b5a2'] = $pane;
    $display->panels['hero'][0] = 'new-e6ca484f-acc7-4a91-8053-8923d2e5b5a2';
    $pane = new stdClass();
    $pane->pid = 'new-4a7f7450-9ca3-4269-88a4-9936491a0626';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'educators',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a7f7450-9ca3-4269-88a4-9936491a0626';
    $display->content['new-4a7f7450-9ca3-4269-88a4-9936491a0626'] = $pane;
    $display->panels['hero'][1] = 'new-4a7f7450-9ca3-4269-88a4-9936491a0626';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_educators'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_home';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (home)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_home'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_science';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (science)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b43833b-0fda-455c-97dc-3f1062c30ead';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:71';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'science',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '3b43833b-0fda-455c-97dc-3f1062c30ead';
    $display->content['new-3b43833b-0fda-455c-97dc-3f1062c30ead'] = $pane;
    $display->panels['hero'][0] = 'new-3b43833b-0fda-455c-97dc-3f1062c30ead';
    $pane = new stdClass();
    $pane->pid = 'new-1f6ce464-cb32-4c0c-9992-8b2626e056a4';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'science',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1f6ce464-cb32-4c0c-9992-8b2626e056a4';
    $display->content['new-1f6ce464-cb32-4c0c-9992-8b2626e056a4'] = $pane;
    $display->panels['hero'][1] = 'new-1f6ce464-cb32-4c0c-9992-8b2626e056a4';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_science'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_support';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (support)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7fba28dd-5ca3-471d-aaae-8ff3de26f0b4';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:76';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'support',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '7fba28dd-5ca3-471d-aaae-8ff3de26f0b4';
    $display->content['new-7fba28dd-5ca3-471d-aaae-8ff3de26f0b4'] = $pane;
    $display->panels['hero'][0] = 'new-7fba28dd-5ca3-471d-aaae-8ff3de26f0b4';
    $pane = new stdClass();
    $pane->pid = 'new-0849ed1d-30f8-4643-ae96-ce9a0ea3416d';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'support',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0849ed1d-30f8-4643-ae96-ce9a0ea3416d';
    $display->content['new-0849ed1d-30f8-4643-ae96-ce9a0ea3416d'] = $pane;
    $display->panels['hero'][1] = 'new-0849ed1d-30f8-4643-ae96-ce9a0ea3416d';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_support'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_visit';
  $mini->category = 'Region';
  $mini->admin_title = 'Header (visit)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'canoe';
  $display->layout_settings = array(
    'search_classes' => '',
    'hero_classes' => 'hero',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'search' => NULL,
      'hero' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'search' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-201b7378-f94d-4f65-8297-a6917ab1280c';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:66';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'visit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '201b7378-f94d-4f65-8297-a6917ab1280c';
    $display->content['new-201b7378-f94d-4f65-8297-a6917ab1280c'] = $pane;
    $display->panels['hero'][0] = 'new-201b7378-f94d-4f65-8297-a6917ab1280c';
    $pane = new stdClass();
    $pane->pid = 'new-6236a505-f290-459f-8a7e-aa3d8ef5bedc';
    $pane->panel = 'hero';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'visit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
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
    $pane->uuid = '6236a505-f290-459f-8a7e-aa3d8ef5bedc';
    $display->content['new-6236a505-f290-459f-8a7e-aa3d8ef5bedc'] = $pane;
    $display->panels['hero'][1] = 'new-6236a505-f290-459f-8a7e-aa3d8ef5bedc';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $display->content['new-8d44160c-cf91-460b-9e8a-f7beba88e0f7'] = $pane;
    $display->panels['search'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header_visit'] = $mini;

  return $export;
}
