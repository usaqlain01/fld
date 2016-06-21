
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

window.common.analytics.socialShareClick = function(event, label, noninteraction) {
  window.common.analytics.event("one-page", event, label, noninteraction)
}
window.common.analytics.menuInteraction = function(event, label, noninteraction) {
  window.common.analytics.event("one-page-menu", event, label, noninteraction)
}
window.common.analytics.sectionScrollEnter = function(text) {
  window.common.analytics.event("one-page", "section-scroll-enter", text, true)
}
window.common.analytics.seeFinalTicketCTA = function(text) {
  window.common.analytics.event("one-page", "see-final-ticket-cta", text, true)
}
window.common.analytics.sectionAccordionOpen = function(label, noninteraction) {
  window.common.analytics.event("one-page", "accordion-open-click", label, noninteraction)
}
window.common.analytics.sectionAccordionClose = function(label, noninteraction) {
  window.common.analytics.event("one-page", "accordion-close-click", label, noninteraction)
}
window.common.analytics.sectionNextClick = function(label, noninteraction) {
  window.common.analytics.event("one-page", "section-next-click", label, noninteraction)
}
