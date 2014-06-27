<?php

class BlogListEFQ extends NodeListEFQ
{
  public function __construct(Array $config, Array $arguments = array()) {
    parent::__construct($config, $arguments);
    $tids = $this->getChildTermIds($arguments[0]->data);
    $tids[] = $arguments[0]->data->tid;
    $this->entityCondition('bundle', 'blog');
    $this->fieldCondition('field_topic', 'target_id', $tids);
  }

  static function entityType() {
    return 'node';
  }

  protected function getChildTermIds($term) {
    $tree = taxonomy_get_tree($term->vid, $term->tid);
    return array_map(function ($term) {
      return $term->tid;
    }, $tree);
  }

  static function requiredArguments() {
    return array(
      'entity:taxonomy_term' => array(
        'label' => 'Taxonomy term',
        'required' => TRUE,
      )
    );
  }
}
