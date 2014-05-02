<?php

class GalleryImageMigration extends Migration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $query = Database::getConnection('default', 'migrate')->select('field_data_field_imagegalleryref')
      ->fields('field_data_field_imagegalleryref')
      ->orderBy('entity_id', 'ASC')
      ->orderBy('delta', 'ASC');
    ;
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationTable('field_data_media_gallery_file');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'entity_type' => array(
          'type' => 'varchar',
          'length' => 128,
          'not null' => TRUE,
          'default' => '',
          'description' => 'The entity type this data is attached to',
        ),
        'entity_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'The entity id this data is attached to',
        ),
        'deleted' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => TRUE,
          'default' => 0,
          'description' => 'A boolean indicating whether this data item has been deleted'
        ),
        'delta' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'The sequence number for this data item, used for multi-value fields',
        ),
        'language' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
          'default' => '',
          'description' => 'The language for this data item.',
        ),
      ),
      MigrateDestinationTable::getKeySchema('field_data_media_gallery_file')
    );

    $this->addFieldMapping('entity_type')->defaultValue('node');
    $this->addFieldMapping('bundle')->defaultValue('media_gallery');
    $this->addFieldMapping('deleted', 'deleted');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('entity_id', 'field_imagegalleryref_nid')->sourceMigration('PhotoGalleryNode');
    $this->addFieldMapping('media_gallery_file_fid', 'entity_id')->sourceMigration('ImageFile');
    $this->addFieldMapping('media_gallery_file_description')->defaultValue('');
    $this->addFieldMapping('delta', 'delta_1');
    $this->addFieldMapping('revision_id', 'revision_id_1');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (empty($row->entity_id)) {
      return FALSE;
    }

    cache_clear_all('*', 'cache_field', TRUE);

    /** @var MigrationBase|Migration $source_migration */
    $source_migration = Migration::getInstance('PhotoGalleryNode');
    $destids = $source_migration->getMap()->lookupDestinationID(array($row->field_imagegalleryref_nid));
    if (!empty($destids)) {
      $nid = reset($destids);
      $node = node_load($nid, NULL, TRUE);
      $row->revision_id_1 = $node->vid;
      $items = field_get_items('node', $node, 'media_gallery_file');
      if ($items) {
        $row->delta_1 = count($items);
      }
      else {
        $row->delta_1 = 0;
      }
    }
    else {
      return FALSE;
    }
  }
}
