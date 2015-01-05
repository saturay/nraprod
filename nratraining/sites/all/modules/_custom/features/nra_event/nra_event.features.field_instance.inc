<?php
/**
 * @file
 * nra_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nra_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-nra_event-field_event_start_data_and_time'
  $field_instances['node-nra_event-field_event_start_data_and_time'] = array(
    'bundle' => 'nra_event',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'This is the event date and time. It must contain something.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_start_data_and_time',
    'label' => 'Event Start Data and Time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-nra_event-field_nra_content_tags'
  $field_instances['node-nra_event-field_nra_content_tags'] = array(
    'bundle' => 'nra_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'We use this field to categorize content in a view. Downloadable Forms, Reports, Publications and Laws and Regulations view pages uses whatever you enter here to categorize the items in the view',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nra_content_tags',
    'label' => 'Content Tags',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-nra_event-field_nra_main_body'
  $field_instances['node-nra_event-field_nra_main_body'] = array(
    'bundle' => 'nra_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the main page content. Enter the full page content here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nra_main_body',
    'label' => 'Main Body',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-nra_event-field_nra_summary'
  $field_instances['node-nra_event-field_nra_summary'] = array(
    'bundle' => 'nra_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the page summary. It will display when this page is listed in a view using the teaser display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nra_summary',
    'label' => 'Page Summary',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Tags');
  t('Event Start Data and Time');
  t('Main Body');
  t('Page Summary');
  t('This is the event date and time. It must contain something.');
  t('This is the main page content. Enter the full page content here.');
  t('This is the page summary. It will display when this page is listed in a view using the teaser display.');
  t('We use this field to categorize content in a view. Downloadable Forms, Reports, Publications and Laws and Regulations view pages uses whatever you enter here to categorize the items in the view');

  return $field_instances;
}
