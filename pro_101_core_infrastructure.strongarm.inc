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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_admin_theme_batch';
  $strongarm->value = 1;
  $export['admin_theme_admin_theme_batch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_admin_theme_devel';
  $strongarm->value = 1;
  $export['admin_theme_admin_theme_devel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_admin_theme_webform_results';
  $strongarm->value = 1;
  $export['admin_theme_admin_theme_webform_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path';
  $strongarm->value = 'node/*/moderation/*/unpublish
user/*/content_lock';
  $export['admin_theme_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path_disallow';
  $strongarm->value = '';
  $export['admin_theme_path_disallow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_cacheability_option';
  $strongarm->value = '0';
  $export['boost_cacheability_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_cacheability_pages';
  $strongarm->value = '';
  $export['boost_cacheability_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_char';
  $strongarm->value = '_';
  $export['boost_char'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/rss';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/rss+xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_application/xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/html';
  $strongarm->value = ' -->';
  $export['boost_comment_end_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/javascript';
  $strongarm->value = ' */';
  $export['boost_comment_end_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_end_text/xml';
  $strongarm->value = ' -->';
  $export['boost_comment_end_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/rss';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/rss+xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_application/xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/html';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/javascript';
  $strongarm->value = '/* ';
  $export['boost_comment_start_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_comment_start_text/xml';
  $strongarm->value = '<!-- ';
  $export['boost_comment_start_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/javascript';
  $strongarm->value = FALSE;
  $export['boost_enabled_application/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/rss';
  $strongarm->value = 0;
  $export['boost_enabled_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/rss+xml';
  $strongarm->value = 0;
  $export['boost_enabled_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_application/xml';
  $strongarm->value = 0;
  $export['boost_enabled_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/css';
  $strongarm->value = FALSE;
  $export['boost_enabled_text/css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/html';
  $strongarm->value = 1;
  $export['boost_enabled_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/javascript';
  $strongarm->value = 1;
  $export['boost_enabled_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_enabled_text/xml';
  $strongarm->value = 0;
  $export['boost_enabled_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/rss';
  $strongarm->value = 'xml';
  $export['boost_extension_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/rss+xml';
  $strongarm->value = 'xml';
  $export['boost_extension_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_application/xml';
  $strongarm->value = 'xml';
  $export['boost_extension_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/html';
  $strongarm->value = 'html';
  $export['boost_extension_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/javascript';
  $strongarm->value = 'json';
  $export['boost_extension_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_extension_text/xml';
  $strongarm->value = 'xml';
  $export['boost_extension_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/rss';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/rss+xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_application/xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/html';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/javascript';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_gzip_text/xml';
  $strongarm->value = TRUE;
  $export['boost_gzip_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/rss';
  $strongarm->value = '3600';
  $export['boost_lifetime_max_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/rss+xml';
  $strongarm->value = '3600';
  $export['boost_lifetime_max_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_application/xml';
  $strongarm->value = '3600';
  $export['boost_lifetime_max_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/html';
  $strongarm->value = '604800';
  $export['boost_lifetime_max_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/javascript';
  $strongarm->value = '604800';
  $export['boost_lifetime_max_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_max_text/xml';
  $strongarm->value = '3600';
  $export['boost_lifetime_max_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/rss';
  $strongarm->value = '0';
  $export['boost_lifetime_min_application/rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/rss+xml';
  $strongarm->value = '0';
  $export['boost_lifetime_min_application/rss+xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_application/xml';
  $strongarm->value = '0';
  $export['boost_lifetime_min_application/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/html';
  $strongarm->value = '0';
  $export['boost_lifetime_min_text/html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/javascript';
  $strongarm->value = '86400';
  $export['boost_lifetime_min_text/javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_lifetime_min_text/xml';
  $strongarm->value = '0';
  $export['boost_lifetime_min_text/xml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_message_debug';
  $strongarm->value = 0;
  $export['boost_message_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_normal_dir';
  $strongarm->value = 'normal';
  $export['boost_normal_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boost_root_cache_dir';
  $strongarm->value = 'cache';
  $export['boost_root_cache_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 0;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '86400';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 1;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contentanalysis_block';
  $strongarm->value = array(
    0 => 'enable',
  );
  $export['contentanalysis_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contentanalysis_type_block_enable';
  $strongarm->value = 0;
  $export['contentanalysis_type_block_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '86400';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403';
  $strongarm->value = '<?php global $user; ?>
<?php if ($user->uid): ?>  
  <p>Sorry <?php print $user->name; ?>, you don\'t have permission to view the page you\'ve just tried to access.</p>
  <p>If you feel that you have received this message in error, please 
    <a href="contact">contact us</a> with specific details so that we may review your access to this web site.</p>
  <p>Thanks</p>
<?php else: ?>
  <p>This page may be available to clients and registered users only. Please select from one of the other options available to you below.</p>
  <ul>
    <li><a href="/user/login?<?php print drupal_get_destination(); ?>">Login</a> to view this page</li>
    <li>Use the <a href="search">search</a> facility</li>
    <li>Go to the <a href="/">home page</a></li>
    <li>Go to the <a href="sitemap">site map</a></li>
  </ul>
<?php //print drupal_get_form(\'user_login\'); ?>
<?php endif; ?>';
  $export['customerror_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_php';
  $strongarm->value = 1;
  $export['customerror_403_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_theme';
  $strongarm->value = 'prostarter';
  $export['customerror_403_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_title';
  $strongarm->value = 'Access Denied';
  $export['customerror_403_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404';
  $strongarm->value = '<p>Sorry, no content was found at the requested path - it\'s possible that you\'ve requested this page in error.</p>

<p>Use the search form below, or go to the <a href="/">home page.</a></p>

<?php
// check that the search module exists and the user has permission to hit the form
if (module_exists(\'search\') && user_access(\'search content\')) {
  // cool! - customerror doesn\'t trash the page request and the full path is available
  $path = $_REQUEST[\'destination\'];
  // bin anything that\'s not alphanumeric and replace with spaces
  $keys = strtolower(preg_replace(\'/[^a-zA-Z0-9-]+/\', \' \', $path));

  // retrieve the search form using the data we\'ve pull from the request
  // note that we can override the label for the search terms field here too
  print drupal_get_form(\'search_form\', NULL, $keys, \'node\', \'Search terms\');
}
?>';
  $export['customerror_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_php';
  $strongarm->value = 1;
  $export['customerror_404_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_theme';
  $strongarm->value = 'prostarter';
  $export['customerror_404_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_title';
  $strongarm->value = 'Page not Found';
  $export['customerror_404_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_redirect';
  $strongarm->value = '';
  $export['customerror_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - g:ia';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - g:ia';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y - g:ia';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '3';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_debug_visible_div';
  $strongarm->value = 0;
  $export['disable_messages_debug_visible_div'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable';
  $strongarm->value = 1;
  $export['disable_messages_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable_debug';
  $strongarm->value = 0;
  $export['disable_messages_enable_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_exclude_users';
  $strongarm->value = '';
  $export['disable_messages_exclude_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_filter_by_page';
  $strongarm->value = '0';
  $export['disable_messages_filter_by_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_case';
  $strongarm->value = 1;
  $export['disable_messages_ignore_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_patterns';
  $strongarm->value = 'Testimonial .*? has been created.';
  $export['disable_messages_ignore_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_regex';
  $strongarm->value = array(
    0 => '/^Testimonial .*? has been created.$/i',
  );
  $export['disable_messages_ignore_regex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_page_filter_paths';
  $strongarm->value = '';
  $export['disable_messages_page_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'distributed_blocks_expose';
  $strongarm->value = 1;
  $export['distributed_blocks_expose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'distributed_blocks_exposed_blocks';
  $strongarm->value = array(
    'masquerade|masquerade|Masquerade' => 0,
    'webform|client-block-1|Webform: Contact' => 0,
    'boost|status|Boost: Pages cache status' => 0,
    'contactinfo|hcard|Contact information' => 0,
    'context_ui|editor|Context editor' => 0,
    'context_ui|devel|Context inspector' => 0,
    'delta_blocks|logo|Logo' => 0,
    'delta_blocks|site-name|Site name' => 0,
    'delta_blocks|site-slogan|Site slogan' => 0,
    'delta_blocks|branding|Branding' => 0,
    'delta_blocks|page-title|Page title' => 0,
    'delta_blocks|breadcrumb|Breadcrumb' => 0,
    'delta_blocks|tabs|Tabs' => 0,
    'delta_blocks|messages|Messages' => 0,
    'delta_blocks|action-links|Action links' => 0,
    'delta_blocks|feed-icons|Feed icons' => 0,
    'diff|inline|Inline diff' => 0,
    'facebook_comments|facebook-comments|Facebook comments' => 0,
    'faq|faq_categories|FAQ Categories' => 0,
    'google_analytics_reports|path_mini|Google Analytics page traffic' => 0,
    'google_analytics_reports|dashboard|Google Analytics site visits' => 0,
    'jasm|service_list|JASM Service List' => 0,
    'jasm|fb_like_box|JASM Facebook Like Box' => 0,
    'jasm|twitter_profile_widget|JASM Twitter Profile widget' => 0,
    'jasm|twitter_faves_widget|JASM Twitter Faves widget' => 0,
    'jasm|twitter_search_widget|JASM Twitter Search widget' => 0,
    'jasm|twitter_follow_button|JASM Twitter Follow Button' => 0,
    'jasm|4sq_pw_venue|JASM Foursquare venue widget (from placewidget.com)' => 0,
    'jasm|feedburner_mail_subscribe|JASM Feedburner Email Subscriptions' => 0,
    'jasm|feedburner_mail_subscribe_link|JASM Feedburner Email Subscribe Link' => 0,
    'lexicon|lexicon_random_term|Lexicon random term block' => 0,
    'menu|menu-auxiliary|Auxiliary' => 0,
    'menu|devel|Development' => 0,
    'node|syndicate|Syndicate' => 0,
    'node|recent|Recent content' => 0,
    'nodeblock|6|Social Welcome (nodeblock)' => 0,
    'nodeblock|7|RSS Count (nodeblock)' => 0,
    'nodeblock|21|Site Disclaimer (nodeblock)' => 0,
    'nodeblock|22|Prominent Contact Info (nodeblock)' => 0,
    'sharethis|sharethis_block|ShareThis' => 0,
    'shortcut|shortcuts|Shortcuts' => 0,
    'system|main|Main page content' => 0,
    'system|powered-by|Powered by Drupal' => 0,
    'system|help|System help' => 0,
    'system|navigation|Navigation' => 0,
    'system|management|Management' => 0,
    'system|user-menu|User menu' => 0,
    'system|main-menu|Main menu' => 0,
    'user|login|User login' => 0,
    'user|new|Who\'s new' => 0,
    'user|online|Who\'s online' => 0,
    'workbench|block|Workbench information' => 0,
    'views|faq-faq_recent|Recent FAQs' => 0,
    'views|faq-faq_random|Random FAQs' => 0,
    'views|Professionals-pro_team_block|View: Professionals: Pro Team' => 0,
    'views|blog-related_content_block|View: Blog: Related Content Block' => 0,
    'views|showcase-generic|Showcase (Generic)' => 0,
    'views|showcase-thumbnail|Showcase (Thumbnail)' => 0,
    'views|specialties-block|View: Specialties' => 0,
    'views|testimonals-block|Testimonials' => 0,
    'views|workbench_edited-block_1|View: workbench_edited' => 0,
    'views|workbench_current_user-block_1|View: workbench_current_user' => 0,
    'views|6a599607ca67a5ace7ef0de5f78c06ed|View: Professionals: About Author' => 0,
    'views|9cf22433e0efbd8b206c8e4c2edb177c|View: workbench_recent_content' => 0,
    'devel|execute_php|Execute PHP' => 0,
    'devel|switch_user|Switch user' => 0,
  );
  $export['distributed_blocks_exposed_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'distributed_blocks_master_url';
  $strongarm->value = '';
  $export['distributed_blocks_master_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'distributed_blocks_update_freq';
  $strongarm->value = '1';
  $export['distributed_blocks_update_freq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_block';
  $strongarm->value = 1;
  $export['enable_revisions_page_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__block';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_block';
  $strongarm->value = 0;
  $export['flippy_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_firstlast_block';
  $strongarm->value = 0;
  $export['flippy_firstlast_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_first_label_block';
  $strongarm->value = 'First';
  $export['flippy_first_label_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_head_block';
  $strongarm->value = 0;
  $export['flippy_head_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_label_type_block';
  $strongarm->value = '0';
  $export['flippy_label_type_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_last_label_block';
  $strongarm->value = 'Last';
  $export['flippy_last_label_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_next_label_block';
  $strongarm->value = 'Next';
  $export['flippy_next_label_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_prev_label_block';
  $strongarm->value = 'Previous';
  $export['flippy_prev_label_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_mapheight';
  $strongarm->value = 300;
  $export['locationmap_block_mapheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locationmap_block_mapwidth';
  $strongarm->value = 700;
  $export['locationmap_block_mapwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_block';
  $strongarm->value = '';
  $export['maxlength_js_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_block';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_main_links_source';
  $strongarm->value = 'main-menu';
  $export['menu_main_links_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_block';
  $strongarm->value = array();
  $export['menu_options_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_block';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_secondary_links_source';
  $strongarm->value = '';
  $export['menu_secondary_links_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_cron_duration';
  $strongarm->value = '1440';
  $export['nagios_cron_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_enable_nagios';
  $strongarm->value = 1;
  $export['nagios_enable_nagios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_enable_status_page';
  $strongarm->value = 1;
  $export['nagios_enable_status_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_cron';
  $strongarm->value = 1;
  $export['nagios_func_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_modules';
  $strongarm->value = 1;
  $export['nagios_func_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_nodes';
  $strongarm->value = 1;
  $export['nagios_func_nodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_requirements';
  $strongarm->value = 1;
  $export['nagios_func_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_session_anon';
  $strongarm->value = 1;
  $export['nagios_func_session_anon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_session_auth';
  $strongarm->value = 1;
  $export['nagios_func_session_auth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_themes';
  $strongarm->value = 1;
  $export['nagios_func_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_func_users';
  $strongarm->value = 1;
  $export['nagios_func_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_min_report_severity';
  $strongarm->value = '1';
  $export['nagios_min_report_severity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_page_callback';
  $strongarm->value = 'nagios_status_page';
  $export['nagios_page_callback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_page_path';
  $strongarm->value = 'nagios';
  $export['nagios_page_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_show_outdated_names';
  $strongarm->value = 1;
  $export['nagios_show_outdated_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_status_critical_value';
  $strongarm->value = '2';
  $export['nagios_status_critical_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_status_ok_value';
  $strongarm->value = '0';
  $export['nagios_status_ok_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_status_unknown_value';
  $strongarm->value = '3';
  $export['nagios_status_unknown_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_status_warning_value';
  $strongarm->value = '1';
  $export['nagios_status_warning_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nagios_ua';
  $strongarm->value = '';
  $export['nagios_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block';
  $strongarm->value = '1';
  $export['nodeblock_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_comment_link_block';
  $strongarm->value = '0';
  $export['nodeblock_comment_link_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_node_link_block';
  $strongarm->value = '0';
  $export['nodeblock_node_link_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_view_mode_block';
  $strongarm->value = 'node_block_default';
  $export['nodeblock_view_mode_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_block_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'actions' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_create_info' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Create Info',
      'hidden' => 0,
    ),
    'additional_settings' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_block_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_block';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_block';
  $strongarm->value = '0';
  $export['node_preview_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_block';
  $strongarm->value = 0;
  $export['node_submitted_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlay_paths_example_paths';
  $strongarm->value = array(
    'xuser/register' => TRUE,
    'xuser/register/*' => TRUE,
    'xuser/register/step/2' => FALSE,
    'node/*/moderation/*/unpublish' => TRUE,
    'user/*/content_lock' => TRUE,
  );
  $export['overlay_paths_example_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '86400';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_block_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_block_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_block';
  $strongarm->value = '3';
  $export['rh_node_action_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_block';
  $strongarm->value = 'admin/structure/context';
  $export['rh_node_redirect_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_block';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rss_permissions_disable_all';
  $strongarm->value = FALSE;
  $export['rss_permissions_disable_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rss_permissions_feed_icon_theme';
  $strongarm->value = 'theme_feed_icon';
  $export['rss_permissions_feed_icon_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_block';
  $strongarm->value = 1;
  $export['show_diff_inline_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_block';
  $strongarm->value = 1;
  $export['show_preview_changes_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'customerror/403';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'customerror/404';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_block';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_block'] = $strongarm;

  return $export;
}
