Drupal.behaviors.ana_navigation = {
  attach: function(context) {

    //window.$ui = jQuery.noConflict(true);

    jQuery('#nav').onePageNav({
      currentClass: 'current',
      changeHash: false,
      scrollSpeed: 750,
      scrollOffset: 63,
      scrollThreshold: 0.5,
      filter: '',
      easing: 'swing'
      //begin: function() {
      //    //I get fired when the animation is starting
      //},
      //end: function() {
      //    //I get fired when the animation is ending
      //},
      //scrollChange: function($currentListItem) {
      //    //I get fired when you enter a section and I pass the list item of the section
      //}
    });

  }
};

Drupal.behaviors.ana_general = {
  attach: function(context) {
    //Cufon.replace('.form-type-textfield label');
    //
    Cufon.set('fontFamily', 'Stag Sans Book').replace('.site-name');
    Cufon.set('fontFamily', 'Stag light').replace('.site-slogan');
    // Cufon.replace('#site-name, #site-slogan', {
    //   fontFamily: 'stag'
    // });

    jQuery(".view-dl-projects .views-row").hover(
      function () {
        jQuery(this).children("h2").addClass("hover");
      },
      function () {
        jQuery(this).children("h2").removeClass("hover");
      }
    );

    jQuery(".block-ana-general-contact .form-type-textarea textarea").focusin(function() {
      jQuery(this).data('default_text', jQuery(this).html());
      jQuery(this).html("");
    });

    jQuery(".block-ana-general-contact .form-type-textarea textarea").focusout(function() {
      jQuery(this).html(jQuery(this).data('default_text'));
    });


    // Menu hover/active states.
    jQuery("#nav a#portfolio").click(function() {
      jQuery(this).addClass('active');
      jQuery("#nav a#contact").removeClass('active');
    });

    jQuery("#nav a#contact").click(function() {
      jQuery(this).addClass('active');
      jQuery("#nav a#portfolio").removeClass('active');
    });

  }
};

Drupal.behaviors.contact_submit = {
  // attach: function(context, settings, args) {
  //   //if (jQuery(".submitted-img").length > 0) {
  //     //jQuery("input").each().empty();
  //     //alert('yo!');
  //     //console.log('called');
  //     //jQuery("")
  //   //}
  // }
};
