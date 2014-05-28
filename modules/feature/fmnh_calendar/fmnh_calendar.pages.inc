<?php

/**
 * Create a new event node based on the incoming program or exhibition node.
 *
 * @param $node
 */
function fmnh_calendar_new_event($node) {
  $event_node = new stdClass();
  $event_node->type = 'event'; // Or page, or whatever content type you like
  node_object_prepare($event_node); // Set some default values
  $event_node->field_program[LANGUAGE_NONE][] = array(
    'target_id' => $node->nid,
  );
  node_save($event_node);
  drupal_goto(drupal_get_destination());
}
