<?php

/**
 * Implement hook_migrate_api().
 * @return array
 * @see hook_migrate_api
 */
function fmnh_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'fmnh' => array(
        'title' => t('The Field Museum'),
        // Default format for all content migrations
        'default_format' => 'filtered_html',
      ),
    ),
    'migrations' => array(
      'NewsletterNode' => array(
        'class_name' => 'NewsletterNodeMigration',
        'group_name' => 'fmnh',
        'source_type' => 'newsletter',
        'destination_type' => 'newsletter',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate newsletters',
      ),
    ),
  );
  return $api;
}
