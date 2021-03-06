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
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'about_landing';
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
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'plan_your_special_event_landing';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '966b0411-df66-4349-8a54-1e902c6482ee';
  $display->content['new-966b0411-df66-4349-8a54-1e902c6482ee'] = $pane;
  $display->panels['main'][2] = 'new-966b0411-df66-4349-8a54-1e902c6482ee';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1d9d4fbb-93bf-47fb-857a-5fb189047f27';
  $display->content['new-1d9d4fbb-93bf-47fb-857a-5fb189047f27'] = $pane;
  $display->panels['main'][3] = 'new-1d9d4fbb-93bf-47fb-857a-5fb189047f27';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b7fa925c-b031-4cec-ab46-436597b779cd';
  $display->content['new-b7fa925c-b031-4cec-ab46-436597b779cd'] = $pane;
  $display->panels['main'][4] = 'new-b7fa925c-b031-4cec-ab46-436597b779cd';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0a088c0c-407d-49bc-92f5-b59547108e07';
  $display->content['new-0a088c0c-407d-49bc-92f5-b59547108e07'] = $pane;
  $display->panels['main'][5] = 'new-0a088c0c-407d-49bc-92f5-b59547108e07';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f9a683e8-8e79-478c-8e9a-6eeb91088c13';
  $display->content['new-f9a683e8-8e79-478c-8e9a-6eeb91088c13'] = $pane;
  $display->panels['main'][6] = 'new-f9a683e8-8e79-478c-8e9a-6eeb91088c13';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '06d3d357-e918-47b2-bab0-86bba649fe84';
  $display->content['new-06d3d357-e918-47b2-bab0-86bba649fe84'] = $pane;
  $display->panels['main'][7] = 'new-06d3d357-e918-47b2-bab0-86bba649fe84';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '193899f4-ecd8-4e6d-981f-2045716f4e6a';
  $display->content['new-193899f4-ecd8-4e6d-981f-2045716f4e6a'] = $pane;
  $display->panels['main'][8] = 'new-193899f4-ecd8-4e6d-981f-2045716f4e6a';
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
      'summary_a' => NULL,
      'summary_b' => NULL,
      'summary_c' => NULL,
      'summary_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Planning Your Visit';
  $display->uuid = 'f40b0dfe-46e8-4263-975e-ff3a4f34dafc';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'visit_landing';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ce89612a-6c18-4325-86b9-17c1e9e705a5';
  $display->content['new-ce89612a-6c18-4325-86b9-17c1e9e705a5'] = $pane;
  $display->panels['main'][2] = 'new-ce89612a-6c18-4325-86b9-17c1e9e705a5';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
  $display->content['new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7'] = $pane;
  $display->panels['main'][3] = 'new-74056587-bcc5-4dba-8ae7-2ea8fe316ce7';
  $pane = new stdClass();
  $pane->pid = 'new-bf134f02-8518-42ea-bc07-1e586fc2ebb9';
  $pane->panel = 'main';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:706';
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
  $pane->uuid = 'bf134f02-8518-42ea-bc07-1e586fc2ebb9';
  $display->content['new-bf134f02-8518-42ea-bc07-1e586fc2ebb9'] = $pane;
  $display->panels['main'][4] = 'new-bf134f02-8518-42ea-bc07-1e586fc2ebb9';
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
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'ways_to_give_landing';
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
  $pane->position = 0;
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
  $pane->position = 1;
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
  $pane->position = 2;
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
  $pane->position = 3;
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
  $pane->position = 4;
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
  $pane->position = 5;
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
