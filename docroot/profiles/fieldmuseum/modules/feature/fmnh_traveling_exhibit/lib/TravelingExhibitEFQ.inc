<?php

class TravelingExhibitEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'traveling_exhibit');
    return $this;
  }
} 
