<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function esquif_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  esquif_preprocess_html($variables, $hook);
  esquif_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function esquif_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function esquif_preprocess_page(&$variables, $hook) {
  $script = <<<EOT
(function(d) {
  var config = {
    kitId: 'fke5kfl',
    scriptTimeout: 3000
  },
  h=d.documentElement,t=setTimeout(function(){h.className=h.className.replace(/\bwf-loading\b/g,"")+" wf-inactive";},config.scriptTimeout),tk=d.createElement("script"),f=false,s=d.getElementsByTagName("script")[0],a;h.className+=" wf-loading";tk.src='//use.typekit.net/'+config.kitId+'.js';tk.async=true;tk.onload=tk.onreadystatechange=function(){a=this.readyState;if(f||a&&a!="complete"&&a!="loaded")return;f=true;clearTimeout(t);try{Typekit.load(config)}catch(e){}};s.parentNode.insertBefore(tk,s)
})(document);
EOT;
  drupal_add_js($script, array('type' => 'inline'));
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function esquif_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // esquif_preprocess_node_page() or esquif_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function esquif_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function esquif_preprocess_region(&$variables, $hook) {

  if ($variables['region'] == 'header') {
    $variables['classes_array'][] = 'pageHeader';
    $variables['classes_array'][] = 'l--2up';
  }

  if ($variables['region'] == 'footer') {
    $variables['classes_array'][] = 'pageFooter';
  }
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function esquif_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

/**
 * Theme function for the embedded global nav inside site nav
 *
 * @param $variables
 * @return string
 */
function esquif_links__global($variables) {
  $links = array();
  foreach ($variables['links'] as $key => $value) {
    $key .= ' navGlobal__item';
    $links[$key] = $value;
  }
  $variables['links'] = $links;
  return theme('links', $variables);
}

/**
 * Theme function for site navigation.
 *
 * @param $variables
 * @return string
 * @see theme_links
 * @see template_preprocess_page
 */
function esquif_links__system_main_menu($variables) {

  // Create the branding link
  $text = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Drupal')) : '');
  $options = array(
    'attributes' => array(
      'class' => array('logo__link'),
      'id' => 'logo',
      'rel' => 'home',
      'title' => t('Home'),
    )
  );
  $home_page_link = l($text, NULL, $options);

  // Embed a global navigation menu inside the main menu.
  $embedded_variables = array(
    'links' => array(),
    'attributes' => array(
      'class' => 'navGlobal',
    ),
  );
  foreach (menu_navigation_links('menu-header-menu') as $key => $value) {
    $key .= ' navGlobal__item';
    $embedded_variables['links'][$key] = $value;
  }

  // Append class attribute values to primary menu links. The key of the array is used
  // for the li element class attribute.
  $links = array();
  foreach ($variables['links'] as $key => $value) {
    $key .= ' navMain__item navMain__primary';
    $links[$key] = $value;
  }
  $variables['links'] = $links;

  // Merge the branding and global nav into the main menu.
  $variables['links'] = array(
    'navMain__item navMain__brand' => array(
      'title' => '<h1 class="logo">'. $home_page_link .'</h1>',
      'html' => TRUE,
      'submenu' => TRUE,
    ),
    'navMain__item navMain__global' => array(
      'title' => theme('links__global', $embedded_variables),
      'html' => true,
      'submenu' => TRUE,
    )
  ) + $variables['links'];

  /**
   * @see theme_links
   */
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
        && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        if (isset($link['submenu']) && (TRUE === $link['submenu']))  {
          $output .= $link['title'];
        }
        else {
          $span_attributes = '';
          if (isset($link['attributes'])) {
            $span_attributes = drupal_attributes($link['attributes']);
          }
          $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
        }
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }
  return $output;
}

/**
 * @param $variables
 * @param $hook
 */
function esquif_preprocess_menu_block_wrapper(&$variables, $hook) {
  if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu') {
    foreach (element_children($variables['content']) as $child) {
      $variables['content'][$child]['#attributes']['class'][] = 'navFooter__item';
    }
  }
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_1($variables) {
  return '<ul class="navFooter__list menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_2($variables) {
  return esquif_menu_tree__menu_block__ctools_main_menu_1($variables);
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_3($variables) {
  return esquif_menu_tree__menu_block__ctools_main_menu_1($variables);
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_4($variables) {
  return esquif_menu_tree__menu_block__ctools_main_menu_1($variables);
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_5($variables) {
  return esquif_menu_tree__menu_block__ctools_main_menu_1($variables);
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__ctools_main_menu_6($variables) {
  return esquif_menu_tree__menu_block__ctools_main_menu_1($variables);
}
