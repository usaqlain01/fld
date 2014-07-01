<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Implements HOOK_theme().
 *
 * We are simply using this hook as a convenient time to do some related work.
 */
function esquif_theme(&$existing, $type, $theme, $path) {
  return array(
    'button__search_box' => array(
      'render element' => 'element',
    ),
  );
}

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function esquif_preprocess_html(&$variables, $hook) {
  $variables['head_conditional_scripts'] = array(
    '#type' => 'html_tag',
    '#tag' => 'script',
    '#attributes' => array(
      'type' => 'text/javascript',
      'src' => base_path() . drupal_get_path('theme', 'esquif') . '/js/head-ltie9.js',
    ),
    '#value' => '',
    '#browsers' => array(
      'IE' => 'lte IE 8',
      '!IE' => FALSE,
    ),
  );

  $variables['foot_conditional_scripts'] = array();
  $variables['foot_conditional_scripts'][] = array(
    '#type' => 'html_tag',
    '#tag' => 'script',
    '#attributes' => array(
      'type' => 'text/javascript',
      'src' => base_path() . drupal_get_path('theme', 'esquif') . '/js/foot-ltie10.js',
    ),
    '#value' => '',
    '#browsers' => array(
      'IE' => 'lte IE 9',
      '!IE' => FALSE,
    ),
  );
  $variables['foot_conditional_scripts'][] = array(
    '#type' => 'html_tag',
    '#tag' => 'script',
    '#attributes' => array(
      'type' => 'text/javascript',
      'src' => base_path() . drupal_get_path('theme', 'esquif') . '/js/foot-ltie9.js',
    ),
    '#value' => '',
    '#browsers' => array(
      'IE' => 'lte IE 8',
      '!IE' => FALSE,
    ),
  );

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}

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
  drupal_add_js($script, array('type' => 'inline', 'scope' => 'header_force'));

  drupal_add_js(drupal_get_path('theme', 'esquif') .'/js/head.js', array('scope' => 'header_force'));
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function esquif_preprocess_node(&$variables, $hook) {

  switch ($variables['view_mode']) {
    case 'banner':
      $variables['theme_hook_suggestion'] = 'node__banner';
      break;
    case 'event':
      $variables['theme_hook_suggestion'] = 'node__event_mode';
  }

  // Optionally, run node-type-specific preprocess functions, like
  // esquif_preprocess_node_page() or esquif_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}

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
function esquif_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  if (strpos($variables['block_html_id'], 'block-panels-mini-header') === 0) {
    $variables['theme_hook_suggestions'][] = 'block__no_wrapper';
  }
}


/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function esquif_preprocess_file_entity(&$variables, $hook) {

  switch ($variables['view_mode']) {
    case 'banner_5x2':
    case 'banner_5x3':
      $variables['theme_hook_suggestion'] = 'file_entity__banner';
      break;
  }
}

