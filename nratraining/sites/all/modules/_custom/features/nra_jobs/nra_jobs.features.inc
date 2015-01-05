<?php
/**
 * @file
 * nra_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_jobs_node_info() {
  $items = array(
    'job_application_form' => array(
      'name' => t('Job Application Form'),
      'base' => 'node_content',
      'description' => t('Use Job Application Form to submit a Job Application in response to a job posting. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nra_jobs' => array(
      'name' => t('Jobs'),
      'base' => 'node_content',
      'description' => t('Use Jobs content type to create all Jobs Pages. These pages are linked to the Jobs menu. When users view a job posting, they will see a link to apply online. That link will have them go through a workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function nra_jobs_default_profile2_type() {
  $items = array();
  $items['candidate_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "candidate_profile",
    "label" : "Candidate Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  $items['staff_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "staff_profile",
    "label" : "Staff Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
