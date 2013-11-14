<?php
/**
 * @file
 * homepage_menu_block.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function homepage_menu_block_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-homepage-menu.
  $menus['menu-homepage-menu'] = array(
    'menu_name' => 'menu-homepage-menu',
    'title' => 'Homepage menu',
    'description' => 'the homepage menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage menu');
  t('the homepage menu');


  return $menus;
}