function esquif_preprocess(&$variables) {
  $variables['path_to_theme'] = drupal_get_path('theme', 'esquif');
}

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
  $text = '<span class="logo__name is--visHidden" itemprop="name">';
  $text .= (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Drupal')) : '');
  $text .= '</span>';
  $text .= '<img class="logo__image" itemprop="logo" alt="The Field Museum" src="'.base_path().path_to_theme().'/images/logos/field-logo.svg" width="225px" height="81px" />';
  $options = array(
    'attributes' => array(
      'class' => array('logo__link'),
      'itemprop' => 'url',
      'id' => 'logo',
      'rel' => 'home',
      'title' => t('Home'),
    ),
    'html' => true,
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
    $value['title'] = '<span class="navGlobal__label" itemprop="name">'. check_plain($value['title']) .'</span>';
    $value['attributes'] = array(
      'itemprop' => 'url',
    );
    $value['html'] = TRUE;
    $embedded_variables['links'][$key] = $value;
  }

  // Append class attribute values to primary menu links. The key of the array is used
  // for the li element class attribute.
  $links = array();
  foreach ($variables['links'] as $key => $value) {
    $key .= ' navMain__item navMain__primary';
    $value['title'] = '<span class="navMain__label" itemprop="name">'. check_plain($value['title']) .'</span>';
    $value['attributes'] = array(
      'itemprop' => 'url',
    );
    $value['html'] = TRUE;
    $links[$key] = $value;
  }
  $variables['links'] = $links;

  // Merge the branding and global nav into the main menu.
  $variables['links'] = array(
    'navMain__item navMain__brand' => array(
      'title' => '<h1 class="logo" itemscope itemtype="http://schema.org/Organization">'. $home_page_link .'</h1>',
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
  if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__footer') {
    foreach (element_children($variables['content']) as $child) {
      $variables['content'][$child]['#attributes']['class'][] = 'navFooter__item';
    }
  }

  if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__section') {
    foreach (element_children($variables['content']) as $child) {
      $variables['content'][$child]['#attributes']['class'][] = 'navLevel1__item';
    }
  }
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__footer($variables) {
  return '<ul class="navFooter__list menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__section($variables) {
  return '<ul class="navLevel1 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Breadcrumb theme
 *
 * Overridden from Zen's to add more class attributes.
 *
 * @param $variables
 * @return string
 */
function esquif_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $output = '';

  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('zen_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('zen_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = filter_xss_admin(theme_get_setting('zen_breadcrumb_separator'));
      $trailing_separator = $title = '';
      if (theme_get_setting('zen_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $breadcrumb[] = check_plain($item['title']);
        }
        else {
          $breadcrumb[] = drupal_get_title();
        }
      }
      elseif (theme_get_setting('zen_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users.
      if (empty($variables['title'])) {
        $variables['title'] = t('You are here');
      }
      // Unless overridden by a preprocess function, make the heading invisible.
      if (!isset($variables['title_attributes_array']['class'])) {
        $variables['title_attributes_array']['class'][] = 'element-invisible';
      }

      // Build the breadcrumb trail.
      $output = '<nav class="breadcrumb" role="navigation" itemprop="breadcrumb">';
      $output .= '<h2' . drupal_attributes($variables['title_attributes_array']) . '>' . $variables['title'] . '</h2>';
      $output .= '<ol class="breadcrumb__list"><li class="breadcrumb__item">' . implode($breadcrumb_separator . '</li><li class="breadcrumb__item">', $breadcrumb) . $trailing_separator . '</li></ol>';
      $output .= '</nav>';
    }
  }

  return $output;
}

/**
 * Add additional class attribute to breadcrumb links.
 *
 * @param $active_trail
 * @param $item
 */
function esquif_menu_breadcrumb_alter(&$active_trail, $item) {
  foreach ($active_trail as &$trail_item) {
    $trail_item['localized_options']['attributes']['class'] = 'breadcrumb__link';
  }
}

/**
 * Returns HTML for a "more" link, like those used in blocks.
 *
 * @param $variables
 *   An associative array containing:
 *   - url: The URL of the main page.
 *   - title: A descriptive verb for the link, like 'Read more'.
 */
function esquif_more_link($variables) {
  $options = array(
    'attributes' => array(
      'title' => $variables['title'],
      'class' => 'link--more',
    )
  );
  return l(t('More'), $variables['url'], $options);
}

/**
 * Override the theme of the submit button on the search box.
 *
 * @param $variables
 * @return string
 */
function esquif_button__search_box($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<button' . drupal_attributes($element['#attributes']) . '>'. $element['#children'] .'</button>';
}

/**
 * Modify the search box.
 *
 * @param $form
 * @param $form_state
 */
function esquif_form_search_block_form_alter(&$form, &$form_state) {
  $form['search_block_form']['#attributes']['class'][] = 'search__input';
  $form['search_block_form']['#attributes']['placeholder'] = 'Search fieldmuseum.org';
  $form['search_block_form']['#size'] = 22;
  $form['actions']['submit']['#attributes']['class'][] = 'search__button';
  $form['actions']['submit']['#theme_wrappers'][0] = 'button__search_box';
  $form['actions']['submit'][] = array(
    '#markup' => '<svg class="icon icon--search search__icon" viewBox="0 0 500 500"><use xlink:href="#search"></use></svg><span class="is--visHidden">Search</span>',
  );
}

function esquif_js_alter(&$js) {
  foreach ($js as &$script) {
    if ($script['scope'] == 'header') {
      $script['scope'] = 'footer';
    }
    if ($script['scope'] == 'header_force') {
      $script['scope'] = 'header';
    }
  }
}

function esquif_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pagination__gap'),
          'data' => '<span class="pagination__unlinked">…</span>',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pagination__item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pagination__active'),
            'data' => '<span class="pagination__unlinked">'. $i .'</span>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pagination__item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pagination__gap'),
          'data' => '<span class="pagination__unlinked">…</span>',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pagination__item', 'pagination__next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pagination__item', 'pagination__last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list__pager', array(
      'items' => $items,
      'type' => 'ol',
      'attributes' => array('class' => array('pagination__list')),
    ));
  }
}

