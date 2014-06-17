<?php

class StaffProfileMigration extends DrupalMigration
{

  /**
   * Query for the basic user data. Same query is used for all currently-supported
   * versions of Drupal.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous user row.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('users', 'u')
      ->fields('u')
      ->condition('u.uid', 0, '>');
    return $query;
  }

  public function __construct(array $arguments)
  {
    $arguments['entity_type'] = 'profile2';
    $arguments['bundle'] = 'main';
    parent::__construct($arguments);
    $this->sourceFields += $this->version->getSourceFields('user', 'user');

    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields,
      NULL, $this->sourceOptions);

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array('type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source user ID',
          'alias' => 'u',
        ),
      ),
      DrupalDestinationProfile2::getKeySchema()
    );

    $this->destination = new DrupalDestinationProfile2('profile2', 'main');

    $this->addFieldMapping('uid', 'uid')->sourceMigration('User');

    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_location_region', 'field_location_region')->sourceMigration('LocationRegionTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addFieldMapping('field_cvfile', 'field_cvfile')->sourceMigration('DocumentFile');
    $this->addFieldMapping('field_cvfile:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_cvfile:display', 'field_cvfile:display');
    $this->addFieldMapping('field_cvfile:description', 'field_cvfile:description');
    $this->addFieldMapping('field_cvfile:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_cvfile:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_image', 'field_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_bio_sketch:format', 'field_bio_sketch:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_bio_sketch:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_executive_staff', 'field_executive_staff');

    $this->addFieldMapping('field_introduction', 'field_introduction');
    $this->addFieldMapping('field_introduction:format', 'field_introduction:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_introduction:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_research', 'field_research');
    $this->addFieldMapping('field_research:format', 'field_research:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_research:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_education', 'field_education');
    $this->addFieldMapping('field_education:format', 'field_education:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_education:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_work_experience', 'field_work_experience');
    $this->addFieldMapping('field_work_experience:format', 'field_work_experience:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_work_experience:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_interests', 'field_interests');
    $this->addFieldMapping('field_interests:format', 'field_interests:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_interests:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_accomplishments', 'field_accomplishments');
    $this->addFieldMapping('field_accomplishments:format', 'field_accomplishments:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_accomplishments:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_grants_awards', 'field_grants_awards');
    $this->addFieldMapping('field_grants_awards:format', 'field_grants_awards:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_grants_awards:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_professional_affiliations', 'field_professional_affiliations');
    $this->addFieldMapping('field_professional_affiliations:format', 'field_professional_affiliations:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_professional_affiliations:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_publications', 'field_publications');
    $this->addFieldMapping('field_publications:format', 'field_publications:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_publications:language')->defaultValue(LANGUAGE_NONE);

    $this->addSimpleMappings(array(
      'field_bio_sketch',
      'field_email',
      'field_fax',
      'field_givenname',
      'field_office',
      'field_position',
      'field_surname',
      'field_year_started',
    ));

    $this->addfieldMapping('field_office:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_fax:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_givenname:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_position:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_year_started:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_surname:language')->defaultValue(LANGUAGE_NONE);
  }


  /**
   * Review a data row after fetch, returning FALSE to skip it.
   *
   * @param $row
   * @return bool
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $entity_id = $row->uid;

    // Load up field data for dynamically mapped fields
    foreach ($this->version->getSourceFieldInfo() as $field_name => $field_info) {
      // Find the data in field_data_$field_name.
      $table = "field_data_$field_name";
      $result = Database::getConnection('default', $this->arguments['source_connection'])
        ->select($table, 'f')
        ->fields('f')
        ->condition('entity_type', 'user')
        ->condition('bundle', 'user')
        ->condition('entity_id', $entity_id)
        ->orderBy('delta')
        ->execute();
      foreach ($result as $field_row) {
        $i = 0;
        // We assume the first column is the "primary" value of the field, and
        // assign the field name rather than the column name for it.
        foreach ($this->version->getSourceFieldInfo()[$field_name]['columns'] as $display_name => $column_name) {
          if ($i++ == 0) {
            $index = $field_name;
          }
          else {
            $index = $display_name;
          }
          if (isset($row->$index) && !is_array($row->$index)) {
            $row->$index = array($row->$index);
          }
          $row->{$index}[] = $field_row->$column_name;
        }
      }
    }
  }
}

class DrupalDestinationProfile2 extends MigrateDestinationEntity {

  /**
   * Derived classes must implement fields(), returning a list of available
   * destination fields.
   *
   * @param Migration $migration
   *  Optionally, the migration containing this destination.
   * @return array
   *  Keys: machine names of the fields (to be passed to addFieldMapping)
   *  Values: Human-friendly descriptions of the fields.
   */
  public function fields($migration = NULL) {
    $fields = array();
    // First the core (users table) properties
    $fields['uid'] = t('<a href="@doc">Existing user ID</a>',
      array('@doc' => 'http://drupal.org/node/1349632#uid'));

    // Then add in anything provided by handlers
    $fields += migrate_handler_invoke_all('Entity', 'fields', $this->entityType, $this->bundle, $migration);
    $fields += migrate_handler_invoke_all('Profile2', 'fields', $this->entityType, $this->bundle, $migration);

    return $fields;
  }

