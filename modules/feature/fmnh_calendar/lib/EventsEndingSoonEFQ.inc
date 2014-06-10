<?php

class EventsEndingSoonEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $one_month = date('Y-m-d h:i:s', strtotime(date('Y-m-d h:i:s', strtotime(date('Y-m-d h:i:s'))) . '+1 month'));
    $this->fieldCondition('field_date', 'value2', $one_month, '<=');
    $this->fieldCondition('field_date', 'value2', date('Y-m-d h:i:s'), '>');
    $this->fieldCondition('field_date', 'value', date('Y-m-d h:i:s'), '<');
  }
}
