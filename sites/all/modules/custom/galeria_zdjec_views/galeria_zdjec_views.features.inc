<?php
/**
 * @file
 * galeria_zdjec_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function galeria_zdjec_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function galeria_zdjec_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function galeria_zdjec_views_image_default_styles() {
  $styles = array();

  // Exported image style: zdjecia_w_galeriach.
  $styles['zdjecia_w_galeriach'] = array(
    'name' => 'zdjecia_w_galeriach',
    'label' => 'zdjecia w galeriach',
    'effects' => array(
      1 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 215,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function galeria_zdjec_views_node_info() {
  $items = array(
    'galeria' => array(
      'name' => t('Galeria'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'zdj_cia_do_galerii' => array(
      'name' => t('Zdjęcia do galerii'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
