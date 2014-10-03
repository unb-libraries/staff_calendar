<?php
/**
 * @file
 * staff_calendar.features.inc
 */

/**
 * Implements hook_views_api().
 */
function staff_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function staff_calendar_node_info() {
  $items = array(
    'staff_calendar_event' => array(
      'name' => t('Staff Calendar Event'),
      'base' => 'node_content',
      'description' => t('Events for staff calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
