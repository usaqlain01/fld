<?php

class UserPictureMigration extends DrupalPicture7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('urlencode')->defaultValue(TRUE);
    $this->addFieldMapping(NULL, 'filename')->issueGroup('DNM')->description('not applicable');
    $this->addFieldMapping(NULL, 'filemime')->issueGroup('DNM')->description('not applicable');
    $this->addFieldMapping(NULL, 'filesize')->issueGroup('DNM')->description('not applicable');
    $this->addFieldMapping(NULL, 'status')->issueGroup('DNM')->description('not applicable');
    $this->addFieldMapping(NULL, 'type')->issueGroup('DNM')->description('not applicable');
  }
}