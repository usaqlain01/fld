<?php

class CollectionsOfDepartmentEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'collection');
    $this->fieldCondition('field_department', 'target_id', $arguments[0]->data->nid);
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
