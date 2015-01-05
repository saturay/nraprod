<?php
/**
 * @file
 * businesses_and_organizations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function businesses_and_organizations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function businesses_and_organizations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function businesses_and_organizations_node_info() {
  $items = array(
    'businesses_and_organizations' => array(
      'name' => t('Businesses and Organisation'),
      'base' => 'node_content',
      'description' => t('Use Businesses and Organisation content type to create all Businesses and Organisation Pages. These pages are linked to the Businesses and Organisation menu. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
