<?php

class UserMigration extends DrupalUser7Migration
{

  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_location_region', 'field_location_region')->sourceMigration('LocationRegionTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addFieldMapping('field_cvfile', 'field_cvfile')->sourceMigration('DocumentFiles');
    $this->addFieldMapping('field_cvfile:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_cvfile:display', 'field_cvfile:display');
    $this->addFieldMapping('field_cvfile:description', 'field_cvfile:description');

    $this->addFieldMapping('field_bio_sketch:format', 'field_bio_sketch:format')
      ->callbacks(array($this, 'mapFormat'));

    $this->addSimpleMappings(array(
      'field_bio_sketch',
      'field_email',
      'field_fax',
      'field_givenname',
      'field_office',
      'field_position',
      'field_surname',
      'field_year_started',
    ));
  }
}