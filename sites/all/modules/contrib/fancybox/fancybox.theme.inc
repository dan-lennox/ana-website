<?php

/**
 * @file
 * fancyBox theme functions.
 */

/**
 * Formats and displays a fancyBox image field.
 *
 * @param $variables array
 *   An associative array containing:
 *   - $item array
 *   - $node object
 *   - $field array
 *   - $display_settings array
 */
function theme_fancybox_image_formatter($variables) {
  extract($variables);

  $image = array(
    'path' => $item['uri'],
    'alt' => $item['alt'],
    'title' => $item['title'],
    'style_name' => $display_settings['fancybox_image_style_node'],
  );

  if (isset($item['width']) && isset($item['height'])) {
    $image['width'] = $item['width'];
    $image['height'] = $item['height'];
  }

  $caption = '';

  switch ($display_settings['fancybox_caption']) {
    case 'auto':
      if (!empty($image['title'])) {
        $caption = $image['title'];
      }
      elseif (!empty($image['alt'])) {
        $caption = $image['alt'];
      }
      else {
        $caption = $node->title;
      }
      break;
    case 'title':
      $caption = $image['title'];
      break;
    case 'alt':
      $caption = $image['alt'];
      break;
    case 'node_title':
      $caption = $node->title;
      break;
    case 'custom':
      $caption = token_replace($settings['fancybox_caption_custom'], array('node' => $node));
      break;
  }

  $gid = '';

  switch ($display_settings['fancybox_gallery']) {
    case 'post':
      $gid = 'gallery-post-' . $node->nid;
      break;
    case 'page':
      $gid = 'gallery-page';
      break;
    case 'field_post':
      $gid = 'gallery-post-' . $node->nid . '-field-' . $field['id'];
      break;
    case 'field_page':
      $gid = 'gallery-page-field-' . $field['id'];
      break;
    case 'custom':
      $gid = $display_settings['fancybox_gallery_custom'];
      break;
  }

  $path = $display_settings['fancybox_image_style_fancybox'] ? image_style_url($display_settings['fancybox_image_style_fancybox'], $image['path']) : file_create_url($image['path']);

  return theme('fancybox_imagefield', array(
    'image' => $image,
    'path' => $path,
    'caption' => $caption,
    'group' => $gid,
  ));
}

/**
 * Returns HTML for a fancyBox image field.
 *
 * @param $variables
 *   An associative array containing:
 *   - $image array
 *   - $path string
 *   - $caption string
 *   - $group string
 */
function theme_fancybox_imagefield($variables) {
  extract($variables);

  return l(theme(empty($image['style_name']) ? 'image' : 'image_style', $image), $path, array(
    'html' => TRUE,
    'attributes' => array(
      'title' => $caption,
      'class' => 'fancybox',
      'data-fancybox-group' => $group,
    ),
  ));
}
