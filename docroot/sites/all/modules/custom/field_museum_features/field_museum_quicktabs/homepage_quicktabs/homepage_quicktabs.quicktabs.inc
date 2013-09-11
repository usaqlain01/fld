<?php
/**
 * @file
 * homepage_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function homepage_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Homepage quicktabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_homepage-block_3',
      'hide_title' => 1,
      'title' => 'Happening now',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_homepage-block_4',
      'hide_title' => 1,
      'title' => 'Coming soon',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'tabs-field-custom.css';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Coming soon');
  t('Happening now');
  t('Homepage quicktabs');

  $export['homepage_quicktabs'] = $quicktabs;

  return $export;
}
