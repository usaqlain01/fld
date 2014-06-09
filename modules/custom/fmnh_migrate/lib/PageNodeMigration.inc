<?php

class PageNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $parent_item = $this->findNewMenuParent('node/'. $row->nid);
    if ($parent_item) {
      $row->menu = array(
        'enabled' => true,
        'link_title' => $row->title,
        'description' => '',
        'menu_name' => $parent_item['menu_name'],
        'plid' => $parent_item['mlid'],
        'mlid' => null,
      );
    }
    else {
      return false;
    }
  }
}
