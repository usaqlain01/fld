<?php

class WebformSubmittedDataMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addFieldMapping('sid', 'sid')->sourceMigration('WebformSubmissions');
    $this->addSimpleMappings(array('cid', 'no', 'data'));
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous or authenticated roles.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('webform_submitted_data')
      ->fields('webform_submitted_data')
      ->orderBy('sid', 'ASC');
    return $query;
  }
}
