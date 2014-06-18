<?php

/**
 * @file
 * Contains Drupal\inline\EntityMacro.
 */

namespace Drupal\inline;

class EntityMacro extends MacroBase {

  protected $macroType = 'entity';

  protected $entityType;

  protected $entity;

  public function getParameters() {
    $args['type'] = array(
      '#datatype' => 'string',
      '#required' => TRUE,
      '#title' => t('Entity type'),
    );
    $args['id'] = array(
      '#datatype' => 'int',
      '#required' => TRUE,
      '#title' => t('Entity ID'),
      '#description' => t('The ID of an entity to embed.'),
    );
    $args['view_mode'] = array(
      '#datatype' => 'string',
      '#title' => t('View mode'),
      // @todo Make the default value configurable.
      '#default_value' => 'teaser',
    );
    return $args;
  }

  public function validate(array $context) {
    if (!entity_get_info($this->params['type'])) {
      return t('The specified entity type %type does not exist.', array('%type' => $this->params['type']));
    }
    if (empty($this->params['id'])) {
      return t('An entity ID is required.');
    }
    list($id, $vid, $bundle) = entity_extract_ids($context['entity_type'], $context['entity']);
    if ($this->params['type'] == $context['entity_type'] && $this->params['id'] == $id) {
      return t('The content @id cannot reference itself.', array('@id' => $this->params['id']));
    }
  }

  public function prepareView(array $context) {
    if (empty($this->params['type']) || empty($this->params['id'])) {
      return;
    }
    $entities = entity_load($this->params['type'], array($this->params['id']));
    if (!empty($entities[$this->params['id']])) {
      $this->entityType = $this->params['type'];
      $this->entity = $entities[$this->params['id']];
    }
  }

  public function view(array $context) {
    if (empty($this->entity)) {
      return '';
    }
    // @todo Add dependency on Entity API module for generic entity access?
    if ($this->entityType == 'node' && !node_access('view', $this->entity)) {
      return '';
    }
    // The inlined entity being rendered MUST be cloned before invoking
    // ENTITY_view(). The render process is not designed to be re-entrant in D7.
    // @see field_attach_prepare_view()
    // @see http://drupal.org/node/1289336
    $render_entity = clone $this->entity;

    // Call ENTITY_view() to invoke hook_entity_view() for FieldMacro.
    $function = $this->entityType . '_view';
    $elements = $function($render_entity, $this->params['view_mode']);
    return drupal_render($elements);
  }
}
