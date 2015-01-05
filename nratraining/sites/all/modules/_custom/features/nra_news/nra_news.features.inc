<?php
/**
 * @file
 * nra_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_news_node_info() {
  $items = array(
    'nra_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use News content type to create all news pages. These pages are currently displayed on the frontpage under Notices and News and Events. You can use it to create News Articles, Announcements and Press Releases. A view was created to view all news items at http://nra.gov.sl/news and this can be added to your menu'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
