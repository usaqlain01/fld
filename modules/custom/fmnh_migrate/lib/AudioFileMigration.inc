<?php

class AudioFileMigration extends FmnhFileMigration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('media_title')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('media_title:language')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('media_description')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('media_description:format')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('media_description:language')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:source_type')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:create_term')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:ignore_case')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_license')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('urlencode')->issueGroup('DNM')->description('n/a');
  }

  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'audio');
    return $query;
  }
}