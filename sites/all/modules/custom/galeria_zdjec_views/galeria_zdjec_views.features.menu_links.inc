<?php
/**
 * @file
 * galeria_zdjec_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function galeria_zdjec_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_galerie:galerie
  $menu_links['main-menu_galerie:galerie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'galerie',
    'router_path' => 'galerie',
    'link_title' => 'Galerie',
    'options' => array(
      'identifier' => 'main-menu_galerie:galerie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Galerie');


  return $menu_links;
}
