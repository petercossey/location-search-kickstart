<?php
/**
 * @file
 * proximity_search.elasticsearch_connector_defaults.inc
 */

/**
 * Implements hook_default_elasticsearch_connector_cluster().
 */
function proximity_search_default_elasticsearch_connector_cluster() {
  $export = array();

  $elasticsearch_connector_cluster = new stdClass();
  $elasticsearch_connector_cluster->disabled = FALSE; /* Edit this to true to make a default elasticsearch_connector_cluster disabled initially */
  $elasticsearch_connector_cluster->api_version = 1;
  $elasticsearch_connector_cluster->cluster_id = 'elastic_cluster';
  $elasticsearch_connector_cluster->name = 'Elastic cluster';
  $elasticsearch_connector_cluster->url = '';
  $elasticsearch_connector_cluster->status = 1;
  $elasticsearch_connector_cluster->options = 'a:6:{s:25:"multiple_nodes_connection";i:0;s:18:"use_authentication";i:0;s:19:"authentication_type";s:5:"Basic";s:8:"username";s:10:"";s:8:"password";s:10:"";s:7:"timeout";s:3:"150";}';
  $export['elastic_cluster'] = $elasticsearch_connector_cluster;

  return $export;
}