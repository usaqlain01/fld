<?php

/**
 * Implements hook_block_info_alter().
 *
 * Add block configuration in this function to control blocks created by
 * other modules.
 *
 * Include a comment above each block configuration code which names
 * the block.  Views block names turn into ugly hashes if the view+block names
 * are too long.  Please shorten the view/block names or include the block's
 * displayed name and the code used in the Widget Matrix (row2) in a comment
 * above the configuration code.  For example, the following comment calls out
 * the block called 'WP-11 Related Content Multiple (3)' in the Widget Matrix':
 *
 * // Related Content, WP-11
 *
 * Reference individual blocks by module, then block key (or delta),
 * then setting:
 *
 * $blocks['module_name']['block_key']['setting_name'] = array();
 *
 * These configuration settings must be grouped by block.  All of the settings
 * for a block should be in one short code block.  Do not separate out by
 * setting type.
 *
 * Blocks are then grouped by location so that all of the left rail blocks (WL)
 * are grouped together, then main content blocks (WP), then right rail
 * blocks (WR).
 *
 * Adjusting a block's enabled/disabled state, weight, or region:
 *
 * $blocks['node']['recent']['status'] = '1';
 * // 1 = Enabled, 0 = Disabled
 *
 * $blocks['node']['recent']['region'] = 'content';
 * // Use one of the region keys provided by the theme
 *
 * $blocks['node']['recent']['weight'] = '10';
 * // The Higher the number, the lower on the region the block will appear
 * // relative to other blocks.
 *
 *
 * To Change the node types that the 'addthis' block appears on:
 *
 * $blocks['addthis']['addthis']['node_types'] = array('article', 'photo_gallery', 'podcast', 'video');
 *
 *
 * To change the roles that a block appears for (in this case, for logged-in users only):
 *
 * $blocks['node']['recent']['roles'] = array(DRUPAL_AUTHENTICATED_RID);
 *
 *
 * To change making a block visible only on certain pages (make the
 * 'Recent content' block visible only nodes:
 *
 * $blocks['node']['recent']['visibility'] = '1'; // This means only on certain pages.
 * $blocks['node']['recent']['pages'] = implode("\n", array('node', 'node/*'));
 *
 */
