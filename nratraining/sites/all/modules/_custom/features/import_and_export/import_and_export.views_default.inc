<?php
/**
 * @file
 * import_and_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function import_and_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'import_and_export_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'import and Export ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'import and Export ';
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Main Body */
  $handler->display->display_options['fields']['field_nra_main_body']['id'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['table'] = 'field_data_field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['field'] = 'field_nra_main_body';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'import_and_export' => 'import_and_export',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Welcome to our section for Import and Export ';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front_with_bg';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Import and Export';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Main Body */
  $handler->display->display_options['fields']['field_nra_main_body']['id'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['table'] = 'field_data_field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['field'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['label'] = '';
  $handler->display->display_options['fields']['field_nra_main_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_main_body']['settings'] = array(
    'trim_length' => '200',
  );
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
    'nra_basic_page' => 'nra_basic_page',
    'import_and_export' => 'import_and_export',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '162';
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'import-and-export';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'import and Export ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-audience-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Import and Export Page';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Sierra Leone National Revenue Authority Import and Export';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'import-and-export/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Import and Export Front Block */
  $handler = $view->new_display('block', 'Import and Export Front Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Import and Export';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'frontpagetab menu_front_with_bg';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more ';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<h2 class="audiencetitle">Import and Export</h2>';
  $handler->display->display_options['footer']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Frontpage Import and Export';

  /* Display: Laws and Regulations */
  $handler = $view->new_display('page', 'Laws and Regulations', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Laws and Regulations';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Laws and Regulations Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_nra_content_tags',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nra_document_attachment' => 'field_nra_document_attachment',
    'title' => 'title',
    'nothing' => 'nothing',
    'field_nra_content_tags' => 'field_nra_content_tags',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_nra_document_attachment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_content_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Sierra Leone National Revenue Authority Laws and Regulations ';
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'hover' => 'hover',
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NRA Document Attachment */
  $handler->display->display_options['fields']['field_nra_document_attachment']['id'] = 'field_nra_document_attachment';
  $handler->display->display_options['fields']['field_nra_document_attachment']['table'] = 'field_data_field_nra_document_attachment';
  $handler->display->display_options['fields']['field_nra_document_attachment']['field'] = 'field_nra_document_attachment';
  $handler->display->display_options['fields']['field_nra_document_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_nra_document_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_document_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_document_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nra_document_attachment']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nra_document_attachment]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="downloads">
<a href="[field_nra_document_attachment]">[title]  <span class="glyphicon glyphicon-save"> </span></a>
</h3> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Content Tags */
  $handler->display->display_options['fields']['field_nra_content_tags']['id'] = 'field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['table'] = 'field_data_field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['field'] = 'field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['label'] = '';
  $handler->display->display_options['fields']['field_nra_content_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_content_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_content_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_content_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: List Order (field_nra_list_order) */
  $handler->display->display_options['sorts']['field_nra_list_order_value']['id'] = 'field_nra_list_order_value';
  $handler->display->display_options['sorts']['field_nra_list_order_value']['table'] = 'field_data_field_nra_list_order';
  $handler->display->display_options['sorts']['field_nra_list_order_value']['field'] = 'field_nra_list_order_value';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'nra_documents' => 'nra_documents',
    'import_and_export' => 'import_and_export',
  );
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Laws and Regulation' => 'Laws and Regulation',
  );
  $handler->display->display_options['path'] = 'import-and-export/laws-and-regulations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Laws and Regulations';
  $handler->display->display_options['menu']['description'] = 'Laws and Regulations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-audience-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Rates */
  $handler = $view->new_display('page', 'Rates', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rates';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Important and Export Rates Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Main Body */
  $handler->display->display_options['fields']['field_nra_main_body']['id'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['table'] = 'field_data_field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['field'] = 'field_nra_main_body';
  $handler->display->display_options['fields']['field_nra_main_body']['label'] = '';
  $handler->display->display_options['fields']['field_nra_main_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_main_body']['settings'] = array(
    'trim_length' => '200',
  );
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
    'import_and_export' => 'import_and_export',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    90 => '90',
    55 => '55',
    54 => '54',
    56 => '56',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'import-and-export/rates';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Rates';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-audience-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Import and Export top Background Image Block */
  $handler = $view->new_display('block', 'Import and Export top Background Image Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'insert_front_with_bg';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideimage */
  $handler->display->display_options['fields']['field_slideimage']['id'] = 'field_slideimage';
  $handler->display->display_options['fields']['field_slideimage']['table'] = 'field_data_field_slideimage';
  $handler->display->display_options['fields']['field_slideimage']['field'] = 'field_slideimage';
  $handler->display->display_options['fields']['field_slideimage']['label'] = '';
  $handler->display->display_options['fields']['field_slideimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideimage']['settings'] = array(
    'image_style' => 'audience_slide',
    'image_link' => '',
  );
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
    'slideshow' => 'slideshow',
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    46 => '46',
    57 => '57',
    64 => '64',
    60 => '60',
    61 => '61',
    58 => '58',
    62 => '62',
    63 => '63',
    59 => '59',
    89 => '89',
    52 => '52',
    51 => '51',
    53 => '53',
    90 => '90',
    55 => '55',
    54 => '54',
    56 => '56',
    88 => '88',
    47 => '47',
    49 => '49',
    48 => '48',
    50 => '50',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Import and Export top Background Image';

  /* Display: Navlist Import and Export Front Block */
  $handler = $view->new_display('block', 'Navlist Import and Export Front Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'navlistshowcase';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'quicktabs';
  $handler->display->display_options['style_options']['tab_style'] = 'Navlist';
  $handler->display->display_options['style_options']['tab_title_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: NRA Primary Image */
  $handler->display->display_options['fields']['field_nra_main_image']['id'] = 'field_nra_main_image';
  $handler->display->display_options['fields']['field_nra_main_image']['table'] = 'field_data_field_nra_main_image';
  $handler->display->display_options['fields']['field_nra_main_image']['field'] = 'field_nra_main_image';
  $handler->display->display_options['fields']['field_nra_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_nra_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nra_main_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Page Summary */
  $handler->display->display_options['fields']['field_nra_summary']['id'] = 'field_nra_summary';
  $handler->display->display_options['fields']['field_nra_summary']['table'] = 'field_data_field_nra_summary';
  $handler->display->display_options['fields']['field_nra_summary']['field'] = 'field_nra_summary';
  $handler->display->display_options['fields']['field_nra_summary']['label'] = '';
  $handler->display->display_options['fields']['field_nra_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_summary']['alter']['text'] = '<div class="audienceSummary">
<h2><a href="[path]">[title]</a></h2> 
<div class="audiencebody">
<span class="primary-image">[field_nra_main_image]</span>
<p>[field_nra_summary]...</p>
</div>
<div class="readmorelink"><a href="/import-and-export">More</a></div>
</div>';
  $handler->display->display_options['fields']['field_nra_summary']['alter']['max_length'] = '380';
  $handler->display->display_options['fields']['field_nra_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_nra_summary']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_nra_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="audienceSummary">
<h2><a href="[path]">[title]</a></h2> 
<div class="audiencebody">
<span class="primary-image">[field_nra_main_image]</span>
<p>[field_nra_summary]...</p>
</div>
<div class="readmorelink"><a href="/import-and-export">See more</a></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Frontpage Import and Export Navlist';

  /* Display: Mobile Import and Export Front Block */
  $handler = $view->new_display('block', 'Mobile Import and Export Front Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobileshowcase';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mobile Frontpage Import and Export';

  /* Display: Mobile Import and Export Front Block */
  $handler = $view->new_display('block', 'Mobile Import and Export Front Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Import and Export';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile menu_front_with_bg';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more ';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<h2 class="audiencetitle">Import and Export</h2>';
  $handler->display->display_options['footer']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mobile Frontpage Import and Export';

  /* Display: Mobile Import and Export Front Block */
  $handler = $view->new_display('block', 'Mobile Import and Export Front Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Import and Export';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile menu_front_with_bg';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more ';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<h2 class="audiencetitle">Import and Export</h2>';
  $handler->display->display_options['footer']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mobile Frontpage Import and Export';
  $export['import_and_export_'] = $view;

  return $export;
}
