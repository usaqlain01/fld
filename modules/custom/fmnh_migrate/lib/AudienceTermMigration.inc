<?php

class AudienceTermMigration extends FmnhTermMigration {
  private $crosswalk;

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Read the crosswalk file the first time through.
    if (empty($this->crosswalk)) {
      $this->crosswalk = array(
        'Boy & Girl Scouts' => 'Scouts',
        'Citizen Scientists' => 'Adults',
        'Conservationists' => 'Adults',
        'Graduates' => 'Adults',
        'Groups - school groups and group sales' => 'Educators',
        'Kids & Teens' => 'Teens',
        'Press/Journalist' => 'Adults',
        'Researchers' => 'Adults',
        'Scientists' => 'Adults',
        'Special Event Planners' => 'Adults',
        'Student' => 'Teens',
        'Undergraduates' => 'Adults',
      );
    }

    // If we find a crosswalk for this term, map to that tid, otherwise we
    // fall through and import the term normally (assigning the new name).
    // @see https://drupal.org/node/2250057
    if (isset($this->crosswalk[$row->name])) {
      $new_name = $this->crosswalk[$row->name];
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
  }
}
