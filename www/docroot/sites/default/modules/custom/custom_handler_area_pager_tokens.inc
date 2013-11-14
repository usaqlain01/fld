<?php

/**
 * @file
 * An area handler that provides some pager tokens.
 */

class custom_handler_area_pager_tokens extends views_handler_area_text {
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $tokens = array_keys($this->get_render_tokens());

    // We may have some arguments, just for kicks.
    foreach ($this->view->display_handler->get_handlers('argument') as $argument => $handler) {
      $i++;
      $tokens[] = "%$i == " . t('@group: @title argument title', array('@group' => $handler->definition['group'], '@title' => $handler->definition['title']));
      $tokens[] = "!$i == " . t('@group: @title argument input', array('@group' => $handler->definition['group'], '@title' => $handler->definition['title']));
    }

    $form['token_details'] = array(
      '#markup' => '<p>' . t('The following tokens are available in this text area:') . '</p>'
                  . theme('item_list', array('items' => $tokens))
                  . ($i ? '<p>' . t('Note that argument tokens (%1 and !1) will be visible in raw form if no argument is present.') . '</p>' : ''),
    );
  }

  function render_textarea($value, $format) {
    $output = parent::render_textarea($value, $format);
    $output = strtr($output, $this->get_render_tokens());
    return $output;
  }

  function get_render_tokens($item) {
    $tokens = array();
    if (!empty($this->view->build_info['substitutions'])) {
      $tokens = $this->view->build_info['substitutions'];
    }

    $pager = (isset($this->view->query->_pager) ? $this->view->query->_pager : $this->view->query->pager);
    $tokens['[pager_total_items]'] = $pager->total_items;
    $tokens['[pager_total_pages]'] = !empty($pager->options['items_per_page']) ? ceil($pager->total_items / $pager->options['items_per_page']) : 1;
    $tokens['[pager_first_result_index]'] = $pager->current_page * $pager->options['items_per_page'] + 1;
    $tokens['[pager_last_result_index]'] = !empty($pager->options['items_per_page']) ? $pager->current_page * $pager->options['items_per_page'] + $pager->options['items_per_page'] : $pager->total_items;
    $tokens['[pager_current_page]'] = $pager->current_page + 1;

    return $tokens;
  }
}
