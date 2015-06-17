Proximity Search Kickstart
=========================

A Drupal installation profile to demonstrate proximity location search using Search API
Location and Leaflet modules, with Elasticsearch-based search.

Getting started
---------------
Proximity Search Kickstart is a quick way to evaluate proximity based search
using a Search API and Leaflet based modules stacks.

To build the profile, run:

    $ drush make build_leaflet_search_kickstart.make /path/to/wwwroot

After installing Drupal, visit /admin/config/search/search_api/server/solr_server/edit
and configure Solr server.

To use Elasticsearch instead of Solr visit /admin/config/elasticsearch-connector/clusters/elastic_cluster/edit
and configure elasticsearch cluster. Then visit /admin/config/search/search_api/index/my_index/edit
and switch Server to Elastic server. After that you can disable Solr server at
/admin/config/search/search_api/server/solr_server/edit.

Using Drush for a quick install
-------------------------------
If you just want to quickly evaluate Location Search Kickstart without
configuring a server, you could try the Drush to automatically install and run
the distribution using Drush's in-built server. After running the drush make
step above, change into the Drupal root directory and run the following:

    $ drush si --db-url=sqlite://sites/default/files/localdb.sqlite leaflet_search_kickstart --yes && drush rs /admin/reports/status --user=admin
