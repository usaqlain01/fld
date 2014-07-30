<?php

/**
 * Implements hook_entity_view_mode_info().
 *
 * @return mixed
 */
function fmnh_landings_entity_view_mode_info() {
  $view_modes['fieldable_panels_pane']['naked'] = array(
    'label' => t('Naked'),
    'custom_settings' => FALSE,
  );
  return $view_modes;
}
