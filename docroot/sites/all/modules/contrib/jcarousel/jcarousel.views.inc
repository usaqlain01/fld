<?php
// $Id$

/**
 * @file
 * Views integration for Carousel module.
 */

/**
 * Implements hook_views_plugin().
 */
function jcarousel_views_plugins() {
  $plugins['style']['jcarousel'] = array(
    'title' => t('jCarousel'),
    'help' => t('Display rows in a carousel via jCarousel.'),
    'handler' => 'jcarousel_style_plugin',
    'theme' => 'jcarousel_view',
    'uses row plugin' => TRUE,
    'uses options' => TRUE,
    'uses grouping' => FALSE,
    'type' => 'normal',
  );
  return $plugins;
}

/**
 * Menu callback; Handle AJAX Views requests for carousels.
 */
function jcarousel_views_ajax() {
  if (isset($_REQUEST['view_name']) && isset($_REQUEST['view_display_id'])) {
    $name = $_REQUEST['view_name'];
    $display_id = $_REQUEST['view_display_id'];
    $args = isset($_REQUEST['view_args']) && $_REQUEST['view_args'] !== '' ? explode('/', $_REQUEST['view_args']) : array();
    $path = isset($_REQUEST['view_path']) ? $_REQUEST['view_path'] : NULL;
    $dom_id = isset($_REQUEST['view_dom_id']) ? intval($_REQUEST['view_dom_id']) : NULL;
    $first = isset($_REQUEST['first']) ? intval($_REQUEST['first']) : NULL;
    $last = isset($_REQUEST['last']) ? intval($_REQUEST['last']) : NULL;

    $commands = array();

    // Load the view.
    if ($view = views_get_view($name)) {
      if ($view->access($display_id)) {

        // Fix 'q' for paging.
        if (!empty($path)) {
          $_GET['q'] = $path;
        }

        // Disable the pager, render between the start and end values.
        $view->use_pager = FALSE;
        $view->offset = $first;
        $view->items_per_page = $last - $first;

        $view->display[$display_id]->handler->set_option('pager', array(
          'type' => 'some',
          'options' => array(
            'items_per_page' => $last - $first,
            'offset' => $first,
          ),
        ));

        // Reuse the same DOM id so it matches that in Drupal.settings.
        $view->dom_id = $dom_id;

        $errors = $view->validate();
        if ($errors === TRUE) {
          if (!empty($view->js_settings)) {
            $commands[] = ajax_command_settings($view->js_settings);
          }
          $display = '';
          if ($messages = theme('status_messages')) {
            $display = '<div class="views-messages">' . $messages . '</div>';
          }

          $display .= $view->preview($display_id, $args);
          if ($display) {
            $commands[] = ajax_command_html('.view-dom-id-' . $dom_id, $display);
          }
        }
        else {
          foreach ($errors as $error) {
            drupal_set_message($error, 'error');
          }
        }

      }
    }

    print ajax_render($commands);
    ajax_footer();
  }
}

/**
 * Adds necessary CSS and JS for Views-based carousels.
 */
function jcarousel_views_add($view, $display_id = NULL) {
  if (!isset($display_id)) {
    $display_id = empty($view->current_display) ? 'default' : $view->current_display;
  }

  // Save the settings for the carousel, these will be used by the JavaScript.
  foreach ($view->style_options as $key => $option) {
    if ($option) {
      $settings[$key] = is_numeric($option) ? (int) $option : $option;
    }
  }

  if ($view->use_ajax) {
    $settings['ajax'] = TRUE;

    // Get the total number of items in this view.
    $use_pager = $view->pager['use_pager'];
    $view->pager['use_pager'] = TRUE;
    $view->build($display_id);

    $settings['size'] = $view->build_info['count_query']->countQuery()->execute();
    $view->pager['use_pager'] = $use_pager;

    // If starting in the middle of a view, initialize the carousel at that
    // position. Strangely the carousel must pre-load empty LI items all the way
    // up until the active item, making this inefficient for large lists.
    if ($view->pager['use_pager'] && $view->current_page) {
      // TODO: Pagers and carousels do not work well together. jCarousel should
      // give items the class "jcarousel-item-[offset]", but instead it always
      // starts with "1", making it impossible to define a prepopulated list
      // as the middle of an AJAX view.
      $settings['start'] = ($view->current_page * $view->items_per_page) + ($view->offset + 1);
      $settings['offset'] = ($view->current_page * $view->items_per_page) + ($view->offset + 1);
    }
    elseif ($view->offset) {
      $settings['start'] = $view->offset + 1;
      $settings['offset'] = $view->offset + 1;
    }
  }

  $identifier = drupal_clean_css_identifier('jcarousel_view__' . $view->name . '__' . $display_id);
  return jcarousel_add($identifier, $settings);
}

function template_preprocess_jcarousel_view(&$variables) {
  $view = $variables['view'];
  $display_id = empty($view->current_display) ? 'default' : $view->current_display;

  // Add necessary JavaScript and CSS.
  $settings = jcarousel_views_add($view, $display_id);

  // Build the list of classes for the carousel.
  $options = $view->style_options;
  $variables['jcarousel_classes_array'] = array(
    'jcarousel',
    drupal_clean_css_identifier('jcarousel-view--' . $view->name . '--' . $display_id),
  );
  if ($options['skin']) {
    $variables['jcarousel_classes_array'][] = 'jcarousel-skin-' . $options['skin'];
  }
  $variables['jcarousel_classes'] = implode(' ', $variables['jcarousel_classes_array']);

  // Give each item a class to identify where in the carousel it belongs.
  foreach ($variables['rows'] as $id => $row) {
    $variables['row_classes'][$id] = 'jcarousel-item-' . ($id + 1 + $view->offset);
  }
}
