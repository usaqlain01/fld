<?php

class EducationalResourceArticleNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_grade_level', 'field_age_group_tags')->sourceMigration('GradeLevelTerm');
    $this->addFieldMapping(null, 'field_subsections')->issueGroup('DNM')->description('Abandon');
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 299);
    return $query;
  }
}