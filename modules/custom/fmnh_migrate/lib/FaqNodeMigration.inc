<?php

class FaqNodeMigration extends DrupalNode7Migration
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

    $this->addUnmigratedSources(array('field_section_tags'));
  }
}
