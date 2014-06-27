<?php

/**
 * Implements hook_entity_view_mode_info().
 *
 * @return mixed
 */
function fieldmuseum_entity_view_mode_info() {
  $view_modes['node']['banner'] = array(
    'label' => t('Banner'),
    'custom_settings' => TRUE,
  );
  $view_modes['node']['promo'] = array(
    'label' => t('Promo'),
    'custom_settings' => TRUE,
  );
  $view_modes['node']['summary'] = array(
    'label' => t('Summary'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
}
