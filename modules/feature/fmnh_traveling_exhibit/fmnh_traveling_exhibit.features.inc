<?php
/**
 * @file
 * fmnh_traveling_exhibit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fmnh_traveling_exhibit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entitylist" && $api == "entitylist_lists") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fmnh_traveling_exhibit_node_info() {
  $items = array(
    'traveling_exhibit' => array(
      'name' => t('Traveling exhibit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function fmnh_traveling_exhibit_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: traveling_exhibit
  $schemaorg['node']['traveling_exhibit'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_gallery' => array(
      'predicates' => array(),
    ),
    'field_attachment' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_references' => array(
      'predicates' => array(),
    ),
    'field_image' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
