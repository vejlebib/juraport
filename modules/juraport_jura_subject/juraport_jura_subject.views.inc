<?php

/**
 * Implements hook_views_plugins().
 */
function juraport_jura_subject_views_plugins() {
	return array(
		'style' => array(
			'juraport_jura_subject_column_overview' => array(
				'title' => t('Juraport jura subject column overview'),
				'help' => t('Shows content grouped in a configurable amount of columns'),
				'handler' => 'juraport_jura_subject_plugin_style_column_overview',
				'theme' => 'juraport_jura_subject_view_column_overview',
				'uses row plugin' => TRUE,
				'uses row class' => TRUE,
				'uses options' => TRUE,
				'type' => 'normal',
			),
		),
	);
}
