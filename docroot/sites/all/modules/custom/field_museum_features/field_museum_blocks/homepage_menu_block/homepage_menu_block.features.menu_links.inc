<?php
/**
 * @file
 * homepage_menu_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function homepage_menu_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-homepage-menu:<front>
  $menu_links['menu-homepage-menu:<front>'] = array(
    'menu_name' => 'menu-homepage-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
