<?php
/**
 * @file
 * nra_base_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nra_base_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-audience-menu.
  $menus['menu-audience-menu'] = array(
    'menu_name' => 'menu-audience-menu',
    'title' => 'Services',
    'description' => '',
  );
  // Exported menu: menu-content-management-menu.
  $menus['menu-content-management-menu'] = array(
    'menu_name' => 'menu-content-management-menu',
    'title' => 'Content Management Menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Legal',
    'description' => '',
  );
  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => 'Quick Links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content Management Menu');
  t('Legal');
  t('Main menu');
  t('Quick Links');
  t('Services');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
