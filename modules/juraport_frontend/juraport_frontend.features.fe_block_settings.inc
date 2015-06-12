<?php
/**
 * @file
 * juraport_frontend.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function juraport_frontend_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['juraport_jura_subject-juraport_info_box_viewer'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'juraport_info_box_viewer',
    'module' => 'juraport_jura_subject',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['juraport_jura_subject-juraport_jura_subject_jumper'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'juraport_jura_subject_jumper',
    'module' => 'juraport_jura_subject',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['juraport_jura_subject-juraport_jura_subject_overview'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'juraport_jura_subject_overview',
    'module' => 'juraport_jura_subject',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-jura_subject_overview-block_1'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'jura_subject_overview-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-jura_subject_overview-block_2'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'jura_subject_overview-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'juraport_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'juraport_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
