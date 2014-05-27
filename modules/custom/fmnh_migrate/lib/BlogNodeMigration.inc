<?php

class BlogNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');

    $this->addFieldMapping('field_image', 'field_blog_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_attachment', 'field_article_files')->sourceMigration('DocumentFiles');

  }
}