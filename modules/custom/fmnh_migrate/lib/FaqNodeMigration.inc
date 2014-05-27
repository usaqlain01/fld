<?php

class FaqNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_faq_topic', 'field_faq_topic')->sourceMigration('FaqTopicsTerm');
    $this->addFieldMapping('field_long_question', 'field_faq_long_question');
    $this->addFieldMapping('field_long_question:format', 'field_faq_long_question:format')
      ->callbacks(array($this, 'mapFormat'));
    ;
    $this->addFieldMapping('field_long_question:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');

    $this->addUnmigratedSources(array('field_section_tags','field_sortorder'));
  }
}
