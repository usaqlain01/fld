<?php

class CollectionsOfDepartmentEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->order = array();
    $this->entityCondition('bundle', 'collection');
    $this->fieldCondition('field_department', 'target_id', $arguments[0]->data->nid);
    $this->propertyOrderBy('sticky', 'desc');
    $this->propertyOrderBy('title', 'asc');
  }

  static function requiredArguments() {
    return array(
      'entity:node' => array(
        'label' => 'Node',
        'required' => TRUE,
      ),
    );
  }
}
