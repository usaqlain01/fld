

$(function(){
	for(var key in svgManifest) {
		$.ajax({ 
			url: svgManifest[key],
		 	complete: function(data){ 
				$(".svgHideContainer").append(data.responseText); 
			}
		});
	} 
});

window.common = window.common || {};
window.common.analytics = window.common.analytics || {};

window.common.analytics.buyTicketsButtonClick = function(button, buttonName) {
	var href = $(button).attr("href");
	window.common.analytics.event("ticketing", "ticketing-exhibition-microsite-" + buttonName, href)
}

window.common.analytics.scrollDownButtonClick = function(link) {
	window.common.analytics.event("one-page", "scroll-down-button-click")
}

window.common.analytics.sponsorLogoClick = function(which) {
	window.common.analytics.event("one-page", "logo-click", which)
}

window.common.analytics.headerNavClick = function(link) {
	var text = $(link).text();
	window.common.analytics.event("one-page", "header-nav-click", text)
}

window.common.analytics.jumpNavClick = function(link) {
	var text = $.trim($(link).text());
	window.common.analytics.event("one-page", "jump-nav-click", text)
}

window.common.analytics.visitClick = function(link) {
	var text = $.trim($(link).text());
	window.common.analytics.event("one-page", "visit-click", text)
}

window.common.analytics.footerClick = function(link, overrideText) {
	var text = overrideText || $.trim($(link).text());
	window.common.analytics.event("one-page", "footer-click", text)
}

window.common.analytics.trayClick = function(link, overrideText, trayClickType) {
	var text = overrideText || $.trim($(link).text());
	window.common.analytics.event("one-page", "tray-click" + (trayClickType ? trayClickType : ""), text)
}

window.common.analytics.introFMLogoClick = function() {
	window.common.analytics.event("one-page", "intro-fm-logo-click")
}

window.common.analytics.audioEvent = function(eventName, clipName) {
	window.common.analytics.event("one-page", eventName, clipName)
}

window.common.analytics.event = function(category, action, label, noninteraction) {
	//console.log("category: " + category + " action: " + action + " label: " + label + " nonInteraction: " + noninteraction)
	ga('send', 'event', category, action, label, noninteraction ? {'nonInteraction': 1} : null);
};


window.common.analytics.changePage = function() {
	//console.log(window.location.pathname + window.location.hash)
	ga('set', 'page', window.location.pathname + window.location.hash);
	ga('send', 'pageview');
};

window.common.analytics.menuInteraction = function(event, label, noninteraction) {
	window.common.analytics.event("one-page-menu", event, label, noninteraction)
}
window.common.analytics.eegg = function(label, noninteraction) {
	window.common.analytics.event("one-page", "eegg", label, noninteraction);
}
window.common.analytics.map = function(event, label, noninteraction) {
	window.common.analytics.event("one-page-map", event, label, noninteraction);
}
window.common.analytics.footerShow = function() {
	window.common.analytics.event("one-page", "footer-show", null, true);
}
;
//scroll infrastructure
(function () {

	var scrollCallbacks = [];

	function onScroll(callback){
		scrollCallbacks.push(callback);
	}

	window.common.onScroll = onScroll;

	$(function(){
		var $doc = $(document);
		var lastScrollTop = $doc.scrollTop();
		$(document).scroll(function() {
			var docScrollTop = $doc.scrollTop();
			var down = docScrollTop > lastScrollTop;
			for (var i in scrollCallbacks) {
				scrollCallbacks[i](down, docScrollTop, lastScrollTop);
			}
			lastScrollTop = docScrollTop;
		});
	});

})();

