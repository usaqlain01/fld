<?php

$plugin = array(
  'title' => t('Table XI Gallery'),
  'category' => t('Node'),
  'description' => t('Table XI styled gallery for media gallery nodes.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Output function for the 'gallery' content type.
 */
function fmnh_media_gallery_content_type_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (empty($pane_context) || empty($pane_context->data)) {
    return;
  }

  // Get a shortcut to the entity.
  $node = $pane_context->data;

  $block = new stdClass();
  $block->content = theme('tablexi_gallery', array('node' => $node));
  return $block;
}
