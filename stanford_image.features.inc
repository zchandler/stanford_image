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
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
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
    'stanford_slide' => array(
      'name' => t('Stanford Slide'),
      'base' => 'node_content',
      'description' => t('Used when the image is not associated with content.  For slideshows, rotating images, etc.
Basically just the image field collection (no body text) with a link, type, and weight.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
