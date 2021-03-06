<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */

include_once 'includes/template.pager.inc';

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

  // Add all favicons and app icons.
  $links = array(

    // Browser favicons - favicon.ico has a cacheable redirect configured for now.
    array(
      'rel' => 'icon',
      'href' => base_path() . path_to_theme() .'/images/fav/favicon.ico',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'icon',
      'href' => base_path() . path_to_theme() .'/images/fav/favicon-16.png',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'icon',
      'href' => base_path() . path_to_theme() .'/images/fav/favicon-32.png',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'icon',
      'href' => base_path() . path_to_theme() .'/images/fav/favicon-96.png',
      'type' => 'image/png',
    ),

    // iOS Favicons - This is only a handful of the sizes supported through the iOS ecosystem.
    // Other sizes will backfill with the closest size in this list.
    array(
      'rel' => 'apple-touch-icon-precomposed',
      'href' => base_path() . path_to_theme() .'/images/fav/apple-touch-icon-precomposed.png',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'apple-touch-icon-precomposed',
      'href' => base_path() . path_to_theme() .'/images/fav/apple-touch-icon-72x72-precomposed.png',
      'sizes' => '72x72',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'apple-touch-icon-precomposed',
      'href' => base_path() . path_to_theme() .'/images/fav/apple-touch-icon-120x120-precomposed.png',
      'sizes' => '120x120',
      'type' => 'image/png',
    ),
    array(
      'rel' => 'apple-touch-icon-precomposed',
      'href' => base_path() . path_to_theme() .'/images/fav/apple-touch-icon-152x152-precomposed.png',
      'sizes' => '152x152',
      'type' => 'image/png',
    ),

    // Opera Coast Favicon - 228x228
    array(
      'rel' => 'icon',
      'href' => base_path() . path_to_theme() .'/images/fav/favicon-coast.png',
      'sizes' => '228x228',
      'type' => 'image/png',
    ),
  );
  foreach ($links as $attributes) {
    drupal_add_html_head_link($attributes);
  }

  // Windows 8 Pinboard Tiles - 144x144
  $elements = array(
    'msapplication_tileimage' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'msapplication-TileImage',
        'content' => base_path() . path_to_theme() .'/images/fav/ms-pinned.png',
      ),
    ),
    'msapplication_tilecolor' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'msapplication-TileColor',
        'content' => '#84a726',
      ),
    ),
    'application_name' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'application-name',
        'content' => 'The Field Museum',
      ),
    ),
  );
  foreach ($elements as $key => $data) {
    drupal_add_html_head($data, $key);
  }

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

  /** @see zen_preprocess_html */
  // Use the menu item page callback to add template suggestions
  $menu_item = menu_get_item();
  if ($menu_item) {
    switch ($menu_item['page_callback']) {
      case 'views_page':
        // Is this a Views page?
        $variables['theme_hook_suggestions'][] = 'page__views';
        break;
      case 'page_manager_blog':
      case 'page_manager_blog_user':
      case 'page_manager_contact_site':
      case 'page_manager_contact_user':
      case 'page_manager_node_add':
      case 'page_manager_node_edit':
      case 'page_manager_node_view_page':
      case 'page_manager_page_execute':
      case 'page_manager_poll':
      case 'page_manager_search_page':
      case 'page_manager_term_view_page':
      case 'page_manager_user_edit_page':
      case 'page_manager_user_view_page':
        // Is this a Panels page?
        $variables['theme_hook_suggestions'][] = 'page__panels';
        break;

      case 'search_view':
        ctools_class_add('t--s');
        break;
    }
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
function esquif_preprocess_node(&$variables, $hook) {
  $node = $variables['node'];

  switch ($variables['view_mode']) {
    case 'banner':
      $variables['classes_array'][] = 'banner';
      $variables['content']['field_banner_image'][0]['file']['#item']['attributes']['class'][] = 'banner__image';
      $variables['content_attributes_array']['class'][] = 'banner__description';
      $variables['theme_hook_suggestions'][] = 'node__banner';

      // To avoid unclear/repetitive text inside links, remove alt tag
      // text and set role to presentation to let screen readers know
      // the element is decorative per WCAG recommentations:
      // https://www.w3.org/WAI/tutorials/images/decorative/
      $variables['content']['field_banner_image'][0]['file']['#item']['attributes']['role'] = 'presentation';
      $variables['content']['field_banner_image'][0]['file']['#item']['alt'] = '';
      
      break;

    case 'promo':

      array_splice($variables['theme_hook_suggestions'], 1, 0, array('node__'. $variables['view_mode']));
      $variables['classes_array'] = array_diff($variables['classes_array'], array($node->type));
      $variables['title_attributes_array']['class'][] = 'promo__title';
      $variables['content_attributes_array']['class'][] = 'promo__link';
      $variables['content_attributes_array']['href'] = $variables['node_url'];
      $variables['content_attributes_array']['property'] = 'url';

      if (isset($variables['content']['field_image'])) {

        // To avoid unclear/repetitive text inside links, remove alt tag
        // text and set role to presentation to let screen readers know
        // the element is decorative per WCAG recommentations:
        // https://www.w3.org/WAI/tutorials/images/decorative/
        $variables['content']['field_image'][0]['file']['#item']['attributes']['role'] = 'presentation';
        $variables['content']['field_image'][0]['file']['#item']['alt'] = '';

        if ('image_formatter' == $variables['content']['field_image'][0]['file']['#theme']) {
          $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'promo__image';
        }
        else if ('image_style' == $variables['content']['field_image'][0]['file']['#theme']) {
          $variables['content']['field_image'][0]['file']['#attributes']['class'][] = 'promo__image';
        }
      }

      if ($node->type == 'media_gallery') {
        $variables['content']['media_gallery_file'][0]['file']['#item']['attributes']['class'][] = 'promo__image';
      }

      $links = array();

      if ((!isset($node->view) || empty($node->view->args)) && !arg(2)) {
        foreach (array('field_audience', 'field_grade_level', 'field_exhibit_type') as $field_name) {
          if ($items = field_get_items('node', $node, $field_name)) {
            switch ($field_name) {
              case 'field_audience':
                $href = 'at-the-field/programs';
                break;
              case 'field_grade_level':
                $href = 'educators/field-trip-programs';
                break;
              case 'field_exhibit_type':
                $href = 'at-the-field/exhibitions';
                break;
            }

            // Collect every possible entity attached to any of the entities.
            $target_ids = array();
            foreach ($items as $item) {
              if (isset($item['target_id'])) {
                $target_ids[] = $item['target_id'];
              }
            }

            if ($target_ids) {
              $entities = entity_load('taxonomy_term', $target_ids);
            }
            else {
              $entities = array();
            }

            foreach ($entities as $entity) {
              list($id,,) = entity_extract_ids('taxonomy_term', $entity);
              $links['promo__category list--inline__item taxonomy_term-'. $id] = array(
                'title' => $entity->name,
                'href' => $href .'/'. $entity->tid,
              );
            }
          }

          // Show ticketed indicator where applicable.
          if ($items = field_get_items('node', $node, 'field_ticketed')) {
            foreach ($items as $item) {
              if ($item['value'] == 1) {
                $links['promo__category list--inline__item ticketed'] = array(
                  'title' => 'Ticketed',
                  'href' => 'at-the-field/exhibitions/ticketed',
                );
              }
            }
          }
        }

        $variables['content']['links'] = array(
          '#theme' => 'links__promo__category',
          '#links' => $links,
          '#attributes' => array('class' => array('promo__categories', 'list--inline')),
        );
      }

      break;
    case 'summary':
      $variables['theme_hook_suggestions'][] = 'node__summary';
      $variables['title_attributes_array']['class'][] = 'summary__title';
      if ('image_formatter' == $variables['content']['field_image'][0]['file']['#theme']) {
        $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'summary__image';
      }
      else if ('image_style' == $variables['content']['field_image'][0]['file']['#theme']) {
        $variables['content']['field_image'][0]['file']['#attributes']['class'][] = 'summary__image';
      }
      break;
    case 'teaser':
      break;
    default:
      $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'image--primary';
      array_splice($variables['theme_hook_suggestions'], 1, 0, array('node__'. $variables['type'] .'__'. $variables['view_mode']));
      break;
  }

  // Unsightly hack that avoids adding summary to wrapper of embedded nodes on home page.
  if (!in_array('node__panel__summary__naked', $variables['theme_hook_suggestions'])) {
    $variables['classes_array'][] = $variables['view_mode'];
  }

  // Optionally, run node-type-specific preprocess functions, like
  // esquif_preprocess_node_page() or esquif_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $node->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}

function esquif_preprocess_node_event(&$variables, $hook) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'list_item') {
    $variables['classes_array'][] = 'eventsList__item';
    $variables['title_attributes_array']['class'][] = 'eventsList__heading';
  }
  if (isset($variables['view']) && $variables['view']->name == 'program_events') {
    $variables['theme_hook_suggestions'][] = 'node__event__list_item__single';
  }

  if ($variables['view_mode'] == 'teaser') {

    $node_title_stripped = strip_tags($node->title);
    $variables['content']['links']['node']['#links']['node-readmore']['title'] = t('Event Details<span class="element-invisible"> about @title</span>', array('@title' => $node_title_stripped));
  }
}

