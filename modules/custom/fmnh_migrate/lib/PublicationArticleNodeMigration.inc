<?php

class PublicationArticleNodeMigration extends FmnhNodeMigration {
  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 341);
    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $migration = \Migration::getInstance('PageNode');
    $destids = $migration->getMap()->lookupDestinationID(array($row->nid));
    if ($destids['destid1']) {
      return false;
    }
  }
}
