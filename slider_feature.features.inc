<?php
/**
 * @file
 * slider_feature.features.inc
 */

/**
 * Implements hook_default_simple_entity_type().
 */
function slider_feature_default_simple_entity_type() {
  $items = array();
  $items['slide'] = entity_import('simple_entity_type', '{
    "type" : "slide",
    "label" : "Slide",
    "weight" : 0,
    "description" : "A slide for front page slider.",
    "rdf_mapping" : []
  }');
  return $items;
}
