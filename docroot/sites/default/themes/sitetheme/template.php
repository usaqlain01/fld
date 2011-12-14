<?php
// $Id: template.php,v 1.21 2009/08/12 04:25:15 johnalbin Exp $

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to sitetheme_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: sitetheme_breadcrumb()
 *
 *   where sitetheme is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Implementation of HOOK_theme().
 */
function sitetheme_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  $hooks['sitetheme_mediaelement_audio_dl_link'] = array(
    'variables' => array('attributes' => array(), 'settings' => array()),
  );
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */
/* -- Delete this line if you want to use this function
function sitetheme_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the html template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

function sitetheme_preprocess_html(&$vars, $hook) {
  $bk_class = array("bk1", "bk2", "bk3", "bk4"); // removed bk5 due to extreme whining
  $random_class = array_rand($bk_class);
  $vars['classes_array'][] = $bk_class[$random_class];

  // Add a per node type theme suggestion for the page.
  $router_item = menu_get_item();
  // On the podcast node type we are not displaying the second sidebar so update
  // the classes to reflect just the first sidebar.
  if ($router_item['path'] == 'node/%' && isset($router_item['page_arguments'][0]->type) && $router_item['page_arguments'][0]->type == 'podcast') {
    $vars['classes_array'] = array_diff($vars['classes_array'], array('two-sidebars'));
    $vars['classes_array'][] = 'one-sidebar';
    $vars['classes_array'][] = 'sidebar-first';
  }

  //Check to see if the centerstage region is in use.
  if(!empty($vars['page']['centerstage'])){
    $vars['classes_array'][] = 'centerstage';
  }

  //Check to see if the content_sidebar region is in use.
  if(!empty($vars['page']['content_top'])){
    $vars['classes_array'][] = 'content-top';
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function sitetheme_preprocess_page(&$vars, $hook) {
  //print_r($vars['node']->addthis);
  //$vars['addthis_button'] = t('Lorem ipsum.');

  // Add a per node type theme suggestion for the page.
  if ($node = menu_get_object()) {
    $vars['theme_hook_suggestions'][] = 'page__' . $node->type . '__node__type';
  }

  if (empty($vars['page']['content_top'])) {
    $vars['has_content_top'] = FALSE;
  } else {
    $vars['has_content_top'] = TRUE;
  }
	
/* //renaming 'view' tab
	if ($hook == 'page') {
		if (arg(0) == 'user') {
			$variables['tabs'] = str_replace('View', 'Profile', $variables['tabs']);
		}
		return $variables;
	}
*/
}

/**
 * Implements hook_page_alter().
 */
