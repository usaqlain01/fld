<?php

class ImageFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'image');
    return $query;
  }
}