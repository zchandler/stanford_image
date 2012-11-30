<?php
/**
 * @file
 * stanford_image.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_image_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'stanford_image_credits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Image Credits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Credits';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_s_image_caption' => 'field_s_image_caption',
    'field_s_image_credits' => 'field_s_image_credits',
    'url' => 'url',
    'nothing' => 'nothing',
    'counter' => 'counter',
    'field_s_image_image' => 'field_s_image_image',
  );
  $handler->display->display_options['style_options']['default'] = 'field_s_image_credits';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_image_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_image_credits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_image_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_s_image_image']['field_api_classes'] = 0;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_s_image_caption']['id'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['field_api_classes'] = 0;
  /* Field: Field collection item: Credits */
  $handler->display->display_options['fields']['field_s_image_credits']['id'] = 'field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['table'] = 'field_data_field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['field'] = 'field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_image_credits']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_image_credits']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_credits']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_credits']['field_api_classes'] = 0;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['url']['display_as_link'] = 1;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[url]/edit';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Filter criterion: Field collection item: Image (field_s_image_image:width) */
  $handler->display->display_options['filters']['field_s_image_image_width']['id'] = 'field_s_image_image_width';
  $handler->display->display_options['filters']['field_s_image_image_width']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['filters']['field_s_image_image_width']['field'] = 'field_s_image_image_width';
  $handler->display->display_options['filters']['field_s_image_image_width']['operator'] = '>';
  $handler->display->display_options['filters']['field_s_image_image_width']['value']['value'] = '0';
  /* Filter criterion: Field collection item: Caption (field_s_image_caption) */
  $handler->display->display_options['filters']['field_s_image_caption_value']['id'] = 'field_s_image_caption_value';
  $handler->display->display_options['filters']['field_s_image_caption_value']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['filters']['field_s_image_caption_value']['field'] = 'field_s_image_caption_value';
  $handler->display->display_options['filters']['field_s_image_caption_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_image_caption_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['operator_id'] = 'field_s_image_caption_value_op';
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['label'] = 'Filter by Caption';
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['operator'] = 'field_s_image_caption_value_op';
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['identifier'] = 'field_s_image_caption_value';
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_s_image_caption_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field collection item: Credits (field_s_image_credits) */
  $handler->display->display_options['filters']['field_s_image_credits_value']['id'] = 'field_s_image_credits_value';
  $handler->display->display_options['filters']['field_s_image_credits_value']['table'] = 'field_data_field_s_image_credits';
  $handler->display->display_options['filters']['field_s_image_credits_value']['field'] = 'field_s_image_credits_value';
  $handler->display->display_options['filters']['field_s_image_credits_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_image_credits_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['operator_id'] = 'field_s_image_credits_value_op';
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['label'] = 'Filter by Credits';
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['operator'] = 'field_s_image_credits_value_op';
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['identifier'] = 'field_s_image_credits_value';
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_s_image_credits_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'images';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $export['stanford_image_credits'] = $view;

  return $export;
}
