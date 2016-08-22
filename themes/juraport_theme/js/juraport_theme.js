/**
 * @file
 *
 * Contains the general behavior for the Juraport theme.
 */

(function ($, Drupal, window, document, undefined) {

	Drupal.behaviors.juraport_theme = {
	  attach: function(context, settings) {
	  	var toggle = $(".navigation-bar-toggle", context);
	  	var navigationBar = $("#navigation-bar", context);
      var topBarMenu = $("#block-menu-menu-top-bar-menu", context);
	  	toggle.bind("touchstart click", function(e) {
	  		e.preventDefault();
        navigationBar.slideToggle(500);
        topBarMenu.hasClass("active") ? topBarMenu.removeClass("active") : topBarMenu.addClass("active");
        toggle.hasClass("active") ? toggle.removeClass("active") : toggle.addClass("active");
	  	});
      // If the window width moves from the lowest breakpoint to the next, it
      // may be needed to remove the style applied by slideToggle.
      $(window).resize(function() {
        var windowWidth = $(window).width();
        if (windowWidth >= 960 && !toggle.hasClass("active")) {
        	navigationBar.removeAttr("style");
        }
      });
	  }
	};

})(jQuery, Drupal, this, this.document);
