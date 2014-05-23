<?php
/**
 * @file
 * fieldmuseum.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fieldmuseum_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <br> <p> <h2> <h3> <h4> <table> <th> <tr> <td> <hr> <iframe> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'invisimail_encode_html_entities' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
    ),
  );

  // Exported format: Filtered WYSIWYG.
  $formats['filtered_wysiwyg'] = array(
    'format' => 'filtered_wysiwyg',
    'name' => 'Filtered WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <br> <p> <h2> <h3> <h4> <table> <th> <tr> <td> <hr> <iframe> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'invisimail_encode_html_entities' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 0,
          'link' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'invisimail_encode_html_entities' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 0,
          'link' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full WYSIWYG.
  $formats['full_wysiwyg'] = array(
    'format' => 'full_wysiwyg',
    'name' => 'Full WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'invisimail_encode_html_entities' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 0,
          'link' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Unfiltered.
  $formats['unfiltered'] = array(
    'format' => 'unfiltered',
    'name' => 'Unfiltered',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  // Exported format: Unfiltered Phrase HTML.
  $formats['unfiltered_phrase_html'] = array(
    'format' => 'unfiltered_phrase_html',
    'name' => 'Unfiltered Phrase HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <abbr> <dfn> <em> <strong> <code> <samp> <kbd> <var> <b> <i> <u> <small> <s> <span> <br> <cite> <del> <ins> <q> <sub> <wbr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
