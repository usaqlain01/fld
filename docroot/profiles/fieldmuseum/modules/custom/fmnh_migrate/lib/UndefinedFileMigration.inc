<?php

class UndefinedFileMigration extends FmnhFileMigration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'undefined');
    return $query;
  }
}