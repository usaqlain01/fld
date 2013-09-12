<?php

/**
 * @file
 * Builds placeholder replacement tokens for custom code.
 */

/**
 * Implements hook_token_info().
 *
 * Iterate through all the fields on the site; if a field is attached to an entity type that token
 * knows about, provide the field as a token.
 *
 * Only text, list, and taxonomy_term_reference field data is provided as tokens at this point, and
 * for multi-value fields the token replacement will be the first field value only.
 */
function custom_token_info() {
  // Who knows why the entity is called 'taxonomy_term' but the token type just 'term'. Get a list
  // of entity types => token types.
  $type_map = token_get_entity_mapping();

  // Provide tokens for text, list, and taxonomy_term_reference fields.
  foreach (field_info_fields() as $field_name => $field) {
    foreach (array_keys($field['bundles']) as $entity_type) {
      if (!isset($type_map[$entity_type])) { continue; }

      $token_type = $type_map[$entity_type];
      $token_name = strtr($field_name, '_', '-');

      if ($field['type'] == 'text' || $field['type'] == 'list') {
        $info['tokens'][$token_type][$token_name] = array(
          'name' => $field_name,
          'description' => $field['type'] . ' field',
        );
      }
      elseif ($field['type'] == 'taxonomy_term_reference') {
        $info['tokens'][$token_type][$token_name] = array(
          'name' => $field_name,
          'description' => $field['type'] . ' field',
          'type' => 'term',
        );
      }
    }
  }

  return $info;
}

/**
 * Implements hook_tokens().
 */
function custom_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  // For token types that are also entity types, check for field tokens.
  if (!empty($data[$type]) && $entity_type = token_get_entity_mapping('token', $type)) {
    $object = $data[$type];
    // Extract the bundle from the entity object.
    list($id, , $bundle) = entity_extract_ids($entity_type, $object);

    foreach (field_info_instances($entity_type, $bundle) as $field_name => $field_instance) {
      if (!empty($object->{$field_name}[LANGUAGE_NONE][0])) {
        $field = field_info_field($field_name);
        $field_token_name = strtr($field_name, '_', '-');
        $field_value = $object->{$field_name}[LANGUAGE_NONE][0];

        if (isset($tokens[$field_token_name])) {
          $original = $tokens[$field_token_name];
          switch ($field['type']) {
            case 'text':
            case 'list':
              $replacements[$original] = $sanitize ? _text_sanitize($field_instance, LANGUAGE_NONE, $field_value, 'value') : $field_value['value'];
              break;
            case 'taxonomy_term_reference':
              $tid = current($field_value);
              $term = taxonomy_term_load($tid);
              $replacements[$original] = $sanitize ? check_plain($term->name) : $term->name;
              break;
          }
        }

        // Search for chained field tokens.
        if ($field_tokens = token_find_with_prefix($tokens, $field_token_name)) {
          switch ($field['type']) {
            case 'taxonomy_term_reference':
              // Currently we only support taxonomy term fields.
              $tid = current($field_value);
              $term = taxonomy_term_load($tid);
              $replacements += token_generate('term', $field_tokens, array('term' => $term), $options);
              break;
          }
        }
      }
    }
  }

  return $replacements;
}
