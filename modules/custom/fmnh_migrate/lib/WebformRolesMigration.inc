<?php

class WebformRolesMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addFieldMapping('rid', 'rid')->sourceMigration('Role');
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous or authenticated roles.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('webform_roles')
      ->fields('webform_roles');
    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    if (in_array($row->rid, array(11,16,21,26))) {
      $this->queueMessage(t('Drop role #@role.', array('@role' => $row->rid)), MigrationBase::MESSAGE_INFORMATIONAL);
      return FALSE;
    }
  }
}
