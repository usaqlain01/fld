<?php

class EventNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('field_program', 'nid')->sourceMigration('ExhibitNode');
    $this->addFieldMapping('field_date', 'field_startdate');
    $this->addFieldMapping('field_date:timezone')->defaultValue('America/Chicago');
    $this->addFieldMapping('field_date:rrule')->defaultValue(NULL);
    $this->addFieldMapping('field_date:to', 'field_enddate');
  }
}