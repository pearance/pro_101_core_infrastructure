<?php
/**
 * @file
 * pro_101_core_infrastructure.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pro_101_core_infrastructure_filter_default_formats() {
  $formats = array();

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => '0',
    'status' => '1',
    'weight' => '11',
    'filters' => array(
      'php_code' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-39',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}
