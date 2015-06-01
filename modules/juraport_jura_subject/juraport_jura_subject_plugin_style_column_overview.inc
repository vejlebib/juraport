<?php

/**
 * @file
 * 
 * 
 */

class juraport_jura_subject_plugin_style_column_overview extends views_plugin_style {

	/**
	 * Set default options
	 */
	function option_definition() {
		$options = parent::option_definition();
		$options['columns'] = array('default' => '3');
		return $options;
	}

	/**
	 * Add to options form.
	 */
	function options_form(&$form, &$form_state) {
		parent::options_form($form, $form_state);

		// This plugin only supports one grouping level, so we remove any additional
		// grouping fields added by the parent.
		if (isset($form['grouping'][0])) {
			$first_grouping_field = $form['grouping'][0];
			$form['grouping'] = array();
			$form['grouping'][0] = $first_grouping_field;
		}
		
		// Add option to specify the number of columns
    $form['columns'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of columns'),
      '#default_value' => $this->options['columns'],
      '#required' => TRUE,
      '#element_validate' => array('views_element_validate_integer'),
    );
	}

	/**
	 * Handel the rendering of grouping sets.
	 *
	 * We override this to pass all groups directly to the template instead of 
	 * one by one as in the default implementation.
	 */
  function render_grouping_sets($sets, $level = 0) {
  	// This plugin only supports one level of grouping, so we dont use the
  	// views_view_grouping as in the default implementation
  	foreach ($sets as $key => $set) {
  		foreach ($set['rows'] as $index => $row) {
  			$this->view->row_index = $index;
  			$sets[$key]['rows'][$index] = $this->row_plugin->render($row);
  		}
  	}
  	unset($this->view->row_index);
  	// Prepare variables for the theme function
  	$variables = array(
  		'view' => $this->view,
  		'options' => $this->options,
  	);
  	// There's groups. Pass all of them to the theme function at once as rows.
  	if (count($sets) > 1) {
  		$variables['rows'] = $sets;
  		$variables['has_groups'] = TRUE;
  	}
		// There's only 1 set (no grouping). Get the rows and pass them directly to
		// the template file.
  	else if (count($sets) == 1) {
  		$set = reset($sets);
  		$variables['rows'] = $set['rows'];
  		$variables['has_groups'] = FALSE;
  	}
    return theme($this->theme_functions(), $variables);
  }

}
