<?php
/**
 * @file
 * juraport_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function juraport_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-juraport_editor-field_jura_editor_employed'
  $field_instances['profile2-juraport_editor-field_jura_editor_employed'] = array(
    'bundle' => 'juraport_editor',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_jura_editor_employed',
    'label' => 'Ansat',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-juraport_editor-field_jura_editor_firstname'
  $field_instances['profile2-juraport_editor-field_jura_editor_firstname'] = array(
    'bundle' => 'juraport_editor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_jura_editor_firstname',
    'label' => 'Fornavn(e)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-juraport_editor-field_jura_editor_library'
  $field_instances['profile2-juraport_editor-field_jura_editor_library'] = array(
    'bundle' => 'juraport_editor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_jura_editor_library',
    'label' => 'Bibliotek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-juraport_editor-field_jura_editor_surname'
  $field_instances['profile2-juraport_editor-field_jura_editor_surname'] = array(
    'bundle' => 'juraport_editor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_jura_editor_surname',
    'label' => 'Efternavn(e)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ansat');
  t('Bibliotek');
  t('Efternavn(e)');
  t('Fornavn(e)');

  return $field_instances;
}