function esquif_preprocess_node_faq(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'answer';
    $variables['title_attributes_array']['class'][] = 'answer__question';

  }
}

function esquif_preprocess_node_blog(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'excerpt';
    $variables['title_attributes_array']['class'][] = 'excerpt__title';
    $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'excerpt__image';
  }
  else if ($variables['view_mode'] == 'full') {
    $variables['classes_array'][] = 'article';
    $variables['title_attributes_array']['class'][] = 'article__title';
  }


  _esquif_preprocess_node_blog($variables, $hook);
}

function _esquif_preprocess_node_blog(&$variables, $hook) {
  $items = field_get_items('node', $variables['node'], 'field_topic');
  if ($items) {

    // Remove author on Science Newsflash topic blogs.
    foreach ($items as $item) {
      $parents = taxonomy_get_parents($item['target_id']);
      if (isset($parents[1216])) {
        // @todo hide the name by setting a flag in the template variables.
        $variables['name'] = '';
        break;
      }
    }

    // On index pages, remove current topic name.
    // todo
  }
}

function esquif_preprocess_node_podcast(&$variables, $hook) {
  esquif_preprocess_node_blog($variables, $hook);
}

function esquif_preprocess_node_video(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'excerpt';
    $variables['title_attributes_array']['class'][] = 'excerpt__title';
    $variables['content']['field_video'][0]['file']['#attributes']['class'][] = 'excerpt__image';
  }
  else if ($variables['view_mode'] == 'full') {
    $variables['classes_array'][] = 'article';
    $variables['title_attributes_array']['class'][] = 'article__title';
  }

  _esquif_preprocess_node_blog($variables, $hook);
}

