<?php

class DefaultFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'default');
    return $query;
  }
}