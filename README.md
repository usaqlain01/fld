## Site install commands

```php
drush @fieldmusefacelift.prod si fieldmuseum --account-mail=bdoherty@caxy.com --account-name=admin --account-pass=# --site-name="The Field Museum"
drush @fieldmusefacelift.prod en metatag_dc metatag_opengraph metatag_twitter_cards metatag_ui siteverification
drush @fieldmusefacelift.prod en fmnh_blog fmnh_calendar fmnh_collection fmnh_department fmnh_exhibit fmnh_faq fmnh_gallery fmnh_landings fmnh_learning_resource fmnh_media fmnh_newsletter fmnh_podcast fmnh_press_release fmnh_program fmnh_project fmnh_references fmnh_science_tags fmnh_staff fmnh_traveling_exhibit fmnh_video
drush @fieldmusefacelift.prod en shortcut dblog
drush @fieldmusefacelift.test en fmnh_migrate migrate_ui
drush @fieldmusefacelift.test migrate-import --all
```

## Site migration commands

```php
drush @fieldmusefacelift.test en fmnh_migrate migrate_ui
drush @fieldmusefacelift.test migrate-import --all
```



## Maintaining the migration data and assets

```bash
drush --yes rsync @fldmuse.prod:%files/ sites/default/files -v
rsync -azv -e ssh /Users/bjd/nobackup/fldmuse/docroot/sites/default/files/ fieldmusefacelift@srv-3298.devcloud.hosting.acquia.com:/vol/ebs1/gfs/home/fieldmusefacelift/prod/migrate/files
```

```bash
drush @fldmuse.prod sql-dump > ~/Desktop/fldmuse.prod.sql
scp ~/Desktop/fldmuse.prod.sql fieldmusefacelift@srv-3298.devcloud.hosting.acquia.com:/vol/ebs1/gfs/home/fieldmusefacelift/prod/migrate/fldmuse.prod.sql
```

## Subtree merge

### Initial setup:

```bash
git remote add profile git@codebasehq.com:caxy/field-museum-main-site/field-museum-caxy.git
git merge -s ours --no-commit profile/develop
git read-tree --prefix=docroot/profiles/fieldmuseum -u profile/develop
git commit -m "subtree merge fieldmuseum profile."
```

### Further merges

```bash
git pull -s subtree -X subtree=docroot/profiles/fieldmuseum profile develop
```

