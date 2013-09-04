<?php

/**
 * Implementation of hook_field_views_data_alter().
 *
 * Integerdate fields are automatically picked up by Views, but we need to make sure that arguments,
 * filters, and sorts all use date handlers. Fields automatically get access to field formatters,
 * so we don't need to alter the field handler.
 */
function integerdate_field_views_data_alter(&$data, &$field, &$module) {
  if ($module == 'integerdate') {
    foreach (array_keys($data) as $table) {
      // This has 'table' and 'entity_id' keys as well as field keys. Just check for the things we
      // want to change.
      foreach (array_keys($data[$table]) as $views_field) {
        $views_field_info = &$data[$table][$views_field];
        if (isset($views_field_info['argument'])) {
          $views_field_info['argument']['handler'] = 'views_handler_argument_date';
        }
        if (isset($views_field_info['filter'])) {
          $views_field_info['filter']['handler'] = 'views_handler_filter_date';
        }
        if (isset($views_field_info['sort'])) {
          $views_field_info['sort']['handler'] = 'views_handler_sort_date';
        }
      }
    }
  }
}
