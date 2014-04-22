core = 7.x
api = 2

; Modules

projects[panels][version] = 3.4
projects[panels][subdir] = contrib

projects[ctools][version] = 1.4
projects[ctools][subdir] = contrib

projects[views][version] = 3.7
projects[views][subdir] = contrib

projects[libraries][version] = 2.2
projects[libraries][subdir] = contrib

projects[navbar][version] = 1.x-dev
projects[navbar][subdir] = contrib

projects[features][version] = 2.0
projects[features][subdir] = contrib

projects[markdown][version] = 2.x-dev
projects[markdown][subdir] = contrib

projects[diff][version] = 3.2
projects[diff][subdir] = contrib

projects[date][version] = 2.7
projects[date][subdir] = contrib

projects[entity][version] = 1.5
projects[entity][subdir] = contrib

projects[entityreference][version] = 1.1
projects[entityreference][subdir] = contrib

; Themes

projects[zen][version] = 5.4
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
libraries[markdown][download][tag] = 1.4.0

libraries[modernizr][download][type] = file
libraries[modernizr][download][url] = http://modernizr.com/downloads/modernizr-latest.js
libraries[modernizr][directory_name] = modernizr
libraries[modernizr][destination] = libraries
libraries[modernizr][type] = library

; drush --yes make --dev --working-copy --contrib-destination=. --no-core fieldmuseum.make

