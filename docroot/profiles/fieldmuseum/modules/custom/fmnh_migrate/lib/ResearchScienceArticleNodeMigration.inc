<?php

class ResearchScienceArticleNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 296);
    return $query;
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    /** @var \Migration $migration */
    $migration = \Migration::getInstance('PageNode');
    $mapRow = $migration->getMap()->getRowBySource(array($row->nid));
    if ($mapRow && $mapRow['needs_update'] != MigrateMap::STATUS_IGNORED) {
      return FALSE;
    }
  }
}
