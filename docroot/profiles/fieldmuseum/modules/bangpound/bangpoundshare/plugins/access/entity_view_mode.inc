<?php

/**
 * @file
 * Plugin to provide access control based upon entity bundle.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Entity: view mode"),
  'description' => t('Control access by entity view mode.'),
  'callback' => 'ctools_entity_view_mode_ctools_access_check',
  'default' => array('view_mode' => array()),
  'settings form' => 'ctools_entity_view_mode_ctools_access_settings',
  'settings form submit' => 'ctools_entity_view_mode_ctools_access_settings_submit',
  'summary' => 'ctools_entity_view_mode_ctools_access_summary',
  'restrictions' => 'ctools_entity_view_mode_ctools_access_restrictions',
  'get child' => 'ctools_entity_view_mode_ctools_access_get_child',
  'get children' => 'ctools_entity_view_mode_ctools_access_get_children',
);

function ctools_entity_view_mode_ctools_access_get_child($plugin, $parent, $child) {
  $plugins = ctools_entity_view_mode_ctools_access_get_children($plugin, $parent);
  return $plugins[$parent . ':' . $child];
}

function ctools_entity_view_mode_ctools_access_get_children($plugin, $parent) {
  $entities = entity_get_info();
  $plugins = array();
  foreach ($entities as $entity_type => $entity) {
    $plugin['title'] = t('@entity: View mode', array('@entity' => $entity['label']));
    $plugin['keyword'] = $entity_type;
    $plugin['description'] = t('Control access by @entity entity view mode.', array('@entity' => $entity_type));
    $plugin['name'] = $parent . ':' . $entity_type;
    $plugin['required context'] = array(
      new ctools_context_required(t(ucfirst($entity_type)), $entity_type),
      new ctools_context_required('String', 'string')
    );
    $plugins[$parent . ':' . $entity_type] = $plugin;
  }

  return $plugins;
}

/**
 * Settings form for the 'by entity_view_mode' access plugin
 */
function ctools_entity_view_mode_ctools_access_settings($form, &$form_state, $conf) {
  $plugin = $form_state['plugin'];
  $entity_type = explode(':', $plugin['name']);
  $entity_type = $entity_type[1];
  $entity = entity_get_info($entity_type);
  foreach ($entity['view modes'] as $view_mode => $info) {
    $options[$view_mode] = check_plain($info['label']);
  }

  $form['settings']['view_mode'] = array(
    '#title' => t('Entity view mode'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#description' => t('Only the checked entity view modes will be valid.'),
    '#default_value' => $conf['view_mode'],
  );
  return $form;
}

/**
 * Compress the entity view modes allowed to the minimum.
 */
function ctools_entity_view_mode_ctools_access_settings_submit($form, &$form_state) {
  $form_state['values']['settings']['view_mode'] = array_filter($form_state['values']['settings']['view_mode']);
}

/**
 * Check for access.
 */
function ctools_entity_view_mode_ctools_access_check($conf, $context, $plugin) {
  list($plugin_name, $entity_type) = explode(':', $plugin['name']);
  if (!$entity_type) {
    return FALSE;
  };

  // As far as I know there should always be a context at this point, but this
  // is safe.
  if (empty($context) || count($context) != 2 || empty($context[0]->data) || empty($context[1]->data)) {
    return FALSE;
  }

  if (array_filter($conf['view_mode']) && empty($conf['view_mode'][$context[1]->data])) {
    return FALSE;
  }

  return TRUE;
}

/**
 * Inform the UI that we've eliminated a bunch of possibilities for this
 * context.
 */
function ctools_entity_view_mode_ctools_access_restrictions($conf, &$context) {
  if (isset($context->restrictions['view_mode'])) {
    $context->restrictions['view_mode'] = array_unique(array_merge($context->restrictions['view_mode'], array_keys(array_filter($conf['view_mode']))));
  }
  else {
    $context->restrictions['view_mode'] = array_keys(array_filter($conf['view_mode']));
  }
}

/**
 * Provide a summary description based upon the checked entity_view_mode.
 */
function ctools_entity_view_mode_ctools_access_summary($conf, $context, $plugin) {
  if (!isset($conf['view_mode'])) {
    $conf['view_mode'] = array();
  }

  list($plugin_name, $entity_type) = explode(':', $plugin['name']);
  if (!$entity_type) {
    return t('Error, misconfigured entity_view_mode access plugin');
  };

  $entity = entity_get_info($entity_type);

  $names = array();
  foreach (array_filter($conf['view_mode']) as $view_mode) {
    $names[] = check_plain($entity['view modes'][$view_mode]['label']);
  }

  if (empty($names)) {
    return t('@identifier is any view mode', array('@identifier' => $context[1]->identifier));
  }

  return format_plural(count($names), '@identifier is "@view_modes"', '@identifier view mode is one of "@view_modes"', array('@view_modes' => implode(', ', $names), '@identifier' => $context[1]->identifier));
}

