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

	var seaColor = { r: 0, g: 8, b: 19, };
	var skyColor = { r: 40, g: 166, b: 225, };
	var continentColor = { r: 109, g: 207, b: 246, };
	
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

	var allColors = ["r", "g", "b"];
	var interpolateColors = function(colorOne, colorTwo, colorThree, pct) {
		if (pct == 0) {
			return colorOne;
		}
		else if (pct == 1) {
			return colorTwo;
		}
		var firstColor, secondColor;
		if (pct > 0) {
			firstColor = colorTwo;
			secondColor = colorOne;
		}
		else if (pct < 0) {
			firstColor = colorTwo;
			secondColor = colorThree;
		}
		var colorArr = []
		for (var key in allColors) {
			var color = allColors[key];
			colorArr.push(Math.round(interpolate(Math.abs(pct), 1, 0, firstColor[color], secondColor[color])));
		}
		return "rgb(" + colorArr.join(",") + ")";
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


//make sure all scroll callbacks fire on first load
$(function(){ 
	$(document).scroll();
});
$(window).resize(function(){ 
	$(document).scroll();
});

