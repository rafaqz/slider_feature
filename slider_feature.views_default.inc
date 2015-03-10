<?php
/**
 * @file
 * slider_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slider_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'simple_entity';
  $view->human_name = 'Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_foundation_orbit';
  $handler->display->display_options['style_options']['animation_speed'] = '500';
  $handler->display->display_options['style_options']['timer_speed'] = '10000';
  $handler->display->display_options['style_options']['resume_on_mouseout'] = 1;
  $handler->display->display_options['style_options']['pause_on_hover'] = 0;
  $handler->display->display_options['style_options']['bullets'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Simple Entity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'simple_entity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Simple Entity: Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Simple Entity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'simple_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slider'] = $view;

  $view = new view();
  $view->name = 'slider_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'simple_entity';
  $view->human_name = 'Slider Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'draggableviews' => 'draggableviews',
    'field_slide_image' => 'field_slide_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_slide_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Simple Entity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'simple_entity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Simple Entity */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'simple_entity';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_slide_weight:field_slide_weight_value',
  );
  /* Field: Simple Entity: Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'content_thumb',
    'image_link' => '',
  );
  /* Sort criterion: Simple Entity: Weight (field_slide_weight) */
  $handler->display->display_options['sorts']['field_slide_weight_value']['id'] = 'field_slide_weight_value';
  $handler->display->display_options['sorts']['field_slide_weight_value']['table'] = 'field_data_field_slide_weight';
  $handler->display->display_options['sorts']['field_slide_weight_value']['field'] = 'field_slide_weight_value';
  /* Filter criterion: Simple Entity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'simple_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slider_admin'] = $view;

  return $export;
}
