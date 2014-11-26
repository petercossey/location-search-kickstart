<?php
/**
 * @file
 * proximity_search.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function proximity_search_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-location-field_coordinates'
  $field_instances['node-location-field_coordinates'] = array(
    'bundle' => 'location',
    'default_value' => array(
      0 => array(
        'input_format' => 'lat/lon',
        'geom' => array(
          'lat' => 45,
          'lon' => 45,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coordinates',
    'label' => 'Coordinates',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coordinates');

  return $field_instances;
}
