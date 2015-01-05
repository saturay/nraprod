<?php
/**
 * @file
 * nra_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_documents_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_documents_node_info() {
  $items = array(
    'nra_documents' => array(
      'name' => t('Documents'),
      'base' => 'node_content',
      'description' => t('Use  Documents content type to create all  Documents pages. These pages are linked to the various menu items. A Document page is any page that requires a file attachment. File attachment must be in PDF format. Downloadable Forms, Laws And Regulations and various other PDF files were created using this content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
