<?php
/**
 * @file
 * nra_faqs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nra_faqs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frequently Asked Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_faqs' => 'nra_faqs',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Frequently Asked Questions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Import and Export';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Import and Export</h2>';
  $handler->display->display_options['header']['area']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Page Audience */
  $handler->display->display_options['fields']['field_nra_audience']['id'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['field'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['label'] = '';
  $handler->display->display_options['fields']['field_nra_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_audience']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_nra_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_audience']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_faqs' => 'nra_faqs',
  );
  $handler->display->display_options['path'] = 'faqs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FAQs';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Frequently Asked Questions  Page';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Sierra Leone National Revenue Authority Frequently Asked Questions';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'faqs/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Importation of Vehicles Page */
  $handler = $view->new_display('page', 'Importation of Vehicles Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Importation of Vehicles FAQs';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Importation of Vehicles Frequently Asked Questions Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Page Audience */
  $handler->display->display_options['fields']['field_nra_audience']['id'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['field'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['label'] = '';
  $handler->display->display_options['fields']['field_nra_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_audience']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_nra_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_audience']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_faqs' => 'nra_faqs',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    156 => '156',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['path'] = 'faqs/import-export/vehicles';
  $handler->display->display_options['menu']['title'] = 'FAQs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Drawback Page */
  $handler = $view->new_display('page', 'Drawback Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Drawback FAQs';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Drawback Frequently Asked Questions Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Page Audience */
  $handler->display->display_options['fields']['field_nra_audience']['id'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['field'] = 'field_nra_audience';
  $handler->display->display_options['fields']['field_nra_audience']['label'] = '';
  $handler->display->display_options['fields']['field_nra_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_audience']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_nra_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nra_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_audience']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Answer */
  $handler->display->display_options['fields']['field_faq_answer']['id'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['table'] = 'field_data_field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['field'] = 'field_faq_answer';
  $handler->display->display_options['fields']['field_faq_answer']['label'] = '';
  $handler->display->display_options['fields']['field_faq_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nra_faqs' => 'nra_faqs',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    155 => '155',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator_id'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['operator'] = 'field_nra_audience_tid_op';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['identifier'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['path'] = 'faqs/import-export/drawback';
  $handler->display->display_options['menu']['title'] = 'FAQs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['faqs'] = $view;

  return $export;
}
