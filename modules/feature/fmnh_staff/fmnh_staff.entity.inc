<?php

/**
 * Implements hook_entity_view_mode_info().
 *
 * @return mixed
 */
function fmnh_staff_entity_view_mode_info() {
  $view_modes['profile2']['summary'] = array(
    'label' => t('Summary'),
    'custom_settings' => TRUE,
  );
  $view_modes['profile2']['list_item'] = array(
    'label' => t('List item'),
    'custom_settings' => TRUE,
  );
  $view_modes['file']['headshot'] = array(
    'label' => t('Headshot'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
}
