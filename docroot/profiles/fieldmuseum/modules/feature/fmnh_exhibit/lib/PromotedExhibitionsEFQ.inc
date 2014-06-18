<?php

class PromotedExhibitionsEFQ extends PromotedNodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'exhibit');
  }
}
