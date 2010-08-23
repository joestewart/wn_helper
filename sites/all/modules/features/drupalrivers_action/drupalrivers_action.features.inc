<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drupalrivers_action_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function drupalrivers_action_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation page'),
      'module' => 'features',
      'description' => t('A donation page provides a simple form for users to make a contribution via PayPal.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'take_action' => array(
      'name' => t('Take action page'),
      'module' => 'features',
      'description' => t('A take action page is a survey or online petition form.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}