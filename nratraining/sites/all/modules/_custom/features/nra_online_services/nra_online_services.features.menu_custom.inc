<?php
/**
 * @file
 * nra_online_services.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nra_online_services_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-online-services.
  $menus['menu-online-services'] = array(
    'menu_name' => 'menu-online-services',
    'title' => 'Online Services',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Online Services');


  return $menus;
}
