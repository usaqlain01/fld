<?php

class DefaultFileMigration extends FmnhFileMigration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'default');
    return $query;
  }
}