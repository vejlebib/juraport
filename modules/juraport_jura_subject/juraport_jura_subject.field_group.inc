<?php
/**
 * @file
 * juraport_jura_subject.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function juraport_jura_subject_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_information|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '10',
    'children' => array(
      0 => 'field_juraport_information_box',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_information|node|jura_subject|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_laws_rules|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_laws_rules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Love og regler i bearbejdet form',
    'weight' => '5',
    'children' => array(
      0 => 'field_jura_subject_laws_rules',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Love og regler i bearbejdet form',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-laws-rules field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_laws_rules|node|jura_subject|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_lawtext_rules|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_lawtext_rules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lovtekster og regler',
    'weight' => '7',
    'children' => array(
      0 => 'field_jura_subject_lawtext_rules',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lovtekster og regler',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-lawtext-rules field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_lawtext_rules|node|jura_subject|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_loan|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_loan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lån på biblioteket',
    'weight' => '8',
    'children' => array(
      0 => 'field_jura_subject_loan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lån på biblioteket',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-loan field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_loan|node|jura_subject|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_network|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_network';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Netværk',
    'weight' => '9',
    'children' => array(
      0 => 'field_jura_subject_network',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Netværk',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-network field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_network|node|jura_subject|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jura_subject_online|node|jura_subject|form';
  $field_group->group_name = 'group_jura_subject_online';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jura_subject';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Selvbetjening på nettet',
    'weight' => '6',
    'children' => array(
      0 => 'field_jura_subject_online',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Selvbetjening på nettet',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-jura-subject-online field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_jura_subject_online|node|jura_subject|form'] = $field_group;

  return $export;
}
