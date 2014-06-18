<?php

/**
 * @file
 * Handles counts of node views via Ajax with minimal bootstrap.
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', substr(__DIR__, 0, strpos(__DIR__, '/profiles/fieldmuseum/tests')));
// Change the directory to the Drupal root.
chdir(DRUPAL_ROOT);

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_override_server_variables(array('url' => 'http://localhost/index.php'));
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

function convert_url_to_node_in_file($file) {
  $text = file_get_contents(__DIR__ .'/'. $file);
  Database::setActiveConnection('migrate');
  $text = preg_replace_callback('`\/\S+$`m', function ($match) {
    $path = path_load(array('alias' => ltrim($match[0], '/')));
    if ($path) {
      return $path['source'];
    }
    return $match[0];
  }, $text);
  echo $text;
  Database::setActiveConnection('default');
}

function convert_markdown_to_yaml($file) {
  $text = file_get_contents(__DIR__ .'/'. $file);
  libraries_load('markdown');
  $html = Markdown($text);
  /** @var $qp \QueryPath\DOMQuery */
  $qp = QueryPath::withHTML($html, 'body');
  foreach ($qp->children('ol') as $element) {
    $output = list_children($element);
  }
  echo \Symfony\Component\Yaml\Yaml::dump($output, 8);
}

function children_recursive($source) {
  $site = htmlqp($source);
  $children = $site->children();
  foreach ($children as $child) {
    children_recursive($child);
    return $child->html();
  }
}

function list_children(\QueryPath\DOMQuery $qp) {
  $output = array();
  $qp = $qp->cloneAll();
  foreach ($qp->children('li') as $li) {
    $ol = $li->remove('> ol');
    $key = trim($li->text());
    $output[$key] = list_children($ol);
  }
  return $output;
}

convert_markdown_to_yaml('CommunitySciencecontenttracker.md');
//convert_markdown_to_yaml('DepartmentAreaofResearchcontenttracker.md');

function filter_menu_array($tree) {
  $output = array();
  foreach ($tree as $cid => $item) {
    $menu_link = array();
    $menu_link['link'] = array(
      'link_path' => $item['link']['link_path'],
      'router_path' => $item['link']['router_path'],
      'link_title' => $item['link']['link_title'],
      'type' => $item['link']['type'],
    );
    if (!empty($item['below'])) {
      $menu_link['below'] = filter_menu_array($item['below']);
    }
    $output[$cid] = $menu_link;
  }
  return $output;
}

//Database::setActiveConnection('migrate');
//$query = db_query('select distinct menu_name from {menu_links}');
//$query->execute();
//$result = $query->fetchCol();
//foreach ($result as $row) {
//  $output = \Symfony\Component\Yaml\Yaml::dump(filter_menu_array(menu_tree_all_data($row)), 120);
//  file_put_contents(__DIR__ .'/menus/'. $row .'.yml', $output);
//}
//Database::setActiveConnection('default');

//$finder = new \Symfony\Component\Finder\Finder();
//$files = $finder->files()->name('*.yml')->in(__DIR__ .'/menus');
//$output = array();
//foreach ($files as $file) {
//  /** @var \SplFileInfo $key */
//  $key = $file->getBasename('.yml');
//  $output[$key] = \Symfony\Component\Yaml\Yaml::parse($file);
//}
//file_put_contents(__DIR__ .'/menus.yml', \Symfony\Component\Yaml\Yaml::dump($output, 120));


//$output = array();
//foreach (\Symfony\Component\Yaml\Yaml::parse(__DIR__.'/menus.yml') as $key => $tree) {
//  $flattened = flatten_children($tree, $key);
//  echo \Symfony\Component\Yaml\Yaml::dump(array_filter($flattened));
//}
//
function flatten_children($children, $parent) {
  $flattened = array();
  foreach ($children as $item) {
    if ($parent != $item['link']['link_path']) {
      $flattened[$item['link']['link_path']] = array($parent);
      if ($item['below']) {
        $link_path = ($item['link']['link_path'] == 'node') ? 'subsection-'. $item['link']['link_title'] : $item['link']['link_path'];
        $children = flatten_children($item['below'], $link_path);
        $flattened = array_merge_recursive($flattened, $children);
      }
    }
  }
  return $flattened;
}
