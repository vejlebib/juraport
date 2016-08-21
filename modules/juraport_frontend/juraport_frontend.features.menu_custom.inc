<?php
/**
 * @file
 * juraport_frontend.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function juraport_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'A menu for the footer of the Juraport site.',
  );
  // Exported menu: menu-top-bar-menu.
  $menus['menu-top-bar-menu'] = array(
    'menu_name' => 'menu-top-bar-menu',
    'title' => 'Top bar menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for the footer of the Juraport site.');
  t('Footer menu');
  t('Top bar menu');


  return $menus;
}
