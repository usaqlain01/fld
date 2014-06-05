<?php

class NewsForGeneralAudiencesArticleNodeMigration extends FmnhNodeMigration {
  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 295);
    return $query;
  }
}