function custom_block_info_alter(&$blocks, $theme, $code_blocks) {
  // Skip processing on non-default themes.
  if ($theme != variable_get('theme_default', 'bartik')) {
    return;
  }

  /* WL = Widget Left ********************/

  // WL-01 - WL-04 - Featured widgets
  $blocks['views']['widgets-block_1']['node_types'] = array(
    'section_front',
    'home_page'
  );

  // WL-Featured Links
  $blocks['views']['featured_links-block_1']['status'] = 1;
  $blocks['views']['featured_links-block_1']['visibility'] = 0;
  $blocks['views']['featured_links-block_1']['theme'] = 'sitetheme';
  $blocks['views']['featured_links-block_1']['region'] = 'sidebar_first';
  $blocks['views']['featured_links-block_1']['node_types'] = array(
    'secondary_section_front',
    'explore_our_collections',
  );

  /* WR = Widget Right ********************/

  // WR-04 Related Content
  $blocks['views']['f45d17ad4b4acf217d4e605f6a96351e']['status'] = 1;
  $blocks['views']['f45d17ad4b4acf217d4e605f6a96351e']['visibility'] = 0;
  $blocks['views']['f45d17ad4b4acf217d4e605f6a96351e']['theme'] = 'sitetheme';
  $blocks['views']['f45d17ad4b4acf217d4e605f6a96351e']['region'] = 'sidebar_second';
  $blocks['views']['f45d17ad4b4acf217d4e605f6a96351e']['node_types'] = array(
    'article',
    'exhibit',
  );

  // WR-05 Promo  Widgets
  $blocks['views']['wr_05_promo_content-block_1']['status'] = 1;
  $blocks['views']['wr_05_promo_content-block_1']['visibility'] = 1;
  $blocks['views']['wr_05_promo_content-block_1']['theme'] = 'sitetheme';
  $blocks['views']['wr_05_promo_content-block_1']['region'] = 'sidebar_second';
  $blocks['views']['wr_05_promo_content-block_1']['node_types'] = array(
    'article',
    'exhibit',
  );
  $blocks['views']['wr_05_promo_content-block_1']['pages'] = implode("\n", array(
    '*/lists/*',
    'happening/exhibits',
    'happening/exhibits/browse',
    'happening/exhibits/browse/*',
  ));

  // Browse Our Collections (Collections Landing Pages List)
  $blocks['views']['browse_collections-block_4']['status'] = 1;
  $blocks['views']['browse_collections-block_4']['visibility'] = 1;
  $blocks['views']['browse_collections-block_4']['theme'] = 'sitetheme';
  $blocks['views']['browse_collections-block_4']['region'] = 'sidebar_second';
  $blocks['views']['browse_collections-block_4']['pages'] = implode("\n", array('about-our-collections'));

  /* WP - Widget Page ********************/

  // WP-05 FAQs
  $blocks['views']['FAQ-related_questions']['status'] = 1;
  $blocks['views']['FAQ-related_questions']['visibility'] = 1;
  $blocks['views']['FAQ-related_questions']['theme'] = 'sitetheme';
  $blocks['views']['FAQ-related_questions']['region'] = 'content';
  $blocks['views']['FAQ-related_questions']['node_types'] = array(
    'department_division_page',
    'secondary_section_front',
    'section_front',
  );
  $blocks['views']['FAQ-related_questions']['pages'] = implode("\n", array(
    'about',
    'education',
    'explore',
    'explore/*',
    'visit/*',
    'education/*',
    'scientists',
    'support/*',
  ));
  // end WP-05 FAQs

  // WP-06 Add This
  $blocks['addthis']['addthis']['status'] = 1;
  $blocks['addthis']['addthis']['visibility'] = 1;
  $blocks['addthis']['addthis']['theme'] = 'sitetheme';
  $blocks['addthis']['addthis']['region'] = 'highlight';
  $blocks['addthis']['addthis']['node_types'] = array(
    'article',
    'photo_gallery',
    'podcast',
    'secondary_section_front',
    'video',
    'exhibit',
  );
  $blocks['addthis']['addthis']['pages'] = implode("\n", array(
    'educators',
    'event-planners',
    'happening/exhibits/browse',
    'happening/exhibits/browse/*',
    '*/lists/*',
  ));
  // end WP-06 Add This

  // WP-07 - News
  $blocks['views']['news-block_1']['status'] = 1;
  $blocks['views']['news-block_1']['visibility'] = 1;
  $blocks['views']['news-block_1']['theme'] = 'sitetheme';
  $blocks['views']['news-block_1']['region'] = 'content';
  $blocks['views']['news-block_1']['node_types'] = array(
    'department_division_page',
    'explore_our_collections',
    'section_front',
    'secondary_section_front',
  );
  $blocks['views']['news-block_1']['pages'] = implode("\n", array(
    'kids-and-teens',
    'members',
    'scientists',
    'about',
    'explore',
    'education',
    'support',
    '*/list/*',
  ));
  $blocks['views']['news-block_1']['weight'] = '1';
  // end WP-07 - News

  // WP-09 - Featured content (More On Block)
  $blocks['views']['wp_09_featured_content-block_1']['status'] = 1;
  $blocks['views']['wp_09_featured_content-block_1']['visibility'] = 1;
  $blocks['views']['wp_09_featured_content-block_1']['theme'] = 'sitetheme';
  $blocks['views']['wp_09_featured_content-block_1']['region'] = 'content_bottom';
  $blocks['views']['wp_09_featured_content-block_1']['node_types'] = array(
    'article',
    'blog',
    'department_division_page',
    'exhibit',
    'individual_collection',
    'news',
    'photo_gallery',
    'podcast',
    'video',
  );
  $blocks['views']['wp_09_featured_content-block_1']['pages'] = implode("\n", array(
    'happening/exhibits',
    'happening/exhibits/browse',
    'happening/exhibits/browse/*',
  ));

  //WP-10 - HTML (set by client)

  //WP-11 - Related Content Multiple(3)
  $blocks['views']['related_content-block']['status'] = 1;
  $blocks['views']['related_content-block']['visibility'] = 1;
  $blocks['views']['related_content-block']['region'] = 'content';
  $blocks['views']['related_content-block']['node_types'] = array(
    'secondary_section_front',
    'section_front',
    'department_division_page',
    'photo_gallery',
    'podcast',
    'video',
    'exhibit',
  );
  $blocks['views']['related_content-block']['pages'] = implode("\n", array(
    'educators',
    'event-planners',
    'explore',
    'kids-and-teens',
    'members',
    'scientists',
    'explore/*',
    '*',
  ));

  //WP-12 - Profile Blog Quicktabs
  $blocks['quicktabs']['1']['status'] = 1;
  $blocks['quicktabs']['1']['visibility'] = 1;
  $blocks['quicktabs']['1']['theme'] = 'sitetheme';
  $blocks['quicktabs']['1']['region'] = 'content';
  $blocks['quicktabs']['1']['pages'] = implode("\n", array(
    'user/*/blog',
  ));
  // end WP-12 Profile Blog Quicktabs

  // User Profile - Latest blog entries
  $blocks['views']['blog-block_6']['status'] = 1;
  $blocks['views']['blog-block_6']['region'] = 'sidebar_second';
  $blocks['views']['blog-block_6']['visibility'] = 1; // This means only on certain pages.
  $blocks['views']['blog-block_6']['pages'] = implode("\n", array('user/*'));

  // Explore Our Collections - Anthropology - displayed on Explore Our Collections content types
  $blocks['views']['explore_our_collections-block_1']['status'] = 1;
  $blocks['views']['explore_our_collections-block_1']['region'] = 'content';
  $blocks['views']['explore_our_collections-block_1']['visibility'] = 0; // This means only on certain pages.
  $blocks['views']['explore_our_collections-block_1']['pages'] = '';
  $blocks['views']['explore_our_collections-block_1']['node_types'] = array(
    'explore_our_collections',
  );

  // Explore Our Collections - Botany - displayed on Explore Our Collections content types
  $blocks['views']['explore_our_collections-block_2']['status'] = 1;
  $blocks['views']['explore_our_collections-block_2']['region'] = 'content';
  $blocks['views']['explore_our_collections-block_2']['visibility'] = 0; // This means only on certain pages.
  $blocks['views']['explore_our_collections-block_2']['pages'] = '';
  $blocks['views']['explore_our_collections-block_2']['node_types'] = array(
    'explore_our_collections',
  );

  // Explore Our Collections - Geology - displayed on Explore Our Collections content types
  $blocks['views']['explore_our_collections-block_3']['status'] = 1;
  $blocks['views']['explore_our_collections-block_3']['region'] = 'content';
  $blocks['views']['explore_our_collections-block_3']['visibility'] = 0; // This means only on certain pages.
  $blocks['views']['explore_our_collections-block_3']['pages'] = '';
  $blocks['views']['explore_our_collections-block_3']['node_types'] = array(
    'explore_our_collections',
  );

  // Explore Our Collections - Library/Archives - displayed on Explore Our Collections content types
  $blocks['views']['explore_our_collections-block_4']['status'] = 1;
  $blocks['views']['explore_our_collections-block_4']['region'] = 'content';
  $blocks['views']['explore_our_collections-block_4']['visibility'] = 0; // This means only on certain pages.
  $blocks['views']['explore_our_collections-block_4']['pages'] = '';
  $blocks['views']['explore_our_collections-block_4']['node_types'] = array(
    'explore_our_collections',
  );

  // Explore Our Collections - Zoology - displayed on Explore Our Collections content types
  $blocks['views']['explore_our_collections-block_5']['status'] = 1;
  $blocks['views']['explore_our_collections-block_5']['region'] = 'content';
  $blocks['views']['explore_our_collections-block_5']['visibility'] = 0; // This means only on certain pages.
  $blocks['views']['explore_our_collections-block_5']['pages'] = '';
  $blocks['views']['explore_our_collections-block_5']['node_types'] = array(
    'explore_our_collections',
  );

  // Our Collections - displayed on Dept/Div Page only
  $blocks['views']['our_collections-main_block']['status'] = 1;
  $blocks['views']['our_collections-main_block']['region'] = 'content';
  $blocks['views']['our_collections-main_block']['theme'] = 'sitetheme';
  $blocks['views']['our_collections-main_block']['node_types'] = array(
    'department_division_page',
  );

  // Blog block
  $blocks['views']['blog-block_6']['status'] = 1;
  $blocks['views']['blog-block_6']['region'] = 'sidebar_second';
  $blocks['views']['blog-block_6']['theme'] = 'sitetheme';
  $blocks['views']['blog-block_6']['visibility'] = 1;
  $blocks['views']['blog-block_6']['pages'] = implode("\n", array(
    'user/*',
  ));
  // end block config settings

  /** Menu Blocks **/

  // Main Menu (Level 1)
  $blocks['menu_block']['main-menu-level-1']['status'] = 1;
  $blocks['menu_block']['main-menu-level-1']['region'] = 'navigation';
  $blocks['menu_block']['main-menu-level-1']['theme'] = 'sitetheme';
  $blocks['menu_block']['main-menu-level-1']['visibility'] = 1;

  // Utility Menu (Level 1)
  $blocks['menu_block']['utility-menu']['status'] = 1;
  $blocks['menu_block']['utility-menu']['region'] = 'header';
  $blocks['menu_block']['utility-menu']['theme'] = 'sitetheme';
  $blocks['menu_block']['utility-menu']['visibility'] = 1;

  // Copyright Menu (Level 1)
  $blocks['menu_block']['copyright-menu']['status'] = 1;
  $blocks['menu_block']['copyright-menu']['region'] = 'footer';
  $blocks['menu_block']['copyright-menu']['theme'] = 'sitetheme';
  $blocks['menu_block']['copyright-menu']['visibility'] = 1;

  // Main Menu (Level 2-3)
  $blocks['menu_block']['main-menu-level-2']['status'] = 1;
  $blocks['menu_block']['main-menu-level-2']['region'] = 'sidebar_first';
  $blocks['menu_block']['main-menu-level-2']['theme'] = 'sitetheme';
  $blocks['menu_block']['main-menu-level-2']['visibility'] = 1;

  // Footer Main menu (expanded levels 1-2)
  $blocks['menu_block']['main-menu-footer-links']['status'] = 1;
  $blocks['menu_block']['main-menu-footer-links']['region'] = 'footer';
  $blocks['menu_block']['main-menu-footer-links']['theme'] = 'sitetheme';
  $blocks['menu_block']['main-menu-footer-links']['visibility'] = 1;

  // Department tabs
  $dept_menublocks = array(
    'custom-2' => array('path' => 'geology'),
    'custom-5' => array('path' => 'anthropology'),
    'custom-6' => array('path' => 'zoology'),
    'custom-7' => array('path' => 'botany'),
    'pritzkerlab-menu' => array('path' => 'pritzkerlab'),
    'library-menu' => array('path' => 'library'),
  );
  foreach($dept_menublocks as $dept => $attributes) {
    $blocks['menu_block'][$dept]['status'] = 1;
    $blocks['menu_block'][$dept]['region'] = 'content_top';
    $blocks['menu_block'][$dept]['theme'] = 'sitetheme';
    $blocks['menu_block'][$dept]['visibility'] = 1;
    $blocks['menu_block'][$dept]['pages'] = implode("\n", array(
      'explore/department/' . $attributes['path'],
      'explore/department/' . $attributes['path'] . '/research',
      'explore/department/' . $attributes['path'] . '/collections',
      'explore/department/' . $attributes['path'] . '/people',
      'explore/department/' . $attributes['path'] . '/history',
      'explore/department/' . $attributes['path'] . '/policies',
    ));
  }

  /** END Menu Blocks **/

  // Core search block
  $blocks['search']['form']['status'] = 1;
  $blocks['search']['form']['region'] = 'header';
  $blocks['search']['form']['theme'] = 'sitetheme';
  $blocks['search']['form']['weight'] = -40;

  // Apache solr block
  $blocks['apachesolr']['sort']['status'] = 1;
  $blocks['apachesolr']['sort']['region'] = 'content';
  $blocks['apachesolr']['sort']['weight'] = -50;
  $blocks['apachesolr']['sort']['visibility'] = 1;
  $blocks['apachesolr']['sort']['pages'] = implode("\n", array('search', 'search/*'));

  $blocks['apachesolr_search']['currentsearch']['status'] = 1;
  $blocks['apachesolr_search']['currentsearch']['region'] = 'content';
  $blocks['apachesolr_search']['currentsearch']['weight'] = -51;
  $blocks['apachesolr_search']['currentsearch']['visibility'] = 1;
  $blocks['apachesolr_search']['currentsearch']['pages'] = implode("\n", array('search', 'search/*'));

  $blocks['apachesolr_search']['type']['status'] = 1;
  $blocks['apachesolr_search']['type']['region'] = 'sidebar_first';
  $blocks['apachesolr_search']['type']['weight'] = -51;
  $blocks['apachesolr_search']['type']['visibility'] = 1;
  $blocks['apachesolr_search']['type']['pages'] = implode("\n", array('search', 'search/*'));

/* the following blocks need new IDs due to recent changes to apachesolr, i.e.
 * im_taxonomy_field_topic and im_taxonomy_field_audience are incorrect
 * but
 * this configurationshould not yet be added to code since acquia does not
 * support the new schema.xml for apachesolr
*/
/*  $blocks['apachesolr_search']['im_taxonomy_field_topic']['status'] = 1;
  $blocks['apachesolr_search']['im_taxonomy_field_topic']['region'] = 'sidebar_first';
  $blocks['apachesolr_search']['im_taxonomy_field_topic']['weight'] = -51;
  $blocks['apachesolr_search']['im_taxonomy_field_topic']['visibility'] = 1;
  $blocks['apachesolr_search']['im_taxonomy_field_topic']['pages'] = implode("\n", array('search', 'search/*'));

  $blocks['apachesolr_search']['im_taxonomy_field_audience']['status'] = 1;
  $blocks['apachesolr_search']['im_taxonomy_field_audience']['region'] = 'sidebar_first';
  $blocks['apachesolr_search']['im_taxonomy_field_audience']['weight'] = -51;
  $blocks['apachesolr_search']['im_taxonomy_field_audience']['visibility'] = 1;
  $blocks['apachesolr_search']['im_taxonomy_field_audience']['pages'] = implode("\n", array('search', 'search/*'));
*/
  foreach ($blocks as $module => $module_blocks) {
    foreach ($module_blocks as $delta => $block) {
      if (!is_array($block) || !isset($block['module'])) {
        trigger_error(t('Block @delta from module @module does not exist. Fix this in custom_block_info_alter().', array('@module' => $module, '@delta' => $delta)));
        unset($blocks[$module][$delta]);
      }
    }
  }
}
