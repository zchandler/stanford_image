<?php
/**
 * @file
 * stanford_image.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_image_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|default';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_image_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image|field_collection_item|field_s_image_info|form';
  $field_group->group_name = 'group_s_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'field_s_image_credits',
      2 => 'field_s_image_source_info',
      3 => 'field_s_image_placeholder',
      4 => 'field_s_image_caption',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_image|field_collection_item|field_s_image_info|form'] = $field_group;

  return $export;
}
