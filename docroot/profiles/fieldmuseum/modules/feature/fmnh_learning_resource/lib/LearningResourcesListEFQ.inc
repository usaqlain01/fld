<?php

class LearningResourcesListEFQ extends NodeListEFQ
{
  public function __construct(Array $config, Array $arguments = array())
  {
    parent::__construct($config, $arguments);
    $this->order = array();
    $this->entityCondition('bundle', 'learning_resource')
      ->propertyOrderBy('sticky', 'desc')
      ->propertyOrderBy('title')
    ;
  }
}