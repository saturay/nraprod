<?php
/**
 * @file
 * nra_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nra_documents_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nra_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NRA Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nra_document_attachment' => 'field_nra_document_attachment',
    'title' => 'title',
    'nothing' => 'nothing',
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
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'hover' => 'hover',
    'condensed' => 0,
  );
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nra_document_attachment]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: List Order (field_nra_list_order) */
  $handler->display->display_options['sorts']['field_nra_list_order_value']['id'] = 'field_nra_list_order_value';
  $handler->display->display_options['sorts']['field_nra_list_order_value']['table'] = 'field_data_field_nra_list_order';
  $handler->display->display_options['sorts']['field_nra_list_order_value']['field'] = 'field_nra_list_order_value';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'nra_documents' => 'nra_documents',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Documents Page';
  $handler->display->display_options['path'] = 'documents';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Documents';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Documents Page';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'documents/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Reports Page */
  $handler = $view->new_display('page', 'Reports Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Reports Page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nra_document_attachment' => 'field_nra_document_attachment',
    'title' => 'title',
    'nothing' => 'nothing',
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
  );
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nra_document_attachment]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  );
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Report' => 'Report',
  );
  $handler->display->display_options['path'] = 'documents/reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Publications  Page */
  $handler = $view->new_display('page', 'Publications  Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Publications Page';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  );
  /* Filter criterion: Content: Content Tags (field_nra_content_tags) */
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['id'] = 'field_nra_content_tags_tid';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['table'] = 'field_data_field_nra_content_tags';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['field'] = 'field_nra_content_tags_tid';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['vocabulary'] = 'nra_content_tags';
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Publication' => 'Publication',
  );
  $handler->display->display_options['path'] = 'documents/publications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Downloadable Forms Page */
  $handler = $view->new_display('page', 'Downloadable Forms Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Downloadable Forms';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Downloadable Forms Page';
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
    'field_nra_content_tags' => 'field_nra_content_tags',
    'nothing' => 'nothing',
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
    'field_nra_content_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['field_nra_document_attachment']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_nra_document_attachment']['alter']['path'] = '[field_nra_document_attachment]';
  $handler->display->display_options['fields']['field_nra_document_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_document_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nra_document_attachment']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Content Tags */
  $handler->display->display_options['fields']['field_nra_content_tags']['id'] = 'field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['table'] = 'field_data_field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['field'] = 'field_nra_content_tags';
  $handler->display->display_options['fields']['field_nra_content_tags']['label'] = '';
  $handler->display->display_options['fields']['field_nra_content_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_content_tags']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_nra_content_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_content_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_content_tags']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="downloads">
<a href="[field_nra_document_attachment]">[title]  <span class="glyphicon glyphicon-save"> </span></a>
</h3> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Downloadable Form' => 'Downloadable Form',
  );
  $handler->display->display_options['filters']['field_document_type_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Content Tags (field_nra_content_tags) */
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['id'] = 'field_nra_content_tags_tid';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['table'] = 'field_data_field_nra_content_tags';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['field'] = 'field_nra_content_tags_tid';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['expose']['operator_id'] = 'field_nra_content_tags_tid_op';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['expose']['operator'] = 'field_nra_content_tags_tid_op';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['expose']['identifier'] = 'field_nra_content_tags_tid';
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_nra_content_tags_tid']['vocabulary'] = 'nra_content_tags';
  $handler->display->display_options['path'] = 'downloadable-forms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Downloadable Forms';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-quick-links';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment footer Block */
  $handler = $view->new_display('block', 'Attachment footer Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="glyphicon glyphicon-download"></span>[field_nra_document_attachment]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_nra_attachments']['id'] = 'field_nra_attachments';
  $handler->display->display_options['fields']['field_nra_attachments']['table'] = 'field_data_field_nra_attachments';
  $handler->display->display_options['fields']['field_nra_attachments']['field'] = 'field_nra_attachments';
  $handler->display->display_options['fields']['field_nra_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_nra_attachments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_attachments']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_nra_attachments']['settings'] = array(
    'view_mode' => 'search_result',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_nra_attachments']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="downloads">
 [field_nra_attachments]  <span class="glyphicon glyphicon-save"> </span></a>
</p> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'about_nra' => 'about_nra',
    'businesses_and_organizations' => 'businesses_and_organizations',
    'import_and_export' => 'import_and_export',
    'individuals_and_partnerships' => 'individuals_and_partnerships',
    'nra_basic_page' => 'nra_basic_page',
    'nra_documents' => 'nra_documents',
    'nra_event' => 'nra_event',
    'nra_faqs' => 'nra_faqs',
    'job_application_form' => 'job_application_form',
    'nra_jobs' => 'nra_jobs',
    'nra_news' => 'nra_news',
    'nra_tenders' => 'nra_tenders',
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
  /* Filter criterion: Content: Attachments (field_nra_attachments) */
  $handler->display->display_options['filters']['field_nra_attachments_target_id']['id'] = 'field_nra_attachments_target_id';
  $handler->display->display_options['filters']['field_nra_attachments_target_id']['table'] = 'field_data_field_nra_attachments';
  $handler->display->display_options['filters']['field_nra_attachments_target_id']['field'] = 'field_nra_attachments_target_id';
  $handler->display->display_options['filters']['field_nra_attachments_target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'about_nra' => 'about_nra',
    'businesses_and_organizations' => 'businesses_and_organizations',
    'individuals_and_partnerships' => 'individuals_and_partnerships',
    'job_application_form' => 'job_application_form',
    'nra_basic_page' => 'nra_basic_page',
    'nra_event' => 'nra_event',
    'nra_jobs' => 'nra_jobs',
    'nra_news' => 'nra_news',
    'nra_tenders' => 'nra_tenders',
    'import_and_export' => 'import_and_export',
  );
  $handler->display->display_options['block_description'] = 'Document Attachment Footer Blocka';
  $export['nra_documents'] = $view;

  return $export;
}
