<?php
/**
 * @file
 * staff_calendar.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function staff_calendar_user_default_roles() {
  $roles = array();

  // Exported role: Staff Calendar Admin.
  $roles['Staff Calendar Admin'] = array(
    'name' => 'Staff Calendar Admin',
    'weight' => 31,
  );

  return $roles;
}
