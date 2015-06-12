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
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Forbindelse: Indhold: Kategori (field_jura_subject_category) */
  $handler->display->display_options['relationships']['field_jura_subject_category_tid']['id'] = 'field_jura_subject_category_tid';
  $handler->display->display_options['relationships']['field_jura_subject_category_tid']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['relationships']['field_jura_subject_category_tid']['field'] = 'field_jura_subject_category_tid';
  $handler->display->display_options['relationships']['field_jura_subject_category_tid']['required'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_jura_subject_category']['id'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['field'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['label'] = '';
  $handler->display->display_options['fields']['field_jura_subject_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jura_subject_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_subject_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jura_subject' => 'jura_subject',
  );

  /* Display: Jurasubject overview */
  $handler = $view->new_display('page', 'Jurasubject overview', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_jura_subject_category_tid';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'emneoversigt';

  /* Display: Recent subjects */
  $handler = $view->new_display('block', 'Recent subjects', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent subjects';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Sidst opdateret';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<div>[changed]</div>';
  $handler->display->display_options['fields']['changed']['date_format'] = 'juraport_date_only';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'juraport_date_only';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Recent subjects';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Similar subjects */
  $handler = $view->new_display('block', 'Similar subjects', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'See also';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Similar subjects';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['jura_subject_overview'] = array(
    t('Master'),
    t('Emneoversigt'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term fra field_jura_subject_category'),
    t('Jurasubject overview'),
    t('Recent subjects'),
    t('Sidst opdateret'),
    t('<div>[changed]</div>'),
    t('Similar subjects'),
    t('See also'),
    t('Alle'),
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
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Bruger: Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'juraport_editor' => 'juraport_editor',
  );
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Profil: Efternavn(e) */
  $handler->display->display_options['fields']['field_jura_editor_surname']['id'] = 'field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['table'] = 'field_data_field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['field'] = 'field_jura_editor_surname';
  $handler->display->display_options['fields']['field_jura_editor_surname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_surname']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jura_editor_surname']['element_label_colon'] = FALSE;
  /* Felt: Profil: Fornavn(e) */
  $handler->display->display_options['fields']['field_jura_editor_firstname']['id'] = 'field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['table'] = 'field_data_field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['field'] = 'field_jura_editor_firstname';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jura_editor_firstname']['alter']['text'] = '[field_jura_editor_firstname] [field_jura_editor_surname]';
  $handler->display->display_options['fields']['field_jura_editor_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_editor_firstname']['type'] = 'text_plain';
  /* Felt: Profil: Bibliotek */
  $handler->display->display_options['fields']['field_jura_editor_library']['id'] = 'field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['table'] = 'field_data_field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['field'] = 'field_jura_editor_library';
  $handler->display->display_options['fields']['field_jura_editor_library']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_jura_editor_library']['label'] = '';
  $handler->display->display_options['fields']['field_jura_editor_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_editor_library']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Bruger: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Bruger: Aktiv */
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
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Profil'),
    t('Entity Reference'),
  );
  $export['juraport_editor_list'] = $view;

  return $export;
}
