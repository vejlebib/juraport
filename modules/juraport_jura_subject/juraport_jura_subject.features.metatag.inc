<?php
/**
 * @file
 * juraport_jura_subject.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function juraport_jura_subject_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_jura_subject_description]',
      ),
      'abstract' => array(
        'value' => '[node:field_jura_subject_description]',
      ),
      'keywords' => array(
        'value' => '[node:field_jura_subject_keywords]',
      ),
    ),
  );

  return $config;
}
