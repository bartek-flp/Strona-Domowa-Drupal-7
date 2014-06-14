<?php
/**
 * @file
 * layout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function layout_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archiwum_wpisow';
  $view->description = 'Display a list of months that link to content for that month.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Archiwum wpisow';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archiwum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortuj po';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Rosnąco';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Opis';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementów na stronę';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Wszystko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Przesunięcie';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« pierwsza';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ poprzednia';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'następna ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ostatnia »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Kryterium sortowania: Zawartość: Data publikacji */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtr kontekstowy: Zawartość: Rok i miesiąc utworzenia */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '30';
  $handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
  /* Kryterium filtrowania: Zawartość: Opublikowane */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Kryterium filtrowania: Zawartość: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'archiwum';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtr kontekstowy: Zawartość: Rok i miesiąc utworzenia */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'Wszystko';
  $handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '30';
  $handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
  $translatables['archiwum_wpisow'] = array(
    t('Master'),
    t('Archiwum'),
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
    t('Wszystko'),
    t('%1'),
    t('Page'),
    t('Block'),
  );
  $export['archiwum_wpisow'] = $view;

  $view = new view();
  $view->name = 'kategorie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Kategorie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kategorie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'więcej';
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'nid' => 'nid',
  );
  /* Powiązanie: Termin taksonomii: Zawartość z terminem */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Pole: Termin taksonomii: Nazwa */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Pole: COUNT(Zawartość: ID węzła) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Kategorie';
  $translatables['kategorie'] = array(
    t('Master'),
    t('Kategorie'),
    t('więcej'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sortuj po'),
    t('Rosnąco'),
    t('Opis'),
    t('węzeł'),
    t('Block'),
  );
  $export['kategorie'] = $view;

  return $export;
}
