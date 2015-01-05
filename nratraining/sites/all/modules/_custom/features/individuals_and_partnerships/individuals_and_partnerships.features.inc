<?php
/**
 * @file
 * individuals_and_partnerships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function individuals_and_partnerships_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function individuals_and_partnerships_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function individuals_and_partnerships_node_info() {
  $items = array(
    'individuals_and_partnerships' => array(
      'name' => t('Individuals and Partnerships'),
      'base' => 'node_content',
      'description' => t('Use Individuals and Partnerships content type to create all Individuals and Partnerships Pages. These pages are linked to the Individuals and Partnerships menu. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
