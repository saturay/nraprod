<?php
/**
 * @file
 * import_and_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function import_and_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function import_and_export_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function import_and_export_node_info() {
  $items = array(
    'import_and_export' => array(
      'name' => t('import and Export'),
      'base' => 'node_content',
      'description' => t('Use Import and Export content type to create all  Import and Export  Pages. These pages are linked to the  Import and Export menu. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
