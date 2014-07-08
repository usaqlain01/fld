<?php

/**
 * Define this Export UI plugin.
 */
$plugin = array(
  'schema' => 'bangpoundshare_links',
  'access' => 'administer site configuration',
  'menu' => array(
    'menu item' => 'links',
    'menu prefix' => 'admin/config/services/share',
    'menu title' => 'Links',
    'menu description' => 'Configure social sharing links.',
  ),
  'title singular' => t('link'),
  'title singular proper' => t('Link'),
  'title plural' => t('links'),
  'title plural proper' => t('Links'),
  'handler' => 'bangpoundshare_links',

  'use wizard' => TRUE,
  'form info' => array(
    'order' => array(
      'basic' => t('Settings'),
      'context' => t('Context'),
      'criteria' => t('Selection rules'),
      'content' => t('Content'),
    ),
  ),
);
