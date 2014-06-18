<?php

class WebformEmailMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addSimpleMappings(array('eid', 'email', 'subject', 'from_name', 'from_address', 'template', 'excluded_components', 'html', 'attachments'));
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
      ->fields('webform_emails')
      ->orderBy('eid', 'ASC');
    return $query;
  }
}
