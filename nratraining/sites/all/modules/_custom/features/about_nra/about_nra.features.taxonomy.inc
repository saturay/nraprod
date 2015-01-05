<?php
/**
 * @file
 * about_nra.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function about_nra_taxonomy_default_vocabularies() {
  return array(
    'nra_audience' => array(
      'name' => 'Services',
      'machine_name' => 'nra_audience',
      'description' => 'National Revenue Authority Services',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'nra_content_tags' => array(
      'name' => 'Keywords',
      'machine_name' => 'nra_content_tags',
      'description' => 'National Revenue Authority Keywords',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
