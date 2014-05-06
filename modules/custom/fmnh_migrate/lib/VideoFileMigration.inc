<?php

class VideoFileMigration extends DrupalFile7Migration
{
  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'video');
    return $query;
  }

  public function prepareRow($row)
  {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (52 == $row->fid) {
      return FALSE;
    }
  }
}