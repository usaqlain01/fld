<?php

class WebformLastDownloadMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addFieldMapping('uid', 'uid')->sourceMigration('User');
    $this->addFieldMapping('sid', 'sid')->sourceMigration('WebformSubmissions');
    $this->addSimpleMappings(array('requested'));
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous or authenticated roles.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('webform_last_download')
      ->fields('webform_last_download');
    return $query;
  }
}
