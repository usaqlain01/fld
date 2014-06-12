<?php

class ArticleNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_lede:format')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_subtitle')->issueGroup('Design');

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_location_region', 'field_location_region')->sourceMigration('LocationRegionTerm');
    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags')->sourceMigration('StratigraphyTerm');
    $this->addFieldMapping('field_grade_level', 'field_age_group_tags')->sourceMigration('GradeLevelTerm');

    $this->addFieldMapping(null, 'field_section_tags')->issueGroup('DNM')->description('Seek to abandon');
    $this->addFieldMapping(null, 'field_subsections')->issueGroup('DNM')->description('Seek to abandon');
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

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->isNull('f.field_article_type_tid');
    return $query;
  }
}
