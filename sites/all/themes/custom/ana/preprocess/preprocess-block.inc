<?php

function ana_alpha_preprocess_block(&$vars) {
  if ($vars['block_html_id'] == 'block-boxes-ana-about') {
    $menu = menu_tree('menu-social');
    $social_menu = '<div class="block-menu-social">' . drupal_render($menu) . '</div>';
    $vars['content'] .= $social_menu;
  }
}