function Maps() {

	var _this = this;

	_this.configs = [];

	_this.mapStyle = [
		{
		    "featureType": "administrative",
		    "elementType": "labels.text.fill",
		    "stylers": [
		        {
		            "color": "#444444"
		        }
		    ]
		},
		{
		    "featureType": "landscape",
		    "elementType": "all",
		    "stylers": [
		        {
		            "color": "#f2f2f2"
		        }
		    ]
		},
		{
		    "featureType": "poi",
		    "elementType": "geometry",
		    "stylers": [
		        {
		            "color": "#fafafa"
		        }
		    ]
		},
		{
		    "featureType": "poi",
		    "elementType": "labels.text",
		    "stylers": [
		        {
		            "visibility": "on"
		        }
		    ]
		},
		{
		    "featureType": "road",
		    "elementType": "all",
		    "stylers": [
		        {
		            "saturation": -100
		        },
		        {
		            "lightness": 45
		        }
		    ]
		},
		{
		    "featureType": "road.highway",
		    "elementType": "all",
		    "stylers": [
		        {
		            "visibility": "simplified"
		        }
		    ]
		},
		{
		    "featureType": "road.arterial",
		    "elementType": "labels.icon",
		    "stylers": [
		        {
		            "visibility": "off"
		        }
		    ]
		},
		{
		    "featureType": "transit",
		    "elementType": "all",
		    "stylers": [
		        {
		            "visibility": "off"
		        }
		    ]
		},
		{
		    "featureType": "water",
		    "elementType": "all",
		    "stylers": [
		        {
		            "color": "#dbdbdb"
		        },
		        {
		            "visibility": "on"
		        }
		    ]
		}
	];

	var newMap = function(config) {
		return new google.maps.Map($(config.selector)[0], $.extend({
			scrollwheel: false,
			styles: _this.mapStyle,
			//disableDefaultUI: true
			mapTypeControl: false,
			streetViewControl: false
		}, config.settings));
	}

	var newMarker = function(map, config) {
		return new google.maps.Marker({
	        position: new google.maps.LatLng(config.settings.center.lat, config.settings.center.lng),
	        map: map,
	        title: config.marker
	    });
	}

	var newCircle = function(map, config) {
		return new google.maps.Circle($.extend({
			strokeWeight: 0,
			fillColor: '#d4625d',
			fillOpacity: 0.5,
			map: map
		}, config.circle));
	}

	var analytics = function(map) {
		var jgMarker = new google.maps.Marker({
			position: new google.maps.LatLng(41.866507, -87.617013),
			icon: "../greeks/jg.png",
			map: map
		});
		jgMarker.setVisible(false);

		var centerListenerAdded = false;

		google.maps.event.addListener(map, 'drag', function() {
			if (!centerListenerAdded) {
				google.maps.event.addListener(map, 'idle', function() { //cheap, I know
					var center = map.getCenter();
					common.analytics.map("center", center.lat() + ", " + center.lng());
				});
			}
		});

		google.maps.event.addListener(map, 'zoom_changed', function() {
			var zoom = map.getZoom();
			common.analytics.map("zoom", zoom);
			if (zoom >= 19) {
				jgMarker.setVisible(true);
				common.analytics.eegg("jeff");
			}
		});
	}

	_this.initMaps = function() {
		for (var index in _this.configs) {
			(function(){
				var config = _this.configs[index];

				var map = newMap(config);

				if (config.marker) {
					newMarker(map, config);
				}

				analytics(map)

				if (config.circle) {
					var circ = newCircle(map, config);
				}
			})();
		}
	}

}
;
//= include greeks/herocanvas/canvas 
//= include greeks/herocanvas/imagerepo 
//= include greeks/herocanvas/menu 
//= include greeks/herocanvas/slice 
//= include greeks/herocanvas/easie 
//= include greeks/herocanvas/tween 

