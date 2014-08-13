<?php

$plugin = array(
  'title' => t('Staff directory filter'),
  'category' => t('Miscellaneous'),
  'description' => t('Staff directory filter'),
  'required context' => new ctools_context_optional(t('Department'), 'string'),
);

function fmnh_staff_directory_filter_content_type_edit_form($form, &$form_state) {
  // Does nothing!
  return $form;
}

/**
 * Output function for the 'gallery' content type.
 */
function fmnh_staff_directory_filter_content_type_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (empty($pane_context) || empty($pane_context->data)) {
    $selection = '';
  }
  else {
    $selection = $pane_context->data;
  }

  $block = new stdClass();
  $block->content = fmnh_staff_filter($selection);
  return $block;
}
