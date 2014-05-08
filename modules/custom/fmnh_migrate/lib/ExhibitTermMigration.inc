<?php

class ExhibitTermMigration extends TermToNodeMigration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping(null, 'weight')->issueGroup('DNM')->description('No longer terms.');
    $this->addFieldMapping(null, 'parent')->issueGroup('DNM')->description('No hierarchy in nodes.');

    $this->addFieldMapping('uid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('created')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('changed')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('promote')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('tnid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('revision_uid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('is_new')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('translate')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('status')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('sticky')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('revision')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('log')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('comment')->issueGroup('DNM')->description('Not applicable for migration from term.');

    $this->addFieldMapping(null, 'description')->issueGroup('DNM')->description('For department terms, this value is empty.');

    $this->addFieldMapping('field_exhibit_type')->issueGroup('DNM')->description('Handled in ExhibitNode migration');
  }
}