<?php

namespace Bangpound\Drupal\Driver\Cores;

use Drupal\Driver\Cores\Drupal7 as BaseDriver;

class Drupal7 extends BaseDriver {

  /**
   * Given a node object, expand fields to match the format expected by node_save().
   *
   * @param stdClass $entity
   *   Entity object.
   * @param string $entityType
   *   Entity type, defaults to node.
   * @param string $bundle
   *   Entity bundle.
   * @return \Bangpound\Drupal\Driver\Cores\stdClass|\Drupal\Driver\Cores\stdClass|\stdClass
   */
  function expandEntityFields(\stdClass $entity, $entityType = 'node', $bundle = '') {
    if ($entityType === 'node' && !$bundle) {
      $bundle = $entity->type;
    }

    $new_entity = clone $entity;
    foreach ($entity as $param => $value) {
      if ($info = field_info_field($param)) {
        foreach ($info['bundles'] as $type => $bundles) {
          if ($type == $entityType) {
            foreach ($bundles as $target_bundle) {
              if ($bundle === $target_bundle) {
                unset($new_entity->{$param});

                // Use the first defined column. @todo probably breaks things.
                $column_names = array_keys($info['columns']);
                $column = array_shift($column_names);

                // Special handling for date fields (start/end).
                // @todo generalize this
                if ('date' === $info['module']) {
                  // Dates passed in separated by a comma are start/end dates.
                  $dates = explode(',', $value);
                  $value = trim($dates[0]);
                  if (!empty($dates[1])) {
                    $column2 = array_shift($column_names);
                    $new_entity->{$param}[LANGUAGE_NONE][0][$column2] = trim($dates[1]);
                  }
                  $new_entity->{$param}[LANGUAGE_NONE][0][$column] = $value;
                }
                // Special handling for term references.
                elseif ('taxonomy' === $info['module']) {
                  $terms = explode(',', $value);
                  $i = 0;
                  foreach ($terms as $term) {
                    $tid = taxonomy_get_term_by_name($term);
                    if (!$tid) {
                      throw new \Exception(sprintf("No term '%s' exists.", $term));
                    }

                    $new_entity->{$param}[LANGUAGE_NONE][$i][$column] = array_shift($tid)->tid;
                    $i++;
                  }
                }
                elseif ('entityreference' === $info['module']) {
                  $labels = explode(',', $value);
                  $i = 0;
                  foreach ($labels as $label) {
                    $entity_type = $info['settings']['target_type'];
                    $entity_info = entity_get_info($entity_type);
                    if (!empty($entity_info['entity keys']['label'])) {
                      $query = new \EntityFieldQuery();
                      $query->entityCondition('entity_type', $entity_type);
                      $query->entityCondition('bundle', array_values($info['settings']['handler_settings']['target_bundles']));
                      $query->propertyCondition($entity_info['entity keys']['label'], $label);
                      $result = $query->execute();
                      if (!empty($result[$entity_type])) {
                        $entity_ids = array_keys($result[$entity_type]);
                        $new_entity->{$param}[LANGUAGE_NONE][$i][$column] = array_shift($entity_ids);
                        $i++;
                      }
                    }
                  }
                }

                elseif (is_array($value)) {
                  foreach ($value as $key => $data) {
                    $new_entity->{$param}[LANGUAGE_NONE][0][$key] = $data;
                  }
                }

                else {
                  $new_entity->{$param}[LANGUAGE_NONE][0][$column] = $value;
                }
              }
            }
          }
        }
      }
    }

    return $new_entity;
  }
}
