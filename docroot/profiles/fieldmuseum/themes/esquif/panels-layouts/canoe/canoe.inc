<?php

// Plugin definition
$plugin = array(
  'title' => t('Page header'),
  'category' => t('Organism'),
  'icon' => 'canoe.png',
  'theme' => 'esquif_canoe',
  'css' => 'canoe.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side'),
    'hero' => t('Hero'),
  ),
);
