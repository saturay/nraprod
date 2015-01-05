<?php
/**
 * @file
 * nra_media_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_media_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_media_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_media_gallery_node_info() {
  $items = array(
    'nra_media_gallery' => array(
      'name' => t('Media Gallery'),
      'base' => 'node_content',
      'description' => t('Use Media Gallery content type to create all Media Gallery Pages. These pages are not linked to any menu item at the moment but you can link it to any upon creation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
