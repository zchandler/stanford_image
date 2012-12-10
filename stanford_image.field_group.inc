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
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_12_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_6_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_6_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_8_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_8_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_8_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_9_col_banner';
  $field_group->group_name = 'group_s_banner_overlay';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_9_col_banner';
  $field_group->parent_name = 'group_s_image_border_style';
  $field_group->data = array(
    'label' => 'Banner Overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Banner Overlay',
      'instance_settings' => array(
        'classes' => 'banner-overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_banner_overlay|field_collection_item|field_s_image_info|stanford_9_col_banner'] = $field_group;

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
    'weight' => '1',
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
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_12_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_12_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_6_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_8_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_8_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_8_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_9_col_banner';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_9_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_image_image',
      1 => 'group_s_banner_overlay',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple border-shadow border-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_9_col_banner'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|field_collection_item|field_s_image_info|stanford_med_profile';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_info';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '9',
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
  $export['group_s_image_border_style|field_collection_item|field_s_image_info|stanford_med_profile'] = $field_group;

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
      0 => 'field_s_image_caption',
      1 => 'field_s_image_credits',
      2 => 'field_s_image_placeholder',
      3 => 'field_s_image_source_info',
      4 => 'field_s_image_link',
      5 => 'field_s_image_image',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|3_col_header_stack';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = '3_col_header_stack';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|3_col_header_stack'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|med_profile_postcard_left_wrap';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'med_profile_postcard_left_wrap';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|med_profile_postcard_left_wrap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|node|stanford_page|default';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_s_page_file',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|node|stanford_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|3_col_header_stack';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = '3_col_header_stack';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|3_col_header_stack'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|med_profile_postcard_left_wrap';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'med_profile_postcard_left_wrap';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|med_profile_postcard_left_wrap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|node|stanford_page|default';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|node|stanford_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|3_col_header_stack';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = '3_col_header_stack';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|3_col_header_stack'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard-left-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|med_profile_postcard_left_wrap';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'med_profile_postcard_left_wrap';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard-left-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|med_profile_postcard_left_wrap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_image',
      1 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_page|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_image',
      1 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_page|default'] = $field_group;

  return $export;
}
