<?php

class WebformNodeMigration extends FmnhNodeMigration
{
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping(null, 'body')->issueGroup('DNM')->description('Source does not have a body field.');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'));
  }
}
