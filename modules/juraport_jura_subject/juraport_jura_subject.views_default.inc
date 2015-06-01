<?php
/**
 * @file
 * juraport_jura_subject.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function juraport_jura_subject_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jura_subject_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jura subject overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emneoversigt';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'juraport_jura_subject_column_overview';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jura_subject_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Kategori */
  $handler->display->display_options['fields']['field_jura_subject_category']['id'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['field'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['label'] = '';
  $handler->display->display_options['fields']['field_jura_subject_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jura_subject_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_subject_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Kategori (field_jura_subject_category) */
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['id'] = 'field_jura_subject_category_tid';
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['field'] = 'field_jura_subject_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jura_subject' => 'jura_subject',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'emneoversigt';
  $translatables['jura_subject_overview'] = array(
    t('Master'),
    t('Emneoversigt'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['jura_subject_overview'] = $view;

  $view = new view();
  $view->name = 'juraport_editor_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Juraport editor list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'juraport_editor' => 'juraport_editor',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Efternavn(e) */
  $handler->display->display_options['fields']['field_jura_editor_surname']['id'] = 'field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['table'] = 'field_data_field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['field'] = 'field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_surname']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jura_editor_surname']['element_label_colon'] = FALSE;
  /* Field: Profile: Fornavn(e) */
  $handler->display->display_options['fields']['field_jura_editor_firstname']['id'] = 'field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['table'] = 'field_data_field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['field'] = 'field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jura_editor_firstname']['alter']['text'] = '[field_jura_editor_firstname] [field_jura_editor_surname]';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_editor_firstname']['type'] = 'text_plain';
  /* Field: Profile: Bibliotek */
  $handler->display->display_options['fields']['field_jura_editor_library']['id'] = 'field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['table'] = 'field_data_field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['field'] = 'field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_library']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_editor_library']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['juraport_editor_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Profile'),
    t('[field_jura_editor_firstname] [field_jura_editor_surname]'),
    t('Entity Reference'),
  );
  $export['juraport_editor_list'] = $view;

  return $export;
}
