<?php

class WebformSubmittedDataMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
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
      ->fields('webform_submitted_data');
    return $query;
  }
}