function esquif_preprocess_node_collection(&$variables, $hook) {
  $node = $variables['node'];

  if ($variables['view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'collection';
    $variables['title_attributes_array']['class'][] = 'collection__title';
    $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'collection__image';

    $node_title_stripped = strip_tags($node->title);
    $variables['content']['links']['node']['#links']['node-readmore']['title'] = t('Learn more<span class="element-invisible"> about @title</span>', array('@title' => $node_title_stripped));
  }
}

function esquif_preprocess_node_learning_resource(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['title_attributes_array']['class'][] = 'resource__title';
  }
}

function esquif_preprocess_node_department(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['classes_array'][] = 'excerpt';
    $variables['title_attributes_array']['class'][] = 'excerpt__title';
    $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'excerpt__image';
  }
}

function esquif_preprocess_node_media_gallery(&$variables, $hook) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['content']['media_gallery_file'][0]['file']['#item']['attributes']['class'][] = 'excerpt__image';
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
  if ($variables['region'] == 'page_top' || $variables['region'] == 'page_bottom' || $variables['region'] == 'highlighted') {
    array_unshift($variables['theme_hook_suggestions'], 'region__no_wrapper');
  }
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

  if (strpos($variables['block_html_id'], 'block-panels-mini-highlighted') === 0) {
    $variables['theme_hook_suggestions'][] = 'block__no_wrapper';
  }
}

function esquif_preprocess_taxonomy_term(&$variables, $hook) {
  switch ($variables['view_mode']) {
    case 'banner':
      $variables['classes_array'][] = 'banner';
      $variables['content']['field_banner_image'][0]['file']['#item']['attributes']['class'][] = 'banner__image';
      $variables['content_attributes_array']['class'][] = 'banner__description';
      $variables['theme_hook_suggestions'][] = 'taxonomy_term__banner';

      // To avoid unclear/repetitive text inside links, remove alt tag
      // text and set role to presentation to let screen readers know
      // the element is decorative per WCAG recommentations:
      // https://www.w3.org/WAI/tutorials/images/decorative/
      $variables['content']['field_banner_image'][0]['file']['#item']['attributes']['role'] = 'presentation';
      $variables['content']['field_banner_image'][0]['file']['#item']['alt'] = '';

      break;
    case 'promo':
      $variables['theme_hook_suggestions'][] = 'taxonomy_term__promo';
      $variables['classes_array'][] = 'promo';
      $variables['title_attributes_array']['class'][] = 'promo__title';
      $variables['term_url'] = url('science/blog/'. drupal_strtolower(str_replace(' ', '-', $variables['name'])));
      $variables['content_attributes_array']['class'][] = 'promo__link';
      $variables['content_attributes_array']['href'] = $variables['term_url'];
      $variables['content_attributes_array']['property'] = 'url';
      $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'promo__image';
      
      // To avoid unclear/repetitive text inside links, remove alt tag
      // text and set role to presentation to let screen readers know
      // the element is decorative per WCAG recommentations:
      // https://www.w3.org/WAI/tutorials/images/decorative/
      $variables['content']['field_image'][0]['file']['#item']['attributes']['role'] = 'presentation';
      $variables['content']['field_image'][0]['file']['#item']['alt'] = '';

      break;
    case 'summary':
      $variables['theme_hook_suggestions'][] = 'taxonomy_term__summary';
      $variables['classes_array'][] = 'summary';
      $variables['title_attributes_array']['class'][] = 'summary__title';
      $variables['term_url'] = url('science/blog/'. drupal_strtolower(str_replace(' ', '-', $variables['name'])));
      $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'summary__image';
      break;
  }
}

/**
 *
 */
function esquif_preprocess_field(&$variables, $hook) {
  $element = $variables['element'];

  // Add specific suggestions that can override the default implementation.
  $variables['theme_hook_suggestions'][] = 'field__' . $element['#view_mode'] . '__' . $element['#field_name'] . '__' . $element['#bundle'];
}