function esquif_item_list__pager($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '<nav class="pagination" role="navigation">';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      if ($i == 1) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items) {
        $attributes['class'][] = 'last';
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  $output .= '</nav>';
  return $output;
}

/**
 * Returns HTML for the "first page" link in a query pager.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The name (or image) of the link.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *
 * @ingroup themeable
 */
function esquif_pager_first($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '';

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $output = theme('pager_link', array('text' => $text, 'page_new' => pager_load_array(0, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
  }

  return $output;
}

/**
 * Returns HTML for the "previous page" link in a query pager.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The name (or image) of the link.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - interval: The number of pages to move backward when the link is clicked.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *
 * @ingroup themeable
 */
function esquif_pager_previous($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  $attributes = array(
    'class' => array('pagination__link')
  );

  global $pager_page_array;
  $output = '';

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $page_new = pager_load_array($pager_page_array[$element] - $interval, $element, $pager_page_array);

    // If the previous page is the first page, mark the link as such.
    if ($page_new[$element] == 0) {
      $output = theme('pager_first', array('text' => $text, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
    }
    // The previous page is not the first page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
    }
  }

  return $output;
}

/**
 * Returns HTML for the "next page" link in a query pager.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The name (or image) of the link.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - interval: The number of pages to move forward when the link is clicked.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *
 * @ingroup themeable
 */
function esquif_pager_next($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  $attributes = array(
    'class' => array('pagination__link')
  );

  global $pager_page_array, $pager_total;
  $output = '';

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $page_new = pager_load_array($pager_page_array[$element] + $interval, $element, $pager_page_array);
    // If the next page is the last page, mark the link as such.
    if ($page_new[$element] == ($pager_total[$element] - 1)) {
      $output = theme('pager_last', array('text' => $text, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
    }
    // The next page is not the last page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
    }
  }

  return $output;
}

/**
 * Returns HTML for the "last page" link in query pager.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The name (or image) of the link.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *
 * @ingroup themeable
 */
function esquif_pager_last($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = array(
    'class' => array('pagination__link')
  );

  global $pager_page_array, $pager_total;
  $output = '';

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $output = theme('pager_link', array('text' => $text, 'page_new' => pager_load_array($pager_total[$element] - 1, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes));
  }

  return $output;
}

/**
 * Takes file context from mini panel for use as background image of header.
 *
 * @param $variables
 * @param $hook
 */
function esquif_preprocess_esquif_canoe(&$variables, $hook) {
  /** @var panels_display $display */
  $display = $variables['display'];

  ctools_include('context');
  $requiredcontexts = array(new ctools_context_required(t('Background image'), 'entity:file'));
  if ($contexts = ctools_context_filter($display->context, $requiredcontexts)) {
    $context = reset($contexts);
    $file = $context->data;
    $variables['hero_image'] = $file;
  }
}
