<?php
/**
 * @file
 * pro_101_core_infrastructure.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function pro_101_core_infrastructure_field_default_fields() {
  $fields = array();

  // Exported field: 'node-block-body'.
  $fields['node-block-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'block',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'colorbox' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-block-field_create_info'.
  $fields['node-block-field_create_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_create_info',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'plain_text',
          'value' => 'For more info click here.
<div id="drupalforfirebug_general" style="display: none">
	<fieldset>
		<legend>Drupal for Firebug General </legend><legend>Messages</legend>There were no messages sent to the general log. Please use &quot;firep($item, $optional_title)&quot; to output messages to this console.</fieldset>
</div>
<div id="drupalforfirebug_sql" style="display: none">
	<fieldset>
		<legend>Query Logging is Not </legend><legend>Enabled</legend>Please enable &quot;Display query info&quot; in the Devel Module Settings (devel/settings) to use this feature.</fieldset>
</div>
<div id="drupalforfirebug_hook_form_alter" style="display: none">
	There was no form altering.</div>
<div id="drupalforfirebug_hook_user" style="display: none">
	There was no user processing.</div>
<div id="drupalforfirebug_hook_nodeapi" style="display: none">
	There was no node processing.</div>
<div id="drupalforfirebug_hook_views" style="display: none">
	There was no views processing.</div>
<div id="drupalforfirebug_hook_page_alter" style="display: none">
	There was no page processing.</div>
<div id="drupalforfirebug_php" style="display: none">
	<object data="http://pro101b.platdev.info/admin/firebug/exec" style="width:100%;frameborder=0;height=100%;margin-bottom:-3px;" type="text/html"></object></div>
',
        ),
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'block',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_create_info',
      'label' => 'Create Info',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        ),
        'type' => 'markup',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Create Info');

  return $fields;
}
