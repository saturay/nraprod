<?php
/**
 * @file
 * nra_online_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_online_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_online_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_online_services_node_info() {
  $items = array(
    'nra_online_services' => array(
      'name' => t('Online Services'),
      'base' => 'node_content',
      'description' => t('Use Online Services content type to create all Online Services Pages. These pages are linked to the Online Services menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
