<?php
/**
 * @file
 * Provides the "Taxonomy" rule plugin for the Menu Position module.
 */

/**
 * Checks if a specific taxonomy term is set in the node.
 *
 * @param $variables
 *   An array containing each of the variables saved in the database necessary
 *   to evaluate this condition of the rule.
 * @return
 *   TRUE if condition applies successfully. Otherwise FALSE.
 */
function fmnh_program_menu_position_condition_grade_level($variables) {
  // We can only check for taxonomy terms on an "entity" page.
  if ($variables['context']['entity_type']) {

    // Grab the variables stored statically in the rule.
    $vid = 16;
    $tid = $variables['tid'];

    // Determine what kind of entity page this is.
    $entity_type = $variables['context']['entity_type'];
    $bundle_name = $variables['context']['bundle_name'];
    $entity = $variables['context'][$entity_type];

    // Build a list of each taxonomy reference fields.
    $entityreference_fields = &drupal_static(__FUNCTION__, NULL);
    if (!isset($entityreference_fields)) {
      $entityreference_fields = array();
      $field_info = field_info_fields();
      foreach (array_keys(field_info_instances($entity_type, $bundle_name)) as $key) {
        if ($field_info[$key]['type'] == 'entityreference') {
          $entityreference_fields[$key] = $field_info[$key]['translatable'];
        }
      }
    }

    foreach ($entityreference_fields as $field => $translatable) {
      $language = $translatable ? $entity->language : LANGUAGE_NONE;
      if (!empty($entity->{$field}[$language])) {
        // Check for matching terms.
        if (!empty($tid)) {
          foreach ($entity->{$field}[$language] as $item) {
            if (in_array($item['target_id'], $tid)) {
              return TRUE;
            }
          }
        }
        // Check for any value in the field.
        else {
          foreach ($entity->{$field}[$language] as $item) {
            $term = taxonomy_term_load($item['target_id']);
            if (isset($term->vid) && $term->vid == $vid) {
              return TRUE;
            }
          }
        }
      }
    }
  }
  return FALSE;
}

/**
 * Adds form elements for the "taxonomy" plugin to the rule configuration form.
 *
 * @param $form
 *   A reference to the "add/edit rule" form array. New form elements should be
 *   added directly to this array.
 * @param $form_state
 *   A reference to the current form state.
 */
function fmnh_program_menu_position_rule_grade_level_form(&$form, &$form_state) {
  module_load_include('inc', 'menu_position', 'plugins/menu_position.taxonomy');

  // If this is an existing rule, load the variables stored in the rule for this plugin.
  $variables = !empty($form_state['#menu-position-rule']['conditions']['grade_level']) ? $form_state['#menu-position-rule']['conditions']['grade_level'] : array();

  // Load the taxonomy terms.
  if (!empty($variables['tid'])) {
    $terms = array();
    foreach (taxonomy_term_load_multiple($variables['tid']) as $term) {
      $terms[] = $term->name;
    }
    $terms = implode(', ', $terms);
  }
  else {
    $terms = '';
  }

  $form['conditions']['grade_level'] = array(
    '#type' => 'fieldset',
    '#title' => t('grade level'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'menu_position') . '/plugins/menu_position.taxonomy.js'),
    ),
  );
  $form['conditions']['grade_level']['description'] = array(
    '#type' => 'item',
    '#description' => t('Apply this rule only on pages that display content having a grade_level.'),
  );
  $form['conditions']['grade_level']['grade_level_vid'] = array(
    '#type' => 'value',
    '#value' => '16',
  );
  $form['conditions']['grade_level']['grade_level_vid_or_tid'] = array(
    '#type' => 'radios',
    '#title' => t('In this field, match:'),
    '#default_value' => !empty($variables['vid_or_tid']) ? $variables['vid_or_tid'] : 'none',
    '#options' => array(
      'none' => t('nothing'),
      'vid' => t('any value'),
      'tid' => t('only a specific value'),
    ),
  );
  $form['#attached']['js'][] = array(
    'data' => array('menu_position_taxonomy_url' => url('menu-position/taxonomy/autocomplete')),
    'type' => 'setting',
  );
  $form['conditions']['grade_level']['grade_level_value'] = array(
    '#type' => 'textfield',
    '#maxlength' => 1024,
    '#title' => t('grade_level'),
    '#default_value' => $terms,
    '#autocomplete_path' => 'menu-position/taxonomy/autocomplete/' . $form['conditions']['grade_level']['grade_level_vid']['#value'],
    '#element_validate' => array('fmnh_program_grade_level_autocomplete_validate'),
    '#description' => t('Match at least one of these taxonomy terms.'),
    '#states' => array(
      'visible' => array(
        ':input[name=grade_level_vid_or_tid]' => array('value' => 'tid'),
      ),
    ),
  );

  // Add a submit handler.
  $form['#submit'][] = 'fmnh_program_menu_position_rule_grade_level_form_submit';
}

/**
 * Prepares the "taxonomy" variables to be stored in the rule.
 *
 * @param $form
 *   A reference to the "add/edit rule" form array.
 * @param $form_state
 *   A reference to the current form state, including submitted values.
 */
function fmnh_program_menu_position_rule_grade_level_form_submit(&$form, &$form_state) {
  if (!empty($form_state['values']['grade_level_value']) || $form_state['values']['grade_level_vid_or_tid'] != 'none') {
    $variables = array(
      'vid_or_tid' => $form_state['values']['grade_level_vid_or_tid'],
      'tid' => array(),
    );
    // Determine if a taxonomy term has been selected.
    if ($form_state['values']['grade_level_vid_or_tid'] == 'tid' && !empty($form_state['values']['grade_level_value'])) {
      foreach ($form_state['values']['grade_level_value'] as $term) {
        $variables['tid'][] = $term['tid'];
      }
    }
    $form_state['values']['conditions']['grade_level'] = $variables;
  }
}

/**
 * Form element validate handler for taxonomy term autocomplete element.
 */
function fmnh_program_grade_level_autocomplete_validate($element, &$form_state) {
  // Autocomplete widgets do not send their tids in the form, so we must detect
  // them here and process them independently.
  $value = array();

  if ($tags = $element['#value']) {
    // Translate term names into actual terms.
    $typed_terms = drupal_explode_tags($tags);
    foreach ($typed_terms as $typed_term) {
      // See if the term exists in the chosen vocabulary and return the tid;
      // otherwise, create a new 'autocreate' term for insert/update.
      if ($possibilities = taxonomy_term_load_multiple(array(), array('name' => trim($typed_term), 'vid' => array($form_state['values']['grade_level_vid'])))) {
        $term = array_pop($possibilities);
        $value[] = (array)$term;
      }
      else {
        form_set_error('grade_level_value', t('%term is not a valid taxonomy term.', array('%term' => $typed_term)));
      }
    }
  }

  if (!empty($value)) {
    form_set_value($element, $value, $form_state);
  }
}

