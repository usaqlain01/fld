<?php

// Plugin definition
$plugin = array(
  'title' => t('Coble'),
  'category' => t('Columns: 2'),
  'icon' => 'coble.png',
  'theme' => 'esquif_coble',
  'css' => 'coble.css',
  'regions' => array(
    'main_a' => t('Main left side'),
    'main_b' => t('Main right side'),
    'secondary_a' => t('Secondary left side'),
    'secondary_b' => t('Secondary right side'),
  ),
);
