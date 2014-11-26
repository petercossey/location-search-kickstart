<?php
/**
 * @file
 * proximity_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function proximity_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_my_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Indexed Node: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'search_api_index_my_index';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_my_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Filter criterion: Coordinates: LatLong Pair (indexed) */
  $handler->display->display_options['filters']['field_coordinates_latlon']['id'] = 'field_coordinates_latlon';
  $handler->display->display_options['filters']['field_coordinates_latlon']['table'] = 'search_api_index_my_index';
  $handler->display->display_options['filters']['field_coordinates_latlon']['field'] = 'field_coordinates_latlon';
  $handler->display->display_options['filters']['field_coordinates_latlon']['operator'] = '1000000';
  $handler->display->display_options['filters']['field_coordinates_latlon']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['operator_id'] = 'distance';
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['operator_label'] = 'Distance';
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['operator'] = 'field_coordinates_latlon_op';
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_coordinates_latlon']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_coordinates_latlon']['plugin'] = 'geocomplete';
  $handler->display->display_options['filters']['field_coordinates_latlon']['plugin-geocomplete'] = array(
    'fallback_container' => array(
      'fallback' => array(
        'geocoder_handler' => 'google',
        'geocoder_handler_options' => array(
          'geometry_type' => 'point',
          'all_results' => 0,
          'reject_results' => array(
            'APPROXIMATE' => 0,
            'GEOMETRIC_CENTER' => 0,
            'RANGE_INTERPOLATED' => 0,
            'ROOFTOP' => 0,
          ),
        ),
      ),
    ),
    'additional_types_container' => array(
      'additional_types' => array(
        'street_address' => 0,
        'route' => 0,
        'intersection' => 0,
        'political' => 0,
        'country' => 0,
        'country_short' => 0,
        'administrative_area_level_1' => 0,
        'administrative_area_level_2' => 0,
        'administrative_area_level_3' => 0,
        'colloquial_area' => 0,
        'locality' => 0,
        'sublocality' => 0,
        'neighborhood' => 0,
        'premise' => 0,
        'subpremise' => 0,
        'postal_code' => 0,
        'natural_feature' => 0,
        'airport' => 0,
        'park' => 0,
        'point_of_interest' => 0,
        'post_box' => 0,
        'street_number' => 0,
        'floor' => 0,
        'room' => 0,
        'viewport' => 0,
        'location' => 0,
        'formatted_address' => 0,
        'location_type' => 0,
        'bounds' => 0,
      ),
    ),
  );
  $handler->display->display_options['filters']['field_coordinates_latlon']['plugin-geocoder'] = array(
    'geocoder_handler' => 'json',
  );
  $handler->display->display_options['filters']['field_coordinates_latlon']['radius_options'] = '1000000 All Earth
5 5 km
10 10 km
50 50 km
100 100 km
500 500 km
1000 1000 km
5000 5000 km';

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet_views_ajax_popup';
  $handler->display->display_options['style_options']['data_source'] = 'field_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'google-high-res';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['search'] = $view;

  return $export;
}
