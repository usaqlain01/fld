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
  $display->title = 'Events at The Field';
  $display->uuid = 'c1f4a1bd-4674-4663-aa14-65ac697f61bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe67852d-3dce-4bba-af48-810f150b98cf';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/at-the-field/programs/meet-scientist" class="banner banner--secondary">
  <figure>
    <img class="summary__image js--pictureFill" sizes="(min-width: 118.8125em) calc(100% - 555px),(min-width: 100.0625em) calc(100% - 380px),(min-width: 81.3125em) calc(100% - 325px),(min-width: 62.5625em) calc(100% - 300px),100vw" typeof="foaf:Image" src="http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_1000w/public/nkalmus/2014/07/14/meet-a-scientist-main.jpg?itok=8rEvuUP7" alt="">  <figcaption class="banner__description"><p>Meet real Field Museum scientists and learn about their work up close.</p></figcaption></figure>
</a>
            <h3 property="schema:name" datatype="" class="node__title node-title summary__title"><a href="/at-the-field/programs/meet-scientist">Meet a Scientist</a></h3>
    
    
        <div class="summary__description">
    
  <section class="field field-name-body field-type-text-with-summary field-label-hidden">
<p>Every Friday from 10am to noon, scientists will be out in the Museum sharing the wonders of our collections and highlights of their research. Topics will range from birds to insects, from mammals to plants, from pottery to spear points, and more! <strong>Free with Basic admission.</strong></p>  </section>
<span property="schema:name" content="Meet a Scientist" class="rdf-meta"></span><span rel="schema:url" resource="/at-the-field/programs/meet-scientist" class="rdf-meta"></span>
      </div>
',
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
    $pane->uuid = 'fe67852d-3dce-4bba-af48-810f150b98cf';
    $display->content['new-fe67852d-3dce-4bba-af48-810f150b98cf'] = $pane;
    $display->panels['main'][0] = 'new-fe67852d-3dce-4bba-af48-810f150b98cf';
    $pane = new stdClass();
    $pane->pid = 'new-03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $display->content['new-03854895-ddbe-4b14-b533-af64dd2d2ea9'] = $pane;
    $display->panels['main'][1] = 'new-03854895-ddbe-4b14-b533-af64dd2d2ea9';
    $pane = new stdClass();
    $pane->pid = 'new-731b6f49-5520-4937-add4-014fa4ea8c33';
    $pane->panel = 'main';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '731b6f49-5520-4937-add4-014fa4ea8c33';
    $display->content['new-731b6f49-5520-4937-add4-014fa4ea8c33'] = $pane;
    $display->panels['main'][2] = 'new-731b6f49-5520-4937-add4-014fa4ea8c33';
    $pane = new stdClass();
    $pane->pid = 'new-b774400c-7dad-485e-aced-5f02767c246f';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
          'class' => 'eventsList',
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
    $pane->uuid = 'b774400c-7dad-485e-aced-5f02767c246f';
    $display->content['new-b774400c-7dad-485e-aced-5f02767c246f'] = $pane;
    $display->panels['main'][3] = 'new-b774400c-7dad-485e-aced-5f02767c246f';
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
  $display->title = 'Experience the Field';
  $display->uuid = 'c1f4a1bd-4674-4663-aa14-65ac697f61bd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-672f3a98-ade5-4dae-8a18-fe1ef438f1e9';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '791',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => 'banner',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '672f3a98-ade5-4dae-8a18-fe1ef438f1e9';
    $display->content['new-672f3a98-ade5-4dae-8a18-fe1ef438f1e9'] = $pane;
    $display->panels['main'][0] = 'new-672f3a98-ade5-4dae-8a18-fe1ef438f1e9';
    $pane = new stdClass();
    $pane->pid = 'new-f3502645-42ec-4143-a1f3-0ba5cea8a80d';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '896',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => 'banner',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3502645-42ec-4143-a1f3-0ba5cea8a80d';
    $display->content['new-f3502645-42ec-4143-a1f3-0ba5cea8a80d'] = $pane;
    $display->panels['main'][1] = 'new-f3502645-42ec-4143-a1f3-0ba5cea8a80d';
    $pane = new stdClass();
    $pane->pid = 'new-6f78e95f-7647-44b3-81fa-b31df2f9f898';
    $pane->panel = 'main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9916',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => 'banner',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner--secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6f78e95f-7647-44b3-81fa-b31df2f9f898';
    $display->content['new-6f78e95f-7647-44b3-81fa-b31df2f9f898'] = $pane;
    $display->panels['main'][2] = 'new-6f78e95f-7647-44b3-81fa-b31df2f9f898';
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
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Taxonomy term',
      'keyword' => 'taxonomy_term',
      'name' => 'entity:taxonomy_term',
      'entity_id' => '1301',
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
  $display->title = 'Science at the Field';
  $display->uuid = 'e1066c30-a0c3-44d7-af97-fc917179032c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb09d02b-5743-43fd-a25d-82d849658a69';
    $pane->panel = 'main';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'promo',
      'context' => 'context_entity:taxonomy_term_1',
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
    $pane->uuid = 'eb09d02b-5743-43fd-a25d-82d849658a69';
    $display->content['new-eb09d02b-5743-43fd-a25d-82d849658a69'] = $pane;
    $display->panels['main'][0] = 'new-eb09d02b-5743-43fd-a25d-82d849658a69';
    $pane = new stdClass();
    $pane->pid = 'new-88bdd1f5-8ead-4aa6-aa8e-983dccd5971e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a class="banner banner--secondary" href="/science/blog/the-brain-scoop"> 
