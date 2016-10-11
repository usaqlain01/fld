<?php
/**
 * @file
 * fieldmuseum.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function fieldmuseum_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development';
  $environment->name = 'Development';
  $environment->regexurl = 'fldmusedev.prod.acquia-sites.com';
  $environment->settings = array(
    'color' => '#00a000',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['development'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'production';
  $environment->regexurl = 'www.fieldmuseum.org';
  $environment->settings = array(
    'color' => '#d00000',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test';
  $environment->name = 'Test';
  $environment->regexurl = 'fieldmusefacelifttest.devcloud.acquia-sites.com';
  $environment->settings = array(
    'color' => '#0000d0',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test'] = $environment;

  return $export;
}
