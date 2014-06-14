<?php
/**
 * @file
 * galeria_zdjec_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function galeria_zdjec_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menu główne',
    'description' => '<em>Główne</em> menu wykorzystywane jest na wielu witrynach do pokazywania najważniejszych sekcji serwisu, często w górnej części witryny.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<em>Główne</em> menu wykorzystywane jest na wielu witrynach do pokazywania najważniejszych sekcji serwisu, często w górnej części witryny.');
  t('Menu główne');


  return $menus;
}