function esquif_field__event__field_date__event($variables) {
  $output = '';

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  return $output;
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
    case 'primary_2x1':
      $variables['theme_hook_suggestion'] = 'file_entity__naked';
      break;
    case 'embed':
      $variables['theme_hook_suggestion'] = 'file_entity__embed';
      $variables['classes_array'][] = 'article__image';
      if (isset($variables['override']['attributes']['align'])) {
        $variables['classes_array'][] = 'article__image--'. $variables['override']['attributes']['align'];
      }
      break;
    case 'resource':
      $variables['theme_hook_suggestion'] = 'file_entity__resource';
      $variables['classes_array'][] = 'resource';
      $variables['title_attributes_array']['class'][] = 'resource__title';
      $variables['title_attributes_array']['class'] = array_diff($variables['title_attributes_array']['class'], array('element-invisible'));
      $variables['content_attributes_array']['class'][] = 'resource__description';
      $variables['file_url'] = file_entity_access('view', $variables['file']) ? $variables['file_url'] : file_create_url($variables['file']->uri);
      break;
  }
}

/**
 * Implement hook_preprocess().
 *
 * @param $variables
 * @param $hook
 */
function esquif_preprocess(&$variables, $hook) {
  $variables['path_to_theme'] = drupal_get_path('theme', 'esquif');

  // Add page layout template code to the body class attribute.
  if (strpos($hook, 'esquif_') === 0) {
    // Cut off 'esquif_'
    $template = substr($hook, 7);

    $matches = array();
    preg_match('/([l|c|a|s])([0-9]+)?([a-z])?/i', $template, $matches);

    // Ignore templates that are not named for Table XI wireframes
    if ($matches[0] == $template) {

      // Add the template family to the class attribute.
      if ($matches[1] == 'a' || $matches[1] == 's') {
        ctools_class_add('t--'. $matches[1]);
      }
      else {
        if (isset($matches[2])) {
          ctools_class_add('t--'. $matches[1] . $matches[2]);
        }

        // When the template is a child of a template family, separate the modifier with a hyphen.
        if (isset($matches[3])) {
          ctools_class_add('t--'. $matches[1] . $matches[2] .'-'. $matches[3]);
        }
      }
    }
  }
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
  $text .= '<img class="logo__image" itemprop="logo" alt="" src="'.base_path().path_to_theme().'/images/logos/field-logo.svg" width="225px" height="81px" />';
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
    $value['attributes']['itemprop'] = 'url';
    $value['attributes']['class'][] = 'button';
    $value['html'] = TRUE;
    $embedded_variables['links'][$key] = _esquif_header_menu_link($value);
  }

  // Append class attribute values to primary menu links. The key of the array is used
  // for the li element class attribute.
  $links = array();
  foreach ($variables['links'] as $key => $value) {
    $key .= ' navMain__item navMain__primary';
    $value['title'] = '<span class="navMain__label" itemprop="name">'. check_plain($value['title']) .'</span>';
    $value['attributes']['itemprop'] = 'url';
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
      'title' => '<p class="nav__hours">Open 9am – 5pm every day except Christmas</p>'. theme('links__global', $embedded_variables),
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
  if (isset($variables['theme_hook_suggestion'])) {
    if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__footer') {
      foreach (element_children($variables['content']) as $child) {
        $variables['content'][$child]['#attributes']['class'][] = 'navFooter__item';
      }
    }

    if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__section') {
      _esquif_preprocess_menu_block_wrapper__section($variables['content']);
    }

    if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__focus') {
      foreach (element_children($variables['content']) as $child) {
        $variables['content'][$child]['#attributes']['class'][] = 'navList__item';
      }
    }

    if ($variables['theme_hook_suggestion'] == 'menu_block_wrapper__main_menu__content') {
      foreach (element_children($variables['content']) as $child) {
        $variables['content'][$child]['#attributes']['class'][] = 'contentLinks__item';
      }
    }
  }
}

/**
 * Helper to add theme suggestion to menu child items recursively.
 *
 * @param $variables
 */
function _esquif_preprocess_menu_block_wrapper__section(&$variables) {
  foreach (element_children($variables) as $child) {
    $depth = $variables[$child]['#original_link']['depth'] - 1;
    $variables[$child]['#attributes']['class'][] = 'navLevel'. $depth .'__item';
    if (!empty($variables[$child]['#below'])) {
      _esquif_preprocess_menu_block_wrapper__section($variables[$child]['#below']);
    }
  }
}

/**
 * Theme override for footer menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__footer($variables) {
  return '<ul class="navFooter__list menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__2($variables) {
  return '<ul class="navLevel1 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__3($variables) {
  return '<ul class="navLevel2 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__4($variables) {
  return '<ul class="navLevel3 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__5($variables) {
  return '<ul class="navLevel4 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__6($variables) {
  return '<ul class="navLevel5 menu">' . $variables['tree'] . '</ul>';
}


/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__7($variables) {
  return '<ul class="navLevel6 menu">' . $variables['tree'] . '</ul>';
}


/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__8($variables) {
  return '<ul class="navLevel7 menu">' . $variables['tree'] . '</ul>';
}


/**
 * Theme override for section menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__section__9($variables) {
  return '<ul class="navLevel8 menu">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for focus menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__focus($variables) {
  return '<ul class="navList">' . $variables['tree'] . '</ul>';
}

/**
 * Theme override for content menu.
 *
 * @param $variables
 * @return string
 */
