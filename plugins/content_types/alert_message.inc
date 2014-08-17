<?php

/**
 * @file
 * Plugin to handle the 'page_site_name' content type which allows the
 * site_name of the site to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Alert message'),
  'single' => TRUE,
  'icon' => 'icon_page.png',
  'description' => t('Alert message.'),
  'category' => t('Page elements'),
  'render last' => TRUE,
  'defaults' => array(
    'variant' => 'home',
  ),
);

/**
 * Output function for the 'alert_message' content type.
 *
 * Outputs the alert_messages.
 */
function fieldmuseum_alert_message_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();

  $settings = array(
    'plugins' => array(
      array(
        'name' => 'sunrise_sunset',
        'settings' => variable_get('fmnh_alert_sunrise_sunset', array('sunrise' => '', 'sunset' => '')),
        'not' => FALSE,
      ),
    ),
  );
  if (ctools_access($settings)) {
    $content = '';
    if ($conf['variant'] == 'home') {
      $content = '<div class="message message--alert" role="alert"><p>';
      $content .= variable_get('fmnh_alert_message_'. $conf['variant'], '');
      $content .= '</p><a class="message__close js--close" href="#"><i class="icon icon--close">&times;</i></a></div>';
    }
    else if ($conf['variant'] == 'footer') {
      $content = '<span class="tooltip"><svg class="icon icon--warning tooltip__icon" viewBox="0 0 500 500"><use xlink:href="#warning"></use></svg>';
      $content .= '<span class="tooltip__content">';
      $content .= variable_get('fmnh_alert_message_'. $conf['variant'], '');
      $content .= '</span></span>';
    }
    $block->content = $content;
  }


  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function fieldmuseum_alert_message_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['variant'] = array(
    '#title' => 'Variant',
    '#type' => 'radios',
    '#options' => array(
      'home' => 'Home',
      'footer' => 'Footer',
    ),
    '#default_value' => $conf['variant'],
  );
  return $form;
}

function fieldmuseum_alert_message_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
