<?php
/**
 * @file
 * about_nra.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_nra_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function about_nra_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function about_nra_node_info() {
  $items = array(
    'about_nra' => array(
      'name' => t('About NRA'),
      'base' => 'node_content',
      'description' => t('Use About NRA content type to create all About NRA Pages. These pages are linked to the About Us menu. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
