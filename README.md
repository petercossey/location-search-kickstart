Location Search Kickstart
=========================

A Drupal installation profile to demonstrate location search using Search API
Location.

This was originally presented at the Sydney Drupal User Group, there are some
companion slides here: http://bit.ly/location-search-kickstart

Getting started
---------------
Location Search Kickstart is a quick way to evaluate proximity based search
using a Search API based module stack.

1. To build the profile, run:

    $ drush make build-location-search-kickstart.make /path/to/wwwroot

2. Choose the "Location Search Kickstart" install profile when installing Drupal.


Using Drush for a quick install
-------------------------------
If you just want to quickly evaluate Location Search Kickstart without
configuring a server, you could try the Drush to automatically install and run
the distribution using Drush's in-built server. After running the drush make
step above, change into the Drupal root directory and run the following:

    $ drush si --db-url=sqlite://sites/default/files/localdb.sqlite location_search_kickstart --yes && drush rs /admin/reports/status --user=admin
