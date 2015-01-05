; leaflet_search_kickstart make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[ctools][version] = "1.5"
projects[ctools][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "contrib"

projects[features][version] = "2.2"
projects[features][subdir] = "contrib"

projects[geofield][version] = "2.3"
projects[geofield][subdir] = "contrib"

projects[geocomplete][version] = "1.x-dev"
projects[geocomplete][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[geocoder][version] = "1.2"
projects[geocoder][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

projects[leaflet][version] = "1.1"
projects[leaflet][subdir] = "contrib"

projects[leaflet_more_maps][version] = "1.10"
projects[leaflet_more_maps][subdir] = "contrib"

projects[leaflet_views_ajax_popup][version] = "1.x-dev"
projects[leaflet_views_ajax_popup][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[panels][version] = "3.4"
projects[panels][subdir] = "contrib"

projects[search_api][version] = "1.13"
projects[search_api][subdir] = "contrib"

projects[search_api_location][version] = "2.0-beta2"
projects[search_api_location][subdir] = "contrib"

projects[search_api_solr][version] = "1.6"
projects[search_api_solr][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

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
