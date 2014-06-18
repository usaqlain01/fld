<?php

class ProgramsByAudienceEFQ extends NodesByAudienceEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'program');
  }
} 