function sitetheme_page_alter(&$page) {
  // Grab the key of nodes array to find out what the node id is.
  if(!empty($page['content']['system_main']['nodes'])) {
    $nid = key($page['content']['system_main']['nodes']);
  }

  // Remove the sidebar_first from the page array.
  /*if(!empty($nid) && $page['content']['system_main']['nodes'][$nid]['#node']->type == 'explore_our_collections') {
    $page['content_top']['#region'] = 'content_top';
    $page['content_top']['#sorted'] = TRUE;
    $page['content_top']['#theme_wrappers'][] = 'region';
    array_unshift($page['content_top'], $page['content']['system_main']);
    unset($page['content']['system_main']);
  }*/

  if (!empty($page['content']['system_main']['#account'])) {
    $page['content_top']['#region'] = 'content_top';
    $page['content_top']['#sorted'] = TRUE;
    $page['content_top']['#theme_wrappers'][] = 'region';

    $field_shifts = array(
      'field_cvfile',
      'field_introduction',
      'field_year_started',
      'field_topic',
      'field_research_area_tags',
      'field_secondary_dept_division',
      'field_dept_division_tags',
      'field_email',
      'field_position',
      'user_picture',
    );
    foreach ($field_shifts as $field) {
      if (isset($page['content']['system_main'][$field])) {
        array_unshift($page['content_top'], $page['content']['system_main'][$field]);
      }
    }
  }

  // We show the "latest blog entries" block using core block functionality --
  // "show only on paths matching user/*", but we can't at the same time use core block
  // functionality to exclude paths like user/*/blog (etc.) But we can rip it out here...
  if (arg(0) == 'user' && arg(2) && !empty($page['sidebar_second'])) {
    // Remove the "latest blog entries" block.
    unset($page['sidebar_second']['views_blog-block_6']);
    // Remove the sidebar_second region if it is empty.
    if (!count(element_children($page['sidebar_second']))) {
      unset($page['sidebar_second']);
    }
  }
  /* Remove second sidebar for dept pages, explore articles, and traveling exhibits articles*/
  $path = drupal_get_path_alias($_GET['q']);
  $type = '';
  if (isset($page['content']['system_main']['nodes'])) {
    $node = reset($page['content']['system_main']['nodes']);
    $type = $node['#node']->type;
  }
  if(drupal_match_path($path, '*/department/*') || drupal_match_path($path, 'happening/mountmakers*') || ((drupal_match_path($path, 'about/traveling-exhibitions/*') || drupal_match_path($path, 'explore/*')) && $type == 'article')) {
    unset($page['sidebar_second']);
  }
  if(drupal_match_path($path, 'about/traveling-exhibitions')) {
    unset($page['content']['field_events_event-list']);
  }
  
  /* Remove FAQ block from the FAQ page */
  if(drupal_match_path($path, 'visit/faq') || drupal_match_path($path, 'support/auxiliary-groups/*')) {
    unset($page['content']['views_FAQ-related_questions']);
  }
  
  
  /* Remove News feeds from the following sections */
  if(drupal_match_path($path, 'visit*') || drupal_match_path($path, 'happening/*') || drupal_match_path($path, 'support/*') || drupal_match_path($path, 'schools/*') || drupal_match_path($path, 'about/*')) {
    unset($page['content']['views_news-block_1']);
  }  

  // Add backlinks for blog, exhibit and individual collections nodes.
  if (!isset($page['highlight']['back_link']) && $node = menu_get_object()) {
    switch ($node->type) {
      case 'exhibit':
        // The back link for all exhibit nodes is the parent menu link.
        $node = clone $node;
        menu_node_prepare($node);
        if (!empty($node->menu['plid']) && $parent = menu_link_load($node->menu['plid'])) {
          $page['highlight']['back_link']['#href'] = $parent['href'];
          $page['highlight']['back_link']['#title'] = t("< Back to Browse Exhibits");
        }
        break;
      case 'individual_collection':
        // The back link for all individual collection nodes is the parent menu link.
        $node = clone $node;
        menu_node_prepare($node);
        if (!empty($node->menu['plid']) && $parent = menu_link_load($node->menu['plid'])) {
          $page['highlight']['back_link']['#href'] = $parent['href'];
          $page['highlight']['back_link']['#title'] = t("< Back to Collections");
        }
        break;
      case 'blog':
        $account = user_load($node->uid);
        $page['highlight']['back_link']['#href'] = "user/{$account->uid}/blog";
        $page['highlight']['back_link']['#title'] = t("< Back to @username's blog", array('@username' => format_username($account)));
        break;
    }

    if (!empty($page['highlight']['back_link'])) {
      $page['highlight']['back_link'] += array(
        '#type' => 'link',
        '#weight' => -10,
      );
      $page['highlight']['back_link']['#options']['attributes']['class'][] = 'node-' . $node->type . '-back-link';
      $page['highlight']['back_link']['#options']['attributes']['class'][] = 'node-back-link';
    }
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function sitetheme_preprocess_node(&$vars, $hook) {
  // Optionally, run node-type-specific preprocess functions, like
  // sitetheme_preprocess_node_page() or sitetheme_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}

function sitetheme_preprocess_node_photo_gallery(&$vars, $hook) {
  // Adding the scroll bar for the gallery. Should this be attached to the
  // view instead of the node?
  $path = path_to_theme();
  drupal_add_js($path . '/js/jquery.jscrollpane.min.js');
  drupal_add_js(array('customPhotoGalleryEnabled' => TRUE), 'setting');
  drupal_add_css($path . '/css/jquery.jscrollpane.css');
}

/*
 * Add javascipt for correct quote block positioning
 */
function sitetheme_preprocess_node_article(&$vars, $hook) {
  $path = path_to_theme();
  drupal_add_js($path . '/js/quote_script.js');
}
/*
 * Add javascipt for correct quote block positioning
 */
function sitetheme_preprocess_node_blog(&$vars, $hook) {
  $path = path_to_theme();
  drupal_add_js($path . '/js/quote_script.js');
}

/*
 * We are adding the exhibit type as a variable for easier theming.
 */
function sitetheme_preprocess_node_exhibit(&$vars, $hook) {
  $term = taxonomy_term_load($vars['field_exhibition_type_tags']['0']['tid']);
  $vars['exhibit_type'] = strtolower($term->name);
}

function sitetheme_preprocess_node_department_division_page(&$vars, $hook) {
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function sitetheme_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */

function sitetheme_preprocess_block(&$vars, $hook) {
  $block = $vars['block'];
  // Hide ALL menu block titles in the header and nav region
  if (($block->region == 'header' || $block->region == 'footer' || $block->region == 'navigation') && $block->module == 'menu_block') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }

  if ($block->region == 'footer') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }

  // Add a class to the 'Our collections' block view if the current page node
  // has values entered for its department links for themeing.
  if ($block->module == 'views' && $block->delta == 'our_collections-main_block' && $node = menu_get_object()) {
    if (!empty($node->field_department_links) || !empty($node->field_link) || !empty($node->field_profiles)) {
      $vars['classes_array'][] = 'links-present';
    }
    if (!empty($node->field_profiles)) {
      $vars['classes_array'][] = 'people-present';
    }
  }
}

/**
 * Implements hook_block_view_alter().
 */
function sitetheme_block_view_alter(&$data, $block) {
  if ($block->module == 'views' && $block->delta == 'wp_09_featured_content-block_1') {
    $last_word = explode(" ", $data['subject']);
    $last_key = count($last_word) - 1;
    // Compare and replace first word and add markup
    $title = str_replace($last_word[$last_key], '<span class="smaller">' . $last_word[$last_key] . '</span>', $data['subject']);
    $data['subject'] = $title . '<span class="triangle"></span>';
  }
}

/**
 * Implements hook_field_attach_view_alter().
 */
function sitetheme_field_attach_view_alter(&$output, $context) {
  if ($context['entity_type'] == 'node' && $context['entity']->type == 'podcast' && isset($output['field_podcast_file'])) {
    foreach(element_children($output['field_podcast_file']) as $k => $v) {
      // We are switching the theme for just this implementation of the file field.
      // We are adding a download link on the podcast nodes.
      $output['field_podcast_file'][$k]['#theme'] = 'sitetheme_mediaelement_audio_dl_link';
    }
  }

  // The following covers the use case of someone reviewing an unpublished node needing
  // to see what content is being displayed in the inline "Related Multimedia" field.
  if ($context['entity_type'] == 'node' && $context['entity']->type == 'article' && isset($output['field_related_multimedia']) && !empty($output['field_related_multimedia']['#items']) && $context['entity']->status == 0) {
    $unpublished_links = array();
    foreach($output['field_related_multimedia']['#items'] as $k => $v) {
      if ($v['node']->status == 0){
        $unpublished_links[] = t($v['node']->title) . " <span>(unpublished)</span>: " . l(t('Update'), 'node/' . $v['nid']);
      }
    }
    $variables = array(
      'items' => $unpublished_links,
      'type' => 'ul',
      'attributes' => array('class' => 'unpublished-links')
    );
    $markup_list = theme('item_list', $variables);
    $output['field_related_multimedia'][0]['#markup'] .= $markup_list;
  }
}

/**
 * Implements template_preprocess_username().
 */
function sitetheme_preprocess_username(&$variables) {
  $account = $variables['account'];

  $variables['extra'] = '';
  if (empty($account->uid)) {
    $variables['uid'] = 0;
    if (theme_get_setting('toggle_comment_user_verification')) {
      $variables['extra'] = ' (' . t('not verified') . ')';
    }
  }
  else {
    $variables['uid'] = (int) $account->uid;
  }

  // Set the name to a formatted name that is safe for printing and
  // that won't break tables by being too long. Keep an unshortened,
  // unsanitized version, in case other preprocess functions want to implement
  // their own shortening logic or add markup. If they do so, they must ensure
  // that $variables['name'] is safe for printing.
  $name = $variables['name_raw'] = format_username($account);
  if (drupal_strlen($name) > 50) {
    $name = drupal_substr($name, 0, 45) . '...';
  }
  $variables['name'] = check_plain($name);

  $variables['profile_access'] = user_access('access user profiles');
  $variables['link_attributes'] = array();
  // Populate link path and attributes if appropriate.
  if ($variables['uid'] && $variables['profile_access']) {
    // We are linking to a local user.
    $variables['link_attributes'] = array('title' => t('View user profile.'));
    $variables['link_path'] = 'user/' . $variables['uid'];
  }
  elseif (!empty($account->homepage)) {
    // Like the 'class' attribute, the 'rel' attribute can hold a
    // space-separated set of values, so initialize it as an array to make it
    // easier for other preprocess functions to append to it.
    $variables['link_attributes'] = array('rel' => array('nofollow'));
    $variables['link_path'] = $account->homepage;
    $variables['homepage'] = $account->homepage;
  }
  // We do not want the l() function to check_plain() a second time.
  $variables['link_options']['html'] = TRUE;
  // Set a default class.
  $variables['attributes_array'] = array('class' => array('username'));
}

/**
 * The same as the mediaelement audio theme except we add a download link below the player.
 */
function sitetheme_sitetheme_mediaelement_audio_dl_link($vars) {
  $output = theme('mediaelement_audio', $vars);
  $output .= '<div class="podcast-audio-download-link">' . t('<a href="!url">Download</a>', array('!url' => $vars['attributes']['src'])) . '</div>';
  return $output;
}

function sitetheme_menu_link__menu_block__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  // Only add the first word span for top-level links.
  if (empty($variables['element']['#original_link']['p2'])) {
    // Get the first word
    $first_word = explode(" ", $element['#title']);
    // Compare and replace first word and add markup
    $title = str_replace($first_word[0], '<span class="first-word">' . $first_word[0] . '</span>', $element['#title']);
    // Wrap markup
    $element['#title'] = '<span>' . $title . '</span>';
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options'] + array('html' => TRUE));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Remove the clearfix class from all fields.
 */
function sitetheme_preprocess_field(&$variables) {
  $key = array_search('clearfix', $variables['classes_array']);
  unset($variables['classes_array'][$key]);
}

function sitetheme_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

function sitetheme_preprocess_views_view_fields(&$vars, $hook) {
  if($vars['view']->name == 'exhibits_browser') {
    if ($vars['fields']['tid_2']->content == 'Permanent') {
      unset ($vars['fields']['entity_id_2']);
    } else {
      unset ($vars['fields']['tid_2']);
    }
  }
}

function sitetheme_preprocess_views_view_row_rss(&$vars, $hook) {
  /*foreach ($vars as $k => $v) {
    $vars['stuff'][] = $k;
  }*/
  $vars['data'] = $vars['view']->result[$vars['id']-1]->_field_data['nid']['entity'];
}

/**
 * Adjust feed icon
 */
function sitetheme_feed_icon($variables) {
  $text = t('RSS');
  if ($image = theme('image', array('path' => 'sites/default/themes/sitetheme/images/feed.png', 'alt' => $text))) {
    return l($image . t('Subscribe'), $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-icon'), 'title' => $text)));
  }
}

/**
 * Temporary substitute for Meta Tags module.
 *
 * adapted from http://drupal.org/node/1020078
 *
 * @param $path
 *   The path of the page, passed from html.tpl.php
 */
function manualMetaTags($path) {
  // determine the path of the page
  if (drupal_is_front_page()) {

      $description = "From Dinosaurs to DNA, take a journey that spans billions of years at the Field Museum in Chicago.";
      $keywords    = "chicago, Field Museum, field, museum, campus, natural, history, dinosaurs, egypt, evolution, ancient, americas, conservation, research, dna, fossils, animals, family, field trip, vacation ";

      print "<meta name='description' content='".$description."' />\n";
      print "<meta name='keywords' content='".$keywords."' />\n";

  }
 
}