<?php

abstract class NodeListEFQ extends EntityFieldQuery implements EntityListEFQ {

  public function __construct(Array $config, Array $arguments = array()) {
    $this->entityCondition('entity_type', static::entityType())
      ->propertyCondition('status', 1)
      ->propertyOrderBy('sticky', 'desc')
      ->propertyOrderBy('created', 'desc');
  }

  static function entityType() {
    return 'node';
  }

  static function requiredArguments() {
    return array();
  }
}
