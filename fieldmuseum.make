core = 7.x
api = 2

; Modules

projects[acquia_connector][subdir] = contrib
projects[acquia_connector][version] = 2.14

projects[context_admin][subdir] = contrib
projects[context_admin][version] = 1.2

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4

projects[date][subdir] = contrib
projects[date][version] = 2.7

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[email][subdir] = contrib
projects[email][version] = 1.3

projects[entity_view_mode][subdir] = contrib
projects[entity_view_mode][version] = 1.0-rc1

projects[entity][subdir] = contrib
projects[entity][version] = 1.5

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 2.0

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.3

projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.x-dev

projects[invisimail][subdir] = contrib
projects[invisimail][version] = 1.1

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.2

projects[link][subdir] = contrib
projects[link][version] = 1.2

projects[markdown][subdir] = contrib
projects[markdown][version] = 2.x-dev

projects[media_gallery][subdir] = contrib
projects[media_gallery][version] = 2.x-dev

projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.x-dev

projects[menu_position][subdir] = contrib
projects[menu_position][version] = 1.x-dev

projects[migrate_d2d][subdir] = contrib
projects[migrate_d2d][version] = 2.x-dev

projects[migrate][subdir] = contrib
projects[migrate][version] = 2.x-dev

projects[multiform][subdir] = contrib
projects[multiform][version] = 1.0

projects[navbar][subdir] = contrib
projects[navbar][version] = 1.x-dev

projects[oembed][subdir] = contrib
projects[oembed][version] = 1.x-dev

projects[panels][subdir] = contrib
projects[panels][version] = 3.4

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[plupload][subdir] = contrib
projects[plupload][version] = 1.6

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.x-dev

projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[views][subdir] = contrib
projects[views][version] = 3.7

projects[webform][subdir] = contrib
projects[webform][version] = 3.20

; Development

projects[bangpoundentity][subdir] = bangpound
projects[bangpoundentity][type] = module
projects[bangpoundentity][download][url] = https://github.com/bangpound/bangpoundentity.git
projects[bangpoundentity][download][type] = git

; Themes

projects[zen][version] = 5.5
projects[ember][version] = 2.x-dev

; Libraries

libraries[backbone][download][type] = git
libraries[backbone][download][url] = https://github.com/jashkenas/backbone.git
libraries[backbone][directory_name] = backbone
libraries[backbone][destination] = libraries
libraries[backbone][type] = library
libraries[backbone][download][tag] = 1.1.2

libraries[underscore][download][type] = git
libraries[underscore][download][url] = https://github.com/jashkenas/underscore.git
libraries[underscore][directory_name] = underscore
libraries[underscore][destination] = libraries
libraries[underscore][type] = library
libraries[underscore][download][tag] = 1.6.0

libraries[markdown][download][type] = git
libraries[markdown][download][url] = https://github.com/michelf/php-markdown.git
libraries[markdown][directory_name] = markdown
libraries[markdown][destination] = libraries
libraries[markdown][type] = library
libraries[markdown][download][tag] = x1.2.8

libraries[modernizr][download][type] = file
libraries[modernizr][download][url] = http://modernizr.com/downloads/modernizr-latest.js
libraries[modernizr][directory_name] = modernizr
libraries[modernizr][destination] = libraries
libraries[modernizr][type] = library

libraries[plupload][download][type] = get
libraries[plupload][directory_name] = plupload
libraries[plupload][download][url] = https://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][patch][] = https://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch
libraries[plupload][type] = library

libraries[colorbox][download][type] = git
libraries[colorbox][directory_name] = colorbox
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox.git
libraries[colorbox][type] = library

; drush --yes make --dev --working-copy --contrib-destination=. --no-core fieldmuseum.make

