<?php

class CollectionNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_location_region', 'field_location_region')->sourceMigration('LocationRegionTerm');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags')->sourceMigration('StratigraphyTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addUnmigratedSources(array('field_image', 'field_image:title', 'field_image:data'));

    $this->addFieldMapping('field_image', 'field_collection_image_header')->sourceMigration('ImageFile');
  }
}