function HeroCanvas(canvasElement, sprite, heroes) {

	var _this = this;
	var menuSprite;

	var imageRepo, canvas, menu = null;

	//var somethingSelected, isMouseOverMenu = false;
	var expandMenuTween, collapseMenuTween;

	//var mouseOver = null;

	_this.resizeCanvas = function(){
		canvas.resize();
		if (menu.expanded) {
			menu.width(canvas.width());
		}
		draw();
	}


	var fillCanvasWithBlueGradient = function(image, canvasWidth, canvasHeight, spriteSliceWidth, spriteSliceHeight){
		for (var j = 0; j<=canvasWidth; j+= (spriteSliceWidth - 10)) {
			canvas.drawImage({
				"image": 	image, 
				"sx": 		spriteSliceWidth * 6 + 5, 
				"sy": 		0, 
				"swidth": 	spriteSliceWidth - 10, 
				"sheight": 	spriteSliceHeight,
				"dx": 		j, 
				"dy": 		0, 
				"dwidth": 	spriteSliceWidth - 10, 
				"dheight": 	spriteSliceHeight * 64 / 50
			})
		}
	}

	var draw = function(){

		if (!canvas.isVisible())
			return;

		canvas.clear();

		var i = 0;
		
		var canvasWidth = canvas.width();
		var canvasHeight = canvas.height();

		if (!menuSprite) loadMenuSprite();

		var spriteSliceWidth = menuSprite.naturalWidth / 7;
		var spriteSliceHeight = menuSprite.naturalHeight;

		if (menuSprite.complete) {
			fillCanvasWithBlueGradient(menuSprite, 
				canvasWidth, canvasHeight, 
				spriteSliceWidth, spriteSliceHeight);
		}

		var widthOfAllSlicesSoFar = 0;
		for(var key in menu.slices) {

			var slice = menu.slices[key];
			var sliceWidth = slice.pixelWidth();

			if (slice.selected && canvas.isVisible() && !slice.hero) {
				loadHeroImage(slice);
			}
			var image = slice.selected ? slice.hero : menuSprite;

			var dx = menu.left(canvasWidth) + widthOfAllSlicesSoFar;
			widthOfAllSlicesSoFar += sliceWidth;

			var imageNaturalHeight = image.naturalHeight;

			var sheight = slice.selected ? imageNaturalHeight : spriteSliceHeight;

			var sx = slice.selected ? 
				(slice.hero.naturalWidth - sliceWidth) / 2 + slice.heroOffset(canvasWidth) :
				(spriteSliceWidth * i) + (spriteSliceWidth - sliceWidth) / 2;

			var swidth = sliceWidth

			var dwidth = swidth;

			var dheight = imageNaturalHeight;

			canvas.drawImage({
				"image": 	image, 
				"sx": 		sx, 
				"sy": 		0, 
				"swidth": 	swidth, 
				"sheight": 	sheight,
				"dx": 		dx, 
				"dy": 		0, 
				"dwidth": 	dwidth, 
				"dheight": 	dheight
			});

			i++;
		}
	}

	/*var whichSlice = function(clickX){
		var lastSlice, lastDx = null;

		var canvasWidth = canvas.width();
		var sliceWidthSoFar = 0;


		for(var key in menu.slices) {
			var slice = menu.slices[key];
			lastDx = menu.left(canvasWidth) + sliceWidthSoFar;
			sliceWidthSoFar += slice.pixelWidth();

			if (lastDx >= imageRepo.pixels(clickX)) {
				return (lastSlice ? lastSlice.id : null);
			}
			lastSlice = slice;
		}
		return clickX > lastDx + lastSlice.pixelWidth() ? null : lastSlice.id;
	}*/

	_this.collapseMenu = function(noanim, complete) {
		menu.expanded = false;
		if (expandMenuTween) {
			expandMenuTween.stop();
		}
		collapseMenuTween = new Tween(function(y){
			menu.width(y);
			draw();
		}, menu.width(), menu.initialWidth, 2500, complete);
		collapseMenuTween.run();
	}

	_this.expandMenu = function(noanim, complete) {
		menu.expanded = true;
		if (collapseMenuTween) {
			collapseMenuTween.stop();
		}
		if (noanim) {
			menu.width(canvas.width());
			return;
		}
		expandMenuTween = new Tween(function(y){
			menu.width(y);
			draw();
		}, menu.width(), canvas.width(), 2500, complete);
		expandMenuTween.run();
	}

	var getFractionWidths = function(slices) {
		var ifws = {};
		for(var key in slices) {
			ifws[key] = menu.slices[key].fractionWidth();
		}
		return ifws;
	}

	_this.deselect = function(noanim, callback){
		somethingSelected = false;

		if (noanim) {
			for(var key in menu.slices) {
				menu.slices[key].fractionWidth(1/6)
			}
			canvas.height(500);
			callback();
			menu.selectNone();
			return;
		}


		var initialFractionWidths = getFractionWidths(menu.slices)

		tween = new Tween(function(y){

			canvas.height(y);
			draw();

		}, 640, 500, 200, function(){

			tween = new Tween(function(y){
				for(var key in menu.slices) {
					var loopSlice = menu.slices[key];
					loopSlice.heroThumbTransitionPercent = y;

					var ifw = initialFractionWidths[key];

					loopSlice.fractionWidth(ifw + (1/6 - ifw) * (y / 100));
				}
				draw();
			}, 0, 100, 200, function() {
				menu.selectNone();
				callback();
			});

			tween.run();
		});
		tween.run();
	}

	var loadHeroImage = function(slice){
		slice.hero = imageRepo.fromUrl(slice.heroUrls.hero, slice.heroUrls.heroRetina);
	}

	var jumpToSelected = function(slice, callback){
		for(var key in menu.slices) {
			var loopSlice = menu.slices[key];
			if (loopSlice === slice)
				loopSlice.fractionWidth(1);
			else 
				loopSlice.fractionWidth(0);
		}

		canvas.height(640);
		draw();
		callback();
	}

	_this.select = function(sliceIndex, noanim, callback){
		if (!menu.expanded){
			_this.expandMenu(noanim);
		}

		somethingSelected = true;

		var slice = menu.slices[sliceIndex];

		if (canvas.isVisible())
			loadHeroImage(slice);
		else {
			slice.select();
			jumpToSelected(slice, callback);
			return;
		}

		imageRepo.loaded(slice.hero, function(){
			slice.select();
			
			var initialFractionWidths = getFractionWidths(menu.slices);

			if (noanim) {
				jumpToSelected(slice, callback);
				return;
			}

			tween = new Tween(function(y){

				for(var key in menu.slices) {
					var loopSlice = menu.slices[key];
					loopSlice.heroThumbTransitionPercent = y;

					var ifw = initialFractionWidths[key];

					if (loopSlice === slice)
						loopSlice.fractionWidth(ifw + (1 - ifw) * (100 - y) / 100); //1/6 + (5/6) * (100 - y) / 100);
					else 
						loopSlice.fractionWidth(y * ifw / 100);//y * 1/6 / 100);
				}
				draw();
			}, 100, 0, 200, function(){

				if (canvas.height() < imageRepo.pixels(640)) {
					tween = new Tween(function(y){

						canvas.height(y);
						draw();
					
					}, 500, 640, 200, callback());
					tween.run();
				}
				else callback();

			});

			tween.run();
		})
	}

	/*var mouseOverChanged = function(lastMouseOver){
		if (lastMouseOver != null)
			menu.slices[lastMouseOver].mouseOver = false;
		if (mouseOver)
			menu.slices[mouseOver].mouseOver = true;
		draw();
	}*/

	var loadMenuSprite = function(){
		menuSprite = imageRepo.fromUrl(sprite.sprite, sprite.spriteRetina);
		imageRepo.loaded(menuSprite, function(){
			draw();
		});
	}

	var init = function() {

		imageRepo = new ImageRepo();

		menu = new Menu(imageRepo.pixels(500));

		for (var i = 0; i < 6; i++) {
			new Slice(menu, i, heroes[i]);
		};

		canvas = new Canvas(canvasElement, menu);

		_this.resizeCanvas(); //calls draw

		//set up tween

		/*canvasElement.hover(function(){
			isMouseOverMenu = true;
			if (menu.expanded || somethingSelected) return;
			expandMenu();
		}, function(){
			isMouseOverMenu = false;
			if (menu.expanded || somethingSelected) return;
			collapseMenu();
		}).click(function(e){
			var sliceIndex = whichSlice(e.offsetX);
			location.hash = heroes[sliceIndex].stub; //I know...
		}).mousemove(function(e){
			var lastMouseOver = mouseOver;
			mouseOver = whichSlice(e.offsetX);
			if (mouseOver != lastMouseOver) {
				mouseOverChanged();
			}
		});*/

		delete init;
	}

	init();
}
;

