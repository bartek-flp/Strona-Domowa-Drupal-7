<?php
/**
 * @file
 * layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloki_blogowe';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kategorie-block' => array(
          'module' => 'views',
          'delta' => 'kategorie-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-archiwum_wpisow-block' => array(
          'module' => 'views',
          'delta' => 'archiwum_wpisow-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['bloki_blogowe'] = $context;

  return $export;
}
