<?php
/**
 * @file
 * pro_101_core_infrastructure.config_perms.inc
 */

/**
 * Implements hook_config_perms().
 */
function pro_101_core_infrastructure_config_perms() {
  $export = array();

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_content_node_settings';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer content node settings';
  $config_perms->path = array(
    0 => 'admin/content/node-settings',
  );
  $export['administer_content_node_settings'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_date_time';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer date-time';
  $config_perms->path = array(
    0 => 'admin/config/regional/date-time',
    1 => 'admin/config/regional/date-time/*',
  );
  $export['administer_date_time'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_insight';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer Insight';
  $config_perms->path = array(
    0 => 'admin/config/services/insight',
  );
  $export['administer_insight'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_information';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer site information';
  $config_perms->path = array(
    0 => 'admin/config/system/site-information',
  );
  $export['administer_site_information'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_site_maintenance';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer site maintenance';
  $config_perms->path = array(
    0 => 'admin/config/development/maintenance',
  );
  $export['administer_site_maintenance'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'administer_user_profile_fields';
  $config_perms->status = TRUE;
  $config_perms->name = 'Administer user profile fields';
  $config_perms->path = array(
    0 => 'admin/user/profile',
  );
  $export['administer_user_profile_fields'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_admin_index';
  $config_perms->status = TRUE;
  $config_perms->name = 'Display admin index';
  $config_perms->path = array(
    0 => 'admin/index',
  );
  $export['display_admin_index'] = $config_perms;

  $config_perms = new stdClass();
  $config_perms->disabled = FALSE; /* Edit this to true to make a default config_perms disabled initially */
  $config_perms->api_version = 1;
  $config_perms->machine_name = 'display_site_configuration_menu';
  $config_perms->status = TRUE;
  $config_perms->name = 'Display site configuration menu';
  $config_perms->path = array(
    0 => 'admin/config',
  );
  $export['display_site_configuration_menu'] = $config_perms;

  return $export;
}
