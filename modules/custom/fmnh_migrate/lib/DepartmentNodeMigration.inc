<?php

class DepartmentNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');

    $this->addFieldMapping('field_image', 'field_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
  }
}
