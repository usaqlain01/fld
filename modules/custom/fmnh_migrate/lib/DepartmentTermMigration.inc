<?php

class DepartmentTermMigration extends TermToNodeMigration
{
  public function __construct(array $arguments)
  {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
    $this->addFieldMapping(null, 'field_dept_div')->issueGroup('DNM')->description('This is implied by hierarchy.');
    $this->addFieldMapping(null, 'field_dept_div_abbr')->issueGroup('DNM')->description('Previously used in path auto patterns.');
    $this->addFieldMapping(null, 'weight')->issueGroup('DNM')->description('No longer terms.');
    $this->addFieldMapping(null, 'parent')->issueGroup('DNM')->description('No hierarchy in nodes.');

    $this->addFieldMapping('uid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('created')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('changed')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('promote')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('tnid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('revision_uid')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('is_new')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('translate')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('status')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('sticky')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('revision')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('log')->issueGroup('DNM')->description('Not applicable for migration from term.');
    $this->addFieldMapping('comment')->issueGroup('DNM')->description('Not applicable for migration from term.');

    $this->addFieldMapping(null, 'description')->issueGroup('DNM')->description('For department terms, this value is empty.');

    $this->addFieldMapping('field_topic')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_science_focus')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_audience')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->addFieldMapping('body')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('body:summary')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('body:format')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('body:language')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:file_class')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:language')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:preserve_files')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:destination_dir')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:destination_file')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:file_replace')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:urlencode')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:source_dir')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:alt')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_image:title')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');

    $this->addFieldMapping('field_link')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_link:title')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_link:attributes')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
    $this->addFieldMapping('field_link:language')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');

    $this->addFieldMapping('field_person')->issueGroup('DNM')->description('Handled in DepartmentNode migration.');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    if (in_array($row->tid, array(109,90,78,67,103))) {
      $parent_item = menu_link_get_preferred('science/research');
      $row->menu = array(
        'enabled' => true,
        'link_title' => $row->name,
        'description' => '',
        'menu_name' => 'main-menu',
        'plid' => $parent_item['mlid'],
        'mlid' => null,
      );
    }
    else if ($row->parent == 85 || $row->tid == 85) {
      $parent_item = menu_link_get_preferred('science/conservation');
      $row->menu = array(
        'enabled' => true,
        'link_title' => $row->name,
        'description' => '',
        'menu_name' => 'main-menu',
        'plid' => $parent_item['mlid'],
        'mlid' => null,
      );
    }
    else if ($row->parent == 0) {
      $row->menu = array(
        'enabled' => true,
        'link_title' => $row->name,
        'menu_name' => 'menu-graveyard',
        'plid' => 0,
      );
    }
    else {
      $source_migrations = array(
        'DepartmentTerm',
      );
      $nid = $this->handleSourceMigration($source_migrations, $row->parent);
      $parent_item = menu_link_get_preferred('node/'. $nid);
      if ($parent_item) {
        $row->menu = array(
          'enabled' => true,
          'link_title' => $row->name,
          'description' => '',
          'menu_name' => $parent_item['menu_name'],
          'plid' => $parent_item['mlid'],
          'mlid' => null,
        );
      }
    }
  }
}
