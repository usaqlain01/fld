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

    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->removeFieldMapping('body:summary');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'))
    ;

    $this->addFieldMapping('field_database_information', 'field_database_information');
    $this->addFieldMapping('field_policies', 'field_policies');
    $this->addFieldMapping('field_collections_related_info', 'field_collections_related_info');
    $this->addFieldMapping('field_acknowledgements', 'field_acknowledgements');
    $this->addFieldMapping('field_person', 'field_profiles')->sourceMigration('User');

    $this->addFieldMapping('field_person_additional', 'field_people_additional');

    $this->addFieldMapping('field_collections_loan', 'field_collections_loans');

    $this->addFieldMapping('field_link', 'field_link');
    $this->addFieldMapping('field_link:title', 'field_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_link:attributes');
  }
}
