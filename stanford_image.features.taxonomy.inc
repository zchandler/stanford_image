<?php
/**
 * @file
 * stanford_image.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_image_taxonomy_default_vocabularies() {
  return array(
    'stanford_layouts' => array(
      'name' => 'Stanford Layouts',
      'machine_name' => 'stanford_layouts',
      'description' => 'Layouts available for styling entities.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
