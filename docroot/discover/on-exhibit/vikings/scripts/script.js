"use strict";

window.vikings = {};

window.vikings.analytics = {};

window.vikings.analytics.buyTicketsButtonClick = function(button, buttonName) {
	var href = $(button).attr("href");
	window.vikings.analytics.event("ticketing", "ticketing-exhibition-microsite-" + buttonName, href)
}

window.vikings.analytics.scrollDownButtonClick = function(link) {
	window.vikings.analytics.event("one-page", "scroll-down-button-click")
}

window.vikings.analytics.headerNavClick = function(link) {
	var text = $(link).text();
	window.vikings.analytics.event("one-page", "header-nav-click", text)
}

window.vikings.analytics.jumpNavClick = function(link) {
	var text = $.trim($(link).text());
	window.vikings.analytics.event("one-page", "jump-nav-click", text)
}

window.vikings.analytics.visitClick = function(link) {
	var text = $.trim($(link).text());
	window.vikings.analytics.event("one-page", "visit-click", text)
}

window.vikings.analytics.introFMLogoClick = function() {
	window.vikings.analytics.event("one-page", "intro-fm-logo-click")
}

window.vikings.analytics.event = function(category, action, label) {
	ga('send', 'event', category, action, label);
	//console.log("category: " + category + " action: " + action + " label: " + label)
};


