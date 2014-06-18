<?php

$plugin = array(
  'title' => t('Entity range'),
  'category' => t('Entity list'),
  'description' => t('Displays an entity from an entity list.'),
  'required context' => new ctools_context_required(t('List'), 'entitylist'),
  'defaults' => array(
    'range' => array(
      'offset' => 0,
      'limit' => NULL,
    ),
    'view_mode' => '',
    'use_pager' => FALSE,
    'pager_id' => 0,
  ),
  'admin title' => 'bangpoundefq_ctools_entity_admin_title',
  'admin info' => 'bangpoundefq_ctools_entity_admin_info',
  'render callback' => 'bangpoundefq_ctools_entity_render',
  'edit form' => 'bangpoundefq_ctools_entity_form',
);

/**
 * Render callback.
 */
function bangpoundefq_ctools_entity_render($subtype, $conf, $panel_args, $context) {
  // Get the list.
  $list = entitylist_list_load_from_context($context);
  // The "readable" index starts at 1 while the "real" index starts at 0.
  $index = $conf['range']['offset'];
  $entities = array();
  do {
    $entity = $list->entity($index);
    if ($entity) {
      $entities[$index] = $entity;
      $index++;
    }
    else {
      break;
    }
  } while (($conf['range']['limit'] == 0) || ($index < ($conf['range']['offset'] + $conf['range']['limit'])));

  $block = new stdClass();
  $block->module  = 'entitylist';
  // Provide integration with the cachetags plugin.
  $tags = $list->cacheTags(TRUE);
  $block->cache_tags = $block->request_tags = $tags;

  $block->title = '';
  if (empty($entities)) {
    $block->content = '';
    return $block;
  }
  $block->content = array();

  $entity_type = $list->entityType();
  // TODO: Would be nice to avoid entity_get_info() here. The query handler
  // should theoritically already know about the entity id. Can we pass that
  // along somehow?
  $entity_info = entity_get_info($entity_type);

  foreach ($entities as $entity) {
    $entity_id = $entity->{$entity_info['entity keys']['id']};

    // TODO: Is there a more sustainable way to render entities in a generic way,
    // without depending on entity.module and entity_view()?
    $view_function = $entity_type . '_view';
    if (strstr($conf['view_mode'], ':') === FALSE) {
      $view_mode = $conf['view_mode'];
    }
    else {
      list(, $view_mode) = explode(':', $conf['view_mode']);
    }
    if ($entity_type == 'comment') {
      $node = node_load($entity->nid);
      $block->content[] = $view_function($entity, $node, $view_mode);
    }
    else {
      $block->content[] = $view_function($entity, $view_mode);
    }

    // Also add the entity that is being rendered.
    $block->cache_tags[$entity_type][] = $entity_id;
    $block->request_tags[$entity_type][] = $entity_id;
  }

  return $block;
}

/**
 * Edit form callback.
 */
function bangpoundefq_ctools_entity_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['range'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Range'),
  );
  $form['range']['offset'] = array(
    '#type' => 'textfield',
    '#title' => t('Offset'),
    '#description' => t('The number of items to skip. For example, if this field is 3, the first 3 items will be skipped and not displayed.'),
    '#default_value' => isset($conf['range']['offset']) ? $conf['range']['offset'] : 0,
  );
  $form['range']['limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Limit'),
    '#description' => t('The number of items to display. Enter 0 for no limit.'),
    '#default_value' => isset($conf['range']['limit']) ? $conf['range']['limit'] : 10,
  );

  $view_mode_options = array();
  $entity_infos = entity_get_info();
  $generic_view_modes = array();
  foreach ($entity_infos as $entity_type => $entity_info) {
    $view_modes = array();
    foreach ($entity_info['view modes'] as $view_mode => $view_mode_info) {
      $view_modes[$entity_type . ':' . $view_mode] = $view_mode_info['label'];
      $generic_view_modes[$view_mode] = $view_mode_info['label'];
    }
    if (!empty($view_modes)) {
      $view_mode_options[$entity_info['label']] = $view_modes;
    }
  }

  $view_mode_options['Generic view modes'] = $generic_view_modes;

  $form['view_mode'] = array(
    '#type' => 'select',
    '#title' => t('View mode'),
    '#options' => $view_mode_options,
    '#default_value' => $conf['view_mode'],
  );
  return $form;
}

function bangpoundefq_ctools_entity_form_submit($form, &$form_state) {
  $conf = &$form_state['conf'];
  // Fetch pager settings from the context.
  if ($context = $form_state['contexts'][$form_state['values']['context']]) {
    $conf['use_pager'] = !empty($context->use_pager) ? $context->use_pager : FALSE;
    $conf['pager_id'] = isset($context->pager_id) ? (int)$context->pager_id : 0;
  }
  // Save values from the form.
  foreach (array('range', 'view_mode') as $key) {
    $conf[$key] = $form_state['values'][$key];
  }
}

/**
 * Admin title callback.
 */
function bangpoundefq_ctools_entity_admin_title($subtype, $conf, $context) {
  return t('Items @offset + @limit from "@list"', array('@offset' => $conf['range']['offset'], '@limit' => $conf['range']['limit'], '@list' => $context->identifier));
}

/**
 * Admin info callback.
 */
function bangpoundefq_ctools_entity_admin_info($subtype, $conf, $context) {
  if (strstr($conf['view_mode'], ':') === FALSE) {
    $view_mode = $conf['view_mode'];
    $title = $view_mode;
    $type = 'Generic';
  }
  else {
    list($entity_type, $view_mode) = explode(':', $conf['view_mode']);
    $entity_info = entity_get_info($entity_type);
    $title = check_plain($entity_info['view modes'][$view_mode]['label']);
    $type = $entity_info['label'];
  }
  $block = new stdClass();
  $block->title = $title;
  $block->content = t('@mode for @type', array('@mode' => $block->title, '@type' => $type));
  return $block;
}
