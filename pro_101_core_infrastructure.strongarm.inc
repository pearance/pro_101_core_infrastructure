<?php
/**
 * @file
 * pro_101_core_infrastructure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_core_infrastructure_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'propanel';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boxes_edit_location';
  $strongarm->value = '1';
  $export['boxes_edit_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '300';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 1;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '10800';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '0';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - g:ia';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - g:ia';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y - g:ia';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    '' => array(
      'Select an environment' => 'Select a site mode',
    ),
  );
  $export['locale_custom_strings_en'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rel_build_form_registration';
  $strongarm->value = 0;
  $export['rel_build_form_registration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rel_build_registration_ignore';
  $strongarm->value = 'admin/*';
  $export['rel_build_registration_ignore'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'admin_devel' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'devel' => 1,
    'pro_101_dev_tools' => 1,
    'views_ui' => 1,
  );
  $export['tadaa_development_modules'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_variables';
  $strongarm->value = array(
    'block_cache' => 0,
    'cache' => 0,
    'page_compression' => 0,
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'maintenance_mode' => 1,
    'error_level' => '2',
  );
  $export['tadaa_development_variables'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_environment';
  $strongarm->value = 'development';
  $export['tadaa_environment'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_environments';
  $strongarm->value = array(
    'development' => 'Maintenance (Offline)',
    'production' => 'Live (Online)',
  );
  $export['tadaa_environments'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_modules';
  $strongarm->value = array(
    'admin_devel' => 0,
    'context_ui' => 0,
    'dblog' => 0,
    'field_ui' => 0,
    'devel' => 0,
    'pro_101_dev_tools' => 0,
    'views_ui' => 0,
  );
  $export['tadaa_production_modules'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_variables';
  $strongarm->value = array(
    'block_cache' => 1,
    'cache' => 1,
    'preprocess_js' => 1,
    'page_compression' => 1,
    'preprocess_css' => 1,
    'maintenance_mode' => 0,
    'error_level' => '0',
  );
  $export['tadaa_production_variables'] = $strongarm;

  return $export;
}
