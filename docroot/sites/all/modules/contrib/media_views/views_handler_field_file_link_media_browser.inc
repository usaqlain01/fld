<?php

/**
 * Field handler to present a link node edit.
 */
class views_handler_field_file_link_media_browser extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['fid'] = 'fid';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
    parent::options_form($form, $form_state);
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $value = $this->get_value($values, 'fid');
    return $this->render_link($this->sanitize_value($value), $values);
  }

  function render_link($data, $values) {
    $file = new stdClass();
    $file->fid = $this->get_value($values, 'fid');

    $text = !empty($this->options['text']) ? $this->options['text'] : t('Select this file');

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = 'media/browser';
    $this->options['alter']['query']['render'] = 'media-popup';
    $this->options['alter']['query']['fid'] = $file->fid;

    return $text;
  }
}