<?php
class FmnhFileMigration extends DrupalFile7Migration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('metatag_title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_abstract')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_keywords')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_robots')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_news_keywords')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_standout')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_generator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_copyright')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_image_src')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_canonical')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_shortlink')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_publisher')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_author')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_original-source')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_revisit-after')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.creator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.subject')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.publisher')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.contributor')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.date')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.format')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.identifier')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.source')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.language')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.relation')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.coverage')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.rights')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_fb:admins')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_fb:app_id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:site_name')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:image')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:image:secure_url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:latitude')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:longitude')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:street-address')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:locality')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:region')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:postal-code')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:country-name')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:email')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:phone_number')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:fax_number')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:locale')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:secure_url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:card')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:site')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:site:id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:creator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:creator:id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image0')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image3')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:stream')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:stream:content_type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:iphone')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:ipad')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:googleplay')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:iphone')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:ipad')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:country')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:googleplay')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:label1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:data1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:label2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:data2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_verify-v1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_google-site-verification')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_msvalidate.01')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_y_key')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_alexaVerifyID')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_yandex-verification')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_distribution')->issueGroup('Metatag')->description('No need to migrate this.');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  /**
   * Call this from the prepare() method of a migration that contains media
   * image files, if you want to rewrite the IMG tags into media references.
   *
   * @param $row
   *  Entity object being built.
   * @param $field
   *  Name of the text field within the entity to be modified. Defaults to 'body'.
   */
  static public function rewriteMediaTags($row, $field = 'body') {
    if (is_array($row->$field)) {
      migrate_instrument_start('MigrateDestinationMedia rewriteMediaTags');
      // @todo This needs to handle multicolumn fields.
      foreach ($row->$field as &$value) {
        // Quickly skip any non-candidates
        if (!stristr($value, '[[')) {
          migrate_instrument_stop('MigrateDestinationMedia rewriteMediaTags');
          return;
        }
        // Pass full img tags into the callback
        $value = preg_replace_callback(MEDIA_WYSIWYG_TOKEN_REGEX, array(self, 'replaceCallback'),
          $value);

      }
      migrate_instrument_stop('MigrateDestinationMedia rewriteMediaTags');
    }
  }

  /**
   * If a referenced image can be found in the files table, replace the <img> tag
   * with a media JSON reference.
   *
   * @param array $matches
   * @return string
   */
  static protected function replaceCallback(array $match) {
    $match = str_replace("[[", "", $match);
    $match = str_replace("]]", "", $match);
    $tag = $match[0];

    try {
      if (!is_string($tag)) {
        throw new Exception('Unable to find matching tag');
      }

      $tag_info = drupal_json_decode($tag);

      $sourceMigrations = array(
        'AudioFile',
        'DefaultFile',
        'DocumentFile',
        'ImageFile',
        'VideoFile',
      );
      $fid = self::handleSourceMigrationStatic($sourceMigrations, $tag_info['fid']);
      $tag_info['fid'] = $fid;

      if (!isset($tag_info['fid'])) {
        throw new Exception('No file Id');
      }

      $result = '[[' . drupal_json_encode($tag_info) . ']]';

      return $result;
    }
    catch (Exception $e) {
      watchdog('media', 'Unable to render media from %tag. Error: %error', array('%tag' => $tag, '%error' => $e->getMessage()));
      throw $e;
    }
  }

  static protected function handleSourceMigrationStatic($source_migrations, $source_keys, $default = NULL, $migration = NULL) {

    // Handle the source migration(s) as an array.
    $source_migrations = (array) $source_migrations;

    // We want to treat source keys consistently as an array of arrays (each
    // representing one key).
    if (is_array($source_keys)) {
      if (empty($source_keys)) {
        // Empty value should return empty results.
        return NULL;
      }
      elseif (is_array(reset($source_keys))) {
        // Already an array of key arrays, fall through
      }
      else {
        // An array of single-key values - make each one an array
        $new_source_keys = array();
        foreach ($source_keys as $source_key) {
          $new_source_keys[] = array($source_key);
        }
        $source_keys = $new_source_keys;
      }
    }
    else {
      // A simple value - make it an array within an array
      $source_keys = array(array($source_keys));
    }

    // Instantiate each migration, and store back in the array.
    foreach ($source_migrations as $key => $source_migration) {
      $source_migrations[$key] = Migration::getInstance($source_migration);
    }

    $results = array();
    // Each $source_key will be an array of key values
    foreach ($source_keys as $source_key) {
      // If any source keys are NULL, skip this set
      $continue = FALSE;
      foreach ($source_key as $value) {
        if (!isset($value)) {
          $continue = TRUE;
          break;
        }
      }
      if ($continue || empty($source_key)) {
        continue;
      }
      // Loop through each source migration, checking for an existing dest ID.
      foreach ($source_migrations as $source_migration) {
        // Break out of the loop as soon as a destination ID is found.
        if ($destids = $source_migration->getMap()->lookupDestinationID($source_key)) {
          if (!empty($destids['destid1'])) {
            break;
          }
        }
      }
      // If no destination ID was found, give each source migration a chance to
      // create a stub.
      if (!$destids) {
        foreach ($source_migrations as $source_migration) {
          // Is this a self reference?
          if ($source_migration->machineName == $this->machineName) {
            if (!array_diff($source_key, $this->currentSourceKey())) {
              $destids = array();
              $this->needsUpdate = MigrateMap::STATUS_NEEDS_UPDATE;
              break;
            }
          }
          // Break out of the loop if a stub was successfully created.
          if ($destids = $source_migration->createStubWrapper($source_key, $migration)) {
            break;
          }
        }
      }
      if ($destids) {
        // Assume that if the destination key is a single value, it
        // should be passed as such
        if (count($destids) == 1) {
          $results[] = reset($destids);
        }
        else {
          $results[] = $destids;
        }
      }
      // If no match found, apply the default value (if any)
      elseif (!is_null($default)) {
        $results[] = $default;
      }
    }
    // Return a single result if we had a single key
    if (count($source_keys) > 1) {
      return $results;
    }
    else {
      $value = reset($results);
      return empty($value) && $value !== 0 && $value !== '0' ? NULL : $value;
    }
  }
}