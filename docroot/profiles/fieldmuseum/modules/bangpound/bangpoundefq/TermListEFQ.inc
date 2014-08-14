<?php

class TermListEFQ extends EntityFieldQuery implements EntityListEFQ {

  public function __construct(Array $config, Array $arguments = array()) {
    $this->entityCondition('entity_type', static::entityType())
      ->entityCondition('bundle', $arguments[0]->data->machine_name)
      ->propertyOrderBy('weight', 'asc')
      ->addTag('taxonomy_efq');
  }

  static function entityType() {
    return 'taxonomy_term';
  }

  static function requiredArguments() {
    return array(
      'entity:taxonomy_vocabulary' => array(
        'label' => 'Vocabulary',
        'required' => TRUE,
      ),
    );
  }
}
