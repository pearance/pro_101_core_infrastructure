<?php
/**
 * @file
 * pro_101_core_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_core_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block',
  );

  // Exported permission: administer contactinfo.
  $permissions['administer contactinfo'] = array(
    'name' => 'administer contactinfo',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'contactinfo',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: administer rh_node.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(),
    'module' => 'rabbit_hole',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rh_node.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(),
    'module' => 'rabbit_hole',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: create block content.
  $permissions['create block content'] = array(
    'name' => 'create block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any block content.
  $permissions['delete any block content'] = array(
    'name' => 'delete any block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own block content.
  $permissions['delete own block content'] = array(
    'name' => 'delete own block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any block content.
  $permissions['edit any block content'] = array(
    'name' => 'edit any block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any checklistapi checklist.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit own block content.
  $permissions['edit own block content'] = array(
    'name' => 'edit own block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: view any checklistapi checklist.
  $permissions['view any checklistapi checklist'] = array(
    'name' => 'view any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view checklistapi checklists report.
  $permissions['view checklistapi checklists report'] = array(
    'name' => 'view checklistapi checklists report',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'system',
  );

  return $permissions;
}
