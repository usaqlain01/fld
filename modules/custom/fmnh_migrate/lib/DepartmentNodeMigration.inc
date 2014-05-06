<?php

class DepartmentNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');

    $this->addFieldMapping('field_image', 'field_dept_div_header_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');

    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->removeFieldMapping('body:summary');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_person', 'field_profiles')->sourceMigration('User');

    $this->addFieldMapping('field_link', 'field_department_links');
    $this->addFieldMapping('field_link:title', 'field_department_links:title');
    $this->addFieldMapping('field_link:attributes', 'field_department_links:attributes');

    $this->addUnmigratedSources(array('field_areas_featured_choice', 'field_project_header'));
  }
}
