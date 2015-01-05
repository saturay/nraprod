<?php
/**
 * @file
 * individuals_and_partnerships.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function individuals_and_partnerships_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'individuals_and_partnerships';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Individuals and Partnerships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Individuals and Partnerships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
    'individuals_and_partnerships' => 'individuals_and_partnerships',
  );

  /* Display: Main Page */
  $handler = $view->new_display('page', 'Main Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Welcome to our section for Individuals and Partnerships';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front_with_bg';
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Individuals and Partnerships';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This page is under construction';
  $handler->display->display_options['empty']['area']['format'] = 'content_provider';
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
  );
  /* Filter criterion: Content: Page Audience (field_nra_audience) */
  $handler->display->display_options['filters']['field_nra_audience_tid']['id'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['table'] = 'field_data_field_nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['field'] = 'field_nra_audience_tid';
  $handler->display->display_options['filters']['field_nra_audience_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '163';
  $handler->display->display_options['path'] = 'individuals-and-partnerships';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Individuals and Partnerships';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-audience-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Individuals and Partnerships Page';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Sierra Leone National Revenue Authority Individuals and Partnerships';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'individuals-and-partnerships/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Frontpage Audience Block */
  $handler = $view->new_display('block', 'Frontpage Audience Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individuals and Partnerships';
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
  $handler->display->display_options['footer']['area_1']['content'] = '<h2 class="audiencetitle">Individuals and Partnerships</h2>';
  $handler->display->display_options['footer']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Individuals and Partnerships Frontpage Audience';

  /* Display: Individuals and Partnerships  top Background Image Block */
  $handler = $view->new_display('block', 'Individuals and Partnerships  top Background Image Block', 'block_1');
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
    13 => '13',
    15 => '15',
    24 => '24',
    16 => '16',
    14 => '14',
    26 => '26',
    22 => '22',
    17 => '17',
    21 => '21',
    25 => '25',
    23 => '23',
    18 => '18',
    20 => '20',
    19 => '19',
    72 => '72',
    74 => '74',
    73 => '73',
  );
  $handler->display->display_options['filters']['field_nra_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nra_audience_tid']['vocabulary'] = 'nra_audience';
  $handler->display->display_options['filters']['field_nra_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Individuals and Partnerships  top Background Image';

  /* Display: Frontpage Navlist  Audience Block */
  $handler = $view->new_display('block', 'Frontpage Navlist  Audience Block', 'block_2');
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
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
<div class="readmorelink"><a href="/individuals-and-partnerships">More</a></div>
</div>';
  $handler->display->display_options['fields']['field_nra_summary']['alter']['max_length'] = '380';
  $handler->display->display_options['fields']['field_nra_summary']['alter']['trim'] = TRUE;
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
<div class="readmorelink"><a href="/individuals-and-partnerships">More</a></div>
</div>';
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
    'individuals_and_partnerships' => 'individuals_and_partnerships',
  );
  /* Filter criterion: Content: Display in frontpage slideshow (field_display_in_frontpage_slide) */
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['id'] = 'field_display_in_frontpage_slide_value';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['table'] = 'field_data_field_display_in_frontpage_slide';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['field'] = 'field_display_in_frontpage_slide_value';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Individuals and Partnerships Frontpage Navlist ';

  /* Display: Mobile Frontpage Audience Block */
  $handler = $view->new_display('block', 'Mobile Frontpage Audience Block', 'block_3');
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
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
    'individuals_and_partnerships' => 'individuals_and_partnerships',
  );
  /* Filter criterion: Content: Display in frontpage slideshow (field_display_in_frontpage_slide) */
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['id'] = 'field_display_in_frontpage_slide_value';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['table'] = 'field_data_field_display_in_frontpage_slide';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['field'] = 'field_display_in_frontpage_slide_value';
  $handler->display->display_options['filters']['field_display_in_frontpage_slide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Mobile Individuals and Partnerships Frontpage';

  /* Display: Mobile Frontpage Audience Block */
  $handler = $view->new_display('block', 'Mobile Frontpage Audience Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individuals and Partnerships';
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
  $handler->display->display_options['footer']['area_1']['content'] = '<h2 class="audiencetitle">Individuals and Partnerships</h2>';
  $handler->display->display_options['footer']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mobile Individuals and Partnerships Frontpage Audience';
  $export['individuals_and_partnerships'] = $view;

  return $export;
}
