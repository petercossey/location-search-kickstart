api = 2
core = 7.x
; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make
; Download the Spark install profile and recursively build all its dependencies:
projects[location_search_kickstart][type] = profile
projects[location_search_kickstart][download][type] = git
projects[location_search_kickstart][download][url] = https://github.com/thislittleduck/location-search-kickstart.git
