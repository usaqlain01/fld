<?php
/**
 * @file
 * fmnh_program.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fmnh_program_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'field_trip_programs';
  $page->task = 'page';
  $page->admin_title = 'Field trip experiences';
  $page->admin_description = '';
  $page->path = 'educators/field-trips/experiences';
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
    'title' => 'Field trip experiences',
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
  $handler->name = 'page_field_trip_programs_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'field_trip_programs';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'unfiltered',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
        'identifier' => 'View: Field trip programs',
        'keyword' => 'view',
        'name' => 'view:field_trip_programs-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l6';
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
  $display->title = 'Field Trip Experiences';
  $display->uuid = '29dae451-7137-44fd-a6bc-fd5eb79071ea';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_field_trip_programs_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34ca3908-bb8c-4826-a5b6-1e47c13b4183';
  $pane->panel = 'main';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:511';
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
  $pane->uuid = '34ca3908-bb8c-4826-a5b6-1e47c13b4183';
  $display->content['new-34ca3908-bb8c-4826-a5b6-1e47c13b4183'] = $pane;
  $display->panels['main'][0] = 'new-34ca3908-bb8c-4826-a5b6-1e47c13b4183';
  $pane = new stdClass();
  $pane->pid = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $pane->panel = 'main';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'context_view:field_trip_programs-ctools_context_1_1',
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
  $pane->uuid = '0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $display->content['new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0'] = $pane;
  $display->panels['main'][1] = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
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
  $page->name = 'field_trip_programs_filtered';
  $page->task = 'page';
  $page->admin_title = 'Field trip programs';
  $page->admin_description = '';
  $page->path = 'educators/field-trip-programs/%term';
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
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Grade level (tid)',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          16 => '16',
          1 => 0,
          6 => 0,
          11 => 0,
          26 => 0,
          36 => 0,
          41 => 0,
          46 => 0,
          51 => 0,
          31 => 0,
          21 => 0,
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
  $handler->name = 'page_field_trip_programs_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'field_trip_programs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'filtered by grade level',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'View: Field trip programs',
        'keyword' => 'view',
        'name' => 'view_from_argument:field_trip_programs-ctools_context_1',
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
  $display->title = 'Field Trip Programs: %term:name';
  $display->uuid = '29dae451-7137-44fd-a6bc-fd5eb79071ea';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_field_trip_programs_filtered_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51dc5692-697b-4ff7-bc8a-198bb950fd00';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1>%term:name</h1>',
    'format' => 'unfiltered',
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
  $pane->uuid = '51dc5692-697b-4ff7-bc8a-198bb950fd00';
  $display->content['new-51dc5692-697b-4ff7-bc8a-198bb950fd00'] = $pane;
  $display->panels['main'][0] = 'new-51dc5692-697b-4ff7-bc8a-198bb950fd00';
  $pane = new stdClass();
  $pane->pid = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $pane->panel = 'main';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'relationship_view_from_argument:field_trip_programs-ctools_context_1_1',
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
  $pane->uuid = '0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $display->content['new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0'] = $pane;
  $display->panels['main'][1] = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
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
  $display->title_pane = 'new-0c09adad-5d8a-49b0-bb06-5ccea9fc28d0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['field_trip_programs_filtered'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs';
  $page->task = 'page';
  $page->admin_title = 'Programs';
  $page->admin_description = '';
  $page->path = 'at-the-field/programs';
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
    'title' => 'Programs',
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
  $handler->name = 'page_programs_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'programs';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'unfiltered',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Programs: Active programs',
        'keyword' => 'view',
        'name' => 'view:programs-ctools_context_2',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'l6';
  $display->layout_settings = array(
    'main_classes' => 'l--body__content',
    'nav_classes' => 'l--body__nav js--sticky',
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
  $display->title = 'Programs';
  $display->uuid = 'e5c22d08-7786-468b-b8ca-63fadd07acaa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_programs_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fd38765a-5434-4e24-a866-bb1cabf1e086';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1>Programs</h1>',
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
  $pane->uuid = 'fd38765a-5434-4e24-a866-bb1cabf1e086';
  $display->content['new-fd38765a-5434-4e24-a866-bb1cabf1e086'] = $pane;
  $display->panels['main'][0] = 'new-fd38765a-5434-4e24-a866-bb1cabf1e086';
  $pane = new stdClass();
  $pane->pid = 'new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
  $pane->panel = 'main';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'context_view:programs-ctools_context_2_1',
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
  $pane->uuid = '443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
  $display->content['new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265'] = $pane;
  $display->panels['main'][1] = 'new-443e398f-f3e2-4cd5-9bb3-aca70bbf0265';
  $pane = new stdClass();
  $pane->pid = 'new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
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
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
  $display->content['new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5'] = $pane;
  $display->panels['nav'][0] = 'new-bee62809-ebdd-4b3f-aeca-0a399b0f94f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs_filtered';
  $page->task = 'page';
  $page->admin_title = 'Programs';
  $page->admin_description = '';
  $page->path = 'at-the-field/programs/%term';
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
    'title' => 'Programs',
    'name' => 'main-menu',
    'weight' => '2',
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
      'identifier' => 'Audience (tid)',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          1 => '1',
          6 => 0,
          11 => 0,
          26 => 0,
          16 => 0,
          36 => 0,
          41 => 0,
          46 => 0,
          51 => 0,
          31 => 0,
          21 => 0,
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
  $handler->name = 'page_programs_filtered_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'programs_filtered';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'filtered by audience',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'View: Programs: Filtered list of promos',
        'keyword' => 'view',
        'name' => 'view_from_argument:programs-ctools_context_1',
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
  $display->title = 'Programs for %term:name';
  $display->uuid = 'e5c22d08-7786-468b-b8ca-63fadd07acaa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_programs_filtered_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34b16c20-c9f2-45f8-8885-a8b39d450214';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1>Programs for %term:name</h1>',
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
  $pane->uuid = '34b16c20-c9f2-45f8-8885-a8b39d450214';
  $display->content['new-34b16c20-c9f2-45f8-8885-a8b39d450214'] = $pane;
  $display->panels['main'][0] = 'new-34b16c20-c9f2-45f8-8885-a8b39d450214';
  $pane = new stdClass();
  $pane->pid = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
  $pane->panel = 'main';
  $pane->type = 'views_row';
  $pane->subtype = 'views_row';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'rows' => array(),
    'use_fields' => 0,
    'fields' => array(),
    'context' => 'relationship_view_from_argument:programs-ctools_context_1_1',
    'override_title' => 0,
    'override_title_text' => '%title',
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
  $pane->uuid = '72f141a9-425f-458c-9151-e82e42ee0ff5';
  $display->content['new-72f141a9-425f-458c-9151-e82e42ee0ff5'] = $pane;
  $display->panels['main'][1] = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
  $pane = new stdClass();
  $pane->pid = 'new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
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
    'style' => 'semantic_panels',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
  $display->content['new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea'] = $pane;
  $display->panels['nav'][0] = 'new-b3c55bd0-cd45-470e-bd57-a6b9a83591ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-72f141a9-425f-458c-9151-e82e42ee0ff5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs_filtered'] = $page;

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
  $display->title = 'Virtual Visits';
  $display->uuid = '54f7cabb-c571-4d8d-8883-940257f44929';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_virtual_visits_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6808698d-27d0-4d11-a15d-6c615f8fbd37';
  $pane->panel = 'main';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:471';
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
  $pane->uuid = '6808698d-27d0-4d11-a15d-6c615f8fbd37';
  $display->content['new-6808698d-27d0-4d11-a15d-6c615f8fbd37'] = $pane;
  $display->panels['main'][0] = 'new-6808698d-27d0-4d11-a15d-6c615f8fbd37';
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
      'limit' => '12',
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
  $pane->uuid = '61828bf9-f2f5-4684-a8a4-f25f5af43451';
  $display->content['new-61828bf9-f2f5-4684-a8a4-f25f5af43451'] = $pane;
  $display->panels['main'][1] = 'new-61828bf9-f2f5-4684-a8a4-f25f5af43451';
  $pane = new stdClass();
  $pane->pid = 'new-039e5ab8-6a0c-4814-a954-75fad2a64d80';
  $pane->panel = 'main';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:561';
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
  $pane->uuid = '039e5ab8-6a0c-4814-a954-75fad2a64d80';
  $display->content['new-039e5ab8-6a0c-4814-a954-75fad2a64d80'] = $pane;
  $display->panels['main'][2] = 'new-039e5ab8-6a0c-4814-a954-75fad2a64d80';
  $pane = new stdClass();
  $pane->pid = 'new-d0d93e2f-2712-4461-a28d-98cdd57df5ca';
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
  $pane->uuid = 'd0d93e2f-2712-4461-a28d-98cdd57df5ca';
  $display->content['new-d0d93e2f-2712-4461-a28d-98cdd57df5ca'] = $pane;
  $display->panels['nav'][0] = 'new-d0d93e2f-2712-4461-a28d-98cdd57df5ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['virtual_visits'] = $page;

  return $pages;

}
