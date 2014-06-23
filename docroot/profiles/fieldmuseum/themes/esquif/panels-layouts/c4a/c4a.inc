<?php

/**
 * Implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title'       => t('c4a'),
  'category'    => t('Content'),
  'icon'        => 'icon.png',

  'theme'       => 'esquif_c4a',

  'regions'     => array(
    'main'      => t('Main'),
  ),

  'settings form'     => 'esquif_panels_settings_form',
  'settings validate' => 'esquif_panels_settings_validate',
  'settings submit'   => 'esquif_panels_settings_submit',
);

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_esquif_c4a(&$variables, $hook) {
  foreach (array_keys($variables['layout']['regions']) as $region) {
    // Pull out the region classes to easy-to-handle variables.
    $variables[$region . '_classes'] = !empty($variables['settings'][$region . '_classes']) ? ' ' . $variables['settings'][$region . '_classes'] : '';
  }
}
