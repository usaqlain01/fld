<?php

// Plugin definition
$plugin = array(
  'title' => t('Page header'),
  'category' => t('Organism'),
  'icon' => 'canoe.png',
  'theme' => 'esquif_canoe',
  'css' => 'canoe.css',
  'regions' => array(
    'search' => t('Search'),
    'hero' => t('Hero'),
  ),
);
