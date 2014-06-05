<?php

class ResearchScienceArticleNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
  }

  protected function query() {
    /** @var \SelectQueryInterface $query */
    $query = parent::query();
    $query->leftJoin('field_data_field_article_type', 'f', 'n.nid=f.entity_id');
    $query->condition('f.field_article_type_tid', 296);
    return $query;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $source_migrations = array(
      'DepartmentTerm',
    );
    $nid = $this->handleSourceMigration($source_migrations, $row->field_dept_division_tags);
    if ($nid) {
      if (is_array($nid)) {
        rsort($nid);
        $nid = reset($nid);
      }
      $parent_item = menu_link_get_preferred('node/'. $nid);
      if ($parent_item) {
        $row->menu = array(
          'enabled' => true,
          'link_title' => $row->title,
          'description' => '',
          'menu_name' => 'main-menu',
          'plid' => $parent_item['mlid'],
          'mlid' => NULL,
        );
      }
      else {
        $this->queueMessage('No parent item!');
        return FALSE;
      }
    }
    else {
      $this->queueMessage('No dept/division tag!');
      return FALSE;
    }
  }
}
