<?php

/**
 * @file
 * And area handler that provides a token to the nid when displayed on node
 * pages.
 */

class custom_handler_area_photo_gallery_textarea extends views_handler_area_text {

  /**
   * The token we are replacing with the galler id.
   */
  protected $custom_token = '[photo-gallery-id]';

  /**
   * We add a note about the token at the bottom of the form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['token_details'] = array(
      '#markup' => '<p>' . t('The ID for the Photo Gallery can be obtained by placing !token in the content.', array('!token' => $this->custom_token)) . '</p>',
    );
  }

  /**
   * After the text area has been rendered normally replace the token with the id.
   */
  function render_textarea($value, $format) {
    $output = parent::render_textarea($value, $format);

    // Get the id for the token.
    $id = '';
    // It would be nice if we could look for the router item. But, there
    // are many router items it could be and more that could be registered.
    // For example node/123, node/123/edit, node/123/foo, etc.
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      $id = arg(1);
    }

    // Replace the string with the token.
    $output = str_replace($this->custom_token, $id, $output);

    return $output;
  }
}