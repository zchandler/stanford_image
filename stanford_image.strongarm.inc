<?php
/**
 * @file
 * stanford_image.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_image_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_s_image_info';
  $strongarm->value = array(
    'view_modes' => array(
      'stanford_4_col_header' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_large_scaled' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_large_square' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_medium_square' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_small_square' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_thumbnail_square' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_12_col_banner' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_3_col_header' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_6_col_banner' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_6_col_banner_short' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_8_col_banner_short' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_8_col_banner_tall' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_9_col_banner' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_9_col_banner_short' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_sm_profile' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_s_image_info'] = $strongarm;

  return $export;
}
