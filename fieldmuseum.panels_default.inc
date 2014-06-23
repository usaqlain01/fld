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
      'parent_mlid' => 1671,
      'parent' => 'main-menu:1671',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->pid = 'new-7f2848a4-7202-42d5-a6bb-b88b081dea5f';
    $pane->panel = 'main_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'social media',
      'title' => 'Explore The Field Museum’s Social Network',
      'body' => '<h4>Connect With Us</h4>
      <p>Our online community enjoys exclusive daily content and fun features
        like <em>Mammal Mondays</em> and <em>Insect of the Week</em>. Discover
        astounding photos, watch behind-the-scenes videos, answer trivia
        questions, and voice your opinions. Ask questions, share your own
        photos and memories, and meet your fellow citizen scientists.
        We&rsquo;re your up-to-the-minute source for Museum news and
        information, and we want you to join the conversation!
      </p>
<ul class="socialLinks">
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--facebook" href="http://facebook.com/fieldmuseum">
      <svg class="icon icon--facebook socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#facebook"></use>
      </svg>
      <span class=\'socialLinks__service\'>Facebook</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--twitter" href="http://twitter.com/fieldmuseum">
      <svg class="icon icon--twitter socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#twitter"></use>
      </svg>
      <span class=\'socialLinks__service\'>Twitter</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--twitter socialLinks__link--sue" href="https://twitter.com/SUEtheTrex">
      <svg class="icon icon--sue socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#sue"></use>
      </svg>
      <span class=\'socialLinks__service\'>SUE the T. Rex</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--pinterest" href="http://foursquare.com/fieldmuseum">
      <svg class="icon icon--pinterest socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#pinterest"></use>
      </svg>
      <span class=\'socialLinks__service\'>Pinterest</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--youtube" href="http://youtube.com/user/thebrainscoop">
      <svg class="icon icon--youtube socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#youtube"></use>
      </svg>
      <span class=\'socialLinks__service\'>The Brain Scoop</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--vimeo" href="http://vimeo.com/fieldmuseum">
      <svg class="icon icon--vimeo socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#vimeo"></use>
      </svg>
      <span class=\'socialLinks__service\'>Vimeo</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--flickr" href="http://flickr.com/groups/fieldmuseum">
      <svg class="icon icon--flickr socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#flickr"></use>
      </svg>
      <span class=\'socialLinks__service\'>Flickr</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--tumblr" href="http://fieldmuseumphotoarchives.tumblr.com">
      <svg class="icon icon--tumblr socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#tumblr"></use>
      </svg>
      <span class=\'socialLinks__service\'>Tumblr</span>
    </a>
  </li>
  <li class="socialLinks__item">
    <a class="socialLinks__link socialLinks__link--instagram" href="http://instagram.com/fieldmuseum">
      <svg class="icon icon--instagram socialLinks__icon" viewBox="0 0 500 500">
        <use xlink:href="#instagram"></use>
      </svg>
      <span class=\'socialLinks__service\'>Instagram</span>
    </a>
  </li>
</ul>',
      'format' => 'unfiltered',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
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
    $pane->uuid = '7f2848a4-7202-42d5-a6bb-b88b081dea5f';
    $display->content['new-7f2848a4-7202-42d5-a6bb-b88b081dea5f'] = $pane;
    $display->panels['main_b'][0] = 'new-7f2848a4-7202-42d5-a6bb-b88b081dea5f';
    $pane = new stdClass();
    $pane->pid = 'new-c316be17-87bd-40a1-a1da-09d9488cd1cc';
    $pane->panel = 'secondary_a';
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
    $pane->uuid = 'c316be17-87bd-40a1-a1da-09d9488cd1cc';
    $display->content['new-c316be17-87bd-40a1-a1da-09d9488cd1cc'] = $pane;
    $display->panels['secondary_a'][0] = 'new-c316be17-87bd-40a1-a1da-09d9488cd1cc';
    $pane = new stdClass();
    $pane->pid = 'new-61e13361-dffd-4890-981f-8a46660e3eaa';
    $pane->panel = 'secondary_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Address',
      'title' => '',
      'body' => '<p itemprop="address" itemscope="" itemtype="http://schema.org/PostalAddress">
        <span itemprop="streetAddress">1400 S. Lake Shore Drive</span>,
        <span itemprop="addressLocality">Chicago</span>,
        <span itemprop="addressRegion">IL</span>
        <span itemprop="postalCode">60605-2496</span>
      </p>
      <p>
        <span itemprop="telephone">(312) 922-9410</span> •
        <a href="#">Contact Us</a> •
        <a href="#">Copyright Information</a>
      </p>',
      'format' => 'unfiltered',
      'substitute' => TRUE,
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
    $pane->uuid = '61e13361-dffd-4890-981f-8a46660e3eaa';
    $display->content['new-61e13361-dffd-4890-981f-8a46660e3eaa'] = $pane;
    $display->panels['secondary_a'][1] = 'new-61e13361-dffd-4890-981f-8a46660e3eaa';
    $pane = new stdClass();
    $pane->pid = 'new-75081374-00b9-43af-948e-626f4f1d86ad';
    $pane->panel = 'secondary_b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Subscribe to newsletter',
      'title' => '',
      'body' => '    <a class="newsletter" href="{{url}}">
      <figure class="newsletter__icon">
        <svg class="icon icon--envelope" viewBox="0 0 500 500" preserveAspectRatio="none">
          <use xlink:href="#envelope"></use>
        </svg>
      </figure>
      <h4>Subscribe to our Newsletter</h4>
      <p>
        Be among the first to learn about exciting exhibitions, programs, events,
        and more!
      </p>
    </a>
',
      'format' => 'unfiltered',
      'substitute' => TRUE,
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
    $pane->uuid = '75081374-00b9-43af-948e-626f4f1d86ad';
    $display->content['new-75081374-00b9-43af-948e-626f4f1d86ad'] = $pane;
    $display->panels['secondary_b'][0] = 'new-75081374-00b9-43af-948e-626f4f1d86ad';
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
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(),
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'hero' => NULL,
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
    $pane->pid = 'new-a6616a78-02d5-476b-a003-eb262223126b';
    $pane->panel = 'hero';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
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
    $pane->uuid = 'a6616a78-02d5-476b-a003-eb262223126b';
    $display->content['new-a6616a78-02d5-476b-a003-eb262223126b'] = $pane;
    $display->panels['hero'][0] = 'new-a6616a78-02d5-476b-a003-eb262223126b';
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
      'body' => '<a class="button link--directions" href="/visit/directions">
  <span class="button__leader">
    <svg class="icon icon--car" viewBox="0 0 500 500">
      <use xlink:href="#car"></use>
    </svg>
    <svg class="icon icon--train" viewBox="0 0 500 500">
      <use xlink:href="#train"></use>
    </svg>
    <svg class="icon icon--bus" viewBox="0 0 500 500">
      <use xlink:href="#bus"></use>
    </svg>
  </span>
  Get Directions
</a>',
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
