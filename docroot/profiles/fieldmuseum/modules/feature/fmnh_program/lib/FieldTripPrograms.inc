<?php

class FieldTripPrograms extends ProgramListEFQ
{
  public function __construct(Array $config, Array $arguments = array())
  {
    parent::__construct($config, $arguments);
    $tids = $this->getTermIdsForVocabulary('grade_level');
    $this->fieldCondition('field_grade_level', 'target_id', $tids);
  }
}
