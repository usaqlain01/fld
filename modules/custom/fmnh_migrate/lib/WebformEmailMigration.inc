<?php

class WebformEmailMigration extends WebformMigration
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
      ->select('webform_emails')
      ->fields('webform_emails');
    return $query;
  }
}