function esquif_menu_tree__menu_block__main_menu__content($variables) {
  return '<ul class="contentLinks">' . $variables['tree'] . '</ul>';
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
      $output .= '<ol class="breadcrumb__list">';
      $output .= '<li class="breadcrumb__item">' . implode($breadcrumb_separator . '</li><li class="breadcrumb__item">', array_slice($breadcrumb, 0, -1)) . $trailing_separator . '</li>';
      $output .= '<li class="breadcrumb__current breadcrumb__item">' . implode('', array_slice($breadcrumb, -1, 1)) . $trailing_separator . '</li>';
      $output .= '</ol>';
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
    $trail_item['localized_options']['attributes']['class'] = array('breadcrumb__link');
  }
}

/**
 * Returns HTML for a "more" link, like those used in blocks.
 *
 * @param $variables
 *   An associative array containing:
 *   - url: The URL of the main page.
 *   - title: A descriptive verb for the link, like 'Read more'.
 * @return string
 */
function esquif_more_link($variables) {
  $options = array(
    'attributes' => array(
      'title' => $variables['title'],
      'class' => array('link--more'),
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
  $form['#attributes']['class'][] = 'search';
  $form['#attributes']['class'] = array_diff($form['#attributes']['class'], array('google-cse'));
  $form['#attributes']['role'] = 'search';
  $form['search_block_form']['#attributes']['class'][] = 'search__input';
  $form['search_block_form']['#attributes']['placeholder'] = 'Search fieldmuseum.org';
  $form['search_block_form']['#size'] = 22;

  // Unwrap the search button.
  unset($form['actions']['#type']);
  $form['actions']['submit']['#attributes']['class'][] = 'search__button';
  $form['actions']['submit']['#theme_wrappers'][0] = 'button__search_box';
  $form['actions']['submit'][] = array(
    '#markup' => '<svg class="icon icon--search search__icon" viewBox="0 0 500 500"><use xlink:href="#search"></use></svg><span class="is--visHidden">Search</span>',
  );
}

/**
 * Implement hook_js_alter().
 *
 * This forces all header-scope (default scope) javascript to the footer but
 * allows a scope of 'header_force' to be in the header scope.
 *
 * @param $js
 */
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

function esquif_preprocess_pager(&$variables) {
  global $pager_total;

  $element = $variables['element'];

  $variables['quantity'] = 5;

  // Override the labels for the first and last pager elements.
  $variables['tags'][0] = '1';
  $variables['tags'][4] = $pager_total[$element];
}

/**
 * @param $variables
 * @return string
 */
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
 * Takes file context from mini panel for use as background image of header.
 *
 * @param $variables
 * @param $hook
 */
function esquif_preprocess_esquif_canoe(&$variables, $hook) {
  // This is a clumsy way to do this.
  if (arg(1) || drupal_is_front_page()) {
    $variables['hero_classes'] .= ' hero--large';
  }
}

/**
 * @see theme_links
 * @param array $variables
 * @return string
 */
function esquif_links__node__sharing($variables) {
  $variables['attributes']['class'][] = 'socialShare';
  foreach ($variables['links'] as $key => $value) {
    unset($variables['links'][$key]);
    $key .= ' socialShare__item';
    $variables['links'][$key] = $value;
  }
  return theme_links($variables);
}

/**
 * @see theme_form
 * @param $variables
 * @return string
 */
function esquif_form($variables) {
  $element = $variables['element'];
  if (isset($element['#action'])) {
    $element['#attributes']['action'] = drupal_strip_dangerous_protocols($element['#action']);
  }
  element_set_attributes($element, array('method', 'id'));
  if (empty($element['#attributes']['accept-charset'])) {
    $element['#attributes']['accept-charset'] = "UTF-8";
  }
  // Anonymous DIV to satisfy XHTML compliance.
  return '<form' . drupal_attributes($element['#attributes']) . '>' . $element['#children'] . '</form>';
}

/**
 * @param $link
 * @return mixed
 */
function _esquif_header_menu_link($link) {
  switch ($link['href']) {
    case 'node/6601':
      $link['attributes']['class'][] = 'link--directions';
      $link['title'] .= '<span class="button__leader">';
      $link['title'] .= '<svg class="icon icon--car" viewBox="0 0 500 500"><use xlink:href="#car"></use></svg>';
      $link['title'] .= '<svg class="icon icon--train" viewBox="0 0 500 500"><use xlink:href="#train"></use></svg>';
      $link['title'] .= '<svg class="icon icon--bus" viewBox="0 0 500 500"><use xlink:href="#bus"></use></svg>';
      $link['title'] .= '</span>';
      break;
    case 'tickets':
      $link['title'] .= '<span class="button__leader">';
      $link['title'] .= '<svg class="icon icon--ticket-2" viewBox="0 0 500 500"><use xlink:href="#ticket-2"></use></svg>';
      $link['title'] .= '</span>';
      break;
  }
  return $link;
}

/**
 *
 */

/**
 * Template preprocess function for displaying a single date.
 */
function esquif_preprocess_date_display_single(&$variables) {
  $variables['attributes']['class'][] = 'date-display-single';
  $variables['attributes']['class'][] = 'eventsList__time';
}

/**
 * Returns HTML for a date element formatted as a single date.
 */
function esquif_date_display_single($variables) {
  $date = $variables['date'];
  $timezone = $variables['timezone'];
  $attributes = $variables['attributes'];

  // Wrap the result with the attributes.
  $output = '<time' . drupal_attributes($attributes) . '>' . $date . $timezone . '</time>';

  if ($variables['add_microdata']) {
    $output .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
  }

  return $output;
}

function esquif_menu_link__menu_block__main_menu__section($variables) {
  $element = &$variables['element'];
  foreach ($element['#attributes']['class'] as $class) {
    if (0 === strpos($class, 'navLevel')) {
      $prefix = substr($class, 0, strpos($class, '__'));
      $element['#localized_options']['attributes']['class'][] = $prefix .'__link';

      // Remove active class attributes from menu list item.
      $element['#attributes']['class'] = array_diff($element['#attributes']['class'], array('active', 'is-active', 'is-active-trail'));
    }
  }

  return theme_menu_link($variables);
}

/**
 * Preprocess function to overcome the way views replaces __ with --.
 *
 * @param $variables
 * @param $hook
 */
function esquif_preprocess_views_view_list(&$variables, $hook) {
  $rows = $variables['rows'];
  if ('categoryLinks' == $variables['class']) {
    foreach (array_keys($rows) as $id) {
      $variables['classes'][$id][] = 'categoryLinks__item';
      $variables['classes_array'][$id] = isset($variables['classes'][$id]) ? implode(' ', $variables['classes'][$id]) : '';
    }
  }

  if ('contentLinks--full' == $variables['class']) {
    foreach (array_keys($rows) as $id) {
      $variables['classes'][$id][] = 'contentLinks__item';
      $variables['classes_array'][$id] = isset($variables['classes'][$id]) ? implode(' ', $variables['classes'][$id]) : '';
    }
  }

  if ('navFaqs__list' == $variables['class']) {
    foreach (array_keys($rows) as $id) {
      $variables['classes'][$id][] = 'navFaqs__item';
      $variables['classes_array'][$id] = isset($variables['classes'][$id]) ? implode(' ', $variables['classes'][$id]) : '';
    }
  }
}

function esquif_preprocess_fieldable_panels_pane(&$variables) {
  $variables['theme_hook_suggestions'][] = 'fieldable_panels_pane__' . $variables['elements']['#element']->bundle .'__'. $variables['elements']['#view_mode'];

  switch ($variables['elements']['#element']->bundle) {
    case 'banner_description_and_list':
      $variables['title_attributes_array']['class'][] = 'summary__title';
      $variables['content']['field_image'][0]['file']['#item']['attributes']['class'][] = 'summary__image';
      break;
  }
}

function esquif_node_view_alter(&$build, $type) {
  if ('teaser' == $build['#view_mode'] || 'summary' == $build['#view_mode']) {
    $build['links']['node']['#links']['node-readmore']['attributes']['class'] = 'link--more';
  }
}

function esquif_taxonomy_term_view_alter(&$build, $type) {
  if ('promo' == $build['#view_mode'] || 'banner' == $build['#view_mode']) {
    unset($build['description']['#prefix']);
    unset($build['description']['#suffix']);
  }
}

function esquif_field__field_image($variables) {
  $output = '';
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  return $output;
}

function esquif_entity_view_mode_alter(&$view_mode, $context) {
  // For nodes, change the view mode when it is teaser.
  if (drupal_is_front_page() && $context['entity_type'] == 'file') {
    $view_mode = 'banner_5x2';
  }
}

function esquif_field__field_topic($variables) {
  $output = '';

  // Render the items.
  $items = array();
  foreach ($variables['items'] as $delta => $item) {
    $items[] = drupal_render($item);
  }
  $output .= implode(', ', $items);

  return $output;
}

function esquif_field__field_link__banner_description_and_list($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'contentLinks__item field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<li class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }

  return $output;
}

function esquif_preprocess_username(&$variables, $hook) {
  $uid = $variables['uid'];
  if ($uid && is_numeric($uid) && ($account = user_load($uid))) {
    $profile = profile2_load_by_user($account, 'main');
    if ($profile) {
      $variables['name'] = check_plain($profile->label);
      $variables['name_raw'] = $profile->label;

      $variables['link_path'] = url('about/staff/profile/'. $profile->pid, array('absolute' => TRUE));
    }
  }
}

function esquif_menu_link__menu_block__main_menu__section__science_blog($variables) {
  $element = &$variables['element'];
  $output = '';
  if (in_array('is-active-trail', $element['#attributes']['class'])) {
    ctools_include('content');
    $block = ctools_content_render('panels_mini', 'filter_menu', array());
    $element['#below'] = array(
      '#markup' => $block->content,
    );
  }
  return esquif_menu_link__menu_block__main_menu__section($variables);
}

function esquif_form_element($variables) {
  $element = &$variables['element'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form__field', 'form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '';

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'wrap':
      if (!empty($prefix)) {
        $variables['#field_prefix'] = $prefix;
      }
      if (!empty($suffix)) {
        $variables['#field_suffix'] = $suffix;
      }
      $output .= ' ' . theme('form_element_label__'. $element['#type'], $variables)  . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="field__hint">' . $element['#description'] . "</div>\n";
  }

  return $output;
}

/**
 * Replacement for theme_form_element().
 */
function esquif_webform_element($variables) {
  // Ensure defaults.
  $variables['element'] += array(
    '#title_display' => 'before',
  );

  $element = $variables['element'];

  // All elements using this for display only are given the "display" type.
  if (isset($element['#format']) && $element['#format'] == 'html') {
    $type = 'display';
  }
  else {
    $type = (isset($element['#type']) && !in_array($element['#type'], array('markup', 'textfield', 'webform_email', 'webform_number'))) ? $element['#type'] : $element['#webform_component']['type'];
  }

  // Convert the parents array into a string, excluding the "submitted" wrapper.
  $nested_level = $element['#parents'][0] == 'submitted' ? 1 : 0;
  $parents = str_replace('_', '-', implode('--', array_slice($element['#parents'], $nested_level)));

  $wrapper_classes = array(
    'form__field',
    'form-item',
    'webform-component',
    'webform-component-' . $type,
  );
  if (isset($element['#title_display']) && strcmp($element['#title_display'], 'inline') === 0) {
    $wrapper_classes[] = 'webform-container-inline';
  }
  $output = '<div class="' . implode(' ', $wrapper_classes) . '" id="webform-component-' . $parents . '">' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . _webform_filter_xss($element['#field_prefix']) . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . _webform_filter_xss($element['#field_suffix']) . '</span>' : '';

  switch ($element['#title_display']) {
    case 'inline':
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'wrap':
      if (!empty($prefix)) {
        $variables['#field_prefix'] = $prefix;
      }
      if (!empty($suffix)) {
        $variables['#field_suffix'] = $suffix;
      }
      $output .= ' ' . theme('form_element_label__'. $element['#type'], $variables)  . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= ' <div class="field__hint">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

function esquif_preprocess_radio(&$variables, $hook) {
  $variables['element']['#attributes']['class'][] = 'js--icheck';
}

function esquif_preprocess_form_element_label(&$variables, $hook) {
  $variables['theme_hook_suggestions'][] = $hook .'__'. $variables['element']['#type'];
}

function esquif_preprocess_form_element(&$variables, $hook) {
  if (isset($variables['element']['#theme']) && ($variables['element']['#theme'] == 'radio' || $variables['element']['#theme'] == 'checkbox')) {
    $variables['element']['#title_display'] = 'wrap';
  }
  $variables['theme_hook_suggestions'][] = $hook .'__'. $variables['element']['#type'];
}

function esquif_form_element_label__radio($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = array('option');
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = array('element-invisible');
  }

  $attributes['class'][] = 'radio';
  $attributes['class'][] = 'boolean';

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $element['#children'] .' '. $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

function esquif_radios($variables) {
  $element = $variables['element'];
  $attributes = array();
  if (isset($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  $attributes['class'] = 'form-radios';
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] .= ' ' . implode(' ', $element['#attributes']['class']);
  }
  if (isset($element['#attributes']['title'])) {
    $attributes['title'] = $element['#attributes']['title'];
  }
  return (!empty($element['#children']) ? $element['#children'] : '');
}

function esquif_preprocess_checkbox(&$variables, $hook) {
  $variables['element']['#attributes']['class'][] = 'js--icheck';

}

function esquif_form_element_label__checkbox($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = array('option');
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = array('element-invisible');
  }

  $attributes['class'][] = 'checkbox';
  $attributes['class'][] = 'boolean';

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $element['#children'] .' '. $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

function esquif_checkboxes($variables) {
  $element = $variables['element'];
  $attributes = array();
  if (isset($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  $attributes['class'][] = 'form-checkboxes';
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = array_merge($attributes['class'], $element['#attributes']['class']);
  }
  if (isset($element['#attributes']['title'])) {
    $attributes['title'] = $element['#attributes']['title'];
  }
  return (!empty($element['#children']) ? $element['#children'] : '');
}

function esquif_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));
  _esquif_rewrite_form_set_class($element);

  $output = '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  return $output;
}

function esquif_preprocess_select(&$variables, $hook) {
  $variables['element']['#attributes']['class'][] = 'js--selectMenu';
}

function esquif_select($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select'));
  _esquif_rewrite_form_set_class($element);

  return '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
}

function esquif_form_required_marker($variables) {
  // This is also used in the installer, pre-database setup.
  $t = get_t();
  $attributes = array(
    'title' => $t('This field is required.'),
  );
  return '<span' . drupal_attributes($attributes) . '>'. $t('(required)') .'</span>';
}

function esquif_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));
  _form_set_class($element, array('form-text'));
  _esquif_rewrite_form_set_class($element);

  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  return $output . $extra;
}

