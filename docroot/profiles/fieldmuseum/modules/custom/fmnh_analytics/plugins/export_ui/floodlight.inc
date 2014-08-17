<?php

$plugin = array(
  'schema' => 'fmnh_floodlight',
  'access' => 'administer google analytics',
  'menu' => array(
    'menu prefix' => 'admin/config/system',
    'menu title' => 'Floodlight tags',
    'menu description' => 'Administer Floodlight tags.',
  ),
  'title singular' => t('Floodlight tag'),
  'title singular proper' => t('Floodlight tag'),
  'title plural' => t('Floodlight tags'),
  'title plural proper' => t('Floodlight tags'),
  'handler' => 'floodlight_ui',
);
