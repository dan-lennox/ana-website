(function($)
{
	Drupal.behaviors.shadowboxLogin = 
	{
		attach:function()
		{
			Shadowbox.ctrlPressed = false;
			var settings = Drupal.settings.shadowboxLogin;
			Shadowbox.showLogin = function() {
				Shadowbox.open({
			      content: settings.loginForm,
			      player: 'html',
			      width: settings.width,
			      height: settings.height,
			      options: {
				    modal: settings.modal,
			      }
			    });
			};
			if(!$.browser.msie || $.browser.version > 6 || window.XMLHttpRequest) {
				$("a[href*='" + settings.loginPath + "']").each(function()
				{
					$(this).click(function()
					{
						Shadowbox.showLogin();
						return false;
					});
				});
				$(document).keyup(function(e)
				{
					if(e.keyCode === 17) {
						Shadowbox.ctrlPressed = false;
					}
				});
				$(document).keydown(function(e)
				{
					if(e.keyCode === 17) {
						Shadowbox.ctrlPressed = true;
					}
					if(Shadowbox.ctrlPressed === true && e.keyCode === 190) {
						Shadowbox.ctrlPressed = false;
						if(Shadowbox.isOpen()) {
							Shadowbox.close();
						} else {
							Shadowbox.showLogin();
						}
					}
				});
			}
		}
	};
}(jQuery));