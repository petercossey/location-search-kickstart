; leaflet_search_kickstart make file for local development
core = 7.x
api = 2

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies:
projects[leaflet_search_kickstart][type] = profile
projects[leaflet_search_kickstart][download][type] = git
projects[leaflet_search_kickstart][download][url] = https://bitbucket.org/alex_bukach/proximity-search-kickstart.git

; +++++ Libraries +++++

; leaflet
libraries[leaflet][directory_name] = leaflet
libraries[leaflet][type] = library
libraries[leaflet][destination] = libraries
libraries[leaflet][download][type] = get
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.1.zip

; geocomplete
libraries[geocomplete][directory_name] = geocomplete
libraries[geocomplete][type] = library
libraries[geocomplete][destination] = libraries
libraries[geocomplete][download][type] = get
libraries[geocomplete][download][url] = https://github.com/ubilabs/geocomplete/archive/master.zip
