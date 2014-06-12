<?php

class PageNodeMigration extends FmnhNodeMigration {

  private $menu_map = array();

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');

    $this->menu_map = array(
      7271 => 'about',
      209 => 'about',
    );
  }

  public function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->distinct();
    $query->rightJoin('menu_links', 'ml', "ml.link_path = CONCAT('node/', n.nid)");
    $orders =& $query->getOrderBy();
    $orders = array('ml.depth' => 'ASC') + $orders;
    return $query;
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
    else if (isset($this->menu_map[$row->nid])) {
      $parent_item = menu_link_get_preferred($this->menu_map[$row->nid]);
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
      $this->queueMessage('This node had a menu link but its parent was not migrated.');
      return false;
    }
  }
}
