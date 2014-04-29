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
      'BlogNode' => array(
        'class_name' => 'BlogNodeMigration',
        'group_name' => 'fmnh',
        'source_type' => 'blog',
        'destination_type' => 'blog',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate blog posts',
      ),
      'CollectionNode' => array(
        'class_name' => 'CollectionNodeMigration',
        'group_name' => 'fmnh',
        'source_type' => 'individual_collection',
        'destination_type' => 'collection',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate individual_collection posts',
      ),
      'NewsletterNode' => array(
        'class_name' => 'NewsletterNodeMigration',
        'group_name' => 'fmnh',
        'source_type' => 'newsletter',
        'destination_type' => 'newsletter',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate newsletters',
      ),
      'ScienceFocusTerm' => array(
        'class_name' => 'ScienceFocusTermMigration',
        'group_name' => 'fmnh',
        'source_vocabulary' => 'science_focus',
        'destination_vocabulary' => 'science_focus',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate science_focus terms',
      ),
      'TopicTerm' => array(
        'class_name' => 'TopicTermMigration',
        'group_name' => 'fmnh',
        'source_vocabulary' => 'topic',
        'destination_vocabulary' => 'topic',
        'source_connection' => 'migrate',
        'source_version' => '7',
        'description' => 'Migrate topic terms',
      ),
    ),
  );
  return $api;
}