  /**
   * Derived classes must implement import(), to construct one new object (pre-pppulated
   * using field mappings in the Migration). It is expected to call prepare and
   * complete handlers, passing them $row (the raw data from the source).
   */
  public function import(stdClass $profile, stdClass $row) {
    // Updating previously-migrated content?
    $migration = Migration::currentMigration();
    if (isset($row->migrate_map_destid1)) {
      if (isset($profile->pid)) {
        if ($profile->pid != $row->migrate_map_destid1) {
          throw new MigrateException(t("Incoming pid !pid and map destination pid !destid1 don't match",
            array('!pid' => $profile->pid, '!destid1' => $row->migrate_map_destid1)));
        }
      }
      else {
        $profile->pid = $row->migrate_map_destid1;
      }
    }
    if ($migration->getSystemOfRecord() == Migration::DESTINATION) {
      if (!isset($profile->pid)) {
        throw new MigrateException(t('System-of-record is DESTINATION, but no destination pid provided'));
      }
      // @todo: Support DESTINATION case
      $old_file = profile2_load($profile->pid);
    }

    // 'type' is the bundle property on file entities. It must be set here for
    // the sake of the prepare handlers, although it may be overridden later
    // based on the detected mime type.
    if (empty($profile->type)) {
      // If a bundle was specified in the constructor we use it for filetype.
      if ($this->bundle != 'main') {
        $profile->type = $this->bundle;
      }
      else {
        $profile->type = 'main';
      }
    }

    // Invoke migration prepare handlers
    $this->prepare($profile, $row);

    if (isset($profile->pid)) {
      $updating = TRUE;
    }
    else {
      $updating = FALSE;
    }

    if (!isset($profile->uid)) {
      $profile->uid = 1;
    }

    // file_save() unconditionally sets timestamp - if we have an explicit
    // value we want, we need to set it manually after file_save.
    if (isset($profile->changed)) {
      $changed = MigrationBase::timestamp($profile->changed);
    }

    migrate_instrument_start('profile2_save');
    $profile = profile2_create((array) $profile);
    profile2_save($profile);
    migrate_instrument_stop('profile2_save');

    if (is_object($profile) && isset($profile->pid)) {
      $this->complete($profile, $row);
      if (isset($changed)) {
        db_update('profile')
          ->fields(array('changed' => $changed))
          ->condition('pid', $profile->pid)
          ->execute();
        $profile->changed = $changed;
      }
      $return = array($profile->pid);
      if ($updating) {
        $this->numUpdated++;
      }
      else {
        $this->numCreated++;
      }
    }
    else {
      $return = FALSE;
    }
    return $return;
  }

  public function rollback(array $id) {
    migrate_instrument_start('profile2 rollback');
    $pid = reset($id);
    profile2_delete_multiple(array($pid));
    migrate_instrument_stop('profile2 rollback');
  }

  static public function getKeySchema() {
    return array(
      'pid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'description' => 'Primary key',
      ),
    );
  }
}
