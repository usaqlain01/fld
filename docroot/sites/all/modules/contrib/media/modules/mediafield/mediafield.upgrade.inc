<?php

/**
 * @file
 * Ugrading media fields to file fields.
 */

/**
 * Page callback: The mediafield upgrade form.
 *
 * @param $field_instance
 *   The field instance to upgrade.
 *
 * @see mediafield_upgrade_form_validate()
 * @see mediafield_upgrade_form_submit()
 */
function mediafield_upgrade_form($form, &$form_state, $field_instance) {
  // Require the Field UI admin code for its helper functions.
  module_load_include('inc', 'field_ui', 'field_ui.admin');

  $form_state['field_instance'] = $field_instance;
  $form_state['field'] = field_info_field($field_instance['field_name']);

  $form['existing_field'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#empty_option' => t('- Create a new field -'),
    '#options' => _mediafield_upgrade_target_field_options($form_state),
    '#description' => t('Only target fields with same or greater cardinality are available. The field can\'t have any data, yet.'),
  );

  $form['field_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Field label'),
    '#description' => t('The user-visible label of the new field that will be created.'),
    '#size' => 26,
    '#maxlength' => 128,
    '#states' => array(
      'visible' => array(
        ':input[name=existing_field]' => array('value' => ''),
      ),
    ),
  );

  $form['field_name'] = array(
    '#type' => 'machine_name',
    '#title' => t('Field name'),
    '#description' => t('The name of the new field, that will be created.') . ' ' . t('A unique machine-readable name containing letters, numbers, and underscores.'),
    '#field_prefix' => 'field_',
    '#prefix' => '<div class="add-new-placeholder">&nbsp;</div>',
    '#size' => 26,
    '#maxlength' => 26,
    '#states' => array(
      'visible' => array(
        ':input[name=existing_field]' => array('value' => ''),
      ),
    ),
    '#machine_name' => array(
      'source' => array('field_label'),
      'exists' => '_field_ui_field_name_exists',
      'standalone' => TRUE,
      'label' => '',
    ),
    '#required' => FALSE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Copy field data'),
    '#suffix' => t('<strong>Be careful. Backup your database.</strong> Revisions are not copied.'),
  );

  return $form;
}

/**
 * Creates an associative array of available target file fields.
 *
 * @param $form_state
 *   An associative array with 'field_instance' and 'field' set the field API
 *   structures of the source field.
 *
 * @return
 *   An array of fields, keyed by field names.
 */
function _mediafield_upgrade_target_field_options($form_state) {
  $options = array();

  foreach (field_info_fields() as $field_name => $field) {
    // Skip fields that are not file fields.
    if ($field['type'] != 'file') {
      continue;
    }

    // If the field already has data, it can't be on the bundle.
    if (field_has_data($field)) {
      $entity_type = $form_state['field_instance']['entity_type'];
      if (!empty($field['bundles'][$entity_type])) {
        if (in_array($form_state['field_instance']['bundle'], $field['bundles'][$entity_type])) {
          continue;
        }
      }
    }

    // Skip fields with smaller cardinality.
    $cardinality = $form_state['field']['cardinality'];
    if ($field['cardinality'] < $cardinality && $field['cardinality'] != -1) {
      continue;
    }

    $options[$field['field_name']] = $field['field_name'];
  }

  return $options;
}

/**
 * Form validation handler for mediafield_upgrade_form().
 *
 * @see mediafield_upgrade_form_submit()
 */
function mediafield_upgrade_form_validate($form, &$form_state) {
  if ($existing_field = $form_state['values']['existing_field']) {
    if (array_key_exists($existing_field, _mediafield_upgrade_target_field_options($form_state))) {
      $form_state['existing_field'] = $existing_field;
    }
    else {
      form_set_error('existing_field', t('The target field is no longer available.'));
    }
  }
  else {
    $field_name = 'field_' . $form_state['values']['field_name'];

    if (!preg_match('!^field_[a-z0-9_]+$!', $field_name)) {
      form_set_error('field_name', t('The field name %field_name is invalid. The name must include only lowercase unaccentuated letters, numbers and underscores.', array('%field_name' => $field_name)));
    }

    if (strlen($field_name) > 32) {
      form_set_error('field_name', t('The field name can be at most 32 characters long.'));
    }

    if (field_read_fields(array('field_name' => $field_name), array('include_inactive', TRUE))) {
      form_set_error('field_name', t('The field name %field_name already exists.', array('%field_name' => $field_name)));
    }
  }
}

