<?php

/**
 * @file
 * An area handler that provides some pager tokens.
 */

class custom_handler_area_pager extends views_handler_area {
  function render($empty = FALSE) {
    // Render the pager once and store it, because we may want to place it in multiple areas.
    if (!isset($this->view->display_handler->rendered_pager)) {
      $this->view->display_handler->rendered_pager = $this->view->query->render_pager();

      // Move pager data so that Views can't render it again.
      $this->view->query->_pager = $this->view->query->pager;
      unset($this->view->query->pager);
    }

    return $this->view->display_handler->rendered_pager;
  }
}
