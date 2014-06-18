<?php
/**
 * @file
 * Implementation of DrupalNodeMigration for Drupal 7 sources.
 */

/**
 * Handling specific to a Drupal 7 source for nodes.
 */
class DrupalNode7Migration extends DrupalNodeMigration {
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Remove fields no longer relevent in D7 (now part of the body field).
    unset($this->sourceFields['format']);
    unset($this->sourceFields['teaser']);

    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields, NULL,
      $this->sourceOptions);

    $this->addFieldMapping('language', 'language')
         ->defaultValue($this->defaultLanguage);

    if (field_info_instance('node', 'body', $this->destinationType)) {
      $this->addFieldMapping('body:summary', 'body:summary');
      $this->addFieldMapping('body:format', 'body:format')
           ->callbacks(array($this, 'mapFormat'));
    }
    else {
      $this->addUnmigratedSources(array('body:summary', 'body:format'));
    }

    $this->addSimpleMappings(array('tnid', 'translate'));
  }

  /**
   * Query for basic node fields from Drupal 7.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
             ->select('node', 'n')
             ->fields('n', array('nid', 'vid', 'language', 'title', 'uid',
               'status', 'created', 'changed', 'comment', 'promote', 'sticky',
               'tnid', 'translate'))
             ->condition('n.type', $this->sourceType)
             ->orderBy('n.changed');
    // Join node_counter for Statistics support
    if (Database::getConnection('default', $this->sourceConnection)
        ->schema()->tableExists('node_counter')) {
      $query->leftJoin('node_counter', 'nc', 'n.nid=nc.nid');
      $query->addField('nc', 'daycount');
      $query->addField('nc', 'timestamp');
      $query->addField('nc', 'totalcount');
    }
    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // The property 'tnid' cannot be handled via sourceMigration() method
    // because it might be 0 or the main node of translation set. We don't want
    // to create a stub for such cases.
    if (!empty($row->tnid)) {
      $destination_ids = $this->getMap()->lookupDestinationID(array($row->tnid));
      // There's no destination yet. Create a stub.
      if (empty($destination_ids)) {
        // Don't create stub for itself.
        if ($row->tnid != $row->nid) {
          // Check if 'tnid' is a node in the source set to prevent not
          // updatable stubs.
          $query = clone $this->query();
          $query->condition('n.nid', $row->tnid);
          $nid = $query->execute()->fetchField();
          unset($query);
          if ($nid) {
            if ($tnids = $this->createStub(NULL)) {
              // Save the mapping.
              $this->map->saveIDMapping((object) array('nid' => $row->tnid), $tnids, MigrateMap::STATUS_NEEDS_UPDATE, $this->defaultRollbackAction);
              $row->tnid = reset($tnids);
            }
          }
        }
        else {
          $row->tnid = 0;
          $row->_is_translation_source = TRUE;
        }
      }
      else {
        $row->tnid = $destination_ids['destid1'];
      }
    }
  }

  public function complete($node, stdClass $row) {
    if (empty($row->_is_translation_source)) {
      return;
    }

    db_update('node')
      ->fields(array('tnid' => $node->nid))
      ->condition('nid', $node->nid)
      ->execute();
  }

}
