<?php
/**
 * @file
 * roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer boxes'.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer delta blocks'.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: 'administer entity_boxes'.
  $permissions['administer entity_boxes'] = array(
    'name' => 'administer entity_boxes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'administer entity_boxes types'.
  $permissions['administer entity_boxes types'] = array(
    'name' => 'administer entity_boxes types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create about_nra content'.
  $permissions['create about_nra content'] = array(
    'name' => 'create about_nra content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create businesses_and_organizations content'.
  $permissions['create businesses_and_organizations content'] = array(
    'name' => 'create businesses_and_organizations content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create import_and_export content'.
  $permissions['create import_and_export content'] = array(
    'name' => 'create import_and_export content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create individuals_and_partnerships content'.
  $permissions['create individuals_and_partnerships content'] = array(
    'name' => 'create individuals_and_partnerships content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_contact_directory content'.
  $permissions['create nra_contact_directory content'] = array(
    'name' => 'create nra_contact_directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_documents content'.
  $permissions['create nra_documents content'] = array(
    'name' => 'create nra_documents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_event content'.
  $permissions['create nra_event content'] = array(
    'name' => 'create nra_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_jobs content'.
  $permissions['create nra_jobs content'] = array(
    'name' => 'create nra_jobs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_media_gallery content'.
  $permissions['create nra_media_gallery content'] = array(
    'name' => 'create nra_media_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_news content'.
  $permissions['create nra_news content'] = array(
    'name' => 'create nra_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_online_services content'.
  $permissions['create nra_online_services content'] = array(
    'name' => 'create nra_online_services content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_people_profiles content'.
  $permissions['create nra_people_profiles content'] = array(
    'name' => 'create nra_people_profiles content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nra_tenders content'.
  $permissions['create nra_tenders content'] = array(
    'name' => 'create nra_tenders content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any about_nra content'.
  $permissions['delete any about_nra content'] = array(
    'name' => 'delete any about_nra content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any businesses_and_organizations content'.
  $permissions['delete any businesses_and_organizations content'] = array(
    'name' => 'delete any businesses_and_organizations content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any import_and_export content'.
  $permissions['delete any import_and_export content'] = array(
    'name' => 'delete any import_and_export content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any individuals_and_partnerships content'.
  $permissions['delete any individuals_and_partnerships content'] = array(
    'name' => 'delete any individuals_and_partnerships content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_contact_directory content'.
  $permissions['delete any nra_contact_directory content'] = array(
    'name' => 'delete any nra_contact_directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_documents content'.
  $permissions['delete any nra_documents content'] = array(
    'name' => 'delete any nra_documents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_event content'.
  $permissions['delete any nra_event content'] = array(
    'name' => 'delete any nra_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_jobs content'.
  $permissions['delete any nra_jobs content'] = array(
    'name' => 'delete any nra_jobs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_media_gallery content'.
  $permissions['delete any nra_media_gallery content'] = array(
    'name' => 'delete any nra_media_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_news content'.
  $permissions['delete any nra_news content'] = array(
    'name' => 'delete any nra_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_online_services content'.
  $permissions['delete any nra_online_services content'] = array(
    'name' => 'delete any nra_online_services content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_people_profiles content'.
  $permissions['delete any nra_people_profiles content'] = array(
    'name' => 'delete any nra_people_profiles content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nra_tenders content'.
  $permissions['delete any nra_tenders content'] = array(
    'name' => 'delete any nra_tenders content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own about_nra content'.
  $permissions['delete own about_nra content'] = array(
    'name' => 'delete own about_nra content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own businesses_and_organizations content'.
  $permissions['delete own businesses_and_organizations content'] = array(
    'name' => 'delete own businesses_and_organizations content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own import_and_export content'.
  $permissions['delete own import_and_export content'] = array(
    'name' => 'delete own import_and_export content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own individuals_and_partnerships content'.
  $permissions['delete own individuals_and_partnerships content'] = array(
    'name' => 'delete own individuals_and_partnerships content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_contact_directory content'.
  $permissions['delete own nra_contact_directory content'] = array(
    'name' => 'delete own nra_contact_directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_documents content'.
  $permissions['delete own nra_documents content'] = array(
    'name' => 'delete own nra_documents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_event content'.
  $permissions['delete own nra_event content'] = array(
    'name' => 'delete own nra_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_jobs content'.
  $permissions['delete own nra_jobs content'] = array(
    'name' => 'delete own nra_jobs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_media_gallery content'.
  $permissions['delete own nra_media_gallery content'] = array(
    'name' => 'delete own nra_media_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_news content'.
  $permissions['delete own nra_news content'] = array(
    'name' => 'delete own nra_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_online_services content'.
  $permissions['delete own nra_online_services content'] = array(
    'name' => 'delete own nra_online_services content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_people_profiles content'.
  $permissions['delete own nra_people_profiles content'] = array(
    'name' => 'delete own nra_people_profiles content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nra_tenders content'.
  $permissions['delete own nra_tenders content'] = array(
    'name' => 'delete own nra_tenders content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nra_audience'.
  $permissions['delete terms in nra_audience'] = array(
    'name' => 'delete terms in nra_audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nra_content_tags'.
  $permissions['delete terms in nra_content_tags'] = array(
    'name' => 'delete terms in nra_content_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nra_departments'.
  $permissions['delete terms in nra_departments'] = array(
    'name' => 'delete terms in nra_departments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nra_staff_positions'.
  $permissions['delete terms in nra_staff_positions'] = array(
    'name' => 'delete terms in nra_staff_positions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any about_nra content'.
  $permissions['edit any about_nra content'] = array(
    'name' => 'edit any about_nra content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any businesses_and_organizations content'.
  $permissions['edit any businesses_and_organizations content'] = array(
    'name' => 'edit any businesses_and_organizations content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any import_and_export content'.
  $permissions['edit any import_and_export content'] = array(
    'name' => 'edit any import_and_export content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any individuals_and_partnerships content'.
  $permissions['edit any individuals_and_partnerships content'] = array(
    'name' => 'edit any individuals_and_partnerships content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_contact_directory content'.
  $permissions['edit any nra_contact_directory content'] = array(
    'name' => 'edit any nra_contact_directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_documents content'.
  $permissions['edit any nra_documents content'] = array(
    'name' => 'edit any nra_documents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_event content'.
  $permissions['edit any nra_event content'] = array(
    'name' => 'edit any nra_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_jobs content'.
  $permissions['edit any nra_jobs content'] = array(
    'name' => 'edit any nra_jobs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_media_gallery content'.
  $permissions['edit any nra_media_gallery content'] = array(
    'name' => 'edit any nra_media_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_news content'.
  $permissions['edit any nra_news content'] = array(
    'name' => 'edit any nra_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_online_services content'.
  $permissions['edit any nra_online_services content'] = array(
    'name' => 'edit any nra_online_services content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_people_profiles content'.
  $permissions['edit any nra_people_profiles content'] = array(
    'name' => 'edit any nra_people_profiles content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nra_tenders content'.
  $permissions['edit any nra_tenders content'] = array(
    'name' => 'edit any nra_tenders content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit boxes'.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'edit own about_nra content'.
  $permissions['edit own about_nra content'] = array(
    'name' => 'edit own about_nra content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own businesses_and_organizations content'.
  $permissions['edit own businesses_and_organizations content'] = array(
    'name' => 'edit own businesses_and_organizations content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own import_and_export content'.
  $permissions['edit own import_and_export content'] = array(
    'name' => 'edit own import_and_export content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own individuals_and_partnerships content'.
  $permissions['edit own individuals_and_partnerships content'] = array(
    'name' => 'edit own individuals_and_partnerships content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_contact_directory content'.
  $permissions['edit own nra_contact_directory content'] = array(
    'name' => 'edit own nra_contact_directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_documents content'.
  $permissions['edit own nra_documents content'] = array(
    'name' => 'edit own nra_documents content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_event content'.
  $permissions['edit own nra_event content'] = array(
    'name' => 'edit own nra_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_jobs content'.
  $permissions['edit own nra_jobs content'] = array(
    'name' => 'edit own nra_jobs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_media_gallery content'.
  $permissions['edit own nra_media_gallery content'] = array(
    'name' => 'edit own nra_media_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_news content'.
  $permissions['edit own nra_news content'] = array(
    'name' => 'edit own nra_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_online_services content'.
  $permissions['edit own nra_online_services content'] = array(
    'name' => 'edit own nra_online_services content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_people_profiles content'.
  $permissions['edit own nra_people_profiles content'] = array(
    'name' => 'edit own nra_people_profiles content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nra_tenders content'.
  $permissions['edit own nra_tenders content'] = array(
    'name' => 'edit own nra_tenders content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in nra_audience'.
  $permissions['edit terms in nra_audience'] = array(
    'name' => 'edit terms in nra_audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nra_content_tags'.
  $permissions['edit terms in nra_content_tags'] = array(
    'name' => 'edit terms in nra_content_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nra_departments'.
  $permissions['edit terms in nra_departments'] = array(
    'name' => 'edit terms in nra_departments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nra_staff_positions'.
  $permissions['edit terms in nra_staff_positions'] = array(
    'name' => 'edit terms in nra_staff_positions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'features',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use entity autocomplete'.
  $permissions['use entity autocomplete'] = array(
    'name' => 'use entity autocomplete',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'entity_autocomplete',
  );

  // Exported permission: 'use workbench_media add form'.
  $permissions['use workbench_media add form'] = array(
    'name' => 'use workbench_media add form',
    'roles' => array(),
    'module' => 'workbench_media',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'IT Staff' => 'IT Staff',
      'Provider' => 'Provider',
      'Publisher' => 'Publisher',
      'Reviewer' => 'Reviewer',
      'Staff' => 'Staff',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  return $permissions;
}
