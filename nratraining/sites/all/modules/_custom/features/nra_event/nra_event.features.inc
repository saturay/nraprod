<?php
/**
 * @file
 * nra_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_event_node_info() {
  $items = array(
    'nra_event' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Use Events content type to create all Events. These pages are displayed on the homepage under Important Dates. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
