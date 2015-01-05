<?php
/**
 * @file
 * nra_frontpage_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function nra_frontpage_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'frontpage_audience';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'FrontPage Audience';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_8d33af4e6688239e771958390bf31214',
      'hide_title' => 1,
      'title' => 'Businesses and Organizations',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_9a26456dc65f486fb7f11b9806df19d4',
      'hide_title' => 1,
      'title' => 'Individuals and Partnerships',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_import_and_export_-block_2',
      'hide_title' => 1,
      'title' => 'Import and Export',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Sky';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Businesses and Organizations');
  t('FrontPage Audience');
  t('Import and Export');
  t('Individuals and Partnerships');

  $export['frontpage_audience'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'frontpage_updates';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'FrontPage Updates';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_nra_event-block',
      'hide_title' => 1,
      'title' => 'Important Dates',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_nra_news-block',
      'hide_title' => 1,
      'title' => 'Notices',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_nra_event-block_1',
      'hide_title' => 1,
      'title' => 'News and Events',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Sky';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('FrontPage Updates');
  t('Important Dates');
  t('News and Events');
  t('Notices');

  $export['frontpage_updates'] = $quicktabs;

  return $export;
}