//scroll infrastructure
(function () {

	var scrollCallbacks = [];

	function onScroll(callback){
		scrollCallbacks.push(callback);
	}

	window.vikings.onScroll = onScroll;


	window.vikings.sectionFrontMargin = function(target) {
		if (target.attr("id") == "believers")
			return -1 * $(window).height() / 2;
		if (target.attr("id") == "world")
			return 0;
		else 
			return 100;
	}

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

//central hash changing
(function () {

	var hashChangedCallbacks = [];

	window.vikings.onHashChange = function(callback){
		hashChangedCallbacks.push(callback);
	};

	window.vikings.changeHash = function(newHash, push){
		newHash = newHash || window.location.hash.substring(1);
		/*if (push)
			history.pushState({ }, newHash, "#" + newHash);
		else
			history.replaceState({ }, newHash, "#" + newHash);*/
		for (var i in hashChangedCallbacks) {
			hashChangedCallbacks[i](newHash, push);
		}
	};

})();


/*
//debug for scroll utility
vikings.onScroll(function(down, scrollTop, last){
	console.log("down: " + down);
	console.log("scrollTop: " + scrollTop);
	console.log("last: " + last);
});
*/

//change the hash as we go
$(function(){

	var slideTops = {};
	var refreshSlideTops = function() {
		slideTops = {};
		$(".slide").each(function(){
			var $this = $(this);
			var offset = $(this).offset();
			slideTops[Math.max(offset.top - vikings.sectionFrontMargin($this), 0)] = this.id;
		});
	}

	$(window).resize(refreshSlideTops);
	refreshSlideTops();

	function hashForScrollTop(scrollTop) {
		var last = slideTops[0];
		for (var i in slideTops) {
			if (i > scrollTop) {
				return last;
			}
			last = slideTops[i];
		}
		return last;
	}

	var hash = document.location.hash.substring(1);

	var changeHashOnScroll = function(down, scrollTop, last){
		scrollTop = scrollTop || $(document).scrollTop();
		var newHash = hashForScrollTop(scrollTop)
		if (hash != newHash) {
			hash = newHash;
			if (!vikings.suspendScrollEvents) vikings.analytics.event("one-page", "section-scroll-enter", hash)
			vikings.changeHash(newHash);
		}
	}
	vikings.onScroll(changeHashOnScroll);
});



//debug to make sure we're not triggering actual hash jumps
$(function() {
	$(window).on("hashchange", function() {
		console.log("blat!")
	});
});


//replace browser hash jumps for nav clicks with smooth html5 history-aware navigation
$(function() {
	$('.jumpNav__link, .button--excited').click(function() {
		vikings.suspendScrollEvents = true;
		var target = $(this.hash);
		var hashWithoutHash = this.hash.substring(1);
		if (target.length) {
			var margin = vikings.sectionFrontMargin(target) - 1;
			$('html,body').animate({
				scrollTop: target.offset().top - margin
			}, {duration: 500, easing: 'easeInOutExpo', complete: function() {
				vikings.suspendScrollEvents = false;
			} });
			vikings.changeHash(hashWithoutHash, true);
			return false;
		}
	});
});

//make nav light up appropriately
(function(){
	vikings.onHashChange(function(hash){
		var linkToSelect = $(".js--jumpNav__link--" + hash);
		if (linkToSelect.length) {
		$(".jumpNav__link--selected").removeClass("jumpNav__link--selected");
			linkToSelect.addClass("jumpNav__link--selected")
		}
	});
	vikings.onHashChange(function(hash){
		if (hash == "introduction") {
			$(".logoHeader").hide();
		}
		else {
			$(".logoHeader").show();
		}
	});
	vikings.onHashChange(function(hash){
		if (hash == "traders-craftspeople" 
			|| hash == "voyagers"
			|| hash == "believers"
			|| hash == "visit") {
			$(".map").hide();
		}
		else {
			$(".map").show();
		}
	});
})();

function interpolate(x, x0, x1, y0, y1) {
	return y0 + (y1 - y0) * ((x - x0) / (x1 - x0));
}

//map
$(function(){
	var $mapImage = $(".map img");
	var $map = $(".map");
	var $farmers = $(".slide--farmers");
	var $world = $(".slide--world");

	var seaColor = [ 0, 8, 19 ];
	var skyColor = [ 40, 166, 225 ];
	var continentColor = [ 109, 207, 246 ];
	
	var windowHeight, worldRising, worldDoneRising, farmersRising, farmersSetting;

	var onResize = function() {
		windowHeight = $(window).height();
		worldDoneRising = $world.offset().top;
		worldRising = worldDoneRising - windowHeight;
		farmersSetting = $farmers.offset().top;
		farmersRising = farmersSetting - windowHeight;
	}

	$(window).resize(onResize);
	$(window).load(onResize);

	var lastPct = null;

	var getPct = function(top) {
		if (top < worldRising || top > farmersSetting)
			return 0;
		else if (top > worldDoneRising && top < farmersRising)
			return 1;
		else if (top < farmersRising)
			return (top - worldRising) / (worldDoneRising - worldRising);
		else
			return (top - farmersRising) / (farmersSetting - farmersRising) - 1;
	}

	var interpolateColors = function(colorOne, colorTwo, colorThree, pct) {
		var firstColor, secondColor, endColor;
		if (pct == 0) {
			endColor = colorOne;
		}
		else if (pct == 1) {
			endColor = colorTwo;
		}
		else if (pct > 0) {
			firstColor = colorTwo;
			secondColor = colorOne;
		}
		else if (pct < 0) {
			firstColor = colorTwo;
			secondColor = colorThree;
		}
		if (!endColor) {
			var endColor = []
			for (var key in firstColor) {
				endColor.push(Math.round(interpolate(Math.abs(pct), 1, 0, firstColor[key], secondColor[key])));
			}
		}
		return "rgb(" + endColor.join(",") + ")";
	}

	var doMapAnim = function(){
		var top = $(document).scrollTop();
		var pct = getPct(top);

		if (!pct || lastPct == pct)
			return;
		lastPct = pct;
		//console.log(pct)
		$mapImage.css("opacity", Math.abs(pct));
		$map.css("background", interpolateColors(seaColor, skyColor, continentColor, pct).toString());
	}
	vikings.onScroll(function(down, top, last) {
		requestAnimationFrame(doMapAnim);
	});
});

//aurora
$(function(){
	var $aurora = $(".aurora");
	var $filmstrip = $(".filmstrip");
	var $voyagers = $(".slide--voyagers");
	var $believers = $(".whoTheyWere--believers");
	var $prows = $(".shipProws");
	
	var windowHeight, documentHeight, prowsOffsetBottom, voyagersSetting, believersTop, animationStopWhenTop;

	var onResize = function() {
		windowHeight = $(window).height();
		documentHeight = $(document).height();
		prowsOffsetBottom = $prows.offset().top + $prows.outerHeight();
		voyagersSetting = $voyagers.offset().top + $voyagers.height();
		believersTop = $believers.offset().top - windowHeight / 2;
		animationStopWhenTop = $filmstrip.offset().top - windowHeight;
	}

	$(window).resize(onResize);
	$(window).load(onResize);

	var lastPct = null;

	var getPct = function(top) {
		if (top < prowsOffsetBottom || top > animationStopWhenTop)
			return 0;
		else if (top > voyagersSetting && top < believersTop)
			return 1;
		else if (top < believersTop)
			return (top - prowsOffsetBottom) / (voyagersSetting - prowsOffsetBottom);
		else
			return 1 - (top - believersTop) / (animationStopWhenTop - believersTop);
	}

	var doBelieversAnim = function(){
		var top = $(document).scrollTop();
		var pct = getPct(top);
		if (lastPct == pct)
			return;
		lastPct = pct;
		$aurora.css("opacity", pct);
	}
	vikings.onScroll(function(down, top, last) {
		requestAnimationFrame(doBelieversAnim);
	});
});


//filmstrip
$(function(){
	var $filmstrip = $(".filmstrip");
	var filmstripHeight = $filmstrip.height();
	var headerHeight = $(".logoHeader").height();
	
	var numberOfFrames = 14;
	var lastFrame = 0;

	var filmstripOffsetTop, windowHeight, documentHeight, animationStartWhenTop, animationStopWhenTop, chunkHeight;

	var onResize = function() {
		filmstripOffsetTop = $filmstrip.offset().top;
		windowHeight = $(window).height();
		documentHeight = $(document).height();
		animationStartWhenTop = filmstripOffsetTop + filmstripHeight - windowHeight - 20;
		animationStopWhenTop = Math.min(filmstripOffsetTop - headerHeight, documentHeight - windowHeight) - 10;
		chunkHeight = (animationStopWhenTop - animationStartWhenTop) / (numberOfFrames - 1);
	}

	$(window).resize(onResize);
	$(window).load(onResize);

	var doFilmstripAnim = function(){
		if (top < animationStartWhenTop && lastFrame == 0)
			return;
		var top = $(document).scrollTop();
		var currentFrame = Math.min(Math.max(Math.round((top - animationStartWhenTop) / chunkHeight), 0), (numberOfFrames - 1));
		if (currentFrame == lastFrame)
			return;
		lastFrame = currentFrame;
		$filmstrip.css("background-position-y", filmstripHeight * currentFrame * -1);
	}

	vikings.onScroll(function(down, top, last) {
		requestAnimationFrame(doFilmstripAnim);
	});
});

/* expando thing */
vikings.zoom = {};
vikings.zoom.toggle = function(zoom) {
	var $zoom = zoom ? $(zoom) : $(".zoom:not(.minimized)");
	$(".overlay").toggleClass("hidden");
	$zoom.toggleClass('minimized animating');
	setTimeout(function() {
		$zoom.removeClass("animating")
	}, 1000);

	var close = $zoom.hasClass("minimized");
	var modalName = $zoom.find(".zoom__title").text();
	vikings.analytics.event("one-page", (close ? "modal-close" : "modal-open"), modalName) 
}
vikings.zoom.nav = function(zoomButton, event, back) {
	var hide = $(zoomButton).parents(".zoom");
	var show = back ? hide.prev(".zoom") : hide.next(".zoom");

	hide.addClass("zoom__navigating");
	show.addClass("zoom__navigating");

	hide.toggleClass("minimized");
	show.toggleClass("minimized");

	setTimeout(function() {
		hide.removeClass("zoom__navigating");
		show.removeClass("zoom__navigating");
	}, 100);

	event.stopPropagation()
	var modalName = hide.find(".zoom__title").text();
	vikings.analytics.event("one-page", (back ? "modal-back" : "modal-next"), modalName) 
	return false;
}

vikings.zoom.figureClick = function(figure, event) {
	if (!$(figure).parent(".minimized").length)
		event.stopPropagation();
}

function updateProgressBar() {
	if (currentlyPlaying && currentlyPlayingPb) {
		currentlyPlayingPb.css("width", currentlyPlaying.currentTime * 100 / currentlyPlaying.duration + "%");

		if (!currentlyPlaying.paused) {
			requestAnimationFrame(updateProgressBar);
		}
	}
}

var currentlyPlaying = null;
var currentlyPlayingPb = null;

$(function(){
	$(".audioPlayer__playPause").click(function(){
		var container = $(this).closest(".audioPlayer");
		var audio = container.find("audio")[0];
		var playing = !audio.paused;
		if (playing) {
			audio.pause();
		}
		else {
			if (currentlyPlaying && !currentlyPlaying.paused) {
				currentlyPlaying.pause();
			}
			audio.play();
			currentlyPlaying = audio;
			currentlyPlayingPb = container.find(".audioPlayer__progressBar__progress");
			container.addClass("playing");
			requestAnimationFrame(updateProgressBar);
		}
	});
	$(".audioPlayer audio").on("pause", function(){
		$(this).closest(".audioPlayer").removeClass("playing");
	});
})


var svgManifest = [
	"images/field-logo-white.svg",
	"images/vikings-logo.svg"
];

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

/* vh units 
$(function(){ 
	if (navigator.userAgent.match(/(iPad|iPhone|iPod touch);.*CPU.*OS 7_\d/i)) $(".slide--intro").height($(window).height());
});
*/

//make sure all scroll callbacks fire on first load
$(function(){ 
	$(document).scroll();
});
$(window).resize(function(){ 
	$(document).scroll();
});














/*!
 * viewport-units-buggyfill v0.5.0
 * @web: https://github.com/rodneyrehm/viewport-units-buggyfill/
 * @author: Rodney Rehm - http://rodneyrehm.de/en/
 */

(function (root, factory) {
  'use strict';
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define([], factory);
  } else if (typeof exports === 'object') {
    // Node. Does not work with strict CommonJS, but
    // only CommonJS-like enviroments that support module.exports,
    // like Node.
    module.exports = factory();
  } else {
    // Browser globals (root is window)
    root.viewportUnitsBuggyfill = factory();
  }
}(this, function () {
  'use strict';
  /*global document, window, navigator, location, XMLHttpRequest, XDomainRequest*/

  var initialized = false;
  var options;
  var userAgent = window.navigator.userAgent;
  var viewportUnitExpression = /([+-]?[0-9.]+)(vh|vw|vmin|vmax)/g;
  var forEach = [].forEach;
  var dimensions;
  var declarations;
  var styleNode;
  var isOldInternetExplorer = false;
  var isOperaMini = userAgent.indexOf('Opera Mini') > -1;

  var isMobileSafari = /(iPhone|iPod|iPad).+AppleWebKit/i.test(userAgent) && (function() {
    // Regexp for iOS-version tested against the following userAgent strings:
    // Example WebView UserAgents:
    // * iOS Chrome on iOS8: "Mozilla/5.0 (iPad; CPU OS 8_1 like Mac OS X) AppleWebKit/600.1.4 (KHTML, like Gecko) CriOS/39.0.2171.50 Mobile/12B410 Safari/600.1.4"
    // * iOS Facebook on iOS7: "Mozilla/5.0 (iPhone; CPU iPhone OS 7_1_1 like Mac OS X) AppleWebKit/537.51.2 (KHTML, like Gecko) Mobile/11D201 [FBAN/FBIOS;FBAV/12.1.0.24.20; FBBV/3214247; FBDV/iPhone6,1;FBMD/iPhone; FBSN/iPhone OS;FBSV/7.1.1; FBSS/2; FBCR/AT&T;FBID/phone;FBLC/en_US;FBOP/5]"
    // Example Safari UserAgents:
    // * Safari iOS8: "Mozilla/5.0 (iPhone; CPU iPhone OS 8_0 like Mac OS X) AppleWebKit/600.1.3 (KHTML, like Gecko) Version/8.0 Mobile/12A4345d Safari/600.1.4"
    // * Safari iOS7: "Mozilla/5.0 (iPhone; CPU iPhone OS 7_0 like Mac OS X) AppleWebKit/537.51.1 (KHTML, like Gecko) Version/7.0 Mobile/11A4449d Safari/9537.53"
    var iOSversion = userAgent.match(/OS (\d)/);
    // viewport units work fine in mobile Safari and webView on iOS 8+
    return iOSversion && iOSversion.length>1 && parseInt(iOSversion[1]) < 8;
  })();

  var isBadStockAndroid = (function() {
    // Android stock browser test derived from
    // http://stackoverflow.com/questions/24926221/distinguish-android-chrome-from-stock-browser-stock-browsers-user-agent-contai
    var isAndroid = userAgent.indexOf(' Android ') > -1;
    if (!isAndroid) {
      return false;
    }

    var isStockAndroid = userAgent.indexOf('Version/') > -1;
    if (!isStockAndroid) {
      return false;
    }

    var versionNumber = parseFloat((userAgent.match('Android ([0-9.]+)') || [])[1]);
    // anything below 4.4 uses WebKit without *any* viewport support,
    // 4.4 has issues with viewport units within calc()
    return versionNumber <= 4.4;
  })();

  // Do not remove the following comment!
  // It is a conditional comment used to
  // identify old Internet Explorer versions

  /*@cc_on
  @if (@_jscript_version <= 10)
    isOldInternetExplorer = true;
  @end
  @*/

  // added check for IE11, since it *still* doesn't understand vmax!!!
  if (!isOldInternetExplorer) {
    isOldInternetExplorer = !!navigator.userAgent.match(/Trident.*rv[ :]*11\./);
  }
  function debounce(func, wait) {
    var timeout;
    return function() {
      var context = this;
      var args = arguments;
      var callback = function() {
        func.apply(context, args);
      };

      clearTimeout(timeout);
      timeout = setTimeout(callback, wait);
    };
  }

  // from http://stackoverflow.com/questions/326069/how-to-identify-if-a-webpage-is-being-loaded-inside-an-iframe-or-directly-into-t
  function inIframe() {
    try {
      return window.self !== window.top;
    } catch (e) {
      return true;
    }
  }

  function initialize(initOptions) {
    if (initialized) {
      return;
    }

    if (initOptions === true) {
      initOptions = {
        force: true
      };
    }

    options = initOptions || {};
    options.isMobileSafari = isMobileSafari;
    options.isBadStockAndroid = isBadStockAndroid;

    if (!options.force && !isMobileSafari && !isOldInternetExplorer && !isBadStockAndroid && !isOperaMini && (!options.hacks || !options.hacks.required(options))) {
      // this buggyfill only applies to mobile safari, IE9-10 and the Stock Android Browser.
      return;
    }

    options.hacks && options.hacks.initialize(options);

    initialized = true;
    styleNode = document.createElement('style');
    styleNode.id = 'patched-viewport';
    document.head.appendChild(styleNode);

    // Issue #6: Cross Origin Stylesheets are not accessible through CSSOM,
    // therefore download and inject them as <style> to circumvent SOP.
    importCrossOriginLinks(function() {
      var _refresh = debounce(refresh, options.refreshDebounceWait || 100);
      // doing a full refresh rather than updateStyles because an orientationchange
      // could activate different stylesheets
      window.addEventListener('orientationchange', _refresh, true);
      // orientationchange might have happened while in a different window
      window.addEventListener('pageshow', _refresh, true);

      if (options.force || isOldInternetExplorer || inIframe()) {
        window.addEventListener('resize', _refresh, true);
        options._listeningToResize = true;
      }

      options.hacks && options.hacks.initializeEvents(options, refresh, _refresh);

      refresh();
    });
  }

  function updateStyles() {
    styleNode.textContent = getReplacedViewportUnits();
    // move to the end in case inline <style>s were added dynamically
    styleNode.parentNode.appendChild(styleNode);
  }

  function refresh() {
    if (!initialized) {
      return;
    }

    findProperties();

    // iOS Safari will report window.innerWidth and .innerHeight as 0 unless a timeout is used here.
    // TODO: figure out WHY innerWidth === 0
    setTimeout(function() {
      updateStyles();
    }, 1);
  }

  function findProperties() {
    declarations = [];
    forEach.call(document.styleSheets, function(sheet) {
      if (sheet.ownerNode.id === 'patched-viewport' || !sheet.cssRules || sheet.ownerNode.getAttribute('data-viewport-units-buggyfill') === 'ignore') {
        // skip entire sheet because no rules are present, it's supposed to be ignored or it's the target-element of the buggyfill
        return;
      }

      if (sheet.media && sheet.media.mediaText && window.matchMedia && !window.matchMedia(sheet.media.mediaText).matches) {
        // skip entire sheet because media attribute doesn't match
        return;
      }

      forEach.call(sheet.cssRules, findDeclarations);
    });

    return declarations;
  }

  function findDeclarations(rule) {
    if (rule.type === 7) {
      var value;

      // there may be a case where accessing cssText throws an error.
      // I could not reproduce this issue, but the worst that can happen
      // this way is an animation not running properly.
      // not awesome, but probably better than a script error
      // see https://github.com/rodneyrehm/viewport-units-buggyfill/issues/21
      try {
        value = rule.cssText;
      } catch(e) {
        return;
      }

      viewportUnitExpression.lastIndex = 0;
      if (viewportUnitExpression.test(value)) {
        // KeyframesRule does not have a CSS-PropertyName
        declarations.push([rule, null, value]);
        options.hacks && options.hacks.findDeclarations(declarations, rule, null, value);
      }

      return;
    }

    if (!rule.style) {
      if (!rule.cssRules) {
        return;
      }

      forEach.call(rule.cssRules, function(_rule) {
        findDeclarations(_rule);
      });

      return;
    }

    forEach.call(rule.style, function(name) {
      var value = rule.style.getPropertyValue(name);
      viewportUnitExpression.lastIndex = 0;
      if (viewportUnitExpression.test(value)) {
        declarations.push([rule, name, value]);
        options.hacks && options.hacks.findDeclarations(declarations, rule, name, value);
      }
    });
  }

  function getReplacedViewportUnits() {
    dimensions = getViewport();

    var css = [];
    var buffer = [];
    var open;
    var close;

    declarations.forEach(function(item) {
      var _item = overwriteDeclaration.apply(null, item);
      var _open = _item.selector.length ? (_item.selector.join(' {\n') + ' {\n') : '';
      var _close = new Array(_item.selector.length + 1).join('\n}');

      if (!_open || _open !== open) {
        if (buffer.length) {
          css.push(open + buffer.join('\n') + close);
          buffer.length = 0;
        }

        if (_open) {
          open = _open;
          close = _close;
          buffer.push(_item.content);
        } else {
          css.push(_item.content);
          open = null;
          close = null;
        }

        return;
      }

      if (_open && !open) {
        open = _open;
        close = _close;
      }

      buffer.push(_item.content);
    });

    if (buffer.length) {
      css.push(open + buffer.join('\n') + close);
    }

    // Opera Mini messes up on the content hack (it replaces the DOM node's innerHTML with the value).
    // This fixes it. We test for Opera Mini only since it is the most expensive CSS selector
    // see https://developer.mozilla.org/en-US/docs/Web/CSS/Universal_selectors
    if (isOperaMini) {
      css.push('* { content: normal !important; }');
    }

    return css.join('\n\n');
  }

  function overwriteDeclaration(rule, name, value) {
    var _value;
    var _selectors = [];

    _value = value.replace(viewportUnitExpression, replaceValues);

    if (options.hacks) {
      _value = options.hacks.overwriteDeclaration(rule, name, _value);
    }

    if (name) {
      // skipping KeyframesRule
      _selectors.push(rule.selectorText);
      _value = name + ': ' + _value + ';';
    }

    var _rule = rule.parentRule;
    while (_rule) {
      _selectors.unshift('@media ' + _rule.media.mediaText);
      _rule = _rule.parentRule;
    }

    return {
      selector: _selectors,
      content: _value
    };
  }

  function replaceValues(match, number, unit) {
    var _base = dimensions[unit];
    var _number = parseFloat(number) / 100;
    return (_number * _base) + 'px';
  }

  function getViewport() {
    var vh = window.innerHeight;
    var vw = window.innerWidth;

    return {
      vh: vh,
      vw: vw,
      vmax: Math.max(vw, vh),
      vmin: Math.min(vw, vh)
    };
  }

  function importCrossOriginLinks(next) {
    var _waiting = 0;
    var decrease = function() {
      _waiting--;
      if (!_waiting) {
        next();
      }
    };

    forEach.call(document.styleSheets, function(sheet) {
      if (!sheet.href || origin(sheet.href) === origin(location.href)) {
        // skip <style> and <link> from same origin
        return;
      }

      _waiting++;
      convertLinkToStyle(sheet.ownerNode, decrease);
    });

    if (!_waiting) {
      next();
    }
  }

  function origin(url) {
    return url.slice(0, url.indexOf('/', url.indexOf('://') + 3));
  }

  function convertLinkToStyle(link, next) {
    getCors(link.href, function() {
      var style = document.createElement('style');
      style.media = link.media;
      style.setAttribute('data-href', link.href);
      style.textContent = this.responseText;
      link.parentNode.replaceChild(style, link);
      next();
    }, next);
  }

  function getCors(url, success, error) {
    var xhr = new XMLHttpRequest();
    if ('withCredentials' in xhr) {
      // XHR for Chrome/Firefox/Opera/Safari.
      xhr.open('GET', url, true);
    } else if (typeof XDomainRequest !== 'undefined') {
      // XDomainRequest for IE.
      xhr = new XDomainRequest();
      xhr.open('GET', url);
    } else {
      throw new Error('cross-domain XHR not supported');
    }

    xhr.onload = success;
    xhr.onerror = error;
    xhr.send();
    return xhr;
  }

  return {
    version: '0.5.0',
    findProperties: findProperties,
    getCss: getReplacedViewportUnits,
    init: initialize,
    refresh: refresh
  };

}));

viewportUnitsBuggyfill.init();
