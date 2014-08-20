<?php
/**
 * This settings.php file was created by the Acquia Cloud ah-site-archive-import
 * Drush command. The imported archive did not contain a settings.php file, so
 * the import process created this file by default. You can replace this file
 * with the standard default settings.php file for your version of Drupal.
 * However, be sure to keep the last line that loads the "Acquia Cloud settings
 * include file", which provides the correct database credentials for your site.
 */
$update_free_access = FALSE;
$drupal_hash_salt = 'l2MKidUCwLpwuZtpFHB2hXQa4vytP4d44tofDi1JsXQ';
ini_set('arg_separator.output',     '&amp;');
ini_set('magic_quotes_runtime',     0);
ini_set('magic_quotes_sybase',      0);
ini_set('session.cache_expire',     200000);
ini_set('session.cache_limiter',    'none');
ini_set('session.cookie_lifetime',  2000000);
ini_set('session.gc_divisor',       100);
ini_set('session.gc_maxlifetime',   200000);
ini_set('session.gc_probability',   1);
ini_set('session.save_handler',     'user');
ini_set('session.use_cookies',      1);
ini_set('session.use_only_cookies', 1);
ini_set('session.use_trans_sid',    0);
ini_set('url_rewriter.tags',        '');

$conf['composer_manager_vendor_dir'] = '../vendor';
$conf['composer_manager_file_dir'] = '../';

// On Acquia Cloud, this include file configures Drupal to use the correct
// database in each site environment (Dev, Stage, or Prod). To use this
// settings.php for development on your local workstation, set $db_url
// (Drupal 5 or 6) or $databases (Drupal 7) as described in comments above.
if (file_exists('/var/www/site-php')) {
  require('/var/www/site-php/fldmuse/fldmuse-settings.inc');
  if ($_ENV['AH_SITE_ENVIRONMENT']) {

    // Use memcache.
    // @see https://docs.acquia.com/cloud/performance/memcached
    $conf['cache_backends'][] = './profiles/fieldmuseum/modules/contrib/memcache/memcache.inc';
    $conf['cache_default_class'] = 'MemCacheDrupal';
    $conf['cache_class_cache_field'] = 'DrupalDatabaseCache';
    $conf['cache_class_cache_filter'] = 'DrupalDatabaseCache';
    $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

    // Avoid delegate errors in Imagemagick processing.
    //$_ENV['MAGICKCODERMODULE_PATH'] = '/usr/lib/ImageMagick-6.5.7/modules-Q16/coders';


    // Set the temp filesystem.
    //$_ENV['MAGICK_TEMPORARY_PATH'] =
    $conf['file_temporary_path'] = '/mnt/tmp/fldmuse.'. $_ENV['AH_SITE_ENVIRONMENT'];
    //$_ENV['MAGICK_TEMPORARY_PATH'] = $conf['file_temporary_path'] = '/mnt/tmp/fldmuse.test';
    
    switch ($_ENV['AH_SITE_ENVIRONMENT']) {
      case 'dev':
      case 'test':
        // Make sure Drush keeps working.
        // Modified from function drush_verify_cli()
        $cli = (php_sapi_name() == 'cli');
        if (!$cli) {
          $username = 'fmnh';
          $password = 'fmnh';
          if (!(isset($_SERVER['PHP_AUTH_USER']) && ($_SERVER['PHP_AUTH_USER']==$username && $_SERVER['PHP_AUTH_PW']==$password))) {
            header('WWW-Authenticate: Basic realm="This site is protected"');
            header('HTTP/1.0 401 Unauthorized');
            // Fallback message when the user presses cancel / escape
            echo 'Access denied';
            exit;
          }
        }
        break;
      case 'prod':

        break;
    }
  }
}
