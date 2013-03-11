// below is breaking default JS.

(function ($) {
  Drupal.behaviors.dl_portfolio = {
    attach: function(context) {

      $(".jackbox[data-group]").jackBox("init", {

        deepLinking: true,              // choose to use the deep-linking feature ("true" will enhance social sharing!) true/false
        showInfoByDefault: false,       // show item info automatically when content loads, true/false
        preloadGraphics: true,          // preload the jackbox graphics for a faster jackbox
        fullscreenScalesContent: false,  // choose to always scale content up in fullscreen mode, true/false
        //defaultShareImage: "1.jpg"          // if the social widget can't find an image to share from your lightbox content,
                                        // it will use this image's url instead.  Only applicable to Pinterest.

        //autoPlayVideo: false,           // video autoplay default, this can also be set per video in the data-attributes, true/false
        //flashVideoFirst: false,         // choose which technology has first priority for video, HTML5 or Flash, true/false
        //defaultVideoWidth: 960,         // the default video width, can also be set per video in the data-attributes
        //defaultVideoHeight: 540,        // the default video width, can also be set per video in the data-attributes

        useThumbs: true,                // choose to use thumbnails, true/false
        thumbsStartHidden: false,       // choose to initially hide the thumbnail strip, true/false
        thumbnailWidth: 100,             // the default video width, can also be set per video in the data-attributes
        thumbnailHeight: 100            // the default video height, can also be set per video in the data-attributes
        //useThumbTooltips: true                 // choose to use small thumbnail tooltips, true/false

      });
    }
  };
})(jQuery);
