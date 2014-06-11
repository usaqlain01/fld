<?php

class NodesByAudienceEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->fieldCondition('field_audience', 'target_id', $arguments[0]->data->tid);
  }

  static function requiredArguments() {
    return array(
      'entity:taxonomy_term' => array(
        'label' => 'Taxonomy term',
        'required' => TRUE,
      ),
    );
  }
}
