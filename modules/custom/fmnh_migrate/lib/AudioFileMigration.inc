<?php

class AudioFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'audio');
    return $query;
  }
}