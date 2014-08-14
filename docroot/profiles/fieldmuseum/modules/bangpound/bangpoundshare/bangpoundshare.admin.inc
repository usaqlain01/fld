<?php

function bangpoundshare_admin() {
  ctools_include('plugins');

  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    $options[$entity_type] = $entity_info['label'];
  }
  $form['bangpoundshare_stats_entity_types'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('bangpoundshare_stats_entity_types', array('node')),
    '#title' => 'Entity types',
  );

  $options = array();
  foreach (ctools_get_plugins('bangpoundshare', 'services') as $plugin) {
    $options[$plugin['name']] = $plugin['label'];
  }
  $form['bangpoundshare_stats_plugins'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('bangpoundshare_stats_plugins', array()),
    '#title' => 'Enabled plugins',
  );
  $form['array_filter'] = array('#type' => 'value', '#value' => TRUE);


  return system_settings_form($form);
}
