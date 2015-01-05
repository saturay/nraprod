<?php
/**
 * @file
 * nra_people_profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nra_people_profiles_taxonomy_default_vocabularies() {
  return array(
    'nra_departments' => array(
      'name' => 'Departments',
      'machine_name' => 'nra_departments',
      'description' => 'National Revenue Authority  Departments',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'nra_staff_positions' => array(
      'name' => 'Staff Positions',
      'machine_name' => 'nra_staff_positions',
      'description' => 'National Revenue Authority Staff Positions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
