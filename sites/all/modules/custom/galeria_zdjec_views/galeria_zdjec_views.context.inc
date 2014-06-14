<?php
/**
 * @file
 * galeria_zdjec_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function galeria_zdjec_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blok_zdjecia_galerii';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'galeria' => 'galeria',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-zdjecia_w_galeriach-block' => array(
          'module' => 'views',
          'delta' => 'zdjecia_w_galeriach-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['blok_zdjecia_galerii'] = $context;

  return $export;
}
