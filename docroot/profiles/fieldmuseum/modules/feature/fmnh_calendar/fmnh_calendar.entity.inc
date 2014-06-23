<?php

function fmnh_calendar_entity_view_mode_info() {
  $view_modes['node']['event'] = array(
    'label' => t('Event'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
}
