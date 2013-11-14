<?php

/**
 * @file
 * An area handler that provides a View All link which passes the current
 * argument value to the corresponding page display
 */

class custom_handler_area_argument_textarea extends views_handler_area_text {

  /**
   * The token we are replacing with the arg value.
   */
  protected $custom_token = '[arg-value]';

  /**
   * We add a note about the token at the bottom of the form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['token_details'] = array(
      '#markup' => '<p>' . t('Use !token in a link in the content to pass the value of the argument to a page display.',
        array('!token' => $this->custom_token)) . '</p>',
    );
  }

  /**
   * After the text area has been rendered normally replace the token with the id.
   */
  function render_textarea($value, $format) {
    $output = parent::render_textarea($value, $format);

    // Get the id for the token.
    $id = '';
    if (!empty($this->view->args)) {
      $id = implode("+", $this->view->args);
    }

    // Replace the string with the token.
    $output = str_replace($this->custom_token, $id, $output);

    return $output;
  }
}
