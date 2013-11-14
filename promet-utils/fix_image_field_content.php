<?php
// Since we have a manual process in the middle of this migration,
// I have to put this as a stand alone script. I'm also fixing a problem
// that I don't know the cause to but since it's soooo remote, and we
// are out of time, this seems to be acceptable

$nodes_to_fix = array(
  3311 => array(
    'field_thumbnail_image' => array (
      'fid' => 3966,
      'display' => 1,
      'description' => '',
     ) 
  ),
  13696 => array(
    'field_subsection_homepage_image' => array (
      'fid' => 54006,
      'display' => 1,
      'description' => '',
    )
  )
);

foreach ($nodes_to_fix as $nid => $values) {
  $node = node_load($nid);
  foreach($values as $field => $column) {
    foreach ($column as $name => $value) {
      $node->{$field}[LANGUAGE_NONE][0][$name] = $value;
    }
  }
  node_save($node);
}
