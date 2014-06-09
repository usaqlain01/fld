<?php

class PageNodeMigration extends FmnhNodeMigration {

  public function __construct(array $arguments) {
    $this->sourceFields['menu'] = 'menu';
    parent::__construct($arguments);
    $this->addFieldMapping('menu', 'menu');
  }

  public function findNewMenuParent($path) {
    static $info;
    $source_migrations = array(
      'ArticleNode',
      'BlogNode',
      'CollectionNode',
      'DepartmentNode',
      'DepartmentTerm',
      'EducationalResourceArticleNode',
      'ExhibitNode',
      'FaqNode',
      'ItineraryArticleNode',
      'NewsForGeneralAudiencesArticleNode',
      'NewsletterNode',
      'PhotoGalleryNode',
      'PodcastNode',
      'PressMaterialsArticleNode',
      'ProgramArticleNode',
      'PublicationArticleNode',
      'ResearchScienceArticleNode',
      'VideoNode',
      'WebformNode',
    );
    if (!$info) {
      $info = \Symfony\Component\Yaml\Yaml::parse(drupal_get_path('module', 'fmnh_migrate') .'/parents.yml');
    }

    if (isset($info[$path])) {
      foreach ($info[$path] as $item) {
        if (strpos($item, 'node/') === 0) {
          $old_nid = str_replace('node/', '', $item);
          $nid = $this->handleSourceMigration($source_migrations, $old_nid);
          if ($nid) {
            $parent_item = menu_link_get_preferred('node/'. $nid);
            if ($parent_item['link_path'] != 'node/%') {
              return $parent_item;
            }
          }
        }
      }
    }
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
