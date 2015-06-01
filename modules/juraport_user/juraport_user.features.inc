<?php
/**
 * @file
 * juraport_user.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function juraport_user_default_profile2_type() {
  $items = array();
  $items['juraport_editor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "juraport_editor",
    "label" : "Juraport redakt\\u00f8r",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
