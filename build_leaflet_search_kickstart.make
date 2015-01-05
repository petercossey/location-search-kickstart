; leaflet_search_kickstart make file for local development
core = 7.x
api = 2

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

; Download the install profile and recursively build all its dependencies:
projects[leaflet_search_kickstart][type] = profile
projects[leaflet_search_kickstart][download][type] = git
projects[leaflet_search_kickstart][download][url] = http://drupalcode.org/project/leaflet_search_kickstart.git
