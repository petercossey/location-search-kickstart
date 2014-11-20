; This is a standard make file for packaging the distribution along with any
; contributed modules/themes or external libraries. Some examples are below.
; See http://drupal.org/node/159730 for more details.

api = 2
core = 7.x

; Contributed modules; standard.

projects[admin_menu][type] = module
projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][subdir] = contrib

projects[ctools][type] = module
projects[ctools][version] = 1.5
projects[ctools][subdir] = contrib

projects[features][type] = module
projects[features][version] = 2.2
projects[features][subdir] = contrib

projects[geocoder][type] = module
projects[geocoder][version] = 1.2
projects[geocoder][subdir] = contrib

projects[geofield][type] = module
projects[geofield][version] = 2.3
projects[geofield][subdir] = contrib

projects[search_api][type] = module
projects[search_api][version] = 1.13
projects[search_api][subdir] = contrib

projects[search_api_location][type] = module
projects[search_api_location][version] = 2.0-beta2
projects[search_api_location][subdir] = contrib

projects[search_api_solr][type] = module
projects[search_api_solr][version] = 1.6
projects[search_api_solr][subdir] = contrib

projects[strongarm][type] = module
projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[views][type] = module
projects[views][version] = 3.8
projects[views][subdir] = contrib
