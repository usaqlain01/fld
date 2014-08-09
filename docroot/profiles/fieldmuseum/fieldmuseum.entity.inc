<?php

/**
 * Implements hook_entity_view_mode_info().
 *
 * @return mixed
 */
function fieldmuseum_entity_view_mode_info() {
  $view_modes['node']['promo'] = array(
    'label' => t('Promo'),
    'custom_settings' => TRUE,
  );
  $view_modes['taxonomy_term']['promo'] = array(
    'label' => t('Promo'),
    'custom_settings' => TRUE,
  );
  $view_modes['node']['summary'] = array(
    'label' => t('Summary'),
    'custom_settings' => TRUE,
  );
  $view_modes['taxonomy_term']['summary'] = array(
    'label' => t('Summary'),
    'custom_settings' => TRUE,
  );
  $view_modes['node']['list_item'] = array(
    'label' => t('List item'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
}
