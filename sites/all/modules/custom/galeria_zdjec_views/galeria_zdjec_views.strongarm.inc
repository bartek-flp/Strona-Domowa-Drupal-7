<?php
/**
 * @file
 * galeria_zdjec_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function galeria_zdjec_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_galeria';
  $strongarm->value = 0;
  $export['comment_anonymous_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_zdj_cia_do_galerii';
  $strongarm->value = 0;
  $export['comment_anonymous_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_galeria';
  $strongarm->value = 1;
  $export['comment_default_mode_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_zdj_cia_do_galerii';
  $strongarm->value = 1;
  $export['comment_default_mode_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_galeria';
  $strongarm->value = '50';
  $export['comment_default_per_page_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_zdj_cia_do_galerii';
  $strongarm->value = '50';
  $export['comment_default_per_page_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_galeria';
  $strongarm->value = 1;
  $export['comment_form_location_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_zdj_cia_do_galerii';
  $strongarm->value = 1;
  $export['comment_form_location_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_galeria';
  $strongarm->value = '0';
  $export['comment_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_galeria';
  $strongarm->value = '1';
  $export['comment_preview_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_zdj_cia_do_galerii';
  $strongarm->value = '1';
  $export['comment_preview_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_galeria';
  $strongarm->value = 1;
  $export['comment_subject_field_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_zdj_cia_do_galerii';
  $strongarm->value = 1;
  $export['comment_subject_field_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_zdj_cia_do_galerii';
  $strongarm->value = '0';
  $export['comment_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__zdj_cia_do_galerii';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_galeria';
  $strongarm->value = '0';
  $export['language_content_type_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_zdj_cia_do_galerii';
  $strongarm->value = '0';
  $export['language_content_type_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_galeria';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_zdj_cia_do_galerii';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_galeria';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_zdj_cia_do_galerii';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_galeria';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_zdj_cia_do_galerii';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_galeria';
  $strongarm->value = '1';
  $export['node_preview_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_zdj_cia_do_galerii';
  $strongarm->value = '1';
  $export['node_preview_zdj_cia_do_galerii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_galeria';
  $strongarm->value = 0;
  $export['node_submitted_galeria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_zdj_cia_do_galerii';
  $strongarm->value = 0;
  $export['node_submitted_zdj_cia_do_galerii'] = $strongarm;

  return $export;
}
