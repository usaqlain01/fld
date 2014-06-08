<?php

class TravelingExhibitionNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->condition('n.nid', array(5416,5356,5451,5351,5411,5421,6001,5461));
    return $query;
  }
}
