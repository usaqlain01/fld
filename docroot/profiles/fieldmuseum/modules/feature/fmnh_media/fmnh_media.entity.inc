<?php


function fmnh_media_entity_view_mode_info() {
  $view_modes['file']['banner_5x2'] = array(
    'label' => t('Banner 5x2'),
    'custom_settings' => TRUE,
  );
  $view_modes['file']['banner_5x3'] = array(
    'label' => t('Banner 5x3'),
    'custom_settings' => TRUE,
  );
  return $view_modes;
}
