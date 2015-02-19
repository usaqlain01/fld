"use strict";

window.vikings = {};

//set up margin
(function () {
	var sectionFrontMargin = 20;

	$(function(){
		sectionFrontMargin += ($(".whoTheyWere").outerHeight() / 2);
	});

	window.vikings.sectionFrontMargin = function(target){
		return target.find(".whoTheyWere, .discoverMore").length ? sectionFrontMargin : 0;
	}

})();


//scroll infrastructure
(function () {

	var scrollCallbacks = [];

	function onScroll(callback){
		scrollCallbacks.push(callback);
	}

	window.vikings.onScroll = onScroll;

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
		if (push)
			history.pushState({ }, newHash, "#" + newHash);
		else
			history.replaceState({ }, newHash, "#" + newHash);
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
			var margin = vikings.sectionFrontMargin($this);
			slideTops[offset.top - margin] = this.id;
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
	$('.jumpNav__link').click(function() {
		var target = $(this.hash);
		if (target.length) {
			var margin = vikings.sectionFrontMargin(target);
			$('html,body').animate({
				scrollTop: target.offset().top - margin
			}, {duration: 500, easing: 'easeOutBounce'});
			vikings.changeHash(this.hash.substring(1), true);
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
})();

//make logo header sticky
$(function(){
	var logoHeaderHeight = $(".logoHeader").outerHeight();
	vikings.onScroll(function(down, top, last){
		var initialTop = parseInt($(".logoHeader").css("top"));
		if (top < 0 || down && initialTop <= -logoHeaderHeight || !down && initialTop >= 0) {
			return;
		}
		var newTop = Math.min(initialTop + (last - top), 0);
		$(".logoHeader").css("top", newTop);
	});
});

//filmstrip
$(function(){
	var $filmstrip = $(".filmstrip");
	var filmstripHeight = $filmstrip.outerHeight();
	var filmstripFrames = 15;
	var count = 0;

	var filmstripTopOffset, chunkHeight, windowHeight;

	var onResize = function() {
		windowHeight = $(window).height()
		filmstripTopOffset = $filmstrip.offset().top + filmstripHeight
		chunkHeight = ($(document).height() - filmstripTopOffset) / filmstripFrames;
	}

	$(document).resize(onResize);
	onResize();

	var lastFrame = 0;

	vikings.onScroll(function(down, top, last){
		if (top < filmstripTopOffset - windowHeight && lastFrame == 0)
			return;

		var currentFrame = Math.max(Math.min(Math.ceil((top - (filmstripTopOffset - windowHeight)) / chunkHeight), filmstripFrames), 1) - 1; 
		if (currentFrame == lastFrame)
			return;
		lastFrame = currentFrame;

		$filmstrip.css("background-position-y", filmstripHeight * currentFrame * -1);
		
	});
});

/* expando thing */
vikings.zoom = {};
vikings.zoom.toggle = function(zoom) {
	var $zoom = zoom ? $(zoom) : $(".zoom:not(.minimized)");
	$(".overlay").toggleClass("hidden");
	$zoom.toggleClass('minimized');
}
vikings.zoom.nav = function(zoomButton, back) {
	var hide = $(zoomButton).parents(".zoom");
	var show = back ? hide.prev(".zoom") : hide.next(".zoom");
	vikings.zoom.toggle(hide);
	vikings.zoom.toggle(show);
	return false;
}


//make sure all scroll callbacks fire on first load
$(function(){ 
	$(document).scroll();
	vikings.changeHash();
});

