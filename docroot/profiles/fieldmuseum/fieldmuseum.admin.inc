<?php

function fieldmuseum_alert_settings($form, &$form_state) {
  ctools_include('context');

  $form = array();
  $plugin = ctools_get_access_plugin('sunrise_sunset');
  if ($function = ctools_plugin_get_function($plugin, 'settings form')) {
    $settings_form = $function($form, $form_state, variable_get('fmnh_alert_sunrise_sunset', $plugin['default']));
    $form['fmnh_alert_sunrise_sunset'] = $settings_form['settings'];
    $form['fmnh_alert_sunrise_sunset']['#tree'] = TRUE;
  }

  $form['fmnh_alert_message_home'] = array(
    '#type' => 'textarea',
    '#title' => t('Alert message'),
    '#default_value' => variable_get('fmnh_alert_message_home', '<strong>Alert Name</strong> This might be about extended hours.'),
    '#description' => t('Home page message to show visitors when the site is in alert mode.')
  );
  $form['fmnh_alert_message_footer'] = array(
    '#type' => 'textarea',
    '#title' => t('Alert message'),
    '#default_value' => variable_get('fmnh_alert_message_footer', '<strong>Strong Text</strong> More text for the full message in the tooltip. This pushes it to two lines for demo purposes.'),
    '#description' => t('Footer message to show visitors when the site is in alert mode.')
  );
  return system_settings_form($form);
}
