<?php

class UpcomingEventsEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'event');
    $this->fieldCondition('field_date', 'value', date("Y-m-d h:i:s"), '>');
  }
}