function _esquif_rewrite_form_set_class(&$element) {
  if (isset($element['#parents']) && form_get_error($element) !== NULL && !empty($element['#validated'])) {
    $element['#attributes']['class'] = array_diff($element['#attributes']['class'], array('error'));
    $element['#attributes']['class'][] = 'is--error';
  }
}

function esquif_item_list__calendar($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];
  $attributes['class'][] = 'navTarget__list';

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '<nav class="navTarget" id="top">';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $attributes['class'][] = 'navTarget__item';
      $attributes['title'] = 'Go to this section';
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

function esquif_item_list__press_releases($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];
  $attributes['class'][] = 'navTarget__list';

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '<nav class="navTarget" id="top">';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $attributes['class'][] = 'navTarget__item';
      $attributes['title'] = 'Go to this section';
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

function esquif_field__field_person__traveling_exhibit($variables) {
  $node = $variables['element']['#object'];
  $output = '';
  $items = field_get_items('node', $node, 'field_person');
  if ($items) {
    $output .= '<ul class="list--unstyled">';
    foreach ($items as $item) {
      $profile = profile2_by_uid_load($item['target_id'], 'main');
      $element = profile2_view($profile, 'list_item');
      $output .= drupal_render($element);
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * @param $variables
 * @return string
 * @todo change this into a field formatter.
 */
function esquif_field__field_specification($variables) {
  $node = $variables['element']['#object'];
  $output = '';
  $items = field_get_items('node', $node, 'field_specification');
  if ($items) {
    $output .= '<dl class="info--list">';
    foreach ($items as $item) {
      $list = explode("\n", $item['value']);
      $list = array_map('trim', $list);
      $list = array_filter($list, 'strlen');
      foreach ($list as $row) {
        $pair = explode(':', $row, 2);
        $output .= '<dt>'. check_plain($pair[0]) .'</dt>';
        $output .= '<dd>'. check_plain($pair[1]) .'</dd>';
      }
    }
    $output .= '</dl>';
  }
  return $output;
}

function esquif_field__field_link__traveling_exhibit($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<ul class="list--unstyled field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<li class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  return $output;
}

/**
 * Override to render node links (i.e. read more) without unordered list.
 *
 * @param $variables
 * @return string
 */
function esquif_links__node__node($variables) {
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

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
    }
  }

  return $output;
}

function esquif_field__field_ticket_link__exhibit($variables) {
  $output = '';

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $item['#element']['attributes']['class'] = 'button--buy';
    $item['#element']['title'] = '<span class="button__leader"> <svg class="icon icon--ticket-1 " viewbox="0 0 500 500"> <use xlink:href="#ticket-1"></use> </svg> </span> Buy Tickets';
    $item['#element']['html'] = TRUE;
    $output .= drupal_render($item);
  }

  return $output;
}

