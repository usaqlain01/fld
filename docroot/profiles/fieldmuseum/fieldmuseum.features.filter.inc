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
    'weight' => -9,
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
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <br> <p> <h2> <h3> <h4> <h5> <table> <thead> <tbody> <th> <tr> <td> <hr> <iframe> <u> <nobr> <sup> <small>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
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
    'weight' => -10,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <br> <p> <h2> <h3> <h4> <h5> <table> <thead> <tbody> <th> <tr> <td> <hr> <iframe> <u> <nobr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
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
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Full WYSIWYG.
  $formats['full_wysiwyg'] = array(
    'format' => 'full_wysiwyg',
    'name' => 'Full WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
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
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -3,
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
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Unfiltered.
  $formats['unfiltered'] = array(
    'format' => 'unfiltered',
    'name' => 'Unfiltered',
    'cache' => 1,
    'status' => 1,
    'weight' => -4,
    'filters' => array(
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  // Exported format: Unfiltered Phrase HTML.
  $formats['unfiltered_phrase_html'] = array(
    'format' => 'unfiltered_phrase_html',
    'name' => 'Unfiltered Phrase HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -5,
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
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fieldmusefacelift.devcloud.acquia-sites.com
http://staging.fieldmuseum.org
http://www.fieldmuseum.org
http://fieldmuseum.org
',
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  return $formats;
}
