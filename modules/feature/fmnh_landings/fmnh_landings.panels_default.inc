<?php
/**
 * @file
 * fmnh_landings.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fmnh_landings_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'about_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'About landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = '585ce2f9-8a6a-4f11-8248-3f8e38959078';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec699ada-9c13-4394-a907-d9824c4e4eb1';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7796',
      'links' => 1,
      'leave_node_title' => 1,
      'identifier' => '',
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
    $pane->uuid = 'ec699ada-9c13-4394-a907-d9824c4e4eb1';
    $display->content['new-ec699ada-9c13-4394-a907-d9824c4e4eb1'] = $pane;
    $display->panels['main'][0] = 'new-ec699ada-9c13-4394-a907-d9824c4e4eb1';
    $pane = new stdClass();
    $pane->pid = 'new-06e178c1-b280-4a7b-8ecd-2ded03bec868';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2316',
      'links' => 1,
      'leave_node_title' => 1,
      'identifier' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06e178c1-b280-4a7b-8ecd-2ded03bec868';
    $display->content['new-06e178c1-b280-4a7b-8ecd-2ded03bec868'] = $pane;
    $display->panels['main'][1] = 'new-06e178c1-b280-4a7b-8ecd-2ded03bec868';
    $pane = new stdClass();
    $pane->pid = 'new-4f6fffbe-5aa2-4ee8-953a-a27697ede5f3';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7671',
      'links' => 1,
      'leave_node_title' => 1,
      'identifier' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4f6fffbe-5aa2-4ee8-953a-a27697ede5f3';
    $display->content['new-4f6fffbe-5aa2-4ee8-953a-a27697ede5f3'] = $pane;
    $display->panels['main'][2] = 'new-4f6fffbe-5aa2-4ee8-953a-a27697ede5f3';
    $pane = new stdClass();
    $pane->pid = 'new-c479db72-ef78-44c3-85a7-14c6671f6247';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:196';
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
    $pane->uuid = 'c479db72-ef78-44c3-85a7-14c6671f6247';
    $display->content['new-c479db72-ef78-44c3-85a7-14c6671f6247'] = $pane;
    $display->panels['main'][3] = 'new-c479db72-ef78-44c3-85a7-14c6671f6247';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['about_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'exhibitions_and_events_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Exhibitions and events landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
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
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = 'e39d3066-c5a3-4d00-a3f8-641b51e3cec8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $pane->panel = 'main';
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
          'type' => 'div',
          'class_enable' => 1,
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
    $display->panels['main'][0] = 'new-4dd3f6b3-0396-44ff-8c7c-bae11eb19919';
    $pane = new stdClass();
    $pane->pid = 'new-d660e9e1-5e72-4eed-8a92-05b999184a57';
    $pane->panel = 'main';
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'summary',
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
    $pane->uuid = 'd660e9e1-5e72-4eed-8a92-05b999184a57';
    $display->content['new-d660e9e1-5e72-4eed-8a92-05b999184a57'] = $pane;
    $display->panels['main'][1] = 'new-d660e9e1-5e72-4eed-8a92-05b999184a57';
    $pane = new stdClass();
    $pane->pid = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $pane->panel = 'main';
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
          'type' => 'div',
          'class_enable' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
    $display->content['new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441'] = $pane;
    $display->panels['main'][2] = 'new-6a80f4e9-cfd5-4b4e-ad57-e3a821eb5441';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['exhibitions_and_events_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Home landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = 'c1f4a1bd-4674-4663-aa14-65ac697f61bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26163151-327b-4493-a48a-a3e451cee047';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_landing_science';
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
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
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
    $pane->uuid = '26163151-327b-4493-a48a-a3e451cee047';
    $display->content['new-26163151-327b-4493-a48a-a3e451cee047'] = $pane;
    $display->panels['main'][0] = 'new-26163151-327b-4493-a48a-a3e451cee047';
    $pane = new stdClass();
    $pane->pid = 'new-b0b6d031-34b1-41b2-86ea-51633ac84be9';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_landing_events';
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
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
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
          'class' => 'summary',
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
    $pane->uuid = 'b0b6d031-34b1-41b2-86ea-51633ac84be9';
    $display->content['new-b0b6d031-34b1-41b2-86ea-51633ac84be9'] = $pane;
    $display->panels['main'][1] = 'new-b0b6d031-34b1-41b2-86ea-51633ac84be9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_landing_events';
  $mini->category = 'Landing';
  $mini->admin_title = 'Home landing events';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
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
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->title = 'Events at The Field';
  $display->uuid = 'c1f4a1bd-4674-4663-aa14-65ac697f61bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14261',
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
    $pane->uuid = '03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $display->content['new-03854895-ddbe-4b14-b533-af64dd2d2ea9'] = $pane;
    $display->panels['main'][0] = 'new-03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $pane = new stdClass();
    $pane->pid = 'new-a67d5b81-b462-4dbe-a74a-33992f8e6fc9';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Rule (tight)',
      'title' => '',
      'body' => '<hr class="rule--tight" />',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a67d5b81-b462-4dbe-a74a-33992f8e6fc9';
    $display->content['new-a67d5b81-b462-4dbe-a74a-33992f8e6fc9'] = $pane;
    $display->panels['main'][1] = 'new-a67d5b81-b462-4dbe-a74a-33992f8e6fc9';
    $pane = new stdClass();
    $pane->pid = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $pane->panel = 'main';
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
      'override_title_text' => 'This Week at The Field',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '66560f6a-fd8b-4229-8ef3-55e405440b6d';
    $display->content['new-66560f6a-fd8b-4229-8ef3-55e405440b6d'] = $pane;
    $display->panels['main'][2] = 'new-66560f6a-fd8b-4229-8ef3-55e405440b6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_landing_events'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_landing_exhibitions';
  $mini->category = 'Landing';
  $mini->admin_title = 'Home landing exhibitions';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
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
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->title = 'Exhibitions On The Museum Floor';
  $display->uuid = 'c1f4a1bd-4674-4663-aa14-65ac697f61bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '1',
      'view_mode' => 'node:promo',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $display->content['new-0b7e8763-317f-435a-bfbe-fd05c7d12506'] = $pane;
    $display->panels['main'][0] = 'new-0b7e8763-317f-435a-bfbe-fd05c7d12506';
    $pane = new stdClass();
    $pane->pid = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '2',
      'view_mode' => 'node:promo',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $display->content['new-e17aa475-ebcc-44d9-a2c8-5475e37c1548'] = $pane;
    $display->panels['main'][1] = 'new-e17aa475-ebcc-44d9-a2c8-5475e37c1548';
    $pane = new stdClass();
    $pane->pid = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $pane->panel = 'main';
    $pane->type = 'entity';
    $pane->subtype = 'entity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index' => '3',
      'view_mode' => 'node:promo',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '64c4c056-b3c7-4afd-8796-35e7f9d62988';
    $display->content['new-64c4c056-b3c7-4afd-8796-35e7f9d62988'] = $pane;
    $display->panels['main'][2] = 'new-64c4c056-b3c7-4afd-8796-35e7f9d62988';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_landing_exhibitions'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_landing_science';
  $mini->category = 'Landing';
  $mini->admin_title = 'Home landing science';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->title = 'Science at the Field';
  $display->uuid = 'e1066c30-a0c3-44d7-af97-fc917179032c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5e7ee32-0b6e-4420-8830-9addccfb13f0';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12956',
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
    $pane->uuid = 'b5e7ee32-0b6e-4420-8830-9addccfb13f0';
    $display->content['new-b5e7ee32-0b6e-4420-8830-9addccfb13f0'] = $pane;
    $display->panels['main'][0] = 'new-b5e7ee32-0b6e-4420-8830-9addccfb13f0';
    $pane = new stdClass();
    $pane->pid = 'new-fec69ff5-25a8-443c-93af-cd001bcf34c7';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fec69ff5-25a8-443c-93af-cd001bcf34c7';
    $display->content['new-fec69ff5-25a8-443c-93af-cd001bcf34c7'] = $pane;
    $display->panels['main'][1] = 'new-fec69ff5-25a8-443c-93af-cd001bcf34c7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b5e7ee32-0b6e-4420-8830-9addccfb13f0';
  $mini->display = $display;
  $export['home_landing_science'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'plan_your_special_event_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Plan your special event landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = 'bec3095f-ba0a-4bff-be27-68971c8acca9';
  $display->content = array();
  $display->panels = array();
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f625595-1620-44b5-abc4-2853678efedf';
    $display->content['new-5f625595-1620-44b5-abc4-2853678efedf'] = $pane;
    $display->panels['main'][0] = 'new-5f625595-1620-44b5-abc4-2853678efedf';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7cfc8827-ab83-4e92-a8c9-2888bc83d114';
    $display->content['new-7cfc8827-ab83-4e92-a8c9-2888bc83d114'] = $pane;
    $display->panels['main'][1] = 'new-7cfc8827-ab83-4e92-a8c9-2888bc83d114';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0a088c0c-407d-49bc-92f5-b59547108e07';
    $display->content['new-0a088c0c-407d-49bc-92f5-b59547108e07'] = $pane;
    $display->panels['main'][2] = 'new-0a088c0c-407d-49bc-92f5-b59547108e07';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '193899f4-ecd8-4e6d-981f-2045716f4e6a';
    $display->content['new-193899f4-ecd8-4e6d-981f-2045716f4e6a'] = $pane;
    $display->panels['main'][3] = 'new-193899f4-ecd8-4e6d-981f-2045716f4e6a';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '966b0411-df66-4349-8a54-1e902c6482ee';
    $display->content['new-966b0411-df66-4349-8a54-1e902c6482ee'] = $pane;
    $display->panels['main'][4] = 'new-966b0411-df66-4349-8a54-1e902c6482ee';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f9a683e8-8e79-478c-8e9a-6eeb91088c13';
    $display->content['new-f9a683e8-8e79-478c-8e9a-6eeb91088c13'] = $pane;
    $display->panels['main'][5] = 'new-f9a683e8-8e79-478c-8e9a-6eeb91088c13';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '06d3d357-e918-47b2-bab0-86bba649fe84';
    $display->content['new-06d3d357-e918-47b2-bab0-86bba649fe84'] = $pane;
    $display->panels['main'][6] = 'new-06d3d357-e918-47b2-bab0-86bba649fe84';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b7fa925c-b031-4cec-ab46-436597b779cd';
    $display->content['new-b7fa925c-b031-4cec-ab46-436597b779cd'] = $pane;
    $display->panels['main'][7] = 'new-b7fa925c-b031-4cec-ab46-436597b779cd';
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
      'style' => 'naked',
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
      'style' => 'naked',
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
      'settings' => NULL,
      'style' => 'naked',
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '85f01986-7f7e-42a9-8c28-f76225b9b12a';
    $display->content['new-85f01986-7f7e-42a9-8c28-f76225b9b12a'] = $pane;
    $display->panels['main'][11] = 'new-85f01986-7f7e-42a9-8c28-f76225b9b12a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['plan_your_special_event_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'science_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Science landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = '72ddcdc4-c67a-4878-988a-7b542ba2347f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35903402-4dca-4000-b537-7a426de082bf';
    $display->content['new-35903402-4dca-4000-b537-7a426de082bf'] = $pane;
    $display->panels['main'][0] = 'new-35903402-4dca-4000-b537-7a426de082bf';
    $pane = new stdClass();
    $pane->pid = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $display->content['new-023119be-c0ab-4ebb-a46c-d3283e1e25a1'] = $pane;
    $display->panels['main'][1] = 'new-023119be-c0ab-4ebb-a46c-d3283e1e25a1';
    $pane = new stdClass();
    $pane->pid = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd866853d-695d-4c9b-ae0b-df338e6ada8e';
    $display->content['new-d866853d-695d-4c9b-ae0b-df338e6ada8e'] = $pane;
    $display->panels['main'][2] = 'new-d866853d-695d-4c9b-ae0b-df338e6ada8e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['science_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'visit_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Planning Your Visit';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->title = 'Planning Your Visit';
  $display->uuid = 'f40b0dfe-46e8-4263-975e-ff3a4f34dafc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $pane->panel = 'main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
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
    $pane->uuid = '8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $display->content['new-8c0a829e-465b-4961-ad1c-946e8b698ea7'] = $pane;
    $display->panels['main'][0] = 'new-8c0a829e-465b-4961-ad1c-946e8b698ea7';
    $pane = new stdClass();
    $pane->pid = 'new-31a06e62-c97c-4ced-b6bc-6124749653ae';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '31a06e62-c97c-4ced-b6bc-6124749653ae';
    $display->content['new-31a06e62-c97c-4ced-b6bc-6124749653ae'] = $pane;
    $display->panels['main'][1] = 'new-31a06e62-c97c-4ced-b6bc-6124749653ae';
    $pane = new stdClass();
    $pane->pid = 'new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $display->content['new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7'] = $pane;
    $display->panels['main'][2] = 'new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
    $pane = new stdClass();
    $pane->pid = 'new-ce89612a-6c18-4325-86b9-17c1e9e705a5';
    $pane->panel = 'main';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ce89612a-6c18-4325-86b9-17c1e9e705a5';
    $display->content['new-ce89612a-6c18-4325-86b9-17c1e9e705a5'] = $pane;
    $display->panels['main'][3] = 'new-ce89612a-6c18-4325-86b9-17c1e9e705a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['visit_landing'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ways_to_give_landing';
  $mini->category = 'Landing';
  $mini->admin_title = 'Ways to give landing';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
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
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
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
  $display->uuid = 'bce88c7d-68b4-4973-a95e-0a7550af3185';
  $display->content = array();
  $display->panels = array();
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a8b26ef6-4d9d-4fda-857c-d765e7271036';
    $display->content['new-a8b26ef6-4d9d-4fda-857c-d765e7271036'] = $pane;
    $display->panels['main'][0] = 'new-a8b26ef6-4d9d-4fda-857c-d765e7271036';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4434488e-b490-4a4e-a533-222897677239';
    $display->content['new-4434488e-b490-4a4e-a533-222897677239'] = $pane;
    $display->panels['main'][1] = 'new-4434488e-b490-4a4e-a533-222897677239';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '83e97c76-07d5-40a6-9c93-bf537a54948e';
    $display->content['new-83e97c76-07d5-40a6-9c93-bf537a54948e'] = $pane;
    $display->panels['main'][2] = 'new-83e97c76-07d5-40a6-9c93-bf537a54948e';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f6712918-b369-489b-a75f-b2768bbd8d2e';
    $display->content['new-f6712918-b369-489b-a75f-b2768bbd8d2e'] = $pane;
    $display->panels['main'][3] = 'new-f6712918-b369-489b-a75f-b2768bbd8d2e';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2fd9d26d-5624-40f1-8345-eadbaa144631';
    $display->content['new-2fd9d26d-5624-40f1-8345-eadbaa144631'] = $pane;
    $display->panels['main'][4] = 'new-2fd9d26d-5624-40f1-8345-eadbaa144631';
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
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b98b8c83-781c-4a2c-bdd0-defe437972a3';
    $display->content['new-b98b8c83-781c-4a2c-bdd0-defe437972a3'] = $pane;
    $display->panels['main'][5] = 'new-b98b8c83-781c-4a2c-bdd0-defe437972a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['ways_to_give_landing'] = $mini;

  return $export;
}
