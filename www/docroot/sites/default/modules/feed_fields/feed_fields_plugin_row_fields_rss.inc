<?php

/**
 * A Views row plugin that supports outputting fields in feed displays.
 */
class feed_fields_plugin_row_fields_rss extends views_plugin_row_fields {
  protected $row_index;

  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
    $this->row_index = 0;
  }
  
  function option_definition() {
    $options = parent::option_definition();
    $options['rss_elements'] = array('default' => array());
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['rss_elements'] = array(
      '#type' => 'fieldset',
      '#title' => t('RSS Elements'),
      '#tree' => TRUE,
      '#weight' => -99,
    );

    $fields = array('' => '- none -');
    foreach ($this->display->handler->handlers['field'] as $field_id => $field) {
      $fields[$field_id] = $field->definition['title'] . ($field->options['label'] ? ' (' . $field->options['label'] . ')' : '');
    }

    $rss_options = $this->options['rss_elements'];
    $form['rss_elements']['title'] = array(
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => $fields,
      '#default_value' => (isset($rss_options['title']) ? $rss_options['title'] : ''),
    );
    $form['rss_elements']['link'] = array(
      '#type' => 'select',
      '#title' => t('Link'),
      '#options' => $fields,
      '#default_value' => (isset($rss_options['link']) ? $rss_options['link'] : ''),
    );
    $form['rss_elements']['creator'] = array(
      '#type' => 'select',
      '#title' => t('Creator'),
      '#options' => $fields,
      '#default_value' => (isset($rss_options['creator']) ? $rss_options['creator'] : ''),
    );
    $form['rss_elements']['publish_date'] = array(
      '#type' => 'select',
      '#title' => t('Publish Date'),
      '#options' => $fields,
      '#default_value' => (isset($rss_options['publish_date']) ? $rss_options['publish_date'] : ''),
    );
    $form['rss_elements']['guid'] = array(
      '#type' => 'select',
      '#title' => t('GUID'),
      '#options' => $fields,
      '#default_value' => (isset($rss_options['guid']) ? $rss_options['guid'] : ''),
    );
  }

  function options_submit(&$form, &$form_state) {
    parent::options_submit($form, $form_state);
    $form_state['values']['row_options']['rss_elements'] = array_filter($form_state['values']['row_options']['rss_elements']);
  }

  /**
   * Emulates views_style_plugin::render_fields(), except that it only renders one row at a time.
   * This is necessary because usually the style plugin maintains the $view->row_index value, so
   * that it's available when ::render_fields() is called, but the feed style plugin does not.
   */
  function render_row_fields($row) {
    // Reference the style object.
    $style = $this->view->style_plugin;

    // Render each field.
    foreach (array_keys($style->view->field) as $id) {
      $style->rendered_fields[$this->row_index][$id] = $style->view->field[$id]->theme($row);
    }

    // Render tokens, if necessary.
    if ($style->uses_tokens()) {
      $style->row_tokens[$count] = $style->view->field[$id]->get_render_tokens(array());
    }
  }

  function render($row) {
    // Set the row index on the View from our own row index.
    // @see feed_fields_plugin_row_fields_rss::render_row_fields()
    $this->view->row_index = $this->row_index;
    // Render the row's fields.
    $this->render_row_fields($row);

    // Render the row content using the standard 'unformatted' theming.
    $this->definition['theme'] = 'views_view_fields';
    $item = (object) array(
      'description' => parent::render($row),
      'title' => '',
      'link' => '',
      'elements' => array(),
    );

    // Clean up the View's row index, since we can't expect it later anwyay.
    unset($this->view->row_index);
    // Increment our own row index, so it's ready for the next time ::render() is called.
    $this->row_index++;

    $rss_options = $this->options['rss_elements'];
    $fields = $this->display->handler->handlers['field'];
    foreach ($rss_options as $rss_element => $key) {
      if (isset($fields[$key])) {
        switch ($rss_element) {
          case 'title':
          case 'link':
            // Guess: fields used for RSS item titles and links might use advanced rendering.
            $item->$rss_element = $fields[$key]->theme($row);
            break;
          case 'publish_date':
            // Guess: fields used for RSS item dates will be unix timestamps and already present in
            // the row values.
            $item->elements[] = array(
              'key' => 'pubDate',
              'value' => gmdate('r', $row->{$fields[$key]->field_alias}),
            );
            break;
          case 'creator':
            // Guess: fields used for RSS item creators might use advanced rendering.
            $item->elements[] = array(
              'key' => 'dc:creator',
              'value' => $fields[$key]->theme($row),
              'namespace' => array('xmlns:dc' => 'http://purl.org/dc/elements/1.1/'),
            );
            break;
          case 'guid':
            // Guess: fields used for RSS item globally unique ids might use advanced rendering.
            $item->elements[] = array(
              'key' => 'guid',
              'value' => $fields[$key]->theme($row),
              'attributes' => array('isPermaLink' => 'false'),
            );
            break;
        }
      }
    }

    // Return the row rendered as an RSS item.
    $this->definition['theme'] = 'views_view_row_rss';
    return theme($this->theme_functions(),
      array(
        'view' => $this->view,
        'options' => $this->options,
        'row' => $item
      ));
  }
}
