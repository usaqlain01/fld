<?php
/**
 * @file
 * fmnh_staff.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function fmnh_staff_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'from_hr';
  $feeds_importer->config = array(
    'name' => 'Staff feed from HR',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorUser',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'field_givenname',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '1',
            'target' => 'field_surname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '2',
            'target' => 'field_department:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '3',
            'target' => 'mail',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'values' => array(
          'mail' => '',
          'roles' => array(
            4 => 0,
            5 => 0,
            6 => 0,
            3 => 0,
            7 => 0,
            8 => 0,
            9 => 0,
            10 => 0,
          ),
          'status' => '1',
          'theme' => '',
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['from_hr'] = $feeds_importer;

  return $export;
}
