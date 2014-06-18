<?php

class PromotedNodeListEFQ extends NodeListEFQ {

  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->propertyCondition('promote', 1);
    return $this;
  }
}
