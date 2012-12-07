<?php
/**
 * @file
 * ana_general.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ana_general_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ana_about';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About Ana Block';
  $box->options = array(
    'body' => array(
      'value' => '<img src="sites/www.anamikulic.com/themes/ana/images/spacer.png" />Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas pharetra luctus fermentum. Suspendisse eu neque eu velit posuere bibendum ac sed magna. In ultricies erat quis turpis mattis dapibus. Curabitur aliquet, sem vitae pellentesque convallis, massa nibh placerat leo, eu sollicitudin lacus justo mollis neque. Nullam mollis urna vitae libero porta elementum. Cras nibh diam, aliquam vel dignissim ut, ullamcorper ',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ana_about'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ana_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Basic footer info';
  $box->options = array(
    'body' => array(
      'value' => '© All artworks and imagery contained on this website are copyright Ana Mikulic  2012. All rights reserved. 
Powered by the almighty <a href="drupal.org">Drupal</a>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['ana_footer'] = $box;

  return $export;
}
