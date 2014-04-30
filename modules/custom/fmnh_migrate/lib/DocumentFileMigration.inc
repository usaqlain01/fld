<?php

class DocumentFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'document');
    return $query;
  }
}