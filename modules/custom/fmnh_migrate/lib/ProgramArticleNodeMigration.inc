<?php

class ProgramArticleNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 297);
    $query->condition('n.nid', array(5416,5356,5451,5351,5411,5421,6001,5461), 'NOT IN');
    return $query;
  }
}
