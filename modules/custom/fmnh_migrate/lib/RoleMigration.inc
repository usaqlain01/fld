<?php

class RoleMigration extends DrupalRole7Migration
{
    public function __construct(array $arguments) {
      parent::__construct($arguments);
      $this->formatMappings[2] = 'filtered_wysiwyg';
      $this->formatMappings[3] = 'full_wysiwyg';
      $this->setDefaultRollbackAction(MigrateMap::ROLLBACK_DELETE);
    }

    public function prepareRow($row) {
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

      // We want to drop these roles.
      if (in_array($row->rid, array(11,16,21,26))) {
        $this->queueMessage(t('Drop role #@role.', array('@role' => $row->rid)), MigrationBase::MESSAGE_INFORMATIONAL);
        return FALSE;
      }
    }
}
