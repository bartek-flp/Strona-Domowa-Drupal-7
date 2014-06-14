<?php
/**
 * @file
 * galeria_zdjec_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function galeria_zdjec_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'galerie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galerie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Galerie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortuj po';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Rosnąco';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Opis';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementów na stronę';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Wszystko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Przesunięcie';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pierwsza';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ poprzednia';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'następna ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ostatnia »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Powiązanie: Zawartość: Do jakiej galerii (field_do_jakiej_galerii) - reverse */
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['id'] = 'reverse_field_do_jakiej_galerii_node';
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['field'] = 'reverse_field_do_jakiej_galerii_node';
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['required'] = TRUE;
  /* Pole: Zawartość: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Zawartość: Zdjęcia */
  $handler->display->display_options['fields']['field_zdj_cia']['id'] = 'field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['table'] = 'field_data_field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['field'] = 'field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['relationship'] = 'reverse_field_do_jakiej_galerii_node';
  $handler->display->display_options['fields']['field_zdj_cia']['label'] = '';
  $handler->display->display_options['fields']['field_zdj_cia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zdj_cia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zdj_cia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_zdj_cia']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_zdj_cia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_zdj_cia']['delta_offset'] = '0';
  /* Pole: Zawartość: Ścieżka */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Pole: Globalne: Własny tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[field_zdj_cia]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kryterium sortowania: Zawartość: Data publikacji */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kryterium filtrowania: Zawartość: Opublikowane */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'galerie';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Galerie';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['galerie'] = array(
    t('Master'),
    t('Galerie'),
    t('więcej'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sortuj po'),
    t('Rosnąco'),
    t('Opis'),
    t('Elementów na stronę'),
    t('- Wszystko -'),
    t('Przesunięcie'),
    t('« pierwsza'),
    t('‹ poprzednia'),
    t('następna ›'),
    t('ostatnia »'),
    t('field_do_jakiej_galerii'),
    t('<a href="[path]">[field_zdj_cia]</a>'),
    t('Page'),
  );
  $export['galerie'] = $view;

  $view = new view();
  $view->name = 'zdjecia_w_galeriach';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Zdjecia w galeriach';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zdjecia w galeriach';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortuj po';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Rosnąco';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Opis';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Powiązanie: Zawartość: Do jakiej galerii (field_do_jakiej_galerii) - reverse */
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['id'] = 'reverse_field_do_jakiej_galerii_node';
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_do_jakiej_galerii_node']['field'] = 'reverse_field_do_jakiej_galerii_node';
  /* Pole: Zawartość: Zdjęcia */
  $handler->display->display_options['fields']['field_zdj_cia']['id'] = 'field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['table'] = 'field_data_field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['field'] = 'field_zdj_cia';
  $handler->display->display_options['fields']['field_zdj_cia']['relationship'] = 'reverse_field_do_jakiej_galerii_node';
  $handler->display->display_options['fields']['field_zdj_cia']['label'] = '';
  $handler->display->display_options['fields']['field_zdj_cia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zdj_cia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_zdj_cia']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_zdj_cia']['settings'] = array(
    'colorbox_node_style' => 'zdjecia_w_galeriach',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'alt',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_zdj_cia']['delta_offset'] = '0';
  /* Kryterium sortowania: Zawartość: Data publikacji */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtr kontekstowy: Zawartość: ID węzła */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Kryterium filtrowania: Zawartość: Opublikowane */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['zdjecia_w_galeriach'] = array(
    t('Master'),
    t('Zdjecia w galeriach'),
    t('więcej'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sortuj po'),
    t('Rosnąco'),
    t('Opis'),
    t('field_do_jakiej_galerii'),
    t('Wszystko'),
    t('Block'),
  );
  $export['zdjecia_w_galeriach'] = $view;

  return $export;
}
