<?php
/**
 * @file
 * nra_faqs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_faqs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_faqs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_faqs_node_info() {
  $items = array(
    'nra_faqs' => array(
      'name' => t('FAQs'),
      'base' => 'node_content',
      'description' => t('Use FAQs content type to create all FAQs Pages. These pages are linked to http://nra.gov.sl/faqs page.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
