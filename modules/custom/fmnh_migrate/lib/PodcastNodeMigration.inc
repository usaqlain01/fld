<?php

class PodcastNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // This prevents warnings for mapping the body fields again below.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');

    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_exhibition', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addFieldMapping('field_attachment', 'field_podcast_file')->sourceMigration('AudioFile');
    $this->addFieldMapping('field_attachment:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_attachment:description', 'field_podcast_file:description');
    $this->addFieldMapping('field_attachment:display', 'field_podcast_file:display');

    $this->addFieldMapping('field_department', 'field_dept_division_tags');

    $this->addFieldMapping('field_image', 'field_podcast_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    $this->addUnmigratedSources(array('field_image', 'field_image:title', 'field_image:data'));
  }
}
