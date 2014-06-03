<?php

class WebformComponentMigration extends WebformMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'nid')->sourceMigration('WebformNode');
    $this->addSimpleMappings(array('cid', 'pid', 'form_key', 'name', 'type', 'value', 'extra', 'mandatory', 'weight'));
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    // Do not attempt to migrate the anonymous or authenticated roles.
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('webform_component')
      ->fields('webform_component')
      ->orderBy('cid', 'ASC');
    return $query;
  }
}
