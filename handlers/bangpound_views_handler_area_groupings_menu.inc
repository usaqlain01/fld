<?php

/**
 * @file
 * Definition of bangpound_views_handler_area_groupings_menu.
 */

/**
 * Views area handler to display some configurable result summary.
 *
 * @ingroup views_area_handlers
 */
class bangpound_views_handler_area_groupings_menu extends views_handler_area {

  /**
   * Find out the information to render.
   */
  function render($empty = FALSE) {
    if ($this->view->style_plugin->uses_row_plugin() && empty($this->view->style_plugin->row_plugin)) {
      debug('views_plugin_style_default: Missing row plugin');
      return;
    }

    // Group the rows according to the grouping instructions, if specified.
    $sets = $this->view->style_plugin->render_grouping(
      $this->view->result,
      $this->view->style_plugin->options['grouping'],
      TRUE
    );

    $items = array();
    foreach ($sets as $month => $set) {
      $options = array(
        'external' => true,
        'fragment' => drupal_html_id(trim($month)),
        'attributes' => array(
          'class' => array('navTarget__link')
        ),
      );
      $items[] = l($month, null, $options);
    }

    return theme('item_list__'. $this->view->name, array('items' => $items));
  }
}
