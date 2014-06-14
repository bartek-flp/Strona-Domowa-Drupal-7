<?php
/**
 * @file
 * application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function application_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artykuł'),
      'base' => 'node_content',
      'description' => t('Użyj <em>artykułów</em> dla dynamicznych treści, takich jak newsy, przegląd prasy lub wpisy na blogu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Prosta strona'),
      'base' => 'node_content',
      'description' => t('Użyj <em>prostych stron</em> dla Twoich statycznych treści, takich jak strona \'O nas\'.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
