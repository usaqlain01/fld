<?php
/**
 * @file
 * fmnh_podcast.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fmnh_podcast_node_info() {
  $items = array(
    'podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
