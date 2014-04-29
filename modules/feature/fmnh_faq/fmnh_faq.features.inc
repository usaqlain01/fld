<?php
/**
 * @file
 * fmnh_faq.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fmnh_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
