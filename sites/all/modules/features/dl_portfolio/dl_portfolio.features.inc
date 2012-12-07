<?php
/**
 * @file
 * dl_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dl_portfolio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dl_portfolio_node_info() {
  $items = array(
    'dl_gallery' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Basic project gallery. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
