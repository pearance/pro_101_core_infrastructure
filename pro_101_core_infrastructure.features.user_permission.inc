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

  // Exported permission: access admin theme.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'admin_theme',
  );

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

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'overlay',
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

  // Exported permission: access site RSS feed.
  $permissions['access site RSS feed'] = array(
    'name' => 'access site RSS feed',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rss_permissions',
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
      1 => 'professional',
      2 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: access taxonomy RSS feeds.
  $permissions['access taxonomy RSS feeds'] = array(
    'name' => 'access taxonomy RSS feeds',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rss_permissions',
  );

  // Exported permission: access the block administration page.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer block access settings.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'contactinfo',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: administer distributed blocks.
  $permissions['administer distributed blocks'] = array(
    'name' => 'administer distributed blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'distributed_blocks',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer main-menu menu items.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer management menu items.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer menu-auxiliary menu items.
  $permissions['administer menu-auxiliary menu items'] = array(
    'name' => 'administer menu-auxiliary menu items',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer navigation menu items.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
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
    'roles' => array(
      0 => 'developer',
    ),
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

  // Exported permission: administer user-menu menu items.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
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

  // Exported permission: boost flush pages.
  $permissions['boost flush pages'] = array(
    'name' => 'boost flush pages',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'boost',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rh_node.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
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

  // Exported permission: configure all block body fields.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block descriptions.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block titles.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all blocks.
  $permissions['configure all blocks'] = array(
    'name' => 'configure all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: configure all content type visibility settings.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all language settings.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all page visibility settings.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all region settings.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all role visibility settings.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all user visibility settings.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all visibility settings.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: create blocks.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: delete all blocks.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: disable all blocks.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: edit own block content.
  $permissions['edit own block content'] = array(
    'name' => 'edit own block content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: enable all blocks.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: enter block revision log entry.
  $permissions['enter block revision log entry'] = array(
    'name' => 'enter block revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: exclude from message filtering.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: export taxonomy by csv.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: import taxonomy by csv.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: move all blocks.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'block_access',
  );

  // Exported permission: override block authored by option.
  $permissions['override block authored by option'] = array(
    'name' => 'override block authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block authored on option.
  $permissions['override block authored on option'] = array(
    'name' => 'override block authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block promote to front page option.
  $permissions['override block promote to front page option'] = array(
    'name' => 'override block promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block published option.
  $permissions['override block published option'] = array(
    'name' => 'override block published option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block revision option.
  $permissions['override block revision option'] = array(
    'name' => 'override block revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override block sticky option.
  $permissions['override block sticky option'] = array(
    'name' => 'override block sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: view all blocks.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'block_access',
  );

  // Exported permission: view error messages.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'disable_messages',
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

  // Exported permission: view status messages.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'system',
  );

  // Exported permission: view warning messages.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
