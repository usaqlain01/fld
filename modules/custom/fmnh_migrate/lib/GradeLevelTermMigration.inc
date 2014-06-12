<?php

class GradeLevelTermMigration extends FmnhTermMigration {
  private $crosswalk;

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Read the crosswalk file the first time through.
    if (empty($this->crosswalk)) {
      $this->crosswalk = array(
        'Young Children (0-5)' => FALSE,
        'Kids (6-12)' => FALSE,
        'Teens (13-17)' => FALSE,
        'Adults (18+)' => FALSE,
        'Pre-K' => 'Pre K - 2nd Grade',
        'K-2nd grade' => 'Pre K - 2nd Grade',
        '3rd-5th grade' => 'Grades 3 - 5',
        '6th-8th grade' => 'Grades 6 - 8',
        '9th-12th grade' => 'Grades 9 - 12',
        'Exhibit Closed' => FALSE,
      );
    }

    // If we find a crosswalk for this term, map to that tid, otherwise we
    // fall through and import the term normally (assigning the new name).
    // @see https://drupal.org/node/2250057
    if (isset($this->crosswalk[$row->name])) {
      $new_name = $this->crosswalk[$row->name];
      if ($new_name) {
        $query = db_select('taxonomy_vocabulary', 'v')
          ->condition('machine_name', $this->arguments['destination_vocabulary']);
        $query->innerJoin('taxonomy_term_data', 'td', 'v.vid=td.vid');

        $new_tid = $query->fields('td', array('tid'))
          ->condition('td.name', $new_name)
          ->execute()
          ->fetchField();

        if ($new_tid) {
          $this->map->saveIDMapping($row, array($new_tid),
            MigrateMap::STATUS_IGNORED, MigrateMap::ROLLBACK_PRESERVE);
          $this->rollbackAction = MigrateMap::ROLLBACK_PRESERVE;
          return FALSE;
        }
        else {
          $row->name = $new_name;
          $row->parent = 0;
        }
      }
      // We don't want to bring the term here.
      else {
        return FALSE;
      }
    }
  }
}