<figure>
<img srcset="http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_1000w/public/banner-brainscoop.png?itok=wbDJR6lP 1000w,http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_1200w/public/banner-brainscoop.png?itok=uq2hVfSG 1200w,http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_1600w/public/banner-brainscoop.png?itok=MfepR3WD 1600w,http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_2400w/public/banner-brainscoop.png?itok=x9R7T9iK 2400w,http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_500w/public/banner-brainscoop.png?itok=2U6wJylu 500w,http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_800w/public/banner-brainscoop.png?itok=c_QgSFEF 800w" class="banner__image js--pictureFill" typeof="foaf:Image" src="http://fieldmusefacelift.devcloud.acquia-sites.com/sites/default/files/styles/5x2_1000w/public/banner-brainscoop.png?itok=wbDJR6lP" alt=""> 
<figcaption class="banner__description" itemprop="description">
	<p>
		Check out what our Chief Curiosity Correspondent, Emily Graslie, has been exploring this week on The Brain Scoop!
	</p>
</figcaption>
</figure>
</a> ',
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
    $pane->uuid = '88bdd1f5-8ead-4aa6-aa8e-983dccd5971e';
    $display->content['new-88bdd1f5-8ead-4aa6-aa8e-983dccd5971e'] = $pane;
    $display->panels['main'][1] = 'new-88bdd1f5-8ead-4aa6-aa8e-983dccd5971e';
    $pane = new stdClass();
    $pane->pid = 'new-3f1dfae0-7b0d-47b5-9641-7d9b5606e2d9';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '<a href="/science/blog/the-brain-scoop">The Brain Scoop</a>',
      'body' => '<p>Check out what our Chief Curiosity Correspondent, Emily Graslie, has been exploring this week on The Brain Scoop!</p>
',
      'format' => 'filtered_wysiwyg',
      'substitute' => 1,
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
    $pane->uuid = '3f1dfae0-7b0d-47b5-9641-7d9b5606e2d9';
    $display->content['new-3f1dfae0-7b0d-47b5-9641-7d9b5606e2d9'] = $pane;
    $display->panels['main'][2] = 'new-3f1dfae0-7b0d-47b5-9641-7d9b5606e2d9';
    $pane = new stdClass();
    $pane->pid = 'new-f263d49a-80f3-4c3d-a11b-c8d962788045';
    $pane->panel = 'main';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f263d49a-80f3-4c3d-a11b-c8d962788045';
    $display->content['new-f263d49a-80f3-4c3d-a11b-c8d962788045'] = $pane;
    $display->panels['main'][3] = 'new-f263d49a-80f3-4c3d-a11b-c8d962788045';
    $pane = new stdClass();
    $pane->pid = 'new-17eac734-813e-4269-90f1-29d04dbe884c';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Explore Science With Us',
      'body' => '<ul class="contentLinks ">
	<li class="contentLinks__item"><a href="/science/blog">Science Blogs &amp; Videos</a></li>
	<li class="contentLinks__item"><a href="/science/research">Research &amp; Collections</a></li>
	<li class="contentLinks__item"><a href="/node/9901">Meet A Scientist</a></li>
</ul>',
      'format' => 'unfiltered',
      'substitute' => 1,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '17eac734-813e-4269-90f1-29d04dbe884c';
    $display->content['new-17eac734-813e-4269-90f1-29d04dbe884c'] = $pane;
    $display->panels['main'][4] = 'new-17eac734-813e-4269-90f1-29d04dbe884c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
