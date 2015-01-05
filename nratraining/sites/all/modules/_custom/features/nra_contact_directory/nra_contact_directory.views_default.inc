<?php
/**
 * @file
 * nra_contact_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nra_contact_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nra_contact_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NRA Contact Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NRA Contact Directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Main Body */
  $handler->display->display_options['fields']['field_nra_main_body']['id'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['table'] = 'field_data_field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['field'] = 'field_nra_main_body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: NRA Address - Company */
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['id'] = 'field_nra_address_organisation_name';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['field'] = 'field_nra_address_organisation_name';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['operator'] = 'word';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['expose']['operator_id'] = 'field_nra_address_organisation_name_op';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['expose']['label'] = 'Department Name';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['expose']['operator'] = 'field_nra_address_organisation_name_op';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['expose']['identifier'] = 'field_nra_address_organisation_name';
  $handler->display->display_options['filters']['field_nra_address_organisation_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['filters']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['operator'] = 'word';
  $handler->display->display_options['filters']['field_nra_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['operator_id'] = 'field_nra_address_locality_op';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['label'] = 'Location Name';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['operator'] = 'field_nra_address_locality_op';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['identifier'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Locations';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Contact Directory Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '7';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['path'] = 'contact-us';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact us';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Contact Directory Page';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'contact-directory/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Customs Offices */
  $handler = $view->new_display('page', 'Customs Offices', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Customs Offices';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Customs Offices Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '7';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Main Body */
  $handler->display->display_options['fields']['field_nra_main_body']['id'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['table'] = 'field_data_field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['field'] = 'field_nra_main_body';
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['label'] = '';
  $handler->display->display_options['fields']['field_geo_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    80 => '80',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'contact-us/customs-offices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Customs Offices';
  $handler->display->display_options['menu']['description'] = 'Customs Offices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Freetown Tax Offices */
  $handler = $view->new_display('page', 'Freetown Tax Offices', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Freetown Tax Offices';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Freetown Tax Offices Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '7';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    79 => '79',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'contact-us/freetown-tax-offices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Freetown Tax Offices';
  $handler->display->display_options['menu']['description'] = 'Freetown Tax Offices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Provincial Offices */
  $handler = $view->new_display('page', 'Provincial Offices', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Provincial Offices';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Provincial Offices Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '7';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    81 => '81',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'contact-us/provincial-offices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Provincial Offices';
  $handler->display->display_options['menu']['description'] = 'Provincial Offices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Border Post Offices */
  $handler = $view->new_display('page', 'Border Post Offices', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Border Post Offices';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Border Post Offices Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '7';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    82 => '82',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'contact-us/border-post-offices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Border Post Offices';
  $handler->display->display_options['menu']['description'] = 'Border Post Offices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Contact Directory Header Block */
  $handler = $view->new_display('block', 'Contact Directory Header Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_data';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_nra_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '14';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Geo Data */
  $handler->display->display_options['fields']['field_geo_data']['id'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['table'] = 'field_data_field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['field'] = 'field_geo_data';
  $handler->display->display_options['fields']['field_geo_data']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_data']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  $handler->display->display_options['block_description'] = 'Contact Directory Header';

  /* Display: Header Attachment */
  $handler = $view->new_display('attachment', 'Header Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Office Email */
  $handler->display->display_options['fields']['field_nra_office_email']['id'] = 'field_nra_office_email';
  $handler->display->display_options['fields']['field_nra_office_email']['table'] = 'field_data_field_nra_office_email';
  $handler->display->display_options['fields']['field_nra_office_email']['field'] = 'field_nra_office_email';
  $handler->display->display_options['fields']['field_nra_office_email']['label'] = '';
  $handler->display->display_options['fields']['field_nra_office_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_office_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_office_email']['type'] = 'email_plain';
  /* Field: Content: Office Phone */
  $handler->display->display_options['fields']['field_nra_office_phone']['id'] = 'field_nra_office_phone';
  $handler->display->display_options['fields']['field_nra_office_phone']['table'] = 'field_data_field_nra_office_phone';
  $handler->display->display_options['fields']['field_nra_office_phone']['field'] = 'field_nra_office_phone';
  $handler->display->display_options['fields']['field_nra_office_phone']['label'] = '';
  $handler->display->display_options['fields']['field_nra_office_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_office_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_office_phone']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>		
       <address>  
[field_nra_address]
<br /><span class="glyphicon glyphicon-phone" aria-hidden="true"></span>[field_nra_office_phone]<br />
<span class="glyphicon glyphicon-envelope" aria-hidden="true"></span> [field_nra_office_email]
		</address>


';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['filters']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['operator'] = 'word';
  $handler->display->display_options['filters']['field_nra_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['operator_id'] = 'field_nra_address_locality_op';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['label'] = 'Location Name';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['operator'] = 'field_nra_address_locality_op';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['identifier'] = 'field_nra_address_locality';
  $handler->display->display_options['filters']['field_nra_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Contact Attachment */
  $handler = $view->new_display('attachment', 'Contact Attachment', 'attachment_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_address_locality' => 'field_nra_address_locality',
    'field_nra_address_thoroughfare' => 'field_nra_address_thoroughfare',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['id'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['field'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['label'] = 'Street address';
  /* Field: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['label'] = 'City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    81 => '81',
    78 => '78',
    79 => '79',
    80 => '80',
    82 => '82',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Customs Attachment */
  $handler = $view->new_display('attachment', 'Customs Attachment', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_address_locality' => 'field_nra_address_locality',
    'field_nra_address_thoroughfare' => 'field_nra_address_thoroughfare',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['id'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['field'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['label'] = 'Street address';
  /* Field: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['label'] = 'City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    80 => '80',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Freetown Tax Office Attachment */
  $handler = $view->new_display('attachment', 'Freetown Tax Office Attachment', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_address_locality' => 'field_nra_address_locality',
    'field_nra_address_thoroughfare' => 'field_nra_address_thoroughfare',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['id'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['field'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['label'] = 'Street address';
  /* Field: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['label'] = 'City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    79 => '79',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Provincial Tax Office Attachment */
  $handler = $view->new_display('attachment', 'Provincial Tax Office Attachment', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_address_locality' => 'field_nra_address_locality',
    'field_nra_address_thoroughfare' => 'field_nra_address_thoroughfare',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['id'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['field'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['label'] = 'Street address';
  /* Field: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['label'] = 'City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    81 => '81',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_4' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Border Post Office Attachment */
  $handler = $view->new_display('attachment', 'Border Post Office Attachment', 'attachment_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_address_locality' => 'field_nra_address_locality',
    'field_nra_address_thoroughfare' => 'field_nra_address_thoroughfare',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['id'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['field'] = 'field_nra_address_thoroughfare';
  $handler->display->display_options['fields']['field_nra_address_thoroughfare']['label'] = 'Street address';
  /* Field: Content: NRA Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_nra_address_locality']['id'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address_locality']['field'] = 'field_nra_address_locality';
  $handler->display->display_options['fields']['field_nra_address_locality']['label'] = 'City';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_contact_directory' => 'nra_contact_directory',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    82 => '82',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['nra_contact_directory'] = $view;

  return $export;
}
