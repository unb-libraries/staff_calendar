<?php
/**
 * @file
 * staff_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function staff_calendar_taxonomy_default_vocabularies() {
  return array(
    'staff_calendar_event_categories' => array(
      'name' => 'Staff Calendar Event Categories',
      'machine_name' => 'staff_calendar_event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
