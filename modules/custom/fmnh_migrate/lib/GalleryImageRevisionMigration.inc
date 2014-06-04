<?php

class GalleryImageRevisionMigration extends Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $query = db_select('field_data_media_gallery_file')->fields('field_data_media_gallery_file');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationTable('field_revision_media_gallery_file');

    $schema = drupal_get_schema('field_data_media_gallery_file');
    $keys = array();
    foreach ($schema['primary key'] as $primary_key) {
      $keys[$primary_key] = $schema['fields'][$primary_key];
    }

    $this->map = new MigrateSQLMap(
      $this->machineName,
      $keys,
      MigrateDestinationTable::getKeySchema('field_revision_media_gallery_file')
    );

    $this->addSimpleMappings(array(
      'entity_type',
      'bundle',
      'entity_id',
      'deleted',
      'revision_id',
      'language',
      'delta',
      'media_gallery_file_fid',
      'media_gallery_file_display',
      'media_gallery_file_description',
    ));
  }
}