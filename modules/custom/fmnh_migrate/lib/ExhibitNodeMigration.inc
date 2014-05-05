<?php

class ExhibitNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');
    $this->addFieldMapping('field_exhibit_type', 'field_exhibition_type_tags')->sourceMigration('ExhibitTypeTerm');
  }
}