function esquif_preprocess_user_profile(&$variables, $hook) {
  $element = $variables['elements'];
  $account = $element['#account'];
  $variables['theme_hook_suggestions'][] = 'user_profile__' . $element['#view_mode'];
  $profile = profile2_load_by_user($account, 'main');
  if ($profile) {
    $uri = entity_uri('profile2', $profile);
    $variables['url'] = url('about/staff/profile/'. $profile->pid);
  }
}

function esquif_field__field_link__department($variables) {
  return esquif_field__field_link__banner_description_and_list($variables);
}

function esquif_field___custom_display__field_image__department($variables) {
  $variables['items'][0]['file']['#item']['attributes']['class'][] = 'image--primary';
  $output = '';

  foreach ($variables['items'] as $delta => $item) {
    $output .=  drupal_render($item);
  }

  return $output;
}

function esquif_field___custom_display__field_image__topic($variables) {
  $variables['items'][0]['file']['#item']['attributes']['class'][] = 'image--primary';
  $output = '';

  foreach ($variables['items'] as $delta => $item) {
    $output .=  drupal_render($item);
  }

  return $output;
}

function esquif_field__media_gallery_file__media_gallery(&$variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  return $output;
}

function esquif_element_info_alter(&$type) {
  array_unshift($type['fieldset']['#process'], 'esquif_form_process_fieldset');
}

function esquif_form_process_fieldset(&$element, &$form_state) {
  $element['#collapsible'] = FALSE;
  $element['#collapsed'] = FALSE;
  return $element;
}

function esquif_field__profile2__main__wrapped($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3' . $variables['title_attributes'] . '>' . $variables['label'] . '</h3>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}