/**
 * Form submission handler for mediafield_upgrade_form().
 *
 * @see mediafield_upgrade_form_validate()
 */
function mediafield_upgrade_form_submit($form, &$form_state) {
  $field_type = 'file';
  $widget_type = 'media_generic';

  if (!empty($form_state['existing_field'])) {
    $target_field = field_info_field($form_state['existing_field']);
  }
  else {
    // Create the new field.
    $target_field = field_create_field(array(
      'field_name' => 'field_' . $form_state['values']['field_name'],
      'type' => 'file',
      'cardinality' => $form_state['field']['cardinality'],
    ));
  }

  // Prepare and create the target field instance.
  $old_field_instance = field_info_instance($form_state['field_instance']['entity_type'], $form_state['field_instance']['field_name'], $form_state['field_instance']['bundle']);
  $target_field_instance = field_info_instance($form_state['field_instance']['entity_type'], $target_field['field_name'], $form_state['field_instance']['bundle']);

  if (!$target_field_instance) {
    // Copy all of the old field instance's settings, but override a few
    // specific values.
    $new_instance = $old_field_instance;
    $new_instance['field_name'] = $target_field['field_name'];
    $new_instance['label'] = $form_state['values']['field_label'];
    $new_instance['widget']['type'] = $widget_type;
    $target_field_instance = field_create_instance($new_instance);
  }

  // Create a batch process for updating the entities.
  batch_set(array(
    'title' => t('Copying field values'),
    'operations' => array(
      array('mediafield_upgrade_batch_step', array($form_state['field_instance'], $target_field_instance)),
    ),
    'finished' => 'mediafield_upgrade_batch_finished',
    'file' => drupal_get_path('module', 'mediafield') . '/mediafield.upgrade.inc',
  ));

  // Redirect to the field overview.
  $entity_info = entity_get_info($target_field_instance['entity_type']);
  $form_state['redirect'] = $entity_info['bundles'][$target_field_instance['bundle']]['admin']['real path'] . '/fields';
}

/**
 * Batch API operation callback for mediafield_upgrade_form_submit().
 */
function mediafield_upgrade_batch_step($source_instance, $target_instance, &$context) {
  // Prepare an entity query.
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', $target_instance['entity_type'])
    ->entityCondition('bundle', $target_instance['bundle']);

  // Initialize batch process.
  if (empty($context['sandbox'])) {
    $count_query = clone $query;
    $context['sandbox']['max'] = $count_query->count()->execute();
    $context['sandbox']['current_entity'] = -1;
    $context['sandbox']['progress'] = 0;
    $context['results'] = array();
  }

  // Get an array of entities.
  $entities = (array) $query
    ->range($context['results'][0], 10)
    ->execute();
  $entities = reset($entities);

  // Load field data on the entities.
  field_attach_load($target_instance['entity_type'], $entities);

  foreach ($entities as $id => $entity) {
    // Update each entity.
    if (!empty($entity->{$source_instance['field_name']})) {
      foreach ($entity->{$source_instance['field_name']} as $lang => $values) {
        foreach ($values as $key => $value) {
          $entity->{$target_instance['field_name']}[LANGUAGE_NONE][$key] = $value + array(
            'description' => '',
            'display' => 1,
          );
        }
      }
      try {
        field_attach_presave($target_instance['entity_type'], $entity);
        field_attach_update($target_instance['entity_type'], $entity);
      }
      catch (Exception $e) {
        watchdog('mediafield','Migration Failed on entity @eid @entity_type because of: @message', array('@eid' => $id, '@entity_type' => $source_instance['entity_type'], '@message' => $e->getMessage()), WATCHDOG_WARNING);
      }
    }

    $context['sandbox']['current_entity'] = $id;
    $context['sandbox']['progress']++;
    $context['results'][0]++;
  }

  if (count($entities) && $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
}

/**
 * Batch API finished callback for mediafield_upgrade_form_submit().
 */
function mediafield_upgrade_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(format_plural($results[0], 'One entity updated.', '@count entities updated.'));
    drupal_set_message(t('After verifying all data converted correctly the old field should be removed.'));
  }
  else {
    drupal_set_message(t('Finished with an error.'), 'error');
  }
}
