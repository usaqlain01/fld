#!/usr/bin/env bash

# Pass all arguments to drush
while [ $# -gt 0 ]; do
  drush_flags="$drush_flags $1"
  shift
done

drush="drush $drush_flags"
drush5="drush5 $drush_flags"

build_path="../promet-utils"
drupal_path=`pwd`

cd ~
$drush dl registry_rebuild -y
cd $drupal_path
$drush rr
echo "updatedb";
$drush updatedb -y
echo "clear cache";
$drush cc all
echo "Enable Modules" &&
# This is added here because the module errors out while installing but there
# isn't a known way to fix it.
$drush en file_entity -y
$drush cc all
$drush en $(cat $build_path/mods_enabled | tr '\n' ' ') -y &&
echo "Disable Modules" &&
$drush dis $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
echo "Uninstall Modules" &&
$drush pm-uninstall $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
$drush cc all
$drush updatedb -y
$drush cc all
$drush5 fra -y
$drush cc all
$drush5 fra -y
$drush cc all
