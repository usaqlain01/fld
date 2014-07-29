<?php
/**
 * @file
 * fmnh_blog.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function fmnh_blog_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_blogs';
  $queue->label = 'Featured blogs';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'topic' => 'topic',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['featured_blogs'] = $queue;

  return $export;
}
