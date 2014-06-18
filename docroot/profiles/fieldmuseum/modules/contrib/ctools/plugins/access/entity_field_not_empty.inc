<?php

/**
 * @file
 * Plugin to provide access control by verifying a field is not empty.
 */

$plugin = array(
  'title' => t("Field: not empty"),
  'description' => t('Control access by verifying a field is not empty.'),
  'callback' => 'ctools_entity_field_not_empty_ctools_access_check',
  'default' => array('type' => array()),
  'settings form' => 'ctools_entity_field_not_empty_ctools_access_settings',
  'summary' => 'ctools_entity_field_not_empty_ctools_access_summary',
  'get child' => 'ctools_entity_field_not_empty_ctools_access_get_child',
  'get children' => 'ctools_entity_field_not_empty_ctools_access_get_children',
);

function ctools_entity_field_not_empty_ctools_access_get_child($plugin, $parent, $child) {
  $plugins = &drupal_static(__FUNCTION__, array());
  if (empty($plugins[$parent . ':' . $child])) {
    list($entity_type, $bundle_type, $field_name) = explode(':', $child);
    $plugins[$parent . ':' . $child] = _ctools_entity_field_not_empty_ctools_access_get_child($plugin, $parent, $entity_type, $bundle_type, $field_name);
  }

  return $plugins[$parent . ':' . $child];
}

function ctools_entity_field_not_empty_ctools_access_get_children($plugin, $parent) {
  $plugins = &drupal_static(__FUNCTION__, array());
  if (!empty($plugins)) {
    return $plugins;
  }
  $entities = entity_get_info();
  foreach ($entities as $entity_type => $entity) {
    foreach ($entity['bundles'] as $bundle_type => $bundle) {
      foreach (field_info_instances($entity_type, $bundle_type) as $field_name => $field) {
        if (!isset($plugins[$parent . ':' . $entity_type . ':' . $bundle_type . ':' . $field_name])) {
          $plugin = _ctools_entity_field_not_empty_ctools_access_get_child($plugin, $parent, $entity_type, $bundle_type, $field_name, $entity, $bundle, $field);
          $plugins[$parent . ':' . $entity_type . ':' . $bundle_type . ':' . $field_name] = $plugin;
        }
      }
    }
  }

  return $plugins;
}

function _ctools_entity_field_not_empty_ctools_access_get_child($plugin, $parent, $entity_type, $bundle_type, $field_name, $entity = NULL, $bundle = NULL, $field = NULL) {
  // check that the entity, bundle and field arrays have a value.
  // If not, load theme using machine names.
  if (empty($entity)) {
    $entity = entity_get_info($entity_type);
  }

  if (empty($bundle)) {
    $bundle = $entity['bundles'][$bundle_type];
  }

  if (empty($field)) {
    $field_instances = field_info_instances($entity_type, $bundle_type);
    $field = $field_instances[$field_name];
  }

  $plugin['title'] = t('@entity @type: @field Field is not empty', array('@entity' => $entity['label'], '@type' => $bundle_type, '@field' => $field['label']));
  $plugin['keyword'] = $entity_type;
  $plugin['description'] = t('Control access by verifying a field is not empty.');
  $plugin['name'] = $parent . ':' . $entity_type . ':' . $bundle_type . ':' . $field_name;
  $plugin['required context'] = new ctools_context_required(t(ucfirst($entity_type)), $entity_type, array(
      'type' => $bundle_type,
    ));

  return $plugin;
}

/**
 * Settings form for the 'Empty Field' access plugin.
 */
function ctools_entity_field_not_empty_ctools_access_settings($form, &$form_state, $conf) {
  return $form;
}

/**
 * Check for access.
 */
function ctools_entity_field_not_empty_ctools_access_check($conf, $context, $plugin) {
  if ((!is_object($context)) || (empty($context->data))) {
    return FALSE;
  }

  list($parent, $entity_type, $bundle_type, $field_name) = explode(':', $plugin['name']);
  if ($field_items = field_get_items($entity_type, $context->data, $field_name)) {
    $instance = field_info_instance($entity_type, $field_name, $bundle_type);
    $field = field_info_field_by_id($instance['field_id']);
    $empty_func = $field['module'] . '_field_is_empty';
    if (function_exists($empty_func)) {
      foreach ($field_items as $item) {
        if (!$empty_func($item, $field)) {
          return TRUE;
        }
      }
    }
    else {
      // Field values exist but empty-checking function is not provided.
      return TRUE;
    }
  }

  return FALSE;
}

/**
 * Provide a summary description.
 */
function ctools_entity_field_not_empty_ctools_access_summary($conf, $context, $plugin) {
  list($parent, $entity_type, $bundle_type, $field_name) = explode(':', $plugin['name']);
  $instances   = field_info_instances($entity_type, $bundle_type);
  $instance    = $instances[$field_name];

  return t('@field is not empty', array('@field' => $instance['label']));
}
