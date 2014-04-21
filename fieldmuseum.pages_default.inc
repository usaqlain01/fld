<?php
/**
 * @file
 * fieldmuseum.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fieldmuseum_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Home';
  $display->uuid = 'f5c09916-2b52-47ba-a21b-b5b0f9f73452';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Alert',
      'title' => 'Alert!',
      'body' => 'This alert is disabled.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $display->content['new-baf3edc8-ca96-43b1-b8ba-41d81a45b067'] = $pane;
    $display->panels['main'][0] = 'new-baf3edc8-ca96-43b1-b8ba-41d81a45b067';
    $pane = new stdClass();
    $pane->pid = 'new-e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Free-form message',
      'title' => '',
      'body' => 'Lorem ipsum dolor sit amet, alii nominati periculis in vis, reque apeirian ei mei. Ut mei justo electram aliquando, an quo persius antiopam iracundia. Malorum quaerendum ut nam, te quo aliquam maiorum voluptatum. Ad aliquam comprehensam vel. Brute viderer reprimique ne usu. Lucilius euripidis voluptatum nec ut.',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $display->content['new-e8032d89-b651-4f3e-b068-b3ee68d055fe'] = $pane;
    $display->panels['main'][1] = 'new-e8032d89-b651-4f3e-b068-b3ee68d055fe';
    $pane = new stdClass();
    $pane->pid = 'new-cd88a92d-402c-4ed3-bcdd-595499edbf23';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Current exhibitions',
      'body' => '[![][1]][2]

   [1]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/TMI%20identity%20black%281%29.jpg?itok=qx_J84Ua
   [2]: /happening/exhibits/machine-inside-biomechanics

[The Machine Inside: Biomechanics][3]

   [3]: /happening/exhibits/machine-inside-biomechanics

Mar 12, 2014 to Jan 4, 2015

Temporary Exhibition

Have you ever wondered how some creatures can fly for miles without resting, leap the length of a football field, or crush over 8,000 pounds in one bite?

[![][4]][5]

   [4]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/Field_Museum_Wonders_of_the_1893_Worlds_Fair.gif?itok=d70O66SK
   [5]: /happening/exhibits/opening-vaults-wonders-1893-world%E2%80%99s-fair

[Opening the Vaults: Wonders of the 1893 World’s Fair][6]

   [6]: /happening/exhibits/opening-vaults-wonders-1893-world%E2%80%99s-fair

Oct 25, 2013 to Sep 7, 2014

Temporary Exhibition

The World’s Columbian Exposition was a glittering showcase of architecture, culture, technology, and peoples from around the world.

[![][7]][8]

   [7]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/Before%20the%20Dinosaurs%20Identity-2.jpg?itok=_mLZ5RZB
   [8]: /happening/exhibits/dinosaurs-tracking-reptiles-pangaea

[Before the Dinosaurs: Tracking the Reptiles of Pangaea][9]

   [9]: /happening/exhibits/dinosaurs-tracking-reptiles-pangaea

Dec 9, 2013 to Feb 1, 2015

Temporary Exhibition

Journey across the globe with a Field Museum paleontologist and his teammates in search of what life was like before dinosaurs roamed the Earth.

[![][10]][11]

   [10]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/Bunky%20exbtn%20identity.jpg?itok=SzPnjXcn
   [11]: /happening/exhibits/bunky-echo-hawk-modern-warrior

[Bunky Echo-Hawk: Modern Warrior][12]

   [12]: /happening/exhibits/bunky-echo-hawk-modern-warrior

(there is a lot of these currently)',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cd88a92d-402c-4ed3-bcdd-595499edbf23';
    $display->content['new-cd88a92d-402c-4ed3-bcdd-595499edbf23'] = $pane;
    $display->panels['main'][2] = 'new-cd88a92d-402c-4ed3-bcdd-595499edbf23';
    $pane = new stdClass();
    $pane->pid = 'new-4e0c7d35-04ef-4c39-9298-be0f93f81e59';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Upcoming Events',
      'body' => '| Date | Description |
|:----:|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5/30 | [Overnight - Dozin With the Dinos](https://tickets.fieldmuseum.org/public/loader.asp?target=show.asp?shcode=241&shName=Overnight%20-%20Dozin%20With%20the%20Dinos) |
|  6/3 | [Dino Camp](https://tickets.fieldmuseum.org/public/loader.asp?target=show.asp?shcode=149&shName=Dino%20Camp)                                                       |
|  6/4 | [Dino Camp](https://tickets.fieldmuseum.org/public/loader.asp?target=show.asp?shcode=149&shName=Dino%20Camp)                                                       |
| 6/17 | [Dino Camp](https://tickets.fieldmuseum.org/public/loader.asp?target=show.asp?shcode=149&shName=Dino%20Camp)                                                       |',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4e0c7d35-04ef-4c39-9298-be0f93f81e59';
    $display->content['new-4e0c7d35-04ef-4c39-9298-be0f93f81e59'] = $pane;
    $display->panels['main'][3] = 'new-4e0c7d35-04ef-4c39-9298-be0f93f81e59';
    $pane = new stdClass();
    $pane->pid = 'new-519f6547-3398-4381-9ed8-5bcea0341247';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Museum hours that link to map/directions',
      'title' => '',
      'body' => '### Hours

Open every day except Christmas. 9am-5pm.

### Location

[1400 S Lake Shore Drive Chicago, IL 60605][1]

   [1]: http://goo.gl/yjy8a
',
      'format' => 'markdown',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '519f6547-3398-4381-9ed8-5bcea0341247';
    $display->content['new-519f6547-3398-4381-9ed8-5bcea0341247'] = $pane;
    $display->panels['main'][4] = 'new-519f6547-3398-4381-9ed8-5bcea0341247';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
