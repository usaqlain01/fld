<?php

class ExhibitNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');
    $this->addFieldMapping('field_exhibit_type', 'field_exhibition_type_tags')->sourceMigration('ExhibitTypeTerm');
    $this->removeFieldMapping('body');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_research_area', 'field_research_area_tags');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags');
    $this->addFieldMapping('field_audience', 'field_audience');
    $this->addFieldMapping('field_topic', 'field_topic');
    $this->addFieldMapping('field_science_focus', 'field_science_focus');

    $this->addFieldMapping('field_image', 'field_branding_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('');
    $this->addFieldMapping('field_image:alt', 'field_branding_image:alt');
    $this->addFieldMapping('field_image:title', 'field_branding_image:title');
  }
}
