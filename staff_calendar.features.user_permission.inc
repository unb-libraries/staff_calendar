<?php
/**
 * @file
 * staff_calendar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create staff_calendar_event content'.
  $permissions['create staff_calendar_event content'] = array(
    'name' => 'create staff_calendar_event content',
    'roles' => array(
      'Staff Calendar Admin' => 'Staff Calendar Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff_calendar_event content'.
  $permissions['delete any staff_calendar_event content'] = array(
    'name' => 'delete any staff_calendar_event content',
    'roles' => array(
      'Staff Calendar Admin' => 'Staff Calendar Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff_calendar_event content'.
  $permissions['delete own staff_calendar_event content'] = array(
    'name' => 'delete own staff_calendar_event content',
    'roles' => array(
      'Staff Calendar Admin' => 'Staff Calendar Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any staff_calendar_event content'.
  $permissions['edit any staff_calendar_event content'] = array(
    'name' => 'edit any staff_calendar_event content',
    'roles' => array(
      'Staff Calendar Admin' => 'Staff Calendar Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff_calendar_event content'.
  $permissions['edit own staff_calendar_event content'] = array(
    'name' => 'edit own staff_calendar_event content',
    'roles' => array(
      'Staff Calendar Admin' => 'Staff Calendar Admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
