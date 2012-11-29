<?php
/**
 * @file
 * stanford_image.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function stanford_image_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stanford_postcard';
  $bean_type->label = 'Stanford Postcard';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['stanford_postcard'] = $bean_type;

  return $export;
}
