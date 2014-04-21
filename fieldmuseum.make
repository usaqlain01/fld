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

; drush --yes make --dev --working-copy --contrib-destination=. --no-core fieldmuseum.make

