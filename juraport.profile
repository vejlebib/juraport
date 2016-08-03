<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function juraport_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Juraport';
}

/**
 * Implements hook_install_tasks().
 */
function juraport_install_tasks(&$install_state) {
	$tasks = array(
		'juraport_revert_features' => array(
			'display_name' => st('Revert features'),
			'display' => TRUE,
			'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
			'type' => 'batch',
		),
	);
	return $tasks;
}

/**
 * Reverts the juraport_base features after install.
 */
function juraport_revert_features(&$install_state) {
	$operations = array();
	$operations[] = array('_juraport_revert_features');
	$batch = array(
		'title' => st('Reverting features'),
		'operations' => $operations,
	);
	return $batch;
}

/**
 * Rebuild and revert all enabled features
 */
function _juraport_revert_features() {
	features_rebuild();
	features_revert();
}
