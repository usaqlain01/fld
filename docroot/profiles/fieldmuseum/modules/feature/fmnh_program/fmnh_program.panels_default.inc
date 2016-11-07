<?php
/**
 * @file
 * fmnh_program.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fmnh_program_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'teacher_professional_development';
  $mini->category = '';
  $mini->admin_title = 'Teacher professional development programs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Content',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
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
  $display->title = 'Other Programs';
  $display->uuid = 'cf967a15-3c7c-4d2f-a0bf-3dad9227cf09';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'teacher_professional_development';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b30073ee-75f4-4dd7-9a03-4316243eb4c3';
  $pane->panel = 'main';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '9681',
    'links' => 0,
    'leave_node_title' => 1,
    'identifier' => '',
    'build_mode' => 'promo',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b30073ee-75f4-4dd7-9a03-4316243eb4c3';
  $display->content['new-b30073ee-75f4-4dd7-9a03-4316243eb4c3'] = $pane;
  $display->panels['main'][0] = 'new-b30073ee-75f4-4dd7-9a03-4316243eb4c3';
  $pane = new stdClass();
  $pane->pid = 'new-f02e2829-b9e2-4c23-b42f-d03173a00dd0';
  $pane->panel = 'main';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '9626',
    'links' => 0,
    'leave_node_title' => 1,
    'identifier' => '',
    'build_mode' => 'promo',
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
  $pane->uuid = 'f02e2829-b9e2-4c23-b42f-d03173a00dd0';
  $display->content['new-f02e2829-b9e2-4c23-b42f-d03173a00dd0'] = $pane;
  $display->panels['main'][1] = 'new-f02e2829-b9e2-4c23-b42f-d03173a00dd0';
  $pane = new stdClass();
  $pane->pid = 'new-58f4dc9c-04fa-431e-a911-926db00205d5';
  $pane->panel = 'main';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '9841',
    'links' => 0,
    'leave_node_title' => 1,
    'identifier' => '',
    'build_mode' => 'promo',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58f4dc9c-04fa-431e-a911-926db00205d5';
  $display->content['new-58f4dc9c-04fa-431e-a911-926db00205d5'] = $pane;
  $display->panels['main'][2] = 'new-58f4dc9c-04fa-431e-a911-926db00205d5';
  $pane = new stdClass();
  $pane->pid = 'new-3b400997-1e5c-49b1-9993-9bc55d08cb41';
  $pane->panel = 'main';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '7566',
    'links' => 0,
    'leave_node_title' => 1,
    'identifier' => '',
    'build_mode' => 'promo',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3b400997-1e5c-49b1-9993-9bc55d08cb41';
  $display->content['new-3b400997-1e5c-49b1-9993-9bc55d08cb41'] = $pane;
  $display->panels['main'][3] = 'new-3b400997-1e5c-49b1-9993-9bc55d08cb41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b30073ee-75f4-4dd7-9a03-4316243eb4c3';
  $mini->display = $display;
  $export['teacher_professional_development'] = $mini;

  return $export;
}
