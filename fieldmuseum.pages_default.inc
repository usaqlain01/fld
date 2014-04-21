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
  $page->name = 'exhibitions_and_events';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions and events';
  $page->admin_description = 'The Exhibitions & Events section is the current “Happening at the Field” section with a simplified name. This section should serve to answer the question, “What will I be able to see and do when I\'m at The Field?” It will achieve this by housing all information about floor exhibitions, programs for visitors, and events at the Field. These items drive the visit decision for a large percentage of users that we talked to (see research findings document). The URL, /at-the-field, speaks to the greater purpose of the section as visitors browse, and works better as a single "sentence" when you\'ve driven down into the various subsections within this area of the site.';
  $page->path = 'at-the-field';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Exhibitions & Events',
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
  $handler->name = 'page_exhibitions_and_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions_and_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->title = 'Exhibitions and Events';
  $display->uuid = '6670015c-8d44-40ac-8664-5d85e449f8fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24afc512-0bcf-4763-8955-c8c2e636dfbb';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'The Machine Inside: Biomechanics',
      'body' => '[![][1]][2]

   [1]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/TMI%20identity%20black%281%29.jpg?itok=qx_J84Ua
   [2]: /happening/exhibits/machine-inside-biomechanics

[The Machine Inside: Biomechanics][3]

   [3]: /happening/exhibits/machine-inside-biomechanics

Mar 12, 2014 to Jan 4, 2015

Temporary Exhibition

Have you ever wondered how some creatures can fly for miles without resting, leap the length of a football field, or crush over 8,000 pounds in one bite?',
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
    $pane->uuid = '24afc512-0bcf-4763-8955-c8c2e636dfbb';
    $display->content['new-24afc512-0bcf-4763-8955-c8c2e636dfbb'] = $pane;
    $display->panels['main'][0] = 'new-24afc512-0bcf-4763-8955-c8c2e636dfbb';
    $pane = new stdClass();
    $pane->pid = 'new-37a2a530-2656-4e29-81e2-ee2d88a3d6bc';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Opening the Vaults: Wonders of the 1893 World’s Fair',
      'body' => '[![][1]][2]

   [1]: http://fieldmuseum.org/sites/default/files/styles/original-aspect-thumbnail/public/Field_Museum_Wonders_of_the_1893_Worlds_Fair.gif?itok=d70O66SK
   [2]: /happening/exhibits/opening-vaults-wonders-1893-world%E2%80%99s-fair

Oct 25, 2013 to Sep 7, 2014

Temporary Exhibition

The World’s Columbian Exposition was a glittering showcase of architecture, culture, technology, and peoples from around the world.',
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
    $pane->uuid = '37a2a530-2656-4e29-81e2-ee2d88a3d6bc';
    $display->content['new-37a2a530-2656-4e29-81e2-ee2d88a3d6bc'] = $pane;
    $display->panels['main'][1] = 'new-37a2a530-2656-4e29-81e2-ee2d88a3d6bc';
    $pane = new stdClass();
    $pane->pid = 'new-52395ecc-ddd4-418b-9788-e0ee8f79ebb3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52395ecc-ddd4-418b-9788-e0ee8f79ebb3';
    $display->content['new-52395ecc-ddd4-418b-9788-e0ee8f79ebb3'] = $pane;
    $display->panels['main'][2] = 'new-52395ecc-ddd4-418b-9788-e0ee8f79ebb3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24afc512-0bcf-4763-8955-c8c2e636dfbb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_and_events'] = $page;

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
    'type' => 'none',
    'settings' => NULL,
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'plan_your_visit';
  $page->task = 'page';
  $page->admin_title = 'Plan your visit';
  $page->admin_description = '';
  $page->path = 'visit';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Plan your visit',
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
  $handler->name = 'page_plan_your_visit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'plan_your_visit';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->title = 'Plan your visit';
  $display->uuid = '0e1fa6d2-0164-4626-b7f4-3dbb72c3c3fb';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['plan_your_visit'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'science_and_research';
  $page->task = 'page';
  $page->admin_title = 'Science and research';
  $page->admin_description = '';
  $page->path = 'science';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Science & Research',
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
  $handler->name = 'page_science_and_research_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'science_and_research';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->title = 'Science and Research';
  $display->uuid = '86abd588-1ecf-4a03-926f-d7098a870c45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Introduction',
      'title' => '',
      'body' => 'Intent: provide an introduction to The Field\'s research and spell out your scientific mission statement.',
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
    $pane->uuid = '9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $display->content['new-9a08e76d-af3d-4f08-ae40-71a25e52853d'] = $pane;
    $display->panels['main'][0] = 'new-9a08e76d-af3d-4f08-ae40-71a25e52853d';
    $pane = new stdClass();
    $pane->pid = 'new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'blog-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $display->content['new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0'] = $pane;
    $display->panels['main'][1] = 'new-ca141c23-c717-42eb-baea-bb4bbdcbf2f0';
    $pane = new stdClass();
    $pane->pid = 'new-a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured collection',
      'title' => 'Fishes Dried Skeleton Collection',
      'body' => '(for example)',
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
    $pane->uuid = 'a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $display->content['new-a3bdc9ce-2dd1-4c89-8390-aa956641015b'] = $pane;
    $display->panels['main'][2] = 'new-a3bdc9ce-2dd1-4c89-8390-aa956641015b';
    $pane = new stdClass();
    $pane->pid = 'new-45e77207-718d-4343-9c77-2c9ef6214178';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Science Newsflash',
      'title' => 'Sue\'s Microbes go to Space',
      'body' => 'What do cheerleaders, microbes, and dinosaur skeletons have in common?  They are all part of a project taking place onboard the International Space Station! Talk about worlds colliding!
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '45e77207-718d-4343-9c77-2c9ef6214178';
    $display->content['new-45e77207-718d-4343-9c77-2c9ef6214178'] = $pane;
    $display->panels['main'][3] = 'new-45e77207-718d-4343-9c77-2c9ef6214178';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['science_and_research'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'support_the_museum';
  $page->task = 'page';
  $page->admin_title = 'Support the museum';
  $page->admin_description = '';
  $page->path = 'support';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Support the museum',
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
  $handler->name = 'page_support_the_museum_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'support_the_museum';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->title = 'Support the museum';
  $display->uuid = '0277acda-f6f0-4ac8-b9f0-bf97f2e6d425';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Call to action',
      'title' => '',
      'body' => 'Intention: a clear call to action to why donations from the community are such an important part of The Field achieving its goals.',
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
    $pane->uuid = 'd560624f-ff81-4642-a5a9-4b25a794bc7e';
    $display->content['new-d560624f-ff81-4642-a5a9-4b25a794bc7e'] = $pane;
    $display->panels['main'][0] = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
    $pane = new stdClass();
    $pane->pid = 'new-71d3136f-4c89-4cbd-b034-ded39e90c364';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Ways to give',
      'body' => 'Intent: There should also be brief summaries about each of the areas within the section that explain that type of giving and provide a call to action to click through to find out more .
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71d3136f-4c89-4cbd-b034-ded39e90c364';
    $display->content['new-71d3136f-4c89-4cbd-b034-ded39e90c364'] = $pane;
    $display->panels['main'][1] = 'new-71d3136f-4c89-4cbd-b034-ded39e90c364';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d560624f-ff81-4642-a5a9-4b25a794bc7e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['support_the_museum'] = $page;

  return $pages;

}
