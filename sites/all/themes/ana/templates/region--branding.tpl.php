<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($linked_logo_img || $site_name || $site_slogan): ?>

    <div class="mobile-branding-data clearfix">
      <div id="nav-mobile">
        <div class="logo-img">
          <?php //print $linked_logo_img; ?>
          <div class="name-and-slogan">
            <div class="site-name"><?php print $site_name; ?></div>
            <div class="site-slogan"><?php print $site_slogan; ?></div>
          </div>
        </div>
      </div>
    </div>

     <div id="#portfolio" class="branding-data clearfix">

        <div class="name-and-slogan">
          <div class="site-name"><?php print $site_name; ?></div>
          <div class="site-slogan"><?php print $site_slogan; ?></div>
        </div>

        <div id="nav">
          <div class="nav-wrap nav-wrap-left"><a id="portfolio" class="active" href="#portfolio"><?php print t('Work'); ?></a></div>
          <div class="nav-wrap nav-wrap-right"><a id="contact" href="#zone-footer-wrapper"><?php print t('About Me & Contact'); ?></a></div>
        </div>

      </div>

      <?php if ($site_name || $site_slogan): ?>
      <?php $class = $site_name_hidden && $site_slogan_hidden ? ' element-invisible' : ''; ?>
      <hgroup class="site-name-slogan<?php print $class; ?>">
        <?php if ($site_name): ?>
        <?php $class = $site_name_hidden ? ' element-invisible' : ''; ?>
        <?php if ($is_front): ?>
        <h1 class="site-name<?php print $class; ?>"><?php print $linked_site_name; ?></h1>
        <?php else: ?>
        <h2 class="site-name<?php print $class; ?>"><?php print $linked_site_name; ?></h2>
        <?php endif; ?>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
        <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
        <!-- <h6 class="site-slogan<?php print $class; ?>"><?php //print $site_slogan; ?></h6> -->
        <?php endif; ?>
      </hgroup>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
