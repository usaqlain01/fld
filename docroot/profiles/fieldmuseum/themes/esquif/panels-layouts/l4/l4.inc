<?php

/**
 * Implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title'       => t('l4'),
  'category'    => t('Landing'),
  'icon'        => 'icon.png',

  'theme'       => 'esquif_l4',

  'regions'     => array(
    'main'      => t('Main'),
    'summary_a'      => t('Summary A'),
    'summary_b'      => t('Summary B'),
    'summary_c'      => t('Summary C'),
    'summary_d'      => t('Summary D'),
    'summary_e'      => t('Summary E'),
    'summary_f'      => t('Summary F'),
  ),

  'settings form'     => 'esquif_panels_settings_form',
  'settings validate' => 'esquif_panels_settings_validate',
  'settings submit'   => 'esquif_panels_settings_submit',
);

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_esquif_l4(&$variables, $hook) {
  foreach (array_keys($variables['layout']['regions']) as $region) {
    // Pull out the region classes to easy-to-handle variables.
    $variables[$region . '_classes'] = !empty($variables['settings'][$region . '_classes']) ? ' ' . $variables['settings'][$region . '_classes'] : '';
  }
}
