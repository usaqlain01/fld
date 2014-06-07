core = 7.x
api = 2

projects[drupal][version] = 7.x-dev

; Patch provides a router for PHP 5.4's built in web server. See https://drupal.org/node/1543858
; projects[drupal][patch][php54-builtin-router][url] = https://drupal.org/files/router-1543858-3.patch
; projects[drupal][patch][php54-builtin-router][md5] = 79fe4550c32c1d0ae6dc6d8aa0fe5277

; Profiles
projects[fieldmuseum][download][type] = git
projects[fieldmuseum][download][branch] = develop
projects[fieldmuseum][download][url] = git@codebasehq.com:caxy/field-museum-main-site/field-museum-caxy.git
projects[fieldmuseum][type] = profile

; drush make --working-copy deploy.make drupal
; drush --yes -r $PWD/drupal site-install fieldmuseum --db-url=sqlite://sites/default/files/.ht.sqlite
; drush si fieldmuseum --site-name="The Field Museum" --site-mail="no-reply@fieldmuseum.org"
