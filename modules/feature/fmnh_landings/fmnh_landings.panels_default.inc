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

  return $export;
}
