<?php
/**
 * @file
 * profile_blog_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function profile_blog_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'profile_blog_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Profile blog quicktabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_blog-block_2',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_blog-block_7',
      'hide_title' => 1,
      'title' => 'News',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_blog-block_4',
      'hide_title' => 1,
      'title' => 'Research',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_blog-block_5',
      'hide_title' => 1,
      'title' => 'Work',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_blog-block_3',
      'hide_title' => 1,
      'title' => 'Outreach',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_blog-block_1',
      'hide_title' => 1,
      'title' => 'Collaborators',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'tabs-field-custom';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Collaborators');
  t('News');
  t('Outreach');
  t('Profile blog quicktabs');
  t('Research');
  t('Work');

  $export['profile_blog_quicktabs'] = $quicktabs;

  return $export;
}
