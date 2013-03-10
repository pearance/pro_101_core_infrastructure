<?php
/**
 * @file
 * pro_101_core_infrastructure.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function pro_101_core_infrastructure_ccl_features_preset() {
  return array(
    'Manage Display' => array(
      'type' => 'node',
      'title' => 'Manage Display',
      'link' => 'admin/structure/types/manage/webform/display',
      'options' => 'a:6:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:2:"ct";s:9:"node_type";s:7:"webform";s:7:"node_id";s:0:"";}',
    ),
  );
}

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
 * Implements hook_views_api().
 */
function pro_101_core_infrastructure_views_api() {
  return array("version" => "3.0");
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
