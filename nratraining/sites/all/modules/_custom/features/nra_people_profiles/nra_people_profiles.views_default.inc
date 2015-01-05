<?php
/**
 * @file
 * nra_people_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nra_people_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nra_people_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NRA People Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  /* Field: Content: NRA Email Address */
  $handler->display->display_options['fields']['field_nra_email_address']['id'] = 'field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['table'] = 'field_data_field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['field'] = 'field_nra_email_address';
  /* Field: Content: NRA First Name */
  $handler->display->display_options['fields']['field_nra_first_name']['id'] = 'field_nra_first_name';
  $handler->display->display_options['fields']['field_nra_first_name']['table'] = 'field_data_field_nra_first_name';
  $handler->display->display_options['fields']['field_nra_first_name']['field'] = 'field_nra_first_name';
  /* Field: Content: NRA Middle Name */
  $handler->display->display_options['fields']['field_nra_middle_name']['id'] = 'field_nra_middle_name';
  $handler->display->display_options['fields']['field_nra_middle_name']['table'] = 'field_data_field_nra_middle_name';
  $handler->display->display_options['fields']['field_nra_middle_name']['field'] = 'field_nra_middle_name';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['id'] = 'field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['table'] = 'field_data_field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['field'] = 'field_nra_staff_phone_number';
  /* Field: Content: Staff Position */
  $handler->display->display_options['fields']['field_nra_staff_position']['id'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['table'] = 'field_data_field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['field'] = 'field_nra_staff_position';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_nra_surname']['id'] = 'field_nra_surname';
  $handler->display->display_options['fields']['field_nra_surname']['table'] = 'field_data_field_nra_surname';
  $handler->display->display_options['fields']['field_nra_surname']['field'] = 'field_nra_surname';
  /* Sort criterion: Content: Rank for Listing (field_nra_rank_for_listing) */
  $handler->display->display_options['sorts']['field_nra_rank_for_listing_value']['id'] = 'field_nra_rank_for_listing_value';
  $handler->display->display_options['sorts']['field_nra_rank_for_listing_value']['table'] = 'field_data_field_nra_rank_for_listing';
  $handler->display->display_options['sorts']['field_nra_rank_for_listing_value']['field'] = 'field_nra_rank_for_listing_value';
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
    'nra_people_profiles' => 'nra_people_profiles',
  );
  /* Filter criterion: Content: Staff Type (field_nra_staff_type) */
  $handler->display->display_options['filters']['field_nra_staff_type_value']['id'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['table'] = 'field_data_field_nra_staff_type';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['field'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['value'] = array(
    'Management' => 'Management',
    'Staff' => 'Staff',
    'Other' => 'Other',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Staff  Profiles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_staff_position' => 'field_nra_staff_position',
    'field_nra_staff_phone_number' => 'field_nra_staff_phone_number',
    'field_nra_email_address' => 'field_nra_email_address',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_staff_position' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_staff_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Position */
  $handler->display->display_options['fields']['field_nra_staff_position']['id'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['table'] = 'field_data_field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['field'] = 'field_nra_staff_position';
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['id'] = 'field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['table'] = 'field_data_field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['field'] = 'field_nra_staff_phone_number';
  /* Field: Content: NRA Email Address */
  $handler->display->display_options['fields']['field_nra_email_address']['id'] = 'field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['table'] = 'field_data_field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['field'] = 'field_nra_email_address';
  $handler->display->display_options['path'] = 'people/profiles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Staff Profiles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['display_description'] = 'Sierra Leone National Revenue Authority Staff  Profiles';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'profiles/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Board Page */
  $handler = $view->new_display('page', 'Board Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Board of Directors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_staff_position' => 'field_nra_staff_position',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_staff_position' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Board of Directors is the governing body of the Authority and subject to the NRA Act, controls and supervises the Authority. The function of the Board according to the NRA Act, 2002 includes: 
<ul><li>determining the grading, remuneration, recruitment, promotion and training of staff;</li>
<li>	establishing and administering the  Codes of Conduct;</li>
<li>formulating policy for the Authority; but in particular administrative, human resource and operational policies and procedures;</li>
<li>	setting targets and standards including quality and operational output measures for revenue collection.</li>
</ul>
<p>Composition of the Board of Directors</p>
<ul><li>a Chairman</li>
<li>Financial Secretary, Ministry of Finance and Economic Development</li>
<li>	Governor, BSL</li>
<li>a Tax Specialist</li>
<li>an Economist</li>
<li>a Legal Practitioner; and</li>
<li>the Commissioner-General</li></ul>
The Secretary to the Board is principal assistant to the Commissioner-General.  
';
  $handler->display->display_options['header']['area']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Position */
  $handler->display->display_options['fields']['field_nra_staff_position']['id'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['table'] = 'field_data_field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['field'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['label'] = 'Position';
  $handler->display->display_options['fields']['field_nra_staff_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_staff_position']['delta_offset'] = '0';
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
    'nra_people_profiles' => 'nra_people_profiles',
  );
  /* Filter criterion: Content: Staff Type (field_nra_staff_type) */
  $handler->display->display_options['filters']['field_nra_staff_type_value']['id'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['table'] = 'field_data_field_nra_staff_type';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['field'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['value'] = array(
    'Board Member' => 'Board Member',
  );
  $handler->display->display_options['path'] = 'people/profiles/board-of-directors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Board of Directors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Management Page */
  $handler = $view->new_display('page', 'Management Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Senior Management ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nra_staff_position' => 'field_nra_staff_position',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nra_staff_position' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Led by the Commissioner General, the Senior Management Team (SMT) is responsible for the following functions:  
<ul><li>Administration: management is responsible for the daily operations and decision making of the Authority.</li>
<li>Visionary Leadership: management is responsible for providing visionary leadership and maintaining focus on the mandate, strategic goals and future direction of the Authority.</li></ul>
';
  $handler->display->display_options['header']['area']['format'] = 'content_publisher';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '<h3><small>Members of the senior management </small></h3>';
  $handler->display->display_options['header']['area_1']['format'] = 'content_publisher';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Position */
  $handler->display->display_options['fields']['field_nra_staff_position']['id'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['table'] = 'field_data_field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['field'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_staff_position']['delta_offset'] = '0';
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
    'nra_people_profiles' => 'nra_people_profiles',
  );
  /* Filter criterion: Content: Staff Type (field_nra_staff_type) */
  $handler->display->display_options['filters']['field_nra_staff_type_value']['id'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['table'] = 'field_data_field_nra_staff_type';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['field'] = 'field_nra_staff_type_value';
  $handler->display->display_options['filters']['field_nra_staff_type_value']['value'] = array(
    'Management' => 'Management',
  );
  $handler->display->display_options['path'] = 'people/profiles/management';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members of the senior management ';
  $handler->display->display_options['menu']['description'] = 'Members of the senior management ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Profile Header Block */
  $handler = $view->new_display('block', 'Profile Header Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_nra_profile_photo']['id'] = 'field_nra_profile_photo';
  $handler->display->display_options['fields']['field_nra_profile_photo']['table'] = 'field_data_field_nra_profile_photo';
  $handler->display->display_options['fields']['field_nra_profile_photo']['field'] = 'field_nra_profile_photo';
  $handler->display->display_options['fields']['field_nra_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_nra_profile_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_profile_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nra_profile_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
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
  /* Field: Content: Prefix */
  $handler->display->display_options['fields']['field_nra_profile_prefix']['id'] = 'field_nra_profile_prefix';
  $handler->display->display_options['fields']['field_nra_profile_prefix']['table'] = 'field_data_field_nra_profile_prefix';
  $handler->display->display_options['fields']['field_nra_profile_prefix']['field'] = 'field_nra_profile_prefix';
  $handler->display->display_options['fields']['field_nra_profile_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_nra_profile_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_profile_prefix']['element_label_colon'] = FALSE;
  /* Field: Content: NRA First Name */
  $handler->display->display_options['fields']['field_nra_first_name']['id'] = 'field_nra_first_name';
  $handler->display->display_options['fields']['field_nra_first_name']['table'] = 'field_data_field_nra_first_name';
  $handler->display->display_options['fields']['field_nra_first_name']['field'] = 'field_nra_first_name';
  $handler->display->display_options['fields']['field_nra_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_nra_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: NRA Middle Name */
  $handler->display->display_options['fields']['field_nra_middle_name']['id'] = 'field_nra_middle_name';
  $handler->display->display_options['fields']['field_nra_middle_name']['table'] = 'field_data_field_nra_middle_name';
  $handler->display->display_options['fields']['field_nra_middle_name']['field'] = 'field_nra_middle_name';
  $handler->display->display_options['fields']['field_nra_middle_name']['label'] = '';
  $handler->display->display_options['fields']['field_nra_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_middle_name']['element_label_colon'] = FALSE;
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_nra_surname']['id'] = 'field_nra_surname';
  $handler->display->display_options['fields']['field_nra_surname']['table'] = 'field_data_field_nra_surname';
  $handler->display->display_options['fields']['field_nra_surname']['field'] = 'field_nra_surname';
  $handler->display->display_options['fields']['field_nra_surname']['label'] = '';
  $handler->display->display_options['fields']['field_nra_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_surname']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['field_nra_profile_suffix']['id'] = 'field_nra_profile_suffix';
  $handler->display->display_options['fields']['field_nra_profile_suffix']['table'] = 'field_data_field_nra_profile_suffix';
  $handler->display->display_options['fields']['field_nra_profile_suffix']['field'] = 'field_nra_profile_suffix';
  $handler->display->display_options['fields']['field_nra_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_nra_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_profile_suffix']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Position */
  $handler->display->display_options['fields']['field_nra_staff_position']['id'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['table'] = 'field_data_field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['field'] = 'field_nra_staff_position';
  $handler->display->display_options['fields']['field_nra_staff_position']['label'] = '';
  $handler->display->display_options['fields']['field_nra_staff_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_staff_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_staff_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_staff_position']['delta_offset'] = '0';
  /* Field: Content: NRA Department */
  $handler->display->display_options['fields']['field_nra_department']['id'] = 'field_nra_department';
  $handler->display->display_options['fields']['field_nra_department']['table'] = 'field_data_field_nra_department';
  $handler->display->display_options['fields']['field_nra_department']['field'] = 'field_nra_department';
  $handler->display->display_options['fields']['field_nra_department']['label'] = '';
  $handler->display->display_options['fields']['field_nra_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nra_department']['delta_offset'] = '0';
  /* Field: Content: NRA Address */
  $handler->display->display_options['fields']['field_nra_address']['id'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['table'] = 'field_data_field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['field'] = 'field_nra_address';
  $handler->display->display_options['fields']['field_nra_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nra_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_nra_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: NRA Email Address */
  $handler->display->display_options['fields']['field_nra_email_address']['id'] = 'field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['table'] = 'field_data_field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['field'] = 'field_nra_email_address';
  $handler->display->display_options['fields']['field_nra_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_nra_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['id'] = 'field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['table'] = 'field_data_field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['field'] = 'field_nra_staff_phone_number';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nra_staff_phone_number']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
	<div class="col-xs-6 col-md-6">
		<div class="thumbnail">
		  <p>[field_nra_profile_photo]</p>
		  <div class="caption">
			<h3>[field_nra_profile_prefix] [field_nra_first_name] [field_nra_middle_name] [field_nra_surname] [field_nra_profile_suffix]</h3>
			<p>[field_nra_staff_position]</p>
			
		  </div>
		</div>
	</div>
	<div class="col-xs-12 col-sm-6 col-md-6">
<h3>Contact Information</h3>		
       <address>  
[field_nra_address]
		</address>
               <p>[field_nra_department] department</p>
               <p><span class="glyphicon glyphicon-earphone"></span> [field_nra_staff_phone_number]</p>
		<p><span class="glyphicon glyphicon-envelope"> [field_nra_email_address]</span></p>
	</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'nra_people_profiles' => 'nra_people_profiles',
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
    'nra_people_profiles' => 'nra_people_profiles',
  );
  $export['nra_people_profile'] = $view;

  return $export;
}
