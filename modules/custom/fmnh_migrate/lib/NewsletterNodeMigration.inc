<?php

class NewsletterNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->removeFieldMapping('body:format');
    $this->addFieldMapping('body:format', 'field_crnews_staff_student:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addUnmigratedSources(array('field_crnews_staff_student', 'field_research_publications', 'field_fieldwork_collections', 'field_public_education'));
    $this->addUnmigratedSources(array('field_research_publications:format', 'field_fieldwork_collections:format', 'field_public_education:format'));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $body_value = '';
    $body_value .= '<h2>Staff &amp; Student News</h2>';
    $body_value .= $row->field_crnews_staff_student[0];
    $body_value .= '<h2>Research &amp; Publications</h2>';
    $body_value .= $row->field_research_publications[0];
    $body_value .= '<h2>Fieldwork &amp; Collections</h2>';
    $body_value .= $row->field_fieldwork_collections[0];
    $body_value .= '<h2>Public Education &amp; Media Coverage</h2>';
    $body_value .= $row->field_public_education[0];
    $row->body = array($body_value);
    return TRUE;
  }
} 