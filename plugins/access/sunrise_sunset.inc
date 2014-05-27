<?php

/**
 * @file
 * Plugin to provide access control based upon date and time.
 */

$plugin = array(
  'title' => t("Sunrise-sunset date-time"),
  'description' => t('Control access by date and time.'),
  'callback' => 'fieldmuseum_sunrise_sunset_access_check',
  'default' => array(
    'sunrise' => date('m-d-Y H:i'),
    'sunset' => date('m-d-Y H:i'),
  ),
  'settings form' => 'fieldmuseum_sunrise_sunset_access_settings',
  'summary' => 'fieldmuseum_sunrise_sunset_access_summary',
  'all contexts' => TRUE,
);

/**
 * Settings form for the 'by entity_bundle' access plugin
 */
function fieldmuseum_sunrise_sunset_access_settings($form, &$form_state, $conf) {
  $form['settings']['sunrise'] = array(
    '#title' => t('Sunrise'),
    '#type' => 'date_popup',
    '#default_value' => $conf['sunrise'],
    '#date_type' => DATE_DATETIME,
    '#date_timezone' => date_default_timezone(),
    '#date_format' => 'm-d-Y H:i',
    '#date_increment' => 1,
    '#date_year_range' => '-3:+3',
  );
  $form['settings']['sunset'] = array(
    '#title' => t('Sunset'),
    '#type' => 'date_popup',
    '#default_value' => $conf['sunset'],
    '#date_type' => DATE_DATETIME,
    '#date_timezone' => date_default_timezone(),
    '#date_format' => 'm-d-Y H:i',
    '#date_increment' => 1,
    '#date_year_range' => '-3:+3',
  );
  return $form;
}

/**
 * Check for access.
 */
function fieldmuseum_sunrise_sunset_access_check($conf, $context, $plugin) {
  $sunrise = strtotime($conf['sunrise']);
  $sunset = strtotime($conf['sunset']);
  $now = time();

  return ($sunrise <= $now && $sunset >= $now);
}

/**
 * Provide a summary description based upon the selected sunrise and sunset times.
 */
function fieldmuseum_sunrise_sunset_access_summary($conf, $context, $plugin) {
  $string = 'Sunrise at @sunrise, sunset at @sunset';
  $values = array(
    '@sunrise' => $conf['sunrise'],
    '@sunset' => $conf['sunset'],
  );
  return t($string, $values);
}
