<?php
/**
 * @file
 * nra_basic_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nra_basic_page_taxonomy_default_vocabularies() {
  return array(
    'nra_audience' => array(
      'name' => 'NRA Audience',
      'machine_name' => 'nra_audience',
      'description' => 'NRA Audience',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'nra_content_tags' => array(
      'name' => 'NRA Content Tags',
      'machine_name' => 'nra_content_tags',
      'description' => 'NRA Content Tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
