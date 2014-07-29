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
  $mini->name = 'planning_your_visit';
  $mini->category = '';
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
  $export['planning_your_visit'] = $mini;

  return $export;
}
