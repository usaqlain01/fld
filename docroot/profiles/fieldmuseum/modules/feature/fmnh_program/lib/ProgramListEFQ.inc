<?php

class ProgramListEFQ extends NodeListEFQ {
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $this->entityCondition('bundle', 'program');
  }

  protected function getTermIdsForVocabulary($machine_name) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', $machine_name);
    $result = $query->execute();
    return array_keys($result['taxonomy_term']);
  }
}
