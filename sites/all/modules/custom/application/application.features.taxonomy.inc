<?php
/**
 * @file
 * application.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function application_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Znaczniki',
      'machine_name' => 'tags',
      'description' => 'Grupowanie artykułów o treściach podobnych w kategorie za pomocą znaczników.',
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
