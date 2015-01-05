<?php
/**
 * @file
 * nra_jobs.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nra_jobs_user_default_roles() {
  $roles = array();

  // Exported role: Applicant.
  $roles['Applicant'] = array(
    'name' => 'Applicant',
    'weight' => 2,
  );

  // Exported role: Candidate.
  $roles['Candidate'] = array(
    'name' => 'Candidate',
    'weight' => 3,
  );

  return $roles;
}
