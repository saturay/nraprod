<?php
/**
 * @file
 * nra_basic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_basic_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_basic_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_basic_page_node_info() {
  $items = array(
    'nra_basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Use Basic Page content type to create all Basic Pages. These pages are displayed in different places. If the page you want to create does not belong to any of the other content types, use Basic Page to create it. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