/*
Easie.coffee (https://github.com/jimjeffers/Easie)
Project created by J. Jeffers

Robert Penner's Easing Equations in CoffeeScript
http://robertpenner.com/easing/

DISCLAIMER: Software provided as is with no warranty of any type. 
Don't do bad things with this :)
 */

(function() {
  this.Easie = (function() {
    function Easie() {}

    Easie.linear = function(time, begin, change, duration) {
      return begin + change * time / duration;
    };

    Easie.backIn = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      return change * (time /= duration) * time * ((overshoot + 1) * time - overshoot) + begin;
    };

    Easie.backOut = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      return change * ((time = time / duration - 1) * time * ((overshoot + 1) * time + overshoot) + 1) + begin;
    };

    Easie.backInOut = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * (time * time * (((overshoot *= 1.525) + 1) * time - overshoot)) + begin;
      } else {
        return change / 2 * ((time -= 2) * time * (((overshoot *= 1.525) + 1) * time + overshoot) + 2) + begin;
      }
    };

    Easie.bounceOut = function(time, begin, change, duration) {
      if ((time /= duration) < 1 / 2.75) {
        return change * (7.5625 * time * time) + begin;
      } else if (time < 2 / 2.75) {
        return change * (7.5625 * (time -= 1.5 / 2.75) * time + 0.75) + begin;
      } else if (time < 2.5 / 2.75) {
        return change * (7.5625 * (time -= 2.25 / 2.75) * time + 0.9375) + begin;
      } else {
        return change * (7.5625 * (time -= 2.625 / 2.75) * time + 0.984375) + begin;
      }
    };

    Easie.bounceIn = function(time, begin, change, duration) {
      return change - Easie.bounceOut(duration - time, 0, change, duration) + begin;
    };

    Easie.bounceInOut = function(time, begin, change, duration) {
      if (time < duration / 2) {
        return Easie.bounceIn(time * 2, 0, change, duration) * 0.5 + begin;
      } else {
        return Easie.bounceOut(time * 2 - duration, 0, change, duration) * 0.5 + change * 0.5 + begin;
      }
    };

    Easie.circIn = function(time, begin, change, duration) {
      return -change * (Math.sqrt(1 - (time = time / duration) * time) - 1) + begin;
    };

    Easie.circOut = function(time, begin, change, duration) {
      return change * Math.sqrt(1 - (time = time / duration - 1) * time) + begin;
    };

    Easie.circInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return -change / 2 * (Math.sqrt(1 - time * time) - 1) + begin;
      } else {
        return change / 2 * (Math.sqrt(1 - (time -= 2) * time) + 1) + begin;
      }
    };

    Easie.cubicIn = function(time, begin, change, duration) {
      return change * (time /= duration) * time * time + begin;
    };

    Easie.cubicOut = function(time, begin, change, duration) {
      return change * ((time = time / duration - 1) * time * time + 1) + begin;
    };

    Easie.cubicInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time + begin;
      } else {
        return change / 2 * ((time -= 2) * time * time + 2) + begin;
      }
    };

    Easie.elasticOut = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / duration) === 1) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * 0.3;
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        return (amplitude * Math.pow(2, -10 * time)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + change + begin;
      }
    };

    Easie.elasticIn = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / duration) === 1) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * 0.3;
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        time -= 1;
        return -(amplitude * Math.pow(2, 10 * time)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + begin;
      }
    };

    Easie.elasticInOut = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / (duration / 2)) === 2) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * (0.3 * 1.5);
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        if (time < 1) {
          return -0.5 * (amplitude * Math.pow(2, 10 * (time -= 1))) * Math.sin((time * duration - overshoot) * ((2 * Math.PI) / period)) + begin;
        } else {
          return amplitude * Math.pow(2, -10 * (time -= 1)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + change + begin;
        }
      }
    };

    Easie.expoIn = function(time, begin, change, duration) {
      if (time === 0) {
        return begin;
      }
      return change * Math.pow(2, 10 * (time / duration - 1)) + begin;
    };

    Easie.expoOut = function(time, begin, change, duration) {
      if (time === duration) {
        return begin + change;
      }
      return change * (-Math.pow(2, -10 * time / duration) + 1) + begin;
    };

    Easie.expoInOut = function(time, begin, change, duration) {
      if (time === 0) {
        return begin;
      } else if (time === duration) {
        return begin + change;
      } else if ((time = time / (duration / 2)) < 1) {
        return change / 2 * Math.pow(2, 10 * (time - 1)) + begin;
      } else {
        return change / 2 * (-Math.pow(2, -10 * (time - 1)) + 2) + begin;
      }
    };

    Easie.linearNone = function(time, begin, change, duration) {
      return change * time / duration + begin;
    };

    Easie.linearIn = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.linearOut = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.linearInOut = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.quadIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time + begin;
    };

    Easie.quadOut = function(time, begin, change, duration) {
      return -change * (time = time / duration) * (time - 2) + begin;
    };

    Easie.quadInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time + begin;
      } else {
        return -change / 2 * ((time -= 1) * (time - 2) - 1) + begin;
      }
    };

    Easie.quartIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time * time * time + begin;
    };

    Easie.quartOut = function(time, begin, change, duration) {
      return -change * ((time = time / duration - 1) * time * time * time - 1) + begin;
    };

    Easie.quartInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time * time + begin;
      } else {
        return -change / 2 * ((time -= 2) * time * time * time - 2) + begin;
      }
    };

    Easie.quintIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time * time * time * time + begin;
    };

    Easie.quintOut = function(time, begin, change, duration) {
      return change * ((time = time / duration - 1) * time * time * time * time + 1) + begin;
    };

    Easie.quintInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time * time * time + begin;
      } else {
        return change / 2 * ((time -= 2) * time * time * time * time + 2) + begin;
      }
    };

    Easie.sineIn = function(time, begin, change, duration) {
      return -change * Math.cos(time / duration * (Math.PI / 2)) + change + begin;
    };

    Easie.sineOut = function(time, begin, change, duration) {
      return change * Math.sin(time / duration * (Math.PI / 2)) + begin;
    };

    Easie.sineInOut = function(time, begin, change, duration) {
      return -change / 2 * (Math.cos(Math.PI * time / duration) - 1) + begin;
    };

    return Easie;

  })();

}).call(this);

