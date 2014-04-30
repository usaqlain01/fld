<?php

class BlogNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_topic:source_type')->defaultValue('tid');
    $this->addUnmigratedDestinations(array('field_topic:create_term', 'field_topic:ignore_case'));

    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_science_focus:source_type')->defaultValue('tid');
    $this->addUnmigratedDestinations(array('field_science_focus:create_term', 'field_science_focus:ignore_case'));

    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_audience:source_type')->defaultValue('tid');
    $this->addUnmigratedDestinations(array('field_audience:create_term', 'field_audience:ignore_case'));

    $this->addFieldMapping('field_image', 'field_blog_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
  }
}