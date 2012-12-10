<?php
/**
 * @file
 * stanford_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_image_node_info() {
  $items = array(
    'stanford_image' => array(
      'name' => t('Stanford Image'),
      'base' => 'node_content',
      'description' => t('Contains an optional image, with an optional link for associated content, optional text, and image credits.  Designed to be used in multiple circumstances especially to display an images with text.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stanfordf_fc_factory' => array(
      'name' => t('Field Collection Factory'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
