<?php

function fieldmuseum_views_data() {
  $data['views']['groupings_menu'] = array(
    'title' => t('Groupings menu'),
    'help' => t('.'),
    'area' => array(
      'handler' => 'bangpound_views_handler_area_groupings_menu',
    ),
  );
  return $data;
}
