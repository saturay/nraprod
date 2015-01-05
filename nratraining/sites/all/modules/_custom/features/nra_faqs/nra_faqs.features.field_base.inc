<?php
/**
 * @file
 * nra_faqs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nra_faqs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faq_answer'
  $field_bases['field_faq_answer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_answer',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
