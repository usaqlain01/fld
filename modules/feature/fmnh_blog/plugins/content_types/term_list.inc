<?php

$plugin = array(
  'title' => t('Topic index'),
  'category' => t('Blog'),
  'description' => t('Topics'),
  'required context' => new ctools_context_required(t('Term'), 'taxonomy_term'),
);

/**
 * Output function for the 'term_list' content type.
 */
function fmnh_blog_term_list_content_type_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (empty($pane_context) || empty($pane_context->data)) {
    return;
  }

  // Get a shortcut to the entity.
  $term = $pane_context->data;

  $tree = taxonomy_get_tree($term->vid, $term->tid);
  $items = array();

  foreach ($tree as $term) {
    $items['term-'. $term->tid] = array(
      'data' => l($term->name, 'science/blog/'. drupal_strtolower(str_replace(' ', '-', $term->name))),
      'class' => array('contentLinks__item'),
    );
  }

  $variables = array(
    'items' => $items,
    'attributes' => array('class' => 'contentLinks'),
  );
  $block = new stdClass;
  $block->content = theme('item_list__topic_list', $variables);

  return $block;
}

