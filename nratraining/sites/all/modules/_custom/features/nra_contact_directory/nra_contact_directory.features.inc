<?php
/**
 * @file
 * nra_contact_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_contact_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_contact_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_contact_directory_node_info() {
  $items = array(
    'nra_contact_directory' => array(
      'name' => t('Contact Directory'),
      'base' => 'node_content',
      'description' => t('Use Contact Directory content type to create all  Contact pages. These pages are linked to the Contact menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
