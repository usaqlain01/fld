<?php

/**
 * Implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title'       => t('l2'),
  'category'    => t('Landing'),
  'icon'        => 'icon.png',

  'theme'       => 'esquif_l2',

  'regions'     => array(
    'callout'  => t('Callout'),
    'top_a'      => t('Top A'),
    'top_b'      => t('Top B'),
    'top_c'      => t('Top C'),
    'bottom_a'   => t('Bottom A'),
    'bottom_b'   => t('Bottom B'),
    'bottom_c'   => t('Bottom C'),
    'bottom_d'   => t('Bottom D'),
    'nav'      => t('Nav'),
  ),

  'settings form'     => 'esquif_panels_settings_form',
  'settings validate' => 'esquif_panels_settings_validate',
  'settings submit'   => 'esquif_panels_settings_submit',
);

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_esquif_l2(&$variables, $hook) {
  foreach (array_keys($variables['layout']['regions']) as $region) {
    // Pull out the region classes to easy-to-handle variables.
    $variables[$region . '_classes'] = !empty($variables['settings'][$region . '_classes']) ? ' ' . $variables['settings'][$region . '_classes'] : '';
  }
}