function Tween(callback, initialValue, finalValue, ups, finish, easing){

	var _this = this;

	/*var interpolate = function(x0, x, x1, y0, y1) {
		return y0 + (y1 - y0) * (x - x0) / (x1 - x0);
	}*/

	_this.running = false;

	var currentTime = function(){ 
		return (new Date()).getTime()
	};

	_this.run = function() {
		var duration = (Math.abs(finalValue - initialValue) / ups) * 1000;
		var startTime = currentTime();
		_this.running = true;
		var animate = function(){
			var time = currentTime();
			if (time >= startTime + duration) {
				_this.running = false;
				callback(finalValue);
				if (finish) finish();
			}
			else {
				callback(Easie[easing || "quadOut"](time - startTime, initialValue, finalValue - initialValue, duration));
				/*callback(interpolate(startTime, time, startTime + duration,
									initialValue, finalValue));*/
			}
			if (_this.running) requestAnimationFrame(animate)
		};
		requestAnimationFrame(animate);
	}

	_this.stop = function() {
		_this.running = false;
	}
};

function EmojiFireworks(emoCode, origin, body, duration, passbackElement) {
	
	var _this = this;
 

	function Emojus(code, origin, direction, velocity, z, rotation){

		_this = this;

		_this.element = null;

		_this.x = function(t){
			return /*origin.x +*/ velocity * Math.cos(direction) * t;
		}
		_this.y = function(t){
			return /*origin.y +*/ velocity * Math.sin(direction) * t + 0.5 * 36 * 10 * (t * t);
		}
		_this.z = function(t){
			return 1 + (t * z / 5);
		}
		_this.rot = function(t){
			return t * rotation;
		}


		_this.getMarkup = function(){
			return "<span class='emojiSparkle'>" + code + "</span>";
		}

	}

	var startTime = null;
	var done = false;

	var draw = function(t){
		for (var key in emoji) {
			var emoje = emoji[key];
			emoje.element.css({
				transform: "translate(" + emoje.x(t) + "px, " + emoje.y(t) +"px) scale(" + emoje.z(t) + ")", //rotate(" + emoje.rot(t) + "deg)", 
				opacity: (1 - t * t)
			});
		}
	}

	var currentTime = function(){
		return (new Date()).getTime();
	}

	var teardown = function(){
		for (var key in emoji) {
			emoji[key].element.remove();
		}
	};

	var emoji = []

	var init = function(){

		startTime = currentTime();

		for (var i = 0; i < 10; i++) {
			var direction = (Math.random() * 360) + 1;
			var velocity = (Math.random() * 250) + 50;
			var z = (Math.random() * 20);

			var r = (Math.random() * 1000) - 500;
			var emojus = new Emojus(emoCode, origin, direction, velocity, z, r);
			emojus.element = $(emojus.getMarkup()).css({left: origin.x ,top: origin.y}).appendTo(body)
			if (passbackElement)
			emojus.element.click(function(e){
				passbackElement.trigger(jQuery.Event("click", { pageX: e.pageX, pageY: e.pageY }));
			});
			emoji.push(emojus);
		};

		var tween = new Tween(function(y){
			draw(y)
		}, 0, 1, 1000 / duration, teardown, "linear");
		tween.run();

		delete init;
	}

	init();
}
;








