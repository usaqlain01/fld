#!/usr/bin/env bash

# Pass all arguments to drush
while [ $# -gt 0 ]; do
  drush_flags="$drush_flags $1"
  shift
done

drush="drush $drush_flags"

# can't run this on a dir shared via nfs, so non-starter for vagrant
# sudo $(dirname "$0")/file-permissions.sh --drupal_user=$USER --drupal_path=$PWD --httpd_group=www-data;

build_path=$(dirname "$0")
drupal_path="/var/drupals/fieldmuseum/www/docroot"

#$drush si -y --account-pass='drupaladm1n' commons &&
$drush sql-drop -y &&
$drush sqlc < $build_path/ref_db/drupal.sql -y &&
rm -rf $drupal_path/sites/default/files &&
tar -zxvf $build_path/ref_db/files.tar.gz -C $drupal_path/sites/default/ &&
$drush updatedb -y &&
$drush cc all -y &&
$drush en $(cat $build_path/mods_enabled | tr '\n' ' ') -y &&
$drush dis $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
$drush pm-uninstall $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
$drush cc all &&
$drush updatedb -y &&
$drush cc all -y
#$drush fra -y &&
#$drush cc all -y &&
