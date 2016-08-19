<?php
/**
 * @file
 * juraport_jura_subject.fb_social.inc
 */

/**
 * Implements hook_fb_social_default_presets().
 */
function juraport_jura_subject_fb_social_default_presets() {
  $export = array();

  $fb_social_preset = new stdClass();
  $fb_social_preset->disabled = FALSE; /* Edit this to true to make a default fb_social_preset disabled initially */
  $fb_social_preset->api_version = 1;
  $fb_social_preset->name = 'jura_subject_like';
  $fb_social_preset->description = 'Like button on jura subject nodes.';
  $fb_social_preset->plugin_type = 'like';
  $fb_social_preset->settings = array(
    'node_types' => array(
      'types' => array(
        'jura_subject' => 'jura_subject',
        'page' => 0,
      ),
    ),
    'plugin_location' => array(
      'location' => '1',
      'node_view_modes' => array(
        'full' => 'full',
        'teaser' => 0,
        'rss' => 0,
        'search_index' => 0,
        'search_result' => 0,
        'diff_standard' => 0,
        'token' => 0,
      ),
    ),
    'block' => 0,
  );
  $fb_social_preset->fb_attrs = array(
    'send' => 1,
    'layout' => 'button_count',
    'show_faces' => 0,
    'width' => '350',
    'action' => 'like',
    'font' => 'verdana',
    'colorscheme' => 'dark',
  );
  $export['jura_subject_like'] = $fb_social_preset;

  return $export;
}
