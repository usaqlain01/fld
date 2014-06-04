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

    $fields = array(
      'bundle' => 'Example Content: image',
      'deleted' => 'Example Content: 0',
      'entity_id' => 'Example Content: 17',
      'revision_id' => 'Example Content: 17',
      'language' => 'Example Content: und',
      'delta' => 'Example Content: 0',
      'entity_type' => 'Example Content: file',
      'media_gallery_file_fid' => 'file',
      'entity_id_1' => 'Example Content: 17',
      'revision_id_1' => 'Example Content: 17',
      'delta_1' => 'Example Content: 0',
    );

    $this->source = new MigrateSourceSQL($query, $fields,  NULL, array('map_joinable' => FALSE));
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
    $this->addFieldMapping('entity_id', 'entity_id_1');
    $this->addFieldMapping('revision_id', 'revision_id_1');
    $this->addFieldMapping('media_gallery_file_fid', 'entity_id')->sourceMigration(array('ImageFile', 'VideoFile', 'AudioFile', 'DocumentFile', 'DefaultFile', 'UndefinedFile'));
    $this->addFieldMapping('media_gallery_file_description')->defaultValue('');
    $this->addFieldMapping('delta', 'delta_1')->defaultValue(0);
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (empty($row->entity_id)) {
      $this->queueMessage('There was no entity ID');
      return FALSE;
    }

    /** @var MigrationBase|Migration $source_migration */
    $source_migration = Migration::getInstance('PhotoGalleryNode');
    $destids = $source_migration->getMap()->lookupDestinationID(array($row->field_imagegalleryref_nid));
    if (!empty($destids)) {
      $nid = reset($destids);
      $row->entity_id_1 = $nid;
      $row->revision_id_1 = db_select('node')->fields('node', array('vid'))->condition('nid', $nid)->execute()->fetchField();

      $query = db_select('field_data_media_gallery_file')
        ->condition('entity_type', 'node')
        ->condition('bundle', 'media_gallery')
        ->condition('entity_id', $nid);
      // This would break for language.

      $query
        ->addExpression('MAX(field_data_media_gallery_file.delta)');

      $result = $query->execute();
      $delta = (int) $result->fetchField();
      $row->delta_1 = 0;
      if ($delta || $delta === 0) {
        $row->delta_1 = $delta + 1;
      }
    }
    else {
      $this->queueMessage('No destination IDs for '. $row->field_imagegalleryref_nid, Migration::MESSAGE_INFORMATIONAL);
      return FALSE;
    }
  }
}
