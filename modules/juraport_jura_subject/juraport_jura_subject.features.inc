<?php
/**
 * @file
 * juraport_jura_subject.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function juraport_jura_subject_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function juraport_jura_subject_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function juraport_jura_subject_node_info() {
  $items = array(
    'jura_subject' => array(
      'name' => t('Jura subject'),
      'base' => 'node_content',
      'description' => t('The main content type of this site to hold detailed information about each jura subject.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
