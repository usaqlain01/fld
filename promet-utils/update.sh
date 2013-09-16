#!/usr/bin/env bash

# Pass all arguments to drush
while [ $# -gt 0 ]; do
  drush_flags="$drush_flags $1"
  shift
done

drush="drush $drush_flags"

build_path="../promet-utils"

echo "updatedb";
$drush updatedb -y
echo "clear cache";
$drush cc all
echo "Enable Modules" &&
$drush en $(cat $buildpath/mods_enabled | tr '\n' ' ') -y &&
#echo "Disable Modules" &&
#$drush dis $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
#echo "Uninstall Modules" &&
#$drush pm-uninstall $(cat $build_path/mods_purge | tr '\n' ' ') -y &&
$drush cc all
$drush updatedb -y
$drush cc all
#$drush fra -y &&
#$drush cc all -y &&
