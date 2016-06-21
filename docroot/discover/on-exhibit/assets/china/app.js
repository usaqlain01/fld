

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
$(function(){
	$(".moduleContainer").data("header-buffer", -1 * $(".stickyHeader").outerHeight());
})
;

window.common = window.common || {};
window.common.anchorScrollGraceful = {};

$(function() {

	common.anchorScrollGraceful.scrollTo = function(target, margin, duration, callback) {

		margin = margin || 0;
		duration = duration || 500;
		if (target.length) {
			window.common.anchorScrollGraceful.scrolling = true;
			$('html,body').animate({
				scrollTop: target.offset().top + margin
			}, {duration: duration, easing: 'easeInOutExpo', done: function() {
				window.common.anchorScrollGraceful.scrolling = false;
				if ($.isFunction(callback)) callback();
			} });
			return false;
		}	
	}

	$("a[href*=#]").click(function(e) {
		e.preventDefault();
		var target = $(this.hash);
		var margin = target.data("header-buffer");
		var duration = target.data("graceful-scroll-duration");
		common.anchorScrollGraceful.scrollTo(target, margin, duration);
	});
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
(function () {
	window.common = window.common || {};
	window.common.viewport = {};

	$window = $(window);

	var trackedObjects = {};

	var getBoundaries = function(selector, element){
		element = element || $(selector)
		var top = element.offset().top;
		var height = element.outerHeight();
		return {
			selector : selector,
			$ : element,
			top: top,
			bottom: top + height,
			height: height
		};
	}

	window.common.viewport.track = function(selector){
		if (!trackedObjects[selector]) {
			trackedObjects[selector] = getBoundaries(selector);
		}
		//otherwise it's already in there and we do nothing
	}

	var scrollingElement = document;
	var windowHeight = $(window).height();


	$window.resize(function(){
		$.each(trackedObjects, function(index, element) {
			trackedObjects[index] = getBoundaries(index, element.$);
		})
		windowHeight = $window.height();
	})

	window.common.viewport.setScrollingElement = function(selector) {
		scrollingElement = selector;
	}

	window.common.viewport.isIn = function(selector, scrollTop, noTracking) {
		if (!noTracking)
			common.viewport.track(selector);
		scrollTop =  isNaN(scrollTop) ? $(scrollingElement).scrollTop() : scrollTop;
		var boundaries = trackedObjects[boundaries] || getBoundaries(selector);
		return scrollTop + windowHeight > boundaries.top 
			&& boundaries.bottom > scrollTop;
	}

	window.common.viewport.fills = function(selector, scrollTop, noTracking) {
		if (!noTracking)
			common.viewport.track(selector);
		scrollTop =  isNaN(scrollTop) ? $(scrollingElement).scrollTop() : scrollTop;
		var boundaries = trackedObjects[boundaries] || getBoundaries(selector);
		return scrollTop > boundaries.top 
			&& boundaries.bottom > scrollTop + windowHeight;
	}

	window.common.viewport.breakpoints = {
		0: 	{
				name: "phone",
				mq: null
			},
		751: {
				name: "tablet",
				mq: null
			},
		1026: {
				name: "desktop",
				mq: null
			},
	}

	window.common.viewport.size = function() {
		var maxMatched = 0;
		for (var key in common.viewport.breakpoints) {
			var bp = common.viewport.breakpoints[key].mq = common.viewport.breakpoints[key].mq || window.matchMedia("(min-width: " + key + "px)");
			if (bp.matches)
				maxMatched = Math.max(parseInt(key), maxMatched);
		};
		return common.viewport.breakpoints[maxMatched].name;
	};

})();

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




(function () {

	var tracked = {};
	var fillTracked = {};

	var enterCallbacks = {}
	var exitCallbacks = {}

	var fillEnterCallbacks = {}
	var fillExitCallbacks = {}

	/*
	var breakpointEnterCallbacks = {}
	var breakpointExitCallbacks = {}
	*/

	var breakpointChangeCallbacks = []


	window.common.viewport.onEnter = function(selector, callback) {
		tracked[selector] = window.common.viewport.isIn(selector);
		enterCallbacks[selector] = enterCallbacks[selector] || [];
		enterCallbacks[selector].push(callback);
	}

	window.common.viewport.onExit = function(selector, callback) {
		tracked[selector] = window.common.viewport.isIn(selector);
		exitCallbacks[selector] = exitCallbacks[selector] || []
		exitCallbacks[selector].push(callback);
	}
	window.common.viewport.onFill = function(selector, callback) {
		fillTracked[selector] = window.common.viewport.fills(selector);
		fillEnterCallbacks[selector] = fillEnterCallbacks[selector] || [];
		fillEnterCallbacks[selector].push(callback);
	}

	window.common.viewport.onUnfill = function(selector, callback) {
		fillTracked[selector] = window.common.viewport.fills(selector);
		fillExitCallbacks[selector] = fillExitCallbacks[selector] || []
		fillExitCallbacks[selector].push(callback);
	}

	/*
	window.common.viewport.onBreakpointEnter = function(breakpointName, callback){
		breakpointEnterCallbacks[breakpointName] = breakpointEnterCallbacks[breakpointName] || [];
		breakpointEnterCallbacks[breakpointName].push(callback);
	}

	window.common.viewport.onBreakpointExit = function(breakpointName, callback){
		breakpointExitCallbacks[breakpointName] = breakpointExitCallbacks[breakpointName] || [];
		breakpointExitCallbacks[breakpointName].push(callback);
	}*/

	window.common.viewport.onBreakpointChanged = function(callback){
		breakpointChangeCallbacks = breakpointChangeCallbacks || [];
		breakpointChangeCallbacks.push(callback);
	}


	common.viewport.size() //hack

	for (var key in common.viewport.breakpoints) {
		(function(){
			var bp = common.viewport.breakpoints[key];
			var mq = bp.mq;
			mq.addListener(function(){
				$.each(breakpointChangeCallbacks, function(index, callback){
					callback();
				});
				/*
				if (this.matches) {
					console.log(bp.name + " " + "in")
				}
				else {
					console.log(bp.name + " " + "out")
				}*/
			});
		})();
	}


	window.common.onScroll(function(down, docScrollTop, lastScrollTop){
		//debugger;
		$.each(enterCallbacks, function(index, element){
			if (window.common.viewport.isIn(index, docScrollTop) && 
				(docScrollTop == lastScrollTop || !window.common.viewport.isIn(index, lastScrollTop)))
				$.each(element, function(index, callback){
					callback(down);
				});
		});
		$.each(exitCallbacks, function(index, element){
			if (!window.common.viewport.isIn(index, docScrollTop) &&
				(docScrollTop == lastScrollTop || window.common.viewport.isIn(index, lastScrollTop)))
				$.each(element, function(index, callback){
					callback(down);
				});
		});
		$.each(fillEnterCallbacks, function(index, element){
			if (window.common.viewport.fills(index, docScrollTop) && 
				(docScrollTop == lastScrollTop || !window.common.viewport.fills(index, lastScrollTop)))
				$.each(element, function(index, callback){
					callback(down);
				});
		});
		$.each(fillExitCallbacks, function(index, element){
			if (!window.common.viewport.fills(index, docScrollTop) &&
				(docScrollTop == lastScrollTop || window.common.viewport.fills(index, lastScrollTop)))
				$.each(element, function(index, callback){
					callback(down);
				});
		});
	});
})();


(function(){

	window.common = window.common || {};
	window.common.urlState = {};

	window.common.urlState.set = function(path) {
		if (window.history.pushState) {

			window.history.pushState(null, null, path);
			stateChanged();
			return false;
		}
		else {
			return true;
		}
	}

	var onChangeCallbacks = []

	window.common.urlState.onChange = function(callback) {
		onChangeCallbacks.push(callback);
	}

	var stateChanged = function(event, path){
		var path = location.pathname;
		for (var index in onChangeCallbacks) {
			onChangeCallbacks[index](path);
		};
	}
	$(function(){
		$(window).on("popstate", stateChanged);
	})

})();







window.common.analytics.scrollDown = function(pageNum) {
	window.common.analytics.event("one-page", "scroll-down", "page-" + pageNum, true)
}
window.common.analytics.moduleHover = function(link, overrideText) {
	var text = overrideText || $.trim($(link).text());
	window.common.analytics.event("one-page-menu", "hover", text, true)
}
window.common.analytics.moduleClick = function(link, overrideText) {
	var text = overrideText || $.trim($(link).text());
	window.common.analytics.event("one-page-menu", "click", text)
}
window.common.analytics.videoEvent = function(eventName, clipName) {
	window.common.analytics.event("one-page", "video-" + eventName, clipName)
}
window.common.analytics.videoEventNoninteraction = function(eventName, clipName) {
	window.common.analytics.event("one-page", "video-" + eventName, clipName, true)
}
window.common.analytics.catalogClick = function(link) {
	var text = $(link).text();
	window.common.analytics.event("one-page", "catalog-click", text);
}
window.common.analytics.footerHover = function(link, overrideText) {
	var text = overrideText || $.trim($(link).text());
	window.common.analytics.event("one-page", "footer-hover", text, true)
}

common.analytics.navClick = function(dis) {
	var text = $(dis).find("figcaption h2").text();
	if ($("body").hasClass("somethingSelected")) {
		common.analytics.footerClick(null, text)
	}
	else {
		common.analytics.moduleClick(null, text)
	}
}

$(function(){
	var $body = $("body");
	common.viewport.onEnter(".sharedStories .teaser", function(down){
		if (down && !$body.hasClass("somethingSelected")) { //hacky
			common.analytics.scrollDown(1)
		}
	});
	common.viewport.onEnter("footer", function(down){
		if (down && !$body.hasClass("somethingSelected")) { //hacky
			common.analytics.scrollDown(2)
		}
	});
	$(".module .teaser").on("mouseover", function(){
		var text = $(this).find("figcaption h2").text();
		if ($body.hasClass("somethingSelected")) {
			common.analytics.footerHover(null, text)
		}
		else {
			common.analytics.moduleHover(null, text)
		}
	})
	var videoEvents = ["play",
		"pause",
		"resume",
		"replay",
		"scroll-in",
		"scroll-pause",
		"scroll-resume",
		"pause-other-played",
		"pause-navigate",
		"scrub",
		"volume",
		"stop",
		"watch-50%",
		"watch-100%"]

	$(".playerContainer video").each(function(i, player){
		$.each(videoEvents, function(i, eventName){
			$(player).on("china-player-" + eventName, function(e, param){
				common.analytics.videoEvent(eventName, param)
			})
		})
		
	})
})
;
/*!

 MyFonts Webfont Build ID 3029314, 2015-05-20T17:40:21-0400

 The fonts listed in this notice are subject to the End User License
 Agreement(s) entered into by the website owner. All other parties are 
 explicitly restricted from using the Licensed Webfonts(s).

 You may obtain a valid license at the URLs below.

 Webfont: FF Bau Web by FontFont
 URL: http://www.myfonts.com/fonts/fontfont/bau-pro/ot-regular/

 Webfont: FF Bau Web Italic by FontFont
 URL: http://www.myfonts.com/fonts/fontfont/bau-pro/ot-regular-italic/

 Webfont: FF Bau Web Bold by FontFont
 URL: http://www.myfonts.com/fonts/fontfont/bau-pro/ot-bold/


 License: http://www.myfonts.com/viewlicense?type=web&buildid=3029314
 Licensed pageviews: 50,000
 Webfonts copyright: 2010 published by FontShop International GmbH

 ? 2015 MyFonts Inc
*/

var customPath = "/discover/on-exhibit/china/";

var browserName,browserVersion,webfontType;if("undefined"==typeof woffEnabled)var woffEnabled=!0;var svgEnabled=1,woff2Enabled=1;if("undefined"!=typeof customPath)var path=customPath;else{var scripts=document.getElementsByTagName("SCRIPT"),script=scripts[scripts.length-1].src;script.match("://")||"/"==script.charAt(0)||(script="./"+script);path=script.replace(/\\/g,"/").replace(/\/[^\/]*\/?$/,"")}
var wfpath=path+"/webfonts/",browsers=[{regex:"MSIE (\\d+\\.\\d+)",versionRegex:"new Number(RegExp.$1)",type:[{version:9,type:"woff"},{version:5,type:"eot"}]},{regex:"Trident/(\\d+\\.\\d+); (.+)?rv:(\\d+\\.\\d+)",versionRegex:"new Number(RegExp.$3)",type:[{version:11,type:"woff"}]},{regex:"Firefox[/s](\\d+\\.\\d+)",versionRegex:"new Number(RegExp.$1)",type:[{version:3.6,type:"woff"},{version:3.5,type:"ttf"}]},{regex:"Chrome/(\\d+\\.\\d+)",versionRegex:"new Number(RegExp.$1)",type:[{version:36,type:"woff2"},
{version:6,type:"woff"},{version:4,type:"ttf"}]},{regex:"Mozilla.*Android (\\d+\\.\\d+).*AppleWebKit.*Safari",versionRegex:"new Number(RegExp.$1)",type:[{version:4.1,type:"woff"},{version:3.1,type:"svg#wf"},{version:2.2,type:"ttf"}]},{regex:"Mozilla.*(iPhone|iPad).* OS (\\d+)_(\\d+).* AppleWebKit.*Safari",versionRegex:"new Number(RegExp.$2) + (new Number(RegExp.$3) / 10)",unhinted:!0,type:[{version:5,type:"woff"},{version:4.2,type:"ttf"},{version:1,type:"svg#wf"}]},{regex:"Mozilla.*(iPhone|iPad|BlackBerry).*AppleWebKit.*Safari",
versionRegex:"1.0",type:[{version:1,type:"svg#wf"}]},{regex:"Version/(\\d+\\.\\d+)(\\.\\d+)? Safari/(\\d+\\.\\d+)",versionRegex:"new Number(RegExp.$1)",type:[{version:5.1,type:"woff"},{version:3.1,type:"ttf"}]},{regex:"Opera/(\\d+\\.\\d+)(.+)Version/(\\d+\\.\\d+)(\\.\\d+)?",versionRegex:"new Number(RegExp.$3)",type:[{version:24,type:"woff2"},{version:11.1,type:"woff"},{version:10.1,type:"ttf"}]}],browLen=browsers.length,suffix="",i=0;
a:for(;i<browLen;i++){var regex=RegExp(browsers[i].regex);if(regex.test(navigator.userAgent)){browserVersion=eval(browsers[i].versionRegex);var typeLen=browsers[i].type.length;for(j=0;j<typeLen;j++)if(browserVersion>=browsers[i].type[j].version&&(!0==browsers[i].unhinted&&(suffix="_unhinted"),webfontType=browsers[i].type[j].type,"woff"!=webfontType||woffEnabled)&&("woff2"!=webfontType||woff2Enabled)&&("svg#wf"!=webfontType||svgEnabled))break a}else webfontType="woff"}
/(Macintosh|Android)/.test(navigator.userAgent)&&"svg#wf"!=webfontType&&(suffix="_unhinted");var head=document.getElementsByTagName("head")[0],stylesheet=document.createElement("style");stylesheet.setAttribute("type","text/css");head.appendChild(stylesheet);
for(var fonts=[{fontFamily:"FFBauWeb",url:wfpath+"2E3942_0"+suffix+"_0."+webfontType},{fontFamily:"FFBauWebItalic",url:wfpath+"2E3942_1"+suffix+"_0."+webfontType},{fontFamily:"FFBauWebBold",url:wfpath+"2E3942_2"+suffix+"_0."+webfontType}],len=fonts.length,css="",i=0;i<len;i++){var format="svg#wf"==webfontType?'format("svg")':"ttf"==webfontType?'format("truetype")':"eot"==webfontType?"":'format("'+webfontType+'")',css=css+("@font-face{font-family: "+fonts[i].fontFamily+";src:url("+fonts[i].url+")"+
format+";");fonts[i].fontWeight&&(css+="font-weight: "+fonts[i].fontWeight+";");fonts[i].fontStyle&&(css+="font-style: "+fonts[i].fontStyle+";");css+="}"}stylesheet.styleSheet?stylesheet.styleSheet.cssText=css:stylesheet.innerHTML=css;
china = {};
$(function(){
	/*
	* Global variables
	*/
	var doc = document,
		win = window,
		body = doc.body,

		$window = $(win),
		$html = $('html'),

		headerHeight 	= $('.stickyHeader').height(),
		$stickyHeader	= $('.stickyHeader'),
		$navPrimary 	= $('.nav--primary'),

		_enabled = true;

	window.china.mobileNav = {
		enable: function(){
			_enabled = true;
		},
		disable: function(){
			if (common.viewport.size() === 'desktop')
				$stickyHeader.addClass('is-visible is-fixed');
			_enabled = false;
		}
	};

	// Mobile Nav Javascript
	if (common.viewport.size() === 'desktop') {
		common.onScroll(function(down, currentTop){
			if (_enabled) {
				if (down) {
					$stickyHeader.removeClass('is-visible');
					if(currentTop > headerHeight && !$stickyHeader.hasClass('is-fixed')) $stickyHeader.addClass('is-fixed');
				} else {
					if (currentTop > 0 && $stickyHeader.hasClass('is-fixed')) {
						$stickyHeader.addClass('is-visible');
					} else {
						$stickyHeader.removeClass('is-visible is-fixed');
					}
				}
			}
		});
	}

	//open/close primary navigation
	$('.nav__trigger').on('click', function(){

		$('.menu__icon').toggleClass('is-clicked');
		$stickyHeader.toggleClass('menu-is-open');

		// in firefox transitions break when parent overflow is changed,
		// so we need to wait for the end of the trasition to give the body an overflow hidden
		if( $navPrimary.hasClass('is-visible') ) {
			$navPrimary.removeClass('is-visible').one('webkitTransitionEnd otransitionend oTransitionEnd msTransitionEnd transitionend',function(){
				$('body').removeClass('overflow-hidden');
			});
		} else {
			$navPrimary.addClass('is-visible').one('webkitTransitionEnd otransitionend oTransitionEnd msTransitionEnd transitionend',function(){
				$('body').addClass('overflow-hidden');
			});
		}
	});

})
;
// Returns a function, that, as long as it continues to be invoked, will not
// be triggered. The function will be called after it stops being called for
// N milliseconds. If `immediate` is passed, trigger the function on the
// leading edge, instead of the trailing.
window.common.debounce = function (func, wait, immediate) {
	var timeout;
	return function() {
		var context = this, args = arguments;
		var later = function() {
			timeout = null;
			if (!immediate) func.apply(context, args);
		};
		var callNow = immediate && !timeout;
		clearTimeout(timeout);
		timeout = setTimeout(later, wait);
		if (callNow) func.apply(context, args);
	};
};



china.scrollPanels = null;

(function(){
	function ScrollPanels() {
		var _this = this;

		var _enabled = true;
		var $document;

		_this.enabled = function(param){
			if (param != null)
				_enabled = param;
		}

		_this.isEnabled = function() {
			return _enabled && common.viewport.size() === 'desktop'
		}

		var sections = [];
		var sectionIndex = 0;

		var samples = []
		var maxSamples = 20;

		var clearSamplesInterval = null;
		var clearSamplesCountdown = null;

		var isAccelerating = function(){

			var earlier = 0, later = 0;
			var half = samples.length / 2;
			if (half < maxSamples / 2)
				return false;
			$.each(samples,function(i) {
				if (i > half)
					earlier += this;
				else
					later += this;
			});

			//console.log((earlier / half) > (later / half));
			return (earlier / half) > (later / half);
		}

		var wheel = function(down, delta) {
			clearInterval(clearSamplesInterval);

			//console.log(delta)
			samples.push(Math.abs(delta));
			//console.log(samples);
			while (samples.length > maxSamples)
				samples.shift();

			if (down != lastWheelDown) {
				//console.log("wheel changed direction to " + (down ? "down" : "up"))
				nav(down);
				samples = []
				wasAccelerating = true;
			}

			if (isAccelerating()) {
				if (!wasAccelerating) {
					wasAccelerating = true;
					nav(down);
				}
			}
			else {
				wasAccelerating = false;
			}
			lastWheelDown = down;

			clearSamplesCountdown = maxSamples
			clearSamplesInterval = setInterval(function(){

				samples.push(0);
				while (samples.length > maxSamples)
					samples.shift();

				if (!clearSamplesCountdown--)
					clearInterval(clearSamplesInterval)
				//console.log(samples);
			}, 10)
		}

		var timeout;

		var didScrollWhileThisMouseDown = false;
		var wasAccelerating = false;

		var lastWheelDown = null;

		var navigating = false;
		var navigatingDown = null;

		var nav = function(down) {
			if (!navigating /*|| navigatingDown != down*/) {
				navigating = true;
				navigatingDown = down;
				//console.log("nav " + (down ? "down" : "up"))

				var newSectionIndex = Math.min(Math.max(sectionIndex + (down ? 1 : -1), 0), sections.length - 1);
				//console.log(newSectionIndex);

				if (newSectionIndex != sectionIndex) {
					sectionIndex = newSectionIndex
					common.anchorScrollGraceful.scrollTo($(sections[sectionIndex]), -80, null, function(){
						navigating = false;
					});
				} else {
					navigating = false;
				}
			}
		}

		var navTo = function(index) {
			navigating = true;

			//navigating down?

			sectionIndex = index;
			common.anchorScrollGraceful.scrollTo($(sections[index]), -80, null, function(){
				navigating = false;
			});
		}

		var scrollToNearest = function(){
			var docScrollTop = $document.scrollTop();

			var sectionToScrollTo = null;

			var lastDistance = null;
			sections.each(function(index){
				var sectionTop = $(this).offset().top
				var thisDistance = Math.abs(docScrollTop - sectionTop);

				if (lastDistance != null && thisDistance > lastDistance) {
					sectionToScrollTo = index - 1;
					return false;
				}
				lastDistance = thisDistance;
			})
			sectionToScrollTo = sectionToScrollTo == null ? sections.length - 1 : sectionToScrollTo;
			navTo(sectionToScrollTo);
		}


		var _init = function(){
			$document = $(document);

			sections = $(".scrollSnapSection");

			//capture wheel event and prevent default
			$document.on("wheel", function(e){
				if (!_this.isEnabled()) return true;

				var delta = e.originalEvent.wheelDelta || (-1 * e.originalEvent.deltaY);
				if (Math.abs(delta) > 3)
					wheel(delta < 0, delta);
				return false;
			});

			$document.on("mousedown", function(){
				if (!_this.isEnabled()) return true;

				$(document).on("scroll.scrollpanels", function(){
					if (!_this.isEnabled()) return true;

					didScrollWhileThisMouseDown = true;
				});
			});
			var resizeDebouncedFunc = common.debounce(function(){
				if (!_this.isEnabled()) return true;

				scrollToNearest();
			}, 250)
			$window.on("resize", function(){
				resizeDebouncedFunc();
			})
			$document.on("mouseup", function(){
				if (!_this.isEnabled()) return true;

				if (didScrollWhileThisMouseDown) {
					scrollToNearest();
				}
				$(document).off(".scrollpanels");
				didScrollWhileThisMouseDown = false;
			});
			$document.on("keydown", function(e){
				if (!_this.isEnabled()) return true;

				switch(e.which) {
					case 40 : nav(true); return false; // down arrow
					case 38 : nav(false); return false; // up arrow
					case 34 : nav(true); return false; // page down
					case 33 : nav(false); return false; // page up
					case 32 : nav(true); return false; // spacebar
				}

			});

			delete _init;
		}

		_init();
	}

	$(function(){
		china.scrollPanels = new ScrollPanels();
	})

})();




$(function(){

	var $body = $("body");

	var getStub = function(path) {
		return path.replace(/\/$/, "").split("/").pop();
	}

	var setOtherScriptState = function(stub){

		var isHomepage = (stub == "china");
		if (isHomepage) {
			$body.removeClass("somethingSelected")
			china.mobileNav.disable();
		}
		else {
			$body.addClass("somethingSelected")
			china.mobileNav.enable();
		}

		china.scrollPanels.enabled(isHomepage)
	}

	var setPageState = function(path) {
		var stub = getStub(path);

		setOtherScriptState(stub)

		$(".selected").removeClass("selected");
		$(".stub--" + stub).addClass("selected");
		$(document).scrollTop(0);
		common.analytics.changePage();
	}

	common.urlState.onChange(setPageState);

	setOtherScriptState(getStub(location.pathname)) //now
});

$(function(){

	china.bitShaver = {};
	china.bitShaver.enableImage = function(img) {
		img.attr("src", img.attr("data-src"));
		img.attr("srcset", img.attr("data-srcset"));
	}
	china.bitShaver.enableVideo = function(source) {
		var parent = source.parent();
		source.detach();
		source.attr("src", source.attr("data-src"));
		source.attr("data-src", "");
		parent.append(source);
	}

	var getSize = function(){
		var cvs = common.viewport.size();
		return cvs == 'tablet' ? 'desktop' : cvs;
	}

	var showImages = function(path){
		$(".selected, .moduleContainer")
			.find("img").each(function(){
				var dis = $(this);
				if (!dis.hasClass("phone") && !dis.hasClass("desktop"))
					china.bitShaver.enableImage(dis);
				else if (dis.hasClass(getSize()))
					china.bitShaver.enableImage(dis);
			});

		$(".selected").find(".playerContainer:not(.playerContainer--full) video source").each(function(){
			china.bitShaver.enableVideo($(this))
		});
	}

	common.urlState.onChange(showImages);
	common.viewport.onBreakpointChanged(showImages);
	
	showImages();
});



(function(){

	function Player(containerParam) {
		var _this = this;

		const scrollPauseTimeout = 5000;

		var idle = null;
		var isPlaying = null;
		var container = null;
		var player = null;
		var $player = null;
		var $time = null;
		var $played = null;
		var lastStoppedByScroll = null;

		var hasPlayed = false;
		var hasEnded = false;

		var last = 0;

		var _isPersonPlayer = null;

		var volumeRough = null;
		var volumePrecise = null;


		var now = function(){
			return new Date().getTime();
		}

		var isPersonPlayer = function(){
			return _isPersonPlayer;
		}
		var isFullPlayer = function(){
			return !_isPersonPlayer;
		}

		var triggerEvent = function(eventName){
			$player.trigger("china-player-" + eventName, $player.attr("id"));
		}

		_this.isPlaying = function(){
			return isPlaying;
		}

		_this.setIdle = function(){
			container.addClass("muted");
			player.muted = true;
			player.loop = true;
			idle = true;
			isPlaying = false;
		}

		_this.play = function(){

			if (idle) {
				container.removeClass("muted");
				player.currentTime = 0;
				player.muted = false;
				player.loop = false;
				idle = false;
			}

			if (!hasPlayed) {
				triggerEvent("play");
				hasPlayed = true;
			}
			else if (hasEnded){
				triggerEvent("replay");
			}
			else {
				triggerEvent("resume");
			}

			container.removeClass("paused stopped ended");

			$.each(china.players, function(){
				this.clearLastScrollStop();
				if (this.isPlaying() && _this != this){
					triggerEvent("pause-other-played");
					this.pause();
				}				
			});
			player.play();
			isPlaying = true;
		}


		_this.pause = function(){
			if (isPlaying) {
				_pause();
			}
		}

		_this.clearLastScrollStop = function() {
			lastStoppedByScroll = 0;
		}

		_this.pauseLeavePage = function(){
			if (isPlaying) {
				_pause();
				triggerEvent("pause-navigate");
			}
		}

		var _pause = function() {
			container.removeClass("ended immediate"); // ended, so it doesn't say "play" during the animation, immediate, so the animation comes back on the play button 
			
			container.addClass("paused")
			player.pause();
			isPlaying = false;
		}

		_this.ended = function() {
			container.removeClass("immediate")
			container.addClass("paused ended")
			if (isFullPlayer()) {
				container.addClass("stopped");
			}
			isPlaying = false;
			triggerEvent("watch-100%");
			hasEnded = true;
		}

		_this.error = function() {
			container.addClass("error")
		}

		_this.setTime = function(time){
			if (isPlaying && last / player.duration < .5 && time / player.duration >= .5) {
				triggerEvent("watch-50%");
			}
			var floored = Math.floor(time);
			$time.text(Math.floor(floored / 60.0) + ":" + ("0" + (floored % 60)).slice(-2));
			last = time;
		}
		var asPercentOfDuration = function(currentTime, round, minus){
			var currentTime = currentTime;
			var duration = player.duration;

			var percentage  = (currentTime * 100.0) / duration ;

			var percentageAdjustedForSize = percentage * (minus ? -1 : 1) + (minus ? 100 : 0);
			var percentageRounded = round ? Math.round(percentageAdjustedForSize / 2) * 2 : percentageAdjustedForSize;

			return percentageRounded + "%";
		}
		_this.updateProgress = function(){

			if (!isPlaying)
				return;

			var duration = player.duration;
			var loadeds = container.find(".loaded")

			if (player.buffered.length != loadeds.length){
				loadeds.remove();
				var progress = container.find(".progress")
				for (var i = 0; i < player.buffered.length; i++) {
					progress.append("<span class=\"loaded\"></span>");
				};
				loadeds = container.find(".loaded");
			}
			for (var i = 0; i < player.buffered.length; i++) {
				loadeds.eq(i).css({
					"left": asPercentOfDuration(player.buffered.start(i), true),
					"right": asPercentOfDuration(player.buffered.end(i), true, true),
				})
			}
			$played.css("width", asPercentOfDuration(player.currentTime));
		}


		var setUpScrub = function($element, setCallback, marginX, pausePlayer, eventName) {
			marginX = marginX || 0;
			$element.on("mousedown", function(e){
				triggerEvent(eventName)

				var progressWidth = $(this).width();
				var downOffsetX = e.offsetX;
				var downPageX = e.pageX;
				if (pausePlayer) player.pause();

				setCallback(calculateScrubFactor(progressWidth, downOffsetX, downPageX, downPageX, marginX));

				$(document).on("mousemove.scrubbing", function(j){
					setCallback(calculateScrubFactor(progressWidth, downOffsetX, downPageX, j.pageX, marginX));
				}).on("mouseup.scrubbing", function(k){
					$(document).off(".scrubbing");

					setCallback(calculateScrubFactor(progressWidth, downOffsetX, downPageX, k.pageX, marginX));
					if (isPlaying && pausePlayer) player.play();
					isScrubbing = false;
				})
			}).on("click", function(){
				return false;
			});
		}


		var calculateScrubFactor = function(progressWidth, 
							downOffsetX, downPageX, currentPageX, marginX) {
			var currentOffset = currentPageX - downPageX + downOffsetX;
			var maxMin = Math.max(Math.min(currentOffset, progressWidth - marginX), marginX);
			return  (1.0 * maxMin - marginX) / (progressWidth - marginX * 2);
		}


		var setProgress = function(scrubFactor){
			player.currentTime = scrubFactor * player.duration;
		}
		var setVolumeBars = function(scrubFactor){
			var newVolumePrecise = scrubFactor;
			var newVolumeRough = Math.floor(scrubFactor * 4);
			if (volumeRough != newVolumeRough) {
				volumeRough = newVolumeRough;
				container.removeClass("volume-0 volume-1 volume-2 volume-3 volume-4")
					.addClass("volume-" + volumeRough);
			}
			if (volumePrecise != newVolumePrecise) {
				volumePrecise = newVolumePrecise;
				player.volume = volumePrecise;
			}
		}

		/*
		var unBitShave = function($player){
			$player.children("source").each(function(i, el){
				china.bitShaver.enableVideo($(el));
			});
			_shaved = true;
		}*/

		//this is getting some code smell, to me
		var _playClick = function(){
			if (container.hasClass("loading") || container.hasClass("error")) return false; //make loading and error vars

			if (isPlaying & !player.paused) {
				_this.pause();
				triggerEvent("pause");
			}
			else {
				if (isFullPlayer() && player.readyState < 3) {
					container.addClass("loading");

					$player.one("canplay", function(){
						container.removeClass("loading");
						_this.play();
					});

					player.load();
					return;
				}
				_this.play();
			}
		}

		var _doneSetUp = false;
		var _shaved = false;

		var onPlayerReady = function($player, container, player){
			if (_doneSetUp)
				return;
			_doneSetUp = true;

			container.removeClass("loading");

			//scroll behavior	
			var sel = "#" + $player.attr("id");
			common.viewport.onEnter(sel, function(){
				if (container.is(":visible")) { 
					if (idle) {
						player.play()
						triggerEvent("scroll-in");
					}
					else if (lastStoppedByScroll > (now() - scrollPauseTimeout)) {
						container.addClass("immediate");
						_this.play();
						triggerEvent("scroll-resume");
					}
				}
			});
			common.viewport.onExit(sel, function(){
				if (idle) {
					player.pause();
				}
				else if (isPlaying) {
					_this.pause();
					triggerEvent("scroll-pause");
					lastStoppedByScroll = now();
				}
			});
			if (common.viewport.isIn(sel) && idle) {
				player.play()
			}
		}

		var _init = function(){

			//set up basic props
			container = $(containerParam);
			$player = container.find("video");
			player = $player[0];

			$player.on("canplay", function(){
				onPlayerReady($player, container, player)
			});

			if (player.readystate > 3) {
				onPlayerReady($player, container, player)
			}

			//onclick handler
			container.click(_playClick);

			//end
			$player.on("ended", function(){
				_this.ended();
			})

			$player.on("error", function(){
				_this.error();
				container.unbind("click");
			});


			$played = container.find(".viewed");

			$player.on("timeupdate", function(){
				_this.updateProgress();
			})

			$player.on("play", function(){
				container.removeClass("paused");
			})
			
			setUpScrub(container.find(".progress"), setProgress, null, true, "scrub");

			//set isPersonPlayer
			_isPersonPlayer = container.hasClass("playerContainer--person")
			
			if (isPersonPlayer()) {
				_this.setIdle();//play it muted if person

			}
			else if (isFullPlayer()) { //set up chrome

				onPlayerReady($player, container, player)
			
				$time = container.find(".time");
				

				$player.on("timeupdate", function(){
					_this.setTime(player.currentTime)
				})

				var stopPlayer = function(){
					_this.pause();
					container.addClass("stopped");
					triggerEvent("stop");
					return false;
				}
				container.find(".player__modal").click(stopPlayer);
				//chrome setup 
				container.find(".stop").click(stopPlayer);

				container.find(".player__modal__container").click(function(){
					return false;
				});

				container.find(".playPause, .player__video").click(_playClick);


				setUpScrub(container.find(".volume"), setVolumeBars, 16, null, "volume");
			}

		}

		_init();
		delete _init;

	}

	$(function(){
		china.players = [];

		//var vimeoRedirectUrl = $(".vimeoRedirectUrl").val();
		$(".playerContainer").each(function(){
			player = new Player(this);
			china.players.push(player);
			/*var video = $(this).find("video")[0];
			var hlsSrc = $(video).attr("data-hls-src");

			if(Hls.isSupported() && hlsSrc.length) {
				console.log("blat");
				var hls = new Hls();
				hls.loadSource(vimeoRedirectUrl + "?url=" + encodeURIComponent(hlsSrc));
				hls.attachMedia(video);
				hls.on(Hls.Events.MANIFEST_PARSED,function() {
					console.log("great!")
				});
			}*/
		});

		common.urlState.onChange(function(){
			$.each(china.players, function(){
				this.pauseLeavePage();
			});
		});

		//hls.js
		
	})

})();











