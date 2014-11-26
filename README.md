Proximity Search Kickstart
=========================

A Drupal installation profile to demonstrate proximity location search using Search API
Location and Leaflet modules.

This was originally presented at the Drupal Camp Moscow 2014, there are some
companion slides here: http://bit.ly/proximity-search-slides.

Getting started
---------------
Proximity Search Kickstart is a quick way to evaluate proximity based search
using a Search API and Leaflet based modules stacks.

To build the profile, run:

    $ drush make build_leaflet_search_kickstart.make /path/to/wwwroot


Using Drush for a quick install
-------------------------------
If you just want to quickly evaluate Location Search Kickstart without
configuring a server, you could try the Drush to automatically install and run
the distribution using Drush's in-built server. After running the drush make
step above, change into the Drupal root directory and run the following:

    $ drush si --db-url=sqlite://sites/default/files/localdb.sqlite leaflet_search_kickstart --yes && drush rs /admin/reports/status --user=admin
