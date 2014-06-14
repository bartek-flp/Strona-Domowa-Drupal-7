<?php
/**
 * @file
 * panel_zarzadzania_wpisami.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panel_zarzadzania_wpisami_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_article';
  $strongarm->value = 1;
  $export['publishcontent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_page';
  $strongarm->value = 1;
  $export['publishcontent_page'] = $strongarm;

  return $export;
}
