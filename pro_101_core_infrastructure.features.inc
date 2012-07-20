<?php
/**
 * @file
 * pro_101_core_infrastructure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_core_infrastructure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "config_perms" && $api == "config_perms") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pro_101_core_infrastructure_node_info() {
  $items = array(
    'block' => array(
      'name' => t('Block'),
      'base' => 'node_content',
      'description' => t('Use <em>Block</em> to create block content that appears in sidebars and other regions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
