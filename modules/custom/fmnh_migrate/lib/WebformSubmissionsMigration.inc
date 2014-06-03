<?php

class WebformSubmissionsMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addFieldMapping('uid', 'uid')->sourceMigration('User');
    $this->addSimpleMappings(array('is_draft', 'submitted', 'remote_addr'));
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous or authenticated roles.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('webform_submissions')
      ->fields('webform_submissions')
      ->orderBy('sid', 'ASC')
    ;
    return $query;
  }
}
