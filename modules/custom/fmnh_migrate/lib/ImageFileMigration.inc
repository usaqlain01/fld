<?php

class ImageFileMigration extends DrupalFile7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('field_file_image_alt_text');
    $this->addFieldMapping('field_file_image_alt_text:language');
    $this->addFieldMapping('field_file_image_title_text');
    $this->addFieldMapping('field_file_image_title_text:language');
    $this->addFieldMapping('media_title', 'field_image_name');
  }

  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'image');
    return $query;
  }
}
