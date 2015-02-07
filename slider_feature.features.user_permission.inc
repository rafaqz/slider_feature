<?php
/**
 * @file
 * slider_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slider_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'administer simple_entity types'.
  $permissions['administer simple_entity types'] = array(
    'name' => 'administer simple_entity types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'simple_entity',
  );

  // Exported permission: 'create simple_entity entities'.
  $permissions['create simple_entity entities'] = array(
    'name' => 'create simple_entity entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'simple_entity',
  );

  // Exported permission: 'edit any simple_entity entities'.
  $permissions['edit any simple_entity entities'] = array(
    'name' => 'edit any simple_entity entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'simple_entity',
  );

  // Exported permission: 'edit own simple_entity entities'.
  $permissions['edit own simple_entity entities'] = array(
    'name' => 'edit own simple_entity entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'simple_entity',
  );

  // Exported permission: 'view simple_entity entities'.
  $permissions['view simple_entity entities'] = array(
    'name' => 'view simple_entity entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'simple_entity',
  );

  return $permissions;
}
