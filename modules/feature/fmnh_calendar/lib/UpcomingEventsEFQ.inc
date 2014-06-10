<?php

class UpcomingEventsEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->fieldCondition('field_date', 'value', date("Y-m-d h:i:s"), '>=');
    $this->fieldCondition('field_date', 'value2', date("Y-m-d h:i:s"), '<=');
  }
}
