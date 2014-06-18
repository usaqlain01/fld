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
$drupal_hash_salt = '';
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


// On Acquia Cloud, this include file configures Drupal to use the correct
// database in each site environment (Dev, Stage, or Prod). To use this 
// settings.php for development on your local workstation, set $db_url
// (Drupal 5 or 6) or $databases (Drupal 7) as described in comments above.
if (file_exists('/var/www/site-php')) {
  require('/var/www/site-php/fieldmusefacelift/fieldmusefacelift-settings.inc');
  if ($_ENV['AH_SITE_ENVIRONMENT']) {
    switch ($_ENV['AH_SITE_ENVIRONMENT']) {
      case 'dev':
        $conf['fmnh_migrate_file_source_dir'] = '/vol/ebs1/gfs/home/fieldmusefacelift/dev/migrate/files';
        $databases['migrate'] = array(
          'default' => array(
            'driver' => 'mysql',
            'database' => 'fieldmusedb54461',
            'username' => 's38651',
            'password' => 'LE7Zteu6v3tQhCG',
            'host' => 'srv-3298.devcloud.hosting.acquia.com',
            'prefix' => '',
            'port' => 3306,
          )
        );
        break;
      case 'test':
        $conf['fmnh_migrate_file_source_dir'] = '/vol/ebs1/gfs/home/fieldmusefacelift/test/migrate/files';
        $databases['migrate'] = array(
          'default' => array(
            'driver' => 'mysql',
            'database' => 'fieldmusedb54463',
            'username' => 's38650',
            'password' => '7ZnvKj7scHRHecU',
            'host' => 'srv-3298.devcloud.hosting.acquia.com',
            'prefix' => '',
            'port' => 3306,
          )
        );
        break;
      case 'prod':
        $conf['fmnh_migrate_file_source_dir'] = '/vol/ebs1/gfs/home/fieldmusefacelift/prod/migrate/files';
        $databases['migrate'] = array(
          'default' => array(
            'driver' => 'mysql',
            'database' => 'fieldmusedb54462',
            'username' => 's38649',
            'password' => 'XhhWTLFUFyTc2wJ',
            'host' => 'srv-3298.devcloud.hosting.acquia.com',
            'prefix' => '',
            'port' => 3306,
          )
        );
        break;
    }
  }
}
