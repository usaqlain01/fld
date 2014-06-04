<?php

class BlogNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    $this->sourceFields += array(
      'attachments' => 'attachments',
      'attachments:display' => 'attachments:display',
      'attachments:description' => 'attachments:description',
    );
    parent::__construct($arguments);
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');

    $this->addFieldMapping('field_image', 'field_blog_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:description', 'field_blog_image:description');
    $this->addFieldMapping('field_image:display', 'field_blog_image:display');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_attachment', 'attachments');
    $this->addFieldMapping('field_attachment:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_attachment:display', 'attachments:display');
    $this->addFieldMapping('field_attachment:description', 'attachments:description');
    $this->addFieldMapping('field_attachment:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_attachment:preserve_files')->defaultValue(TRUE);

    $this->addFieldMapping(NULL, 'field_audio_file')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_audio_file:display')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_audio_file:description')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_article_files')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_article_files:display')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_article_files:description')->description('Handled in prepareRow');
    $this->addFieldMapping(NULL, 'field_blog_category')->description('Drop this field');

    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');

    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_quote')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_lede:format')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_subtitle')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_subsections')->issueGroup('DNM')->description('Abandon');

    $this->addFieldMapping(null, 'field_image')->issueGroup('DNM')->description('There are only 3 items like this.');
    $this->addFieldMapping(null, 'field_image:title')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_image:data')->issueGroup('DNM');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Merge article files and audio files into a single attachment field.
    $row->attachments = array();
    $row->{'attachments:display'} = array();
    $row->{'attachments:description'} = array();
    if (!empty($row->field_audio_file)) {
      $source_migrations = array(
        'VideoFile',
        'AudioFile',
        'DefaultFile',
        'DocumentFile',
        'ImageFile',
        'UndefinedFile',
      );
      $destids = $this->handleSourceMigration($source_migrations, $row->field_audio_file);
      if (!is_array($destids)) {
        $destids = array($destids);
      }
      $row->attachments = array_merge($row->attachments, $destids);
      $row->{'attachments:display'} = array_merge($row->{'attachments:display'}, $row->{'field_audio_file:display'});
      $row->{'attachments:description'} = array_merge($row->{'attachments:description'}, $row->{'field_audio_file:description'});
    }
    if (!empty($row->field_article_files)) {
      $source_migrations = array(
        'VideoFile',
        'AudioFile',
        'DefaultFile',
        'DocumentFile',
        'ImageFile',
        'UndefinedFile',
      );
      $destids = $this->handleSourceMigration($source_migrations, $row->field_article_files);
      if (!is_array($destids)) {
        $destids = array($destids);
      }
      $row->attachments = array_merge($row->attachments, $destids);
      $row->{'attachments:display'} = array_merge($row->{'attachments:display'}, $row->{'field_article_files:display'});
      $row->{'attachments:description'} = array_merge($row->{'attachments:description'}, $row->{'field_article_files:description'});
    }
  }
}