var greeks = null;

(function(){ 

	function Greeks() { 

		var _this = this;

		var body = null;
		var footer = null;

		var scrollHeight = null;
		var omt; //, lastOmt, origOmt;
		//var objectMenu = null;

		var heroCanvas = null;
		var allObjectHashes = [];

		var stateMachine = {
			heroCanvas: {
				isExpanded: false,
				isMouseOver: false,
				isScrolledDownEnough: false
			},
			selectedObject: null,
			menuVisible: false
		};

		_this.maps = null;


		_this.toggleMobileMenu = function() {
			$(".stickyHeader").toggleClass("open");
		};


		var menuScrollSettings = {
			addCallback: function(){
				stateMachine.heroCanvas.isScrolledDownEnough = true;
				updateExpansion();
			}, 
			removeCallback: function(){
				stateMachine.heroCanvas.isScrolledDownEnough = false;
				updateExpansion();
			}, 
			threshhold: null,
		};

		var footerScrollSettings = {
			addCallback: function(){
				if (stateMachine.selectedObject) { 
					footer.addClass("on");
					common.analytics.footerShow();
				}
			}, 
			removeCallback: function(){
				footer.removeClass("on");
			}, 
			threshhold: null,
		};

		var rolloverAnalyticsScrollSettings = {
			addCallback: function(){
				updateSeeRollovers();
			}, 
			removeCallback: function(){
				
			}, 
			threshhold: null,
		};


		

		var updateExpansion = function(){
			var wasExpanded = stateMachine.heroCanvas.isExpanded;
			stateMachine.heroCanvas.isExpanded = stateMachine.selectedObject 
				|| stateMachine.heroCanvas.isMouseOver 
				|| stateMachine.heroCanvas.isScrolledDownEnough;

			if (stateMachine.heroCanvas.isExpanded && !wasExpanded) {
				heroCanvas.expandMenu(false, function(){
					updateMenuVisibility();
				})
			} else if (!stateMachine.heroCanvas.isExpanded && wasExpanded) {
				updateMenuVisibility();
				heroCanvas.collapseMenu(false);
			}
		}

		var updateMenuVisibility = function() {
			var menuWasVisible = stateMachine.menuVisible
			stateMachine.menuVisible = stateMachine.heroCanvas.isExpanded 
				&& !stateMachine.selectedObject;

			if (stateMachine.menuVisible && !menuWasVisible) {
				body.addClass("menu")
				common.analytics.menuInteraction("expand", null, true)
				updateSeeRollovers();
			}
			else if (!stateMachine.menuVisible && menuWasVisible) {
				body.removeClass("menu")
			}
		}

		var updateSeeRollovers = function(){
			if ($(document).scrollTop() > rolloverAnalyticsScrollSettings.threshhold 
				&& stateMachine.menuVisible
				&& stateMachine.heroCanvas.isMouseOver) 
				common.analytics.menuInteraction("see-rollovers", null, true);
		}



		var heightChanged = function() {
			scrollHeight = $(document).height();
			footerScrollSettings.threshhold = scrollHeight - $(window).height() - 200;
			rolloverAnalyticsScrollSettings.threshhold = $(".headerWrapper").height() 
				+ $(".introduction").height() 
				+ $(".objectMenuWrapper").height() 
				- $(".objectMenu__objectCaption").first().outerHeight() 
				- $(window).height();
		}

		_this.deselectObject = function(noanim) {
			if (!stateMachine.selectedObject) return false;

	    	body.removeClass("pastGo detail");
	    	setOmt();
	    	$('html, body').scrollTop($('html, body').scrollTop() + omt);

	    	$(".on").removeClass("on")
	    	$(".focus").removeClass("focus")

			footer.removeClass("on");
			stateMachine.selectedObject = null;

			heroCanvas.deselect(noanim, function(){
				heightChanged();
				updateMenuVisibility(); // because selected object is now null, but not until deselect is over
				setOmt();
			});

			location.hash = "";

			return false;
		}

		var loadImages = function(element) {
			element.find("img").each(function(i, el){
				var element = $(el);
				var src = element.attr("data-src");
				var srcset = element.attr("data-srcset");
				if (src) {
					element.attr("src", src)
				}
				if (srcset) {
					element.attr("srcset", srcset)
				}
			})
		}
		var footerScrollSetUp = false;

		var setupFooterScrollIfNotAlready = function() {
			if (!footerScrollSetUp) {
				setupScroll(footerScrollSettings);
				footerScrollSetUp = true;
			}
		}


		_this.selectObject = function(anchor, stub, noanim){
			if (noanim) {
				body.addClass("noanim")
			}

			if (stub == stateMachine.selectedObject) return false;
			stateMachine.selectedObject = stub;
			updateMenuVisibility();

			//var hero = anchor ? $(anchor).find(".hero") : $("." + stub + " .hero");
			//hero.attr("src", hero.attr("data-src"));
			//hero.attr("srcset", hero.attr("data-srcset"));

			var hb = $('html, body');

			hb.animate({
		        scrollTop: omt
		    }, ((noanim) ? 1 : 500), "easeOutQuad", function(){
		    	body.addClass("pastGo");
		    	hb.scrollTop(0);
		    	setOmt();
		    	if (noanim) {
					body.removeClass("noanim")
				}
				heroCanvas.select(allObjectHashes.indexOf(stub), noanim, function(){
					heightChanged();
					setupFooterScrollIfNotAlready();
				})
		    });

			body.removeClass("start")

			

			$(".on, .on--previous, .on--next").removeClass("on on--previous on--next")
			$(".focus").removeClass("focus")
			//$(".objectMenu ." + stub).addClass("on");
			var footerLink = $(".footerNav ." + stub).addClass("on");

			var footerLinks = $(".footerNav li");
			var index = footerLink.index()
			footerLinks.eq(index - 1).addClass("on--previous");
			footerLinks.eq((index + 1) % footerLinks.length).addClass("on--next");

			loadImages($(".detail." + stub).addClass("focus"));
			body.addClass("detail")

			//location.hash = stub;

			//$(".objectMenu").one('webkitTransitionEnd otransitionend oTransitionEnd msTransitionEnd transitionend', heightChanged);

			return false;
		};

		var setOmt = function() {
			omt = $(".objectsSponsors").offset().top - $(".stickyHeader").height()
			menuScrollSettings.threshhold = omt;
		}


		var setupScroll = function(settings) {
			var initial = true;
			common.onScroll(function(down, scrollTop, last) {
				if (scrollTop >= settings.threshhold && (last < settings.threshhold || initial)) {
					settings.addCallback(scrollTop);
				}
				else if (scrollTop < settings.threshhold && (last >= settings.threshhold || initial)) {
					settings.removeCallback(scrollTop);
				} 
				initial = false;
			});
		};


		

		var whichObject = function() {
			return location.hash.length ? location.hash.substr(1) : null
		}

		var onHashChange = function(event, noanim){
			var objectStub = whichObject();
			if (objectStub) {
				_this.selectObject(null, objectStub, noanim);
			}
			else {
				_this.deselectObject(noanim);
			}
			common.analytics.changePage();
			return false;
		}


		var init = function(){

			_this.maps = new Maps();

			$(window).on("hashchange", onHashChange);
			$(window).on("resize", heightChanged);

			setupScroll(menuScrollSettings);
			setupScroll(rolloverAnalyticsScrollSettings);

			setupScroll({
				addCallback: function(){
					body.removeClass("start");
				}, 
				removeCallback: function(){
					if (!stateMachine.selectedObject)
						body.addClass("start");
				}, 
				threshhold: 1, 
			});

			$(function() {


				$(".objectMenu a").each(function(){
					allObjectHashes.push($(this).attr("href").substr(1));
				})

				$(".objectMenuWrapper").hover(function() {
					stateMachine.heroCanvas.isMouseOver = true;
					updateExpansion();
					updateSeeRollovers();
				}, function() {
					stateMachine.heroCanvas.isMouseOver = false;
					updateExpansion();
				});

				heroCanvas = new HeroCanvas($(".heroes"), _this.heroThumbnailImages, _this.heroImages);

				$(window).on("resize", heroCanvas.resizeCanvas);
				heroCanvas.resizeCanvas();

				body = $("body");
				//objectMenu = $(".objectMenu");
				footer = $(".footerNav");
				setOmt();
				//lastOmt = omt;
				//origOmt = omt;


				var efs = [
					{
						counter: 0,
						symbol: "&#x1F3FA;",
						selector: ".lekythos p.intro em"
					},
					{
						counter: 0,
						symbol: "&#x1F373;",
						selector: ".cycladic .insert strong"
					},
					{
						counter: 0,
						symbol: "&#x1F458;",
						selector: ".etymology h4"
					},
				];

				for (var key in efs) {
					(function(){
						var ef = efs[key];
						$(ef.selector).click(function(e){
							if (++ef.counter >= 10) {
								common.analytics.eegg("emoji-" + ef.symbol);
								new EmojiFireworks(ef.symbol, { x: e.pageX, y: e.pageY }, body, 1500, $(this));
							}
							return false;
						})
					})();
				}

				var detailClix = 0;
				var twirlTriggered = false;
				var overallImages = $(".overallImage").click(function(e){
					if (++detailClix >= 10) {
						if (!twirlTriggered) {
							common.analytics.eegg("twirl-trigger-" + $(this).attr("alt"));
							overallImages.addClass("eegg").hover(function(){
								common.analytics.eegg("twirl-over-" + $(this).attr("alt"));
							}, function(){
								common.analytics.eegg("twirl-out-" + $(this).attr("alt"));
							});
							twirlTriggered = true;
						}
					}
				});

				/*objectMenu.on('mouseenter', function(){
					if (!body.hasClass("menu") && !body.hasClass("detail"))
					objectMenu.trigger("transitionstart")
				});
				objectMenu.on('transitionstart', function(){
					$(this).addClass("animating");
				});

				objectMenu.on('webkitTransitionEnd otransitionend oTransitionEnd msTransitionEnd transitionend', function(){
					$(this).removeClass("animating");
				});*/
				

				heightChanged();

				onHashChange(null, true); //I don't know why, but yes

			});

			delete init;
		}
		
		init();

	};
	
	greeks = new Greeks();

})();




	

/*
	common.onScroll(function(down, scrollTop, last) {
		if (scrollTop > omt && (last <= lastOmt || initialPastGo)) {
			//body.addClass("pastGo");
			setOmt();
			$(document).scrollTop(scrollTop - (lastOmt - omt));
			pastGo = true;
		}
		else if (!detail && scrollTop <= omt && (last > lastOmt || initialPastGo)) {
			//body.removeClass("pastGo");
			setOmt();
			$(document).scrollTop(scrollTop + omt);
			pastGo = false;
		}
		lastOmt = omt;
		initialPastGo = false;
	});

/*
	setupScroll(function(scrollTop){
		if (!suspend) {
			suspend = true;
			body.addClass("pastGo");
			$(document).scrollTop(scrollTop - objectMenuTop);
			pastGo = true;
			objectMenuTop = 0;
			suspend = false;
		}
	}, function(scrollTop){
		if (!suspend) {
			suspend = true;
			body.removeClass("pastGo");
			$(document).scrollTop(scrollTop + origObjectMenuTop);
			pastGo = false;
			objectMenuTop = origObjectMenuTop;
			suspend = false;
		}

	}, objectMenuTop, initialPastGo);

*/


	

	

	









