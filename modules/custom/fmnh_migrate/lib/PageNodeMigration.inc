<?php

class PageNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
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
    $old_parent_item = $this->findOldParentMenuItem('node/'. $row->nid);
    if ($old_parent_item) {
      foreach ($old_parent_item as $item) {

        // The old parent is a node.
        if (strpos($item, 'node/') === 0) {
          $old_parent_nid = str_replace('node/', '', $item);
          $parent_item = $this->findNewMenuParentForNode($old_parent_nid);
          if ($parent_item) {
            $row->menu = array(
              'enabled' => true,
              'link_title' => $row->title,
              'description' => '',
              'menu_name' => $parent_item['menu_name'],
              'plid' => $parent_item['mlid'],
              'mlid' => null,
            );
            break;
          }
        }
        else {

          // The old parent is now a panels landing page or some other router item.
          $parent_item = menu_link_get_preferred($item);
          if ($parent_item) {
            $row->menu = array(
              'enabled' => true,
              'link_title' => $row->title,
              'description' => '',
              'menu_name' => $parent_item['menu_name'],
              'plid' => $parent_item['mlid'],
              'mlid' => null,
            );
            break;
          }
        }
      }
    }
    else {
      $this->queueMessage('This node had a menu link but its parent was not migrated.');
      return false;
    }
  }
}
