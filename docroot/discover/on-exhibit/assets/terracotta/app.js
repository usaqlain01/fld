

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


/*
  VIEWPORT BUG FIX
  iOS viewport scaling bug fix, by @mathias, @cheeaun and @jdalton
*/

/*
$(function(){
  console.log('ready');
  $('footer').append('<p>appended1</p>')
})
$(window).load(function(){
  console.log('load');
  $('footer').append('<p>appended2</p>')
})*/


;(function(e){function o(){s.content="width=device-width,minimum-scale="+i[0]+",maximum-scale="+i[1];e.removeEventListener(n,o,true)}var t="addEventListener",n="gesturestart",r="querySelectorAll",i=[1,1],s=r in e?e[r]("meta[name=viewport]"):[];if((s=s[s.length-1])&&t in e){o();i=[.25,1.6];e[t](n,o,true)}})(document);

//NEEDS ABSTRACTION && CLEANUPS!!

/*
NAV functions
@params: nav container object
-init
-scroll down
--hideNav
--hideSubnav
-scroll up
--showNav
--showSubnav
-toggle
--openNav/closeNav

*/// JQUERY VERSION:
$(function(){
'use strict';
  
  //loading stuff
  $('body').removeClass('no-js');
  window.lazySizesConfig = {
    addClasses: true
  };

  //device boolean
  var mobile, navOffset;
  function setMobile() {
    mobile = $('.navbar button').is(':visible');
  }
  setMobile();

  //MOBILE NAV
  $('.navbar div a').clone().appendTo('header nav'); //add the section nav over to the subnav drawer
  $('header h2 a').clone().appendTo('header nav'); //add the field link to subnav drawer
  //collapse/next UI
  $('body').append('<div class="section-toggle toggle-hidden"><button class="toggleSection collapse"><span></span></button><button class="nextSection">next <span class="arrow"></span></button></div>');
  //toggle the drawer on hamburger click
  $('header button').click(function(){
    $('header .subnav').toggleClass('hidden');
    $(this).toggleClass('tcon-transform')
  });

  //SCROLLING NAV BEHAVIOR

  /*
  
  //SCROLL DOWN
  scrollDiff > 0 :  hide navbar for mobile
  scrollDiff > 0 && wScroll >= contentstart : show for navbar for desktop & hide nav items
  scrollDiff > 0 && (wScroll >= section1 && < section2): show section1 nav item
  scrollDiff > 0 && (wScroll >= section2 && < section3): show section2 nav item
  scrollDiff > 0 && (wScroll >= 3): show section3 nav item

  //SCROLL UP
  scrollDiff < 0 : show navbar for mobile
  scrollDiff < 0 && wScroll >=contentstart : show nav items for desktop
  scrollDiff < 0 && wScroll < contentstart : hide navbar for desktop

  //SCROLL TO BOTTOM
  wScroll >= windowHeight - docHeight : show mobile nav, show CTA?

  */

  var elSelector = 'header',
    elClassHidden = 'header-hidden',
    elClassEnd = 'header-bottom',
    elClassNarrow = 'header-incontent',
    elClassWide = 'header-pastnav',
    elNarrowOffset, 
    elWideOffset,
    throttleTimeout = 500,
    $element    = $( elSelector );

  var section1 = $('#emperor_qin'),
    section2 = $('#terracotta_army'),
    section3 = $('#treasures');

  //add resize event handling to reset these vars:
  var section1Offset, section2Offset, section3Offset;

  var navOffset;

  var expanded = false;
  var scrollPositions = new Array;
  var initialHeights = new Array;
  var dSubnavStart, dSubnavEnd;

  //analytics vars
  var windowLoaded = false;
  var startSection = -1;
  var scrolledAll = false;
  var section1_ga_scroll, section2_ga_scroll, section3_ga_scroll, cta_ga_scroll;
  var section1_scrolled, section2_scrolled, section3_scrolled, cta_scrolled = false;
  
  //get the initial height & offset of each section
  $('.bg').each(function(){
    scrollPositions.push($(this).offset().top);
    initialHeights.push($(this).outerHeight());
  })
  //console.log(scrollPositions)

  setVars(); //set declared vars on dom load

  function setHeights() {
    $('.bg').each(function(i){
      if ($(this).hasClass('collapsed')) {
        scrollPositions[i] = $(this).offset().top;
      }
    });
  }

  function setVars() {
    
    var windowHeight = $(window).height();
    var headerHeight = $('header').outerHeight();

    section1Offset = section1.find('p').eq(0).offset().top - windowHeight;
    section2Offset = section2.find('p').eq(0).offset().top - windowHeight;
    section3Offset = section3.find('p').eq(0).offset().top - windowHeight;

    elNarrowOffset  = $('#intro').offset().top - 100;
    elWideOffset  = $('#emperor_qin').offset().top -120;

    dSubnavStart = $('#main + .red').offset().top + $('sections a').eq(0).height();
    dSubnavEnd = $('.bg h1').eq(0).offset().top - 200;

    //analytics
    var initialScroll = $(window).scrollTop();
    section1_ga_scroll = $('#emperor_qin article h1').offset().top - headerHeight*2;
    section2_ga_scroll = $('#terracotta_army article h1').offset().top - headerHeight*2;
    section3_ga_scroll = $('#treasures article h1').offset().top - headerHeight*2;
    cta_ga_scroll = $('#visit a').offset().top - windowHeight + $('#visit a').outerHeight();

    //set some boolean vars to prevent the scroll GA events from firing too often
    if (initialScroll >=cta_ga_scroll) {
      startSection = 3;
      scrolledAll = true;
    }
    else if (initialScroll >=section3_ga_scroll) {
      startSection = 2;
    }
    else if (initialScroll >=section2_ga_scroll) {
      startSection = 1;
    }
    else if (initialScroll >=section1_ga_scroll) {
      startSection = 0;
    }
    navOffset = 60;
    setMobile();

    if (!mobile) {
      navOffset += 100;
    }
  }

  if( !$element.length ) return true;

  var $window     = $( window ),
    wHeight     = 0,
    wScrollCurrent  = 0,
    wScrollBefore = 0,
    wScrollDiff   = 0,
    $document   = $( document ),
    dHeight     = 0,
    nextSection = 0,

    throttle = function( delay, fn )
    {
      var last, deferTimer;
      return function()
      {
        var context = this, args = arguments, now = +new Date;
        if( last && now < last + delay )
        {
          clearTimeout( deferTimer );
          deferTimer = setTimeout( function(){ last = now; fn.apply( context, args ); }, delay );
        }
        else
        {
          last = now;
          fn.apply( context, args );
        }
      };
    };
  
  var manScroll = false;
  //user action to start


  var navStart = $('#hero .column').outerHeight();
  var navSection1 = $('#treasures').offset().top;
  var navSection2 = $('#terracotta_army').offset().top;
  var navSection3 = $('#emperor_qin').offset().top;
  var currentSection;

  
  $window.on( 'scroll', throttle( throttleTimeout, function(e)
  {
    dHeight     = $document.height();
    wHeight     = $window.height();
    wScrollCurrent  = $window.scrollTop();
    wScrollDiff   = wScrollBefore - wScrollCurrent;

    //console.log('call scroll ' + manScroll)

    /*desktop & mobile 
    -hide nav after h1 & h2 are off screen
    -update nav item after scrolling into it
    */

    /*desktop
    -show nav after h1 & h2 are off screen
    --subnav behavior
    */

    /*mobile
    -show nav on scroll up
    -hide nav on scroll down
    */
    //console.log(wScrollCurrent)

    //SCROLL DOWN
    if (wScrollDiff < 0 && manScroll) {
       //ga events
       if (windowLoaded && !scrolledAll) {
        if (wScrollCurrent >= cta_ga_scroll && !cta_scrolled && startSection < 3) {
          common.analytics.seeFinalTicketCTA("Visit CTA");
          cta_scrolled = true;
          section3_scrolled = true;
          section2_scrolled = true;
          section1_scrolled = true;
          scrolledAll = true;
        }
        else if (wScrollCurrent >= section3_ga_scroll && !section3_scrolled && startSection < 2) {
          common.analytics.sectionScrollEnter($('#treasures article h1').text()); //make this a var
          section3_scrolled = true;
          section2_scrolled = true;
          section1_scrolled = true;
        }
        else  if (wScrollCurrent >= section2_ga_scroll && !section2_scrolled && startSection < 1) {
          common.analytics.sectionScrollEnter($('#terracotta_army article h1').text()); //make this a var
          section2_scrolled = true;
          section1_scrolled = true;
        }
        else if (wScrollCurrent >= section1_ga_scroll && !section1_scrolled && startSection == -1) {
          common.analytics.sectionScrollEnter($('#emperor_qin article h1').text()); //make this a var
          section1_scrolled = true;
        }
       }
      unblink();

      //REWRITE THESE WITH VARS FOR BETTER PERFORMANCE & READABILITY
      //scroll to bottom
      if (wScrollCurrent + wHeight >= dHeight && $element.hasClass( elClassHidden )) {
        //show navbar       console.log('show desktop nav');
        $element.removeClass( elClassHidden );
      }
      //scroll past entry point
      if (wScrollCurrent >= $('#hero .column').outerHeight() && $element.hasClass( elClassNarrow ) == false) {
        //console.log('past hero');
        $element.addClass( elClassNarrow );
        $element.addClass( elClassHidden );
      }
      //hide nav
      else if ( $element.hasClass( elClassHidden ) == false ) {
        $element.addClass( elClassHidden );
      }
      //scroll into section3
      if (wScrollCurrent >= $('#treasures').offset().top) {
        //update nav        console.log('section3');
        $('nav .section3').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
      //scroll into section2
      else if (wScrollCurrent >= $('#terracotta_army').offset().top) {
        //update nav        console.log('section2');
        $('nav .section2').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
      //scroll into section1
      else if (wScrollCurrent >= $('#emperor_qin').offset().top) {
        //update nav        console.log('section1');
        $('nav .section1').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
      else {
        //remove active state from all navs
        $('nav .active').removeClass('active'); //move to a new function
      }

    }
    //SCROLL UP
    else if (wScrollDiff >=0 && manScroll) {
      //REWRITE THESE WITH VARS FOR BETTER PERFORMANCE & READABILITY
      if (wScrollCurrent < $('#hero .sponsors').offset().top){//&& $element.hasClass( elClassHidden  == false)) {
        //console.log('hide nav')
        $element.addClass( elClassHidden ).removeClass( elClassNarrow );
      }
      else if ( wScrollCurrent >= $('#hero .sponsors').offset().top ){ //&& $element.hasClass( elClassHidden )) {
        //console.log('show nav')
        $element.removeClass( elClassHidden ).addClass( elClassNarrow );
      }
      //scroll into section1
      if (wScrollCurrent < $('#terracotta_army').offset().top) {
        //update nav   console.log('section1');
        $('nav .section1').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
      //scroll into section2
      else if (wScrollCurrent < $('#treasures').offset().top) {
        //update nav    console.log('section2');
        $('nav .section2').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
      //scroll into section3 -- replace section3 marker var with plan your visit
      else if (wScrollCurrent < $('footer').offset().top) {
        //update nav    console.log('section3');
        $('nav .section3').not('.active').addClass('active').siblings().removeClass('active'); //move to a new function
      }
    }
    if ($('.subnav').hasClass('hidden') == false) {
      $('header button').removeClass('tcon-transform');
      $('.subnav').addClass('hidden')
    }

    if (wScrollDiff <= 0 && expanded) {
      if (wScrollCurrent >= $('.bg').eq(target).find('p').last().offset().top - $(window).height()) {
        //console.log('collapse')
        //scroll down into next section -- hide nav
        $('.section-toggle').not('.toggle-hidden').addClass('toggle-hidden');
      }
      else if (wScrollCurrent >= navStart[target]) {
        //scroll down past expand start && nav hidden -- show nav
        $('.toggle-hidden').removeClass('toggle-hidden');
        resetWindow = true;
        reset = false;
      }
      //scroll down past expand end && nav visible
      
    }
    else if (wScrollDiff > 0 && expanded){
      if (wScrollCurrent < navStart[target]) {
        //scroll up past start -- hide nav
        $('.section-toggle').not('.toggle-hidden').addClass('toggle-hidden');
      }
      else if (wScrollCurrent < $('.bg').eq(target).find('p').last().offset().top - $(window).height()) {
        //scroll up back into section -- show nav
        $('.toggle-hidden').removeClass('toggle-hidden');
        resetWindow = true;
        reset = false;
      }
    }
    if (expanded) {
      if (wScrollCurrent > $('.bg').eq(target).next().offset().top) {
        //not in active range, scrolled down past
        reset = true;
      }
      else if (wScrollCurrent < $('.bg').eq(target).offset().top - $(window).outerHeight()) {
        //not in active range, scrolled up past
        resetWindow = false;
        reset = true;
      }
    }
    manScroll = true;
    if (interaction && wScrollDiff < 0) { 
      $('.header-interaction').addClass('header-hidden').removeClass('header-interaction'); interaction = false 
    }
    wScrollBefore = wScrollCurrent;

  }));

  // auto-collapse functions
  var reset = false;
  var resetWindow = true;
  function debounce(func, wait, immediate) {
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
  function collapseItem(item, nextItem) {
    //item -- existing open item
    //nextItem -- newly open item
    if (reset) {
      $('header').addClass('header-interaction');
      interaction = true;

      currentPos = $(window).scrollTop();//get current position;
      expandedItem = $('.bg .container').not('.collapsed').eq(0);
      expandedHeight = expandedItem.outerHeight();//get expanded height
      collapsedHeight = initialHeights[nextSection-1];//get height difference in expanded/collapsed section
      expandedItem.css({'height':collapsedHeight}).addClass('collapsed')//reset element height

      if (item > nextItem || !resetWindow) {
        //console.log('don\'t reset window')
      }
      else {
        $(window).scrollTop(currentPos - expandedHeight + collapsedHeight - 80)//reset scrollTop to current - difference - offset for slants
      }
      reset = false;
      resetWindow = true;
      expanded = false;
    }
  }

  var currentPos, expandedHeight, collapsedHeight, expandedItem;
  var interaction = false;

  var resetExpand = debounce(function() {
    collapseItem();
    //add a reset for scroll var
  }, 600);

  $(window).scroll(resetExpand);
  $(window).scroll(function(){mousemove=false;});
  $window.on( 'resize', throttle( throttleTimeout, function()
  {
    setVars();
    setHeights();
    mousemove=false;
  }));


  //click events

  //accordion -- mobile
  var sections = $('.detail');
  var nextOffset = 0;
  var nextSection = 1; //populate next button in bottom nav
  var nextHeight = 0;
  var navStart = new Array;
  var navEnd = new Array;
  var collapseTarget, scrollTarget, target;

  sections.children().addClass('collapsed').each(function(){
    $(this).append('<button class="sectionToggle expand"><span></span></button>').children('aside').append('<button class="sectionToggle collapse"><span></span></button>');
  });

  $('.expand').click(function(){
    //check for another open section
    if (target !=  "") {
        collapseTarget = target; //if another section is open, close it
    }
    //set target to expand
    target = $('.expand').index($(this));
    //collapse existing
    if (expanded) {
      reset = true;
      collapseItem(collapseTarget, target); //call collapse and pass target
    }

    nextSection = target + 1;
    scrollTarget = $(this).parent();
    nextOffset = scrollTarget.height();
    nextHeight = $('.bg .container').eq(target+1).outerHeight();
    initialHeights[target] = $('.bg .container').eq(target).outerHeight();

    navStart[target] = $('.bg .body').eq(target).offset().top - $(window).height();

    if (target == 1) {
      $('.section-toggle').addClass('red').removeClass('last');
    } 
    else if (target == 2) {
      $('.section-toggle').addClass('last').removeClass('red');
    }
    else {
      $('.section-toggle').removeClass('red last');
    }
    scrollTarget.css('height','auto').removeClass('collapsed').parent().addClass('active'); //expand section
    $('.section-toggle').removeClass('toggle-hidden'); //show nav

    if (!expanded && $(window).scrollTop() < scrollTarget.offset().top) {
      //$('body').animate({'scrollTop':scrollTarget.offset().top},'slow', function(){expanded = true});//scroll down if needed
    }
    expanded = true;
  })

  var closeItem;
  $('.collapse').click(function(){

    //get current position
    currentPos = $(window).scrollTop();

    //set item to close
    closeItem = 0;
    if (currentPos >= $('#terracotta_army').offset().top) {
      closeItem = 1;
    }
    if (currentPos >= $('#treasures').offset().top) {
      closeItem = 2;
    }

    //hide nav
    var scrollTarget = sections.children().not('.collapsed').parent().offset().top; 
    $('.bg .container').eq(closeItem).addClass('collapsed').parent().removeClass('active');//collapse section 
    
    //collapse the section
    $('body,html').animate({'scrollTop': scrollTarget});//move back to top of section
    $('.section-toggle').addClass('toggle-hidden');//hide nav
    expanded = false;
    $('header').addClass('header-interaction');
    interaction = true;
  })

  //mobile skip section 
  $('.nextSection').click(function(){
    var scrollTarget = sections.children().eq(nextSection).parents('.bg').offset().top;
    $('body').animate({'scrollTop': scrollTarget+2},'slow', function(){
      //expand next section
      $('header').addClass('header-interaction'); //addthis again in case it gets taken on during scroll call to next section
      interaction = true;
      reset = true;
      collapseItem(target, target+1);
    });

    $('.section-toggle').addClass('toggle-hidden');//hide nav
    expanded = false;
    $('header').addClass('header-interaction');
    interaction = true;
  });

  //accordion -- desktop
  $('aside').each(function(){
    $(this).children('.intro').after('<div class="accordion"></div><button class="readMore"><span></span></button>').siblings('p, blockquote').appendTo($(this).children('.accordion')).parents('aside').addClass('collapsed');
  })
  var buttonTxt;
  $('.readMore').on('click', function(){
      $(this).parent().toggleClass('collapsed');
      //buttonTxt = $(this).text() == "+" ? "-": "+"; 
      //$(this).text(buttonTxt);
      $(this).toggleClass('open');
      //call set vars to update nav
      setVars()
    })

  //scroll on anchor click -- revise for a smoother scroll
  var linkUrl;
  $('a[href^="#"]').on('click', function(e){
    e.preventDefault();
    if (!$('.subnav').hasClass('hidden')) {
      $('header button').trigger('click')
    }
    //scroll up or down to link
    scrollTo($(this));
    //update url
    linkUrl = $(this).attr('href');
    updateURL($(this).attr('href'));
    //change active nav
    if ($('.subnav a[href="'+linkUrl+'"]').length > 0) {
      $('.subnav a[href="'+linkUrl+'"]').addClass('active').siblings().removeClass('active');
    }
    else {
      $('.subnav .active').removeClass('active');
    }
  });

  //update nav link
  function updateURL(anchor){
    window.location.href = anchor;
  }

  //nav
  var currentPos, navTarget, pageTop;
  var mobileAccordionUI = $('.section-toggle');
  var accordionHidden = 'toggle-hidden';
  var accordionActive = 'toggle-interaction';

  function scrollTo(element) {
    //reset mousemove
    mousemove = false;
    currentPos = $(window).scrollTop();    
    navTarget = $(element.attr('href')).offset().top - navOffset;
    pageTop = false;
    manScroll = false;
    if (mobile && expanded) {
      mobileAccordionUI.addClass(accordionHidden + " " + accordionActive);
      if (navTarget < $(window).scrollTop()) {
        resetWindow = false;
      }
      reset = true;
    }

    $('body, html').animate({'scrollTop':navTarget},{duration:'fast', complete: function(){ 
      manScroll = false;
      if (navTarget <= 0) {
        $('header').removeClass('header-incontent header-pastnav').addClass('header-hidden');
      }
      if (!mobile && navTarget > elWideOffset) {
        //console.log('add class')
        $('header').addClass('header-pastnav');
      }
    }});
    //update anchor
  }
  //later loads
  $(window).load(function(){
    windowLoaded = true;
    //reset the vars after everything has loaded
    setVars();
    setHeights();
    //pretty hero
    $('#main').addClass('pretty');
  })

function unblink() {
  $('.blink-me').removeClass('blink-me');
}
$('.scroll-prompt').mouseenter(function(){
  unblink();
})

function gapfill(elem){
  elem.prepend('<div class="gapfill"></div>');
}
gapfill($('#treasures'));
//ANALYTICS
//0.0 PAGEVIEWS -- omitted
//1.0 HEADER -- COMPLETE
/*
-FM click
-TCW click
-Store click
-Visit click
-Buy click
-Section subhead click
*/
$('header a').click(function(){
  if ($(this).hasClass('section')) {
    common.analytics.jumpNavClick(this);
  }
  else if ($(this).hasClass('button--buy')) {
    common.analytics.buyTicketsButtonClick(this,'header');
  }
  else {
    common.analytics.headerNavClick(this);
  }
});
//2.0 HOMEPAGE -- COMPLETE
$('#main .button--buy').click(function(){
  common.analytics.buyTicketsButtonClick(this,'intro');
})
//3.0 SECTION NAV -- COMPLETE
/*
-link-hover -- how many times should this event fire?
-link-click
*/
var mousemove = false;
$(window).mousemove(function(e){
  if(window.lastX !== e.clientX || window.lastY !== e.clientY){
    mousemove = true;
  }   
  else {
    mousemove = false;
  }
  window.lastX = e.clientX
  window.lastY = e.clientY
})
$('#inline-nav a').mouseenter(function(){
  //only fire when the mouse is actually moving (and not the scrollwheel)
  if (mousemove) {
    var section = $("header .section").eq($(this).index()).text();
    common.analytics.menuInteraction('hover',section,true)
  }
})
$('#inline-nav a').click(function(){
  var section = $("header .section").eq($(this).index()).text();
  common.analytics.menuInteraction('click',section)
})
/*
//4.0 -- OMITTED
//5.0 Section Nav -- INCOMPLETE
/*
-scroll intro section -- CLARIFY THIS REQ'T scroll where? once? manual (wheel, bar, touch)?
--manual scroll into detail page (past hero image)
-scroll down button
*/
$('.scroll-prompt').click(function(){
  //remove animation
  unblink();
  common.analytics.scrollDownButtonClick();
})
//6.0 -- OMMITED
//7.0 Detail Page -- COMPLETE
/*
-facebook-share click
-twitter-share click
-post-75% -- omitted
-buy tickets inline visible -- N/A
-buy tickets click -- N/A
*/
$('.share a').click(function(){
  var event = "share-"+$(this).attr('data-network');
  var shareUrl = "http://field.mu/YVXr1"; //if sharing per section -- get shareUrl
  common.analytics.socialShareClick(event,shareUrl);
});
//8.0 Final Buy Tickets -- INCOMPLETE
/*
-final buy tickets in viewport -- button in viewport
-final buy tickets clicked
*/
$('#visit a').click(function(){
  common.analytics.buyTicketsButtonClick(this,'final');
})
//9.0 -- extra stuff
$('.sponsors a').click(function(){
  common.analytics.sponsorLogoClick($(this).text());
})
//desktop & tablet accordion
$('.readMore').click(function(){
  var sectionTitle = $(this).siblings('h2.heading').text();
  if ($(this).hasClass('open')) {
    //open class has been added by first listener fire analytics
    common.analytics.sectionAccordionOpen(sectionTitle,false);
  }
  else {
    common.analytics.sectionAccordionClose(sectionTitle,false);
  }
});
//mobile accordion
$('.expand').click(function(){
  //send analytics event
  var sectionTitle = $(this).siblings('article').children('h1').text();
  common.analytics.sectionAccordionOpen(sectionTitle,false);
});
$('.collapse').click(function(){
  //send analytics event
  var sectionTitle = $('h1.heading').eq(target).text();
  common.analytics.sectionAccordionClose(sectionTitle,false);
});
$('.nextSection').click(function(){
  //send analytics event
  var sectionTitle = $('h1.heading').eq(target).text();
  common.analytics.sectionNextClick(sectionTitle,false);
})
/*
//scrolling functions -- just gonna leave these here in case they're needed
// left: 37, up: 38, right: 39, down: 40,
// spacebar: 32, pageup: 33, pagedown: 34, end: 35, home: 36
var keys = {37: 1, 38: 1, 39: 1, 40: 1};

function preventDefault(e) {
  e = e || window.event;
  if (e.preventDefault)
      e.preventDefault();
  e.returnValue = false;  
}

function preventDefaultForScrollKeys(e) {
    if (keys[e.keyCode]) {
        preventDefault(e);
        return false;
    }
}

function disableScroll() {
  if (window.addEventListener) // older FF
      window.addEventListener('DOMMouseScroll', preventDefault, false);
  window.onwheel = preventDefault; // modern standard
  window.onmousewheel = document.onmousewheel = preventDefault; // older browsers, IE
  window.ontouchmove  = preventDefault; // mobile
  document.onkeydown  = preventDefaultForScrollKeys;
}

function enableScroll() {
    if (window.removeEventListener)
        window.removeEventListener('DOMMouseScroll', preventDefault, false);
    window.onmousewheel = document.onmousewheel = null; 
    window.onwheel = null; 
    window.ontouchmove = null;  
    document.onkeydown = null;  
}
*/

//POLYFILLS
  //srcset
  Modernizr.on('srcset', function( result ) {
    var url = '../assets/javascripts/vendor/picturefill.min.js';
    if (!result) {
      /*$.ajax({
        url: url,
        dataType: "script",
        //success: success
      });*/

      //picturefill -- ajax this later
      /*! Picturefill - v3.0.1 - 2015-09-30
     * http://scottjehl.github.io/picturefill
     * Copyright (c) 2015 https://github.com/scottjehl/picturefill/blob/master/Authors.txt; Licensed MIT
     */
    !function(a){var b=navigator.userAgent;a.HTMLPictureElement&&/ecko/.test(b)&&b.match(/rv\:(\d+)/)&&RegExp.$1<41&&addEventListener("resize",function(){var b,c=document.createElement("source"),d=function(a){var b,d,e=a.parentNode;"PICTURE"===e.nodeName.toUpperCase()?(b=c.cloneNode(),e.insertBefore(b,e.firstElementChild),setTimeout(function(){e.removeChild(b)})):(!a._pfLastSize||a.offsetWidth>a._pfLastSize)&&(a._pfLastSize=a.offsetWidth,d=a.sizes,a.sizes+=",100vw",setTimeout(function(){a.sizes=d}))},e=function(){var a,b=document.querySelectorAll("picture > img, img[srcset][sizes]");for(a=0;a<b.length;a++)d(b[a])},f=function(){clearTimeout(b),b=setTimeout(e,99)},g=a.matchMedia&&matchMedia("(orientation: landscape)"),h=function(){f(),g&&g.addListener&&g.addListener(f)};return c.srcset="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==",/^[c|i]|d$/.test(document.readyState||"")?h():document.addEventListener("DOMContentLoaded",h),f}())}(window),function(a,b,c){"use strict";function d(a){return" "===a||"  "===a||"\n"===a||"\f"===a||"\r"===a}function e(b,c){var d=new a.Image;return d.onerror=function(){z[b]=!1,aa()},d.onload=function(){z[b]=1===d.width,aa()},d.src=c,"pending"}function f(){L=!1,O=a.devicePixelRatio,M={},N={},s.DPR=O||1,P.width=Math.max(a.innerWidth||0,y.clientWidth),P.height=Math.max(a.innerHeight||0,y.clientHeight),P.vw=P.width/100,P.vh=P.height/100,r=[P.height,P.width,O].join("-"),P.em=s.getEmValue(),P.rem=P.em}function g(a,b,c,d){var e,f,g,h;return"saveData"===A.algorithm?a>2.7?h=c+1:(f=b-c,e=Math.pow(a-.6,1.5),g=f*e,d&&(g+=.1*e),h=a+g):h=c>1?Math.sqrt(a*b):a,h>c}function h(a){var b,c=s.getSet(a),d=!1;"pending"!==c&&(d=r,c&&(b=s.setRes(c),s.applySetCandidate(b,a))),a[s.ns].evaled=d}function i(a,b){return a.res-b.res}function j(a,b,c){var d;return!c&&b&&(c=a[s.ns].sets,c=c&&c[c.length-1]),d=k(b,c),d&&(b=s.makeUrl(b),a[s.ns].curSrc=b,a[s.ns].curCan=d,d.res||_(d,d.set.sizes)),d}function k(a,b){var c,d,e;if(a&&b)for(e=s.parseSet(b),a=s.makeUrl(a),c=0;c<e.length;c++)if(a===s.makeUrl(e[c].url)){d=e[c];break}return d}function l(a,b){var c,d,e,f,g=a.getElementsByTagName("source");for(c=0,d=g.length;d>c;c++)e=g[c],e[s.ns]=!0,f=e.getAttribute("srcset"),f&&b.push({srcset:f,media:e.getAttribute("media"),type:e.getAttribute("type"),sizes:e.getAttribute("sizes")})}function m(a,b){function c(b){var c,d=b.exec(a.substring(m));return d?(c=d[0],m+=c.length,c):void 0}function e(){var a,c,d,e,f,i,j,k,l,m=!1,o={};for(e=0;e<h.length;e++)f=h[e],i=f[f.length-1],j=f.substring(0,f.length-1),k=parseInt(j,10),l=parseFloat(j),W.test(j)&&"w"===i?((a||c)&&(m=!0),0===k?m=!0:a=k):X.test(j)&&"x"===i?((a||c||d)&&(m=!0),0>l?m=!0:c=l):W.test(j)&&"h"===i?((d||c)&&(m=!0),0===k?m=!0:d=k):m=!0;m||(o.url=g,a&&(o.w=a),c&&(o.d=c),d&&(o.h=d),d||c||a||(o.d=1),1===o.d&&(b.has1x=!0),o.set=b,n.push(o))}function f(){for(c(S),i="",j="in descriptor";;){if(k=a.charAt(m),"in descriptor"===j)if(d(k))i&&(h.push(i),i="",j="after descriptor");else{if(","===k)return m+=1,i&&h.push(i),void e();if("("===k)i+=k,j="in parens";else{if(""===k)return i&&h.push(i),void e();i+=k}}else if("in parens"===j)if(")"===k)i+=k,j="in descriptor";else{if(""===k)return h.push(i),void e();i+=k}else if("after descriptor"===j)if(d(k));else{if(""===k)return void e();j="in descriptor",m-=1}m+=1}}for(var g,h,i,j,k,l=a.length,m=0,n=[];;){if(c(T),m>=l)return n;g=c(U),h=[],","===g.slice(-1)?(g=g.replace(V,""),e()):f()}}function n(a){function b(a){function b(){f&&(g.push(f),f="")}function c(){g[0]&&(h.push(g),g=[])}for(var e,f="",g=[],h=[],i=0,j=0,k=!1;;){if(e=a.charAt(j),""===e)return b(),c(),h;if(k){if("*"===e&&"/"===a[j+1]){k=!1,j+=2,b();continue}j+=1}else{if(d(e)){if(a.charAt(j-1)&&d(a.charAt(j-1))||!f){j+=1;continue}if(0===i){b(),j+=1;continue}e=" "}else if("("===e)i+=1;else if(")"===e)i-=1;else{if(","===e){b(),c(),j+=1;continue}if("/"===e&&"*"===a.charAt(j+1)){k=!0,j+=2;continue}}f+=e,j+=1}}}function c(a){return k.test(a)&&parseFloat(a)>=0?!0:l.test(a)?!0:"0"===a||"-0"===a||"+0"===a?!0:!1}var e,f,g,h,i,j,k=/^(?:[+-]?[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?(?:ch|cm|em|ex|in|mm|pc|pt|px|rem|vh|vmin|vmax|vw)$/i,l=/^calc\((?:[0-9a-z \.\+\-\*\/\(\)]+)\)$/i;for(f=b(a),g=f.length,e=0;g>e;e++)if(h=f[e],i=h[h.length-1],c(i)){if(j=i,h.pop(),0===h.length)return j;if(h=h.join(" "),s.matchesMedia(h))return j}return"100vw"}b.createElement("picture");var o,p,q,r,s={},t=function(){},u=b.createElement("img"),v=u.getAttribute,w=u.setAttribute,x=u.removeAttribute,y=b.documentElement,z={},A={algorithm:""},B="data-pfsrc",C=B+"set",D=navigator.userAgent,E=/rident/.test(D)||/ecko/.test(D)&&D.match(/rv\:(\d+)/)&&RegExp.$1>35,F="currentSrc",G=/\s+\+?\d+(e\d+)?w/,H=/(\([^)]+\))?\s*(.+)/,I=a.picturefillCFG,J="position:absolute;left:0;visibility:hidden;display:block;padding:0;border:none;font-size:1em;width:1em;overflow:hidden;clip:rect(0px, 0px, 0px, 0px)",K="font-size:100%!important;",L=!0,M={},N={},O=a.devicePixelRatio,P={px:1,"in":96},Q=b.createElement("a"),R=!1,S=/^[ \t\n\r\u000c]+/,T=/^[, \t\n\r\u000c]+/,U=/^[^ \t\n\r\u000c]+/,V=/[,]+$/,W=/^\d+$/,X=/^-?(?:[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?$/,Y=function(a,b,c,d){a.addEventListener?a.addEventListener(b,c,d||!1):a.attachEvent&&a.attachEvent("on"+b,c)},Z=function(a){var b={};return function(c){return c in b||(b[c]=a(c)),b[c]}},$=function(){var a=/^([\d\.]+)(em|vw|px)$/,b=function(){for(var a=arguments,b=0,c=a[0];++b in a;)c=c.replace(a[b],a[++b]);return c},c=Z(function(a){return"return "+b((a||"").toLowerCase(),/\band\b/g,"&&",/,/g,"||",/min-([a-z-\s]+):/g,"e.$1>=",/max-([a-z-\s]+):/g,"e.$1<=",/calc([^)]+)/g,"($1)",/(\d+[\.]*[\d]*)([a-z]+)/g,"($1 * e.$2)",/^(?!(e.[a-z]|[0-9\.&=|><\+\-\*\(\)\/])).*/gi,"")+";"});return function(b,d){var e;if(!(b in M))if(M[b]=!1,d&&(e=b.match(a)))M[b]=e[1]*P[e[2]];else try{M[b]=new Function("e",c(b))(P)}catch(f){}return M[b]}}(),_=function(a,b){return a.w?(a.cWidth=s.calcListLength(b||"100vw"),a.res=a.w/a.cWidth):a.res=a.d,a},aa=function(a){var c,d,e,f=a||{};if(f.elements&&1===f.elements.nodeType&&("IMG"===f.elements.nodeName.toUpperCase()?f.elements=[f.elements]:(f.context=f.elements,f.elements=null)),c=f.elements||s.qsa(f.context||b,f.reevaluate||f.reselect?s.sel:s.selShort),e=c.length){for(s.setupRun(f),R=!0,d=0;e>d;d++)s.fillImg(c[d],f);s.teardownRun(f)}};o=a.console&&console.warn?function(a){console.warn(a)}:t,F in u||(F="src"),z["image/jpeg"]=!0,z["image/gif"]=!0,z["image/png"]=!0,z["image/svg+xml"]=b.implementation.hasFeature("http://wwwindow.w3.org/TR/SVG11/feature#Image","1.1"),s.ns=("pf"+(new Date).getTime()).substr(0,9),s.supSrcset="srcset"in u,s.supSizes="sizes"in u,s.supPicture=!!a.HTMLPictureElement,s.supSrcset&&s.supPicture&&!s.supSizes&&!function(a){u.srcset="data:,a",a.src="data:,a",s.supSrcset=u.complete===a.complete,s.supPicture=s.supSrcset&&s.supPicture}(b.createElement("img")),s.selShort="picture>img,img[srcset]",s.sel=s.selShort,s.cfg=A,s.supSrcset&&(s.sel+=",img["+C+"]"),s.DPR=O||1,s.u=P,s.types=z,q=s.supSrcset&&!s.supSizes,s.setSize=t,s.makeUrl=Z(function(a){return Q.href=a,Q.href}),s.qsa=function(a,b){return a.querySelectorAll(b)},s.matchesMedia=function(){return a.matchMedia&&(matchMedia("(min-width: 0.1em)")||{}).matches?s.matchesMedia=function(a){return!a||matchMedia(a).matches}:s.matchesMedia=s.mMQ,s.matchesMedia.apply(this,arguments)},s.mMQ=function(a){return a?$(a):!0},s.calcLength=function(a){var b=$(a,!0)||!1;return 0>b&&(b=!1),b},s.supportsType=function(a){return a?z[a]:!0},s.parseSize=Z(function(a){var b=(a||"").match(H);return{media:b&&b[1],length:b&&b[2]}}),s.parseSet=function(a){return a.cands||(a.cands=m(a.srcset,a)),a.cands},s.getEmValue=function(){var a;if(!p&&(a=b.body)){var c=b.createElement("div"),d=y.style.cssText,e=a.style.cssText;c.style.cssText=J,y.style.cssText=K,a.style.cssText=K,a.appendChild(c),p=c.offsetWidth,a.removeChild(c),p=parseFloat(p,10),y.style.cssText=d,a.style.cssText=e}return p||16},s.calcListLength=function(a){if(!(a in N)||A.uT){var b=s.calcLength(n(a));N[a]=b?b:P.width}return N[a]},s.setRes=function(a){var b;if(a){b=s.parseSet(a);for(var c=0,d=b.length;d>c;c++)_(b[c],a.sizes)}return b},s.setRes.res=_,s.applySetCandidate=function(a,b){if(a.length){var c,d,e,f,h,k,l,m,n,o=b[s.ns],p=s.DPR;if(k=o.curSrc||b[F],l=o.curCan||j(b,k,a[0].set),l&&l.set===a[0].set&&(n=E&&!b.complete&&l.res-.1>p,n||(l.cached=!0,l.res>=p&&(h=l))),!h)for(a.sort(i),f=a.length,h=a[f-1],d=0;f>d;d++)if(c=a[d],c.res>=p){e=d-1,h=a[e]&&(n||k!==s.makeUrl(c.url))&&g(a[e].res,c.res,p,a[e].cached)?a[e]:c;break}h&&(m=s.makeUrl(h.url),o.curSrc=m,o.curCan=h,m!==k&&s.setSrc(b,h),s.setSize(b))}},s.setSrc=function(a,b){var c;a.src=b.url,"image/svg+xml"===b.set.type&&(c=a.style.width,a.style.width=a.offsetWidth+1+"px",a.offsetWidth+1&&(a.style.width=c))},s.getSet=function(a){var b,c,d,e=!1,f=a[s.ns].sets;for(b=0;b<f.length&&!e;b++)if(c=f[b],c.srcset&&s.matchesMedia(c.media)&&(d=s.supportsType(c.type))){"pending"===d&&(c=d),e=c;break}return e},s.parseSets=function(a,b,d){var e,f,g,h,i=b&&"PICTURE"===b.nodeName.toUpperCase(),j=a[s.ns];(j.src===c||d.src)&&(j.src=v.call(a,"src"),j.src?w.call(a,B,j.src):x.call(a,B)),(j.srcset===c||d.srcset||!s.supSrcset||a.srcset)&&(e=v.call(a,"srcset"),j.srcset=e,h=!0),j.sets=[],i&&(j.pic=!0,l(b,j.sets)),j.srcset?(f={srcset:j.srcset,sizes:v.call(a,"sizes")},j.sets.push(f),g=(q||j.src)&&G.test(j.srcset||""),g||!j.src||k(j.src,f)||f.has1x||(f.srcset+=", "+j.src,f.cands.push({url:j.src,d:1,set:f}))):j.src&&j.sets.push({srcset:j.src,sizes:null}),j.curCan=null,j.curSrc=c,j.supported=!(i||f&&!s.supSrcset||g),h&&s.supSrcset&&!j.supported&&(e?(w.call(a,C,e),a.srcset=""):x.call(a,C)),j.supported&&!j.srcset&&(!j.src&&a.src||a.src!==s.makeUrl(j.src))&&(null===j.src?a.removeAttribute("src"):a.src=j.src),j.parsed=!0},s.fillImg=function(a,b){var c,d=b.reselect||b.reevaluate;a[s.ns]||(a[s.ns]={}),c=a[s.ns],(d||c.evaled!==r)&&((!c.parsed||b.reevaluate)&&s.parseSets(a,a.parentNode,b),c.supported?c.evaled=r:h(a))},s.setupRun=function(){(!R||L||O!==a.devicePixelRatio)&&f()},s.supPicture?(aa=t,s.fillImg=t):!function(){var c,d=a.attachEvent?/d$|^c/:/d$|^c|^i/,e=function(){var a=b.readyState||"";f=setTimeout(e,"loading"===a?200:999),b.body&&(s.fillImgs(),c=c||d.test(a),c&&clearTimeout(f))},f=setTimeout(e,b.body?9:99),g=function(a,b){var c,d,e=function(){var f=new Date-d;b>f?c=setTimeout(e,b-f):(c=null,a())};return function(){d=new Date,c||(c=setTimeout(e,b))}},h=y.clientHeight,i=function(){L=Math.max(a.innerWidth||0,y.clientWidth)!==P.width||y.clientHeight!==h,h=y.clientHeight,L&&s.fillImgs()};Y(a,"resize",g(i,99)),Y(b,"readystatechange",e)}(),s.picturefill=aa,s.fillImgs=aa,s.teardownRun=t,aa._=s,a.picturefillCFG={pf:s,push:function(a){var b=a.shift();"function"==typeof s[b]?s[b].apply(s,a):(A[b]=a[0],R&&s.fillImgs({reselect:!0}))}};for(;I&&I.length;)a.picturefillCFG.push(I.shift());a.picturefill=aa,"object"==typeof module&&"object"==typeof module.exports?module.exports=aa:"function"==typeof define&&define.amd&&define("picturefill",function(){return aa}),s.supPicture||(z["image/webp"]=e("image/webp","data:image/webp;base64,UklGRkoAAABXRUJQVlA4WAoAAAAQAAAAAAAAAAAAQUxQSAwAAAABBxAR/Q9ERP8DAABWUDggGAAAADABAJ0BKgEAAQADADQlpAADcAD++/1QAA=="))}(window,document);
    } 
  });
  //css transforms
  Modernizr.on('csstransforms', function( result ) {
    var url = '../assets/javascripts/vendor/transformie.js';
    if (!result) {
      /*$.ajax({
        url: url,
        dataType: "script",
        //success: success
      });*/
      //transformie -- ajax this later
      var Transformie={defaults:{inlineCSS:"*",stylesheets:!0,track:"*",centerOrigin:"margin"},toRadian:function(e){return-1!=e.indexOf("deg")?parseFloat(e,10)*(2*Math.PI/360):-1!=e.indexOf("grad")?parseFloat(e,10)*(Math.PI/200):parseFloat(e,10)},getTransformValue:function(e){return e["-webkit-transform"]||e["webkit-transform"]||e.transform||e.webkitTransform||e["-moz-transform"]||e["moz-transform"]||e.MozTransform||e.mozTransform},track:function(e){jQuery(e).unbind("propertychange").bind("propertychange",function(e){("style.webkitTransform"==e.originalEvent.propertyName||"style.MozTransform"==e.originalEvent.propertyName||"style.transform"==e.originalEvent.propertyName)&&Transformie.applyMatrixToElement(Transformie.computeMatrix(Transformie.getTransformValue(this.style)),this)})},apply:function(e){jQuery(e).each(function(){var e=Transformie.getTransformValue(this.style);e&&Transformie.applyMatrixToElement(Transformie.computeMatrix(e),this)})},parseStylesheets:function(){for(var e=0;e<document.styleSheets.length;e++)if(!document.styleSheets[e].readOnly)for(var r=0;r<document.styleSheets[e].rules.length;r++){var t=Transformie.getTransformValue(document.styleSheets[e].rules[r].style);t&&Transformie.applyMatrixToSelector(Transformie.computeMatrix(t),document.styleSheets[e].rules[r].selectorText)}},applyMatrixToSelector:function(e,r){r.indexOf&&-1!=r.indexOf(":hover")||jQuery(r).each(function(){Transformie.applyMatrixToElement(e,this)})},applyMatrixToElement:function(e,r){r.filters["DXImageTransform.Microsoft.Matrix"]||(r.style.filter=(r.style.filter?"":" ")+"progid:DXImageTransform.Microsoft.Matrix(sizingMethod='auto expand')",Transformie.track(r)),r.filters["DXImageTransform.Microsoft.Matrix"].M11=e.elements[0][0],r.filters["DXImageTransform.Microsoft.Matrix"].M12=e.elements[0][1],r.filters["DXImageTransform.Microsoft.Matrix"].M21=e.elements[1][0],r.filters["DXImageTransform.Microsoft.Matrix"].M22=e.elements[1][1],Transformie.defaults.centerOrigin&&(r.style["margin"==Transformie.defaults.centerOrigin?"marginLeft":"left"]=-(r.offsetWidth/2)+r.clientWidth/2+"px",r.style["margin"==Transformie.defaults.centerOrigin?"marginTop":"top"]=-(r.offsetHeight/2)+r.clientHeight/2+"px")},computeMatrix:function(e){for(var r=e.match(/[A-z]+\([^\)]+/g)||[],t=[],a=0;a<r.length;a++){var s=r[a].split("(")[0],n=r[a].split("(")[1];switch(s){case"matrix":var i=n.split(",");t.push($M([[i[0],i[2],0],[i[1],i[3],0],[0,0,1]]));break;case"rotate":var o=Transformie.toRadian(n);t.push($M([[Math.cos(o),-Math.sin(o),0],[Math.sin(o),Math.cos(o),0],[0,0,1]]));break;case"scale":t.push($M([[n,0,0],[0,n,0],[0,0,1]]));break;case"scaleX":t.push($M([[n,0,0],[0,1,0],[0,0,1]]));break;case"scaleY":t.push($M([[1,0,0],[0,n,0],[0,0,1]]));break;case"skew":var o=Transformie.toRadian(n);t.push($M([[1,0,0],[Math.tan(o),1,0],[0,0,1]]));case"skewX":var o=Transformie.toRadian(n);t.push($M([[1,Math.tan(o),0],[0,1,0],[0,0,1]]));break;case"skewY":var o=Transformie.toRadian(n);t.push($M([[1,0,0],[Math.tan(o),1,0],[0,0,1]]))}}if(t.length){for(var f=t[0],a=0;a<t.length;a++)t[a+1]&&(f=f.x(t[a+1]));return f}}};jQuery(function(){-1!=navigator.userAgent.indexOf("MSIE ")&&(Transformie.defaults.stylesheets&&Transformie.parseStylesheets(),Transformie.inlineCSS&&Transformie.apply(Transformie.inlineCSS===!0?"*":Transformie.inlineCSS),Transformie.defaults.track&&Transformie.track(Transformie.defaults.track))});
    } 
  });
});

;( function( $, window, document, undefined )
{
  
})( jQuery, window, document );

//add modernizr
/*! modernizr 3.3.1 (Custom Build) | MIT *
 * http://modernizr.com/download/?-csstransforms-srcset-svgasimg-setclasses !*/
!function(e,n,t){function r(e,n){return typeof e===n}function o(){var e,n,t,o,s,i,a;for(var f in w)if(w.hasOwnProperty(f)){if(e=[],n=w[f],n.name&&(e.push(n.name.toLowerCase()),n.options&&n.options.aliases&&n.options.aliases.length))for(t=0;t<n.options.aliases.length;t++)e.push(n.options.aliases[t].toLowerCase());for(o=r(n.fn,"function")?n.fn():n.fn,s=0;s<e.length;s++)i=e[s],a=i.split("."),1===a.length?Modernizr[a[0]]=o:(!Modernizr[a[0]]||Modernizr[a[0]]instanceof Boolean||(Modernizr[a[0]]=new Boolean(Modernizr[a[0]])),Modernizr[a[0]][a[1]]=o),_.push((o?"":"no-")+a.join("-"))}}function s(e){var n=S.className,t=Modernizr._config.classPrefix||"";if(x&&(n=n.baseVal),Modernizr._config.enableJSClass){var r=new RegExp("(^|\\s)"+t+"no-js(\\s|$)");n=n.replace(r,"$1"+t+"js$2")}Modernizr._config.enableClasses&&(n+=" "+t+e.join(" "+t),x?S.className.baseVal=n:S.className=n)}function i(){return"function"!=typeof n.createElement?n.createElement(arguments[0]):x?n.createElementNS.call(n,"http://www.w3.org/2000/svg",arguments[0]):n.createElement.apply(n,arguments)}function a(e,n){if("object"==typeof e)for(var t in e)T(e,t)&&a(t,e[t]);else{e=e.toLowerCase();var r=e.split("."),o=Modernizr[r[0]];if(2==r.length&&(o=o[r[1]]),"undefined"!=typeof o)return Modernizr;n="function"==typeof n?n():n,1==r.length?Modernizr[r[0]]=n:(!Modernizr[r[0]]||Modernizr[r[0]]instanceof Boolean||(Modernizr[r[0]]=new Boolean(Modernizr[r[0]])),Modernizr[r[0]][r[1]]=n),s([(n&&0!=n?"":"no-")+r.join("-")]),Modernizr._trigger(e,n)}return Modernizr}function f(e,n){return!!~(""+e).indexOf(n)}function l(e){return e.replace(/([a-z])-([a-z])/g,function(e,n,t){return n+t.toUpperCase()}).replace(/^-/,"")}function u(e,n){return function(){return e.apply(n,arguments)}}function c(e,n,t){var o;for(var s in e)if(e[s]in n)return t===!1?e[s]:(o=n[e[s]],r(o,"function")?u(o,t||n):o);return!1}function d(e){return e.replace(/([A-Z])/g,function(e,n){return"-"+n.toLowerCase()}).replace(/^ms-/,"-ms-")}function p(){var e=n.body;return e||(e=i(x?"svg":"body"),e.fake=!0),e}function m(e,t,r,o){var s,a,f,l,u="modernizr",c=i("div"),d=p();if(parseInt(r,10))for(;r--;)f=i("div"),f.id=o?o[r]:u+(r+1),c.appendChild(f);return s=i("style"),s.type="text/css",s.id="s"+u,(d.fake?d:c).appendChild(s),d.appendChild(c),s.styleSheet?s.styleSheet.cssText=e:s.appendChild(n.createTextNode(e)),c.id=u,d.fake&&(d.style.background="",d.style.overflow="hidden",l=S.style.overflow,S.style.overflow="hidden",S.appendChild(d)),a=t(c,e),d.fake?(d.parentNode.removeChild(d),S.style.overflow=l,S.offsetHeight):c.parentNode.removeChild(c),!!a}function h(n,r){var o=n.length;if("CSS"in e&&"supports"in e.CSS){for(;o--;)if(e.CSS.supports(d(n[o]),r))return!0;return!1}if("CSSSupportsRule"in e){for(var s=[];o--;)s.push("("+d(n[o])+":"+r+")");return s=s.join(" or "),m("@supports ("+s+") { #modernizr { position: absolute; } }",function(e){return"absolute"==getComputedStyle(e,null).position})}return t}function g(e,n,o,s){function a(){c&&(delete z.style,delete z.modElem)}if(s=r(s,"undefined")?!1:s,!r(o,"undefined")){var u=h(e,o);if(!r(u,"undefined"))return u}for(var c,d,p,m,g,v=["modernizr","tspan"];!z.style;)c=!0,z.modElem=i(v.shift()),z.style=z.modElem.style;for(p=e.length,d=0;p>d;d++)if(m=e[d],g=z.style[m],f(m,"-")&&(m=l(m)),z.style[m]!==t){if(s||r(o,"undefined"))return a(),"pfx"==n?m:!0;try{z.style[m]=o}catch(y){}if(z.style[m]!=g)return a(),"pfx"==n?m:!0}return a(),!1}function v(e,n,t,o,s){var i=e.charAt(0).toUpperCase()+e.slice(1),a=(e+" "+P.join(i+" ")+i).split(" ");return r(n,"string")||r(n,"undefined")?g(a,n,o,s):(a=(e+" "+E.join(i+" ")+i).split(" "),c(a,n,t))}function y(e,n,r){return v(e,t,t,n,r)}var _=[],w=[],C={_version:"3.3.1",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,n){var t=this;setTimeout(function(){n(t[e])},0)},addTest:function(e,n,t){w.push({name:e,fn:n,options:t})},addAsyncTest:function(e){w.push({name:null,fn:e})}},Modernizr=function(){};Modernizr.prototype=C,Modernizr=new Modernizr;var S=n.documentElement,x="svg"===S.nodeName.toLowerCase();Modernizr.addTest("srcset","srcset"in i("img"));var T;!function(){var e={}.hasOwnProperty;T=r(e,"undefined")||r(e.call,"undefined")?function(e,n){return n in e&&r(e.constructor.prototype[n],"undefined")}:function(n,t){return e.call(n,t)}}(),C._l={},C.on=function(e,n){this._l[e]||(this._l[e]=[]),this._l[e].push(n),Modernizr.hasOwnProperty(e)&&setTimeout(function(){Modernizr._trigger(e,Modernizr[e])},0)},C._trigger=function(e,n){if(this._l[e]){var t=this._l[e];setTimeout(function(){var e,r;for(e=0;e<t.length;e++)(r=t[e])(n)},0),delete this._l[e]}},Modernizr._q.push(function(){C.addTest=a}),Modernizr.addTest("svgasimg",n.implementation.hasFeature("http://www.w3.org/TR/SVG11/feature#Image","1.1"));var b="Moz O ms Webkit",P=C._config.usePrefixes?b.split(" "):[];C._cssomPrefixes=P;var E=C._config.usePrefixes?b.toLowerCase().split(" "):[];C._domPrefixes=E;var j={elem:i("modernizr")};Modernizr._q.push(function(){delete j.elem});var z={style:j.elem.style};Modernizr._q.unshift(function(){delete z.style}),C.testAllProps=v,C.testAllProps=y,Modernizr.addTest("csstransforms",function(){return-1===navigator.userAgent.indexOf("Android 2.")&&y("transform","scale(1)",!0)}),o(),s(_),delete C.addTest,delete C.addAsyncTest;for(var N=0;N<Modernizr._q.length;N++)Modernizr._q[N]();e.Modernizr=Modernizr}(window,document);
