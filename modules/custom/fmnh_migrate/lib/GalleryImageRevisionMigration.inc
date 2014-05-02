<?php

class GalleryImageRevisionMigration extends Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $query = db_select('field_data_media_gallery_file')->fields('field_data_media_gallery_file');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationTable('field_revision_media_gallery_file');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      MigrateDestinationTable::getKeySchema('field_data_media_gallery_file'),
      MigrateDestinationTable::getKeySchema('field_revision_media_gallery_file'));
  }
}