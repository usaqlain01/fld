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
  $display->uuid = 'cfcfa5fc-8f11-418f-883d-9107208210c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0908bdbb-b544-4cfb-912a-5d4f992a3fc0';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
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
    $pane->uuid = '0908bdbb-b544-4cfb-912a-5d4f992a3fc0';
    $display->content['new-0908bdbb-b544-4cfb-912a-5d4f992a3fc0'] = $pane;
    $display->panels['main'][0] = 'new-0908bdbb-b544-4cfb-912a-5d4f992a3fc0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0908bdbb-b544-4cfb-912a-5d4f992a3fc0';
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
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'main' => array(
      'style' => 'semantic_panels',
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d2a50ad-a92f-47be-8c27-53be528af5f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36139c6c-b2f2-404d-a735-d0f11e4d04b4';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'markdown',
      'substitute' => TRUE,
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
          'type' => 'p',
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
    $pane->uuid = '36139c6c-b2f2-404d-a735-d0f11e4d04b4';
    $display->content['new-36139c6c-b2f2-404d-a735-d0f11e4d04b4'] = $pane;
    $display->panels['left'][0] = 'new-36139c6c-b2f2-404d-a735-d0f11e4d04b4';
    $pane = new stdClass();
    $pane->pid = 'new-e0461da1-d072-406b-b573-1d76ca4b5716';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Directions link',
      'title' => '',
      'body' => '<a class="link--directions" href="#">Get Directions</a>',
      'format' => 'unfiltered_phrase_html',
      'substitute' => TRUE,
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
          'type' => 'p',
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
    $pane->uuid = 'e0461da1-d072-406b-b573-1d76ca4b5716';
    $display->content['new-e0461da1-d072-406b-b573-1d76ca4b5716'] = $pane;
    $display->panels['left'][1] = 'new-e0461da1-d072-406b-b573-1d76ca4b5716';
    $pane = new stdClass();
    $pane->pid = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
    $pane->panel = 'right';
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
    $display->panels['right'][0] = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d44160c-cf91-460b-9e8a-f7beba88e0f7';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
