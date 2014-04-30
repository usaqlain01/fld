<?php

class VideoFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'video');
    return $query;
  }
}