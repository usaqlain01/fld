<?php
/**
 * @file
 * fieldmuseum.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fieldmuseum_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu');


  return $menus;
}
