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
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'collapse_text_filter' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(
          'form' => 1,
          'default_title' => 'Show more or less',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'pathologic' => array(
        'weight' => '-40',
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
