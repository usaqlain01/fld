<?php

// Plugin definition
$plugin = array(
  'title' => t('Page header'),
  'category' => t('Organism'),
  'icon' => 'canoe.png',
  'theme' => 'esquif_canoe',
  'css' => 'canoe.css',
  'regions' => array(
    'search' => t('Search'),
    'hero' => t('Hero'),
  ),
  'settings form'     => 'esquif_panels_settings_form',
  'settings validate' => 'esquif_panels_settings_validate',
  'settings submit'   => 'esquif_panels_settings_submit',
);

/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_esquif_canoe(&$variables, $hook) {
  foreach (array_keys($variables['layout']['regions']) as $region) {
    // Pull out the region classes to easy-to-handle variables.
    $variables[$region . '_classes'] = !empty($variables['settings'][$region . '_classes']) ? ' ' . $variables['settings'][$region . '_classes'] : '';
  }

  /** @var panels_display $display */
  $display = $variables['display'];

  ctools_include('context');
  $requiredcontexts = array(new ctools_context_required(t('Background image'), 'entity:file'));
  if ($contexts = ctools_context_filter($display->context, $requiredcontexts)) {
    $context = reset($contexts);
    $file = $context->data;
    $variables['hero_image'] = $file;
  }
}
