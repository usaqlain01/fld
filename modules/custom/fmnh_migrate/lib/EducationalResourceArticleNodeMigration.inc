<?php

class EducationalResourceArticleNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields += array(
      'attachments' => 'attachments',
      'attachments:display' => 'attachments:display',
      'attachments:description' => 'attachments:description',
    );
    parent::__construct($arguments);

    $this->addFieldMapping('field_grade_level', 'field_age_group_tags')->sourceMigration('GradeLevelTerm');

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

    $this->addFieldMapping(null, 'field_subsections')->issueGroup('DNM')->description('Abandon');
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 299);
    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $this->prepareRowAttachments($row);

    $migration = \Migration::getInstance('PageNode');
    $destids = $migration->getMap()->lookupDestinationID(array($row->nid));
    if ($destids['destid1']) {
      return false;
    }
  }
}
