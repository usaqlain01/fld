<?php
/**
 * @file
 * fieldmuseum.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function fieldmuseum_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hours';
  $content->admin_title = 'Hours';
  $content->admin_description = 'Museum hours';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<strong>HOURS:</strong> 9am &ndash; 5pm. Open every day except Christmas.
<span class="tooltip">
  <i class="icon icon--alert footer__icon"></i>
  <span class="tooltip__content">
    <strong>Strong Text:</strong> More text for the full message in the tooltip.
  </span>
</span>',
    'format' => 'unfiltered_phrase_html',
    'substitute' => 1,
  );
  $export['hours'] = $content;

  return $export;
}
