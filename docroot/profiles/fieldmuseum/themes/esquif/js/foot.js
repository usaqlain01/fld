(function ($, Drupal, window, document, undefined) {
  /*
  --------------------------------------------
       Begin jquerypp.custom.js
  --------------------------------------------
   */
(function() {

  var event = jQuery.event,

    //helper that finds handlers by type and calls back a function, this is basically handle
    // events - the events object
    // types - an array of event types to look for
    // callback(type, handlerFunc, selector) - a callback
    // selector - an optional selector to filter with, if there, matches by selector
    //     if null, matches anything, otherwise, matches with no selector
    findHelper = function( events, types, callback, selector ) {
      var t, type, typeHandlers, all, h, handle,
        namespaces, namespace,
        match;
      for ( t = 0; t < types.length; t++ ) {
        type = types[t];
        all = type.indexOf(".") < 0;
        if (!all ) {
          namespaces = type.split(".");
          type = namespaces.shift();
          namespace = new RegExp("(^|\\.)" + namespaces.slice(0).sort().join("\\.(?:.*\\.)?") + "(\\.|$)");
        }
        typeHandlers = (events[type] || []).slice(0);

        for ( h = 0; h < typeHandlers.length; h++ ) {
          handle = typeHandlers[h];

          match = (all || namespace.test(handle.namespace));

          if(match){
            if(selector){
              if (handle.selector === selector  ) {
                callback(type, handle.origHandler || handle.handler);
              }
            } else if (selector === null){
              callback(type, handle.origHandler || handle.handler, handle.selector);
            }
            else if (!handle.selector ) {
              callback(type, handle.origHandler || handle.handler);

            }
          }


        }
      }
    };

  /**
   * Finds event handlers of a given type on an element.
   * @param {HTMLElement} el
   * @param {Array} types an array of event names
   * @param {String} [selector] optional selector
   * @return {Array} an array of event handlers
   */
  event.find = function( el, types, selector ) {
    var events = ( $._data(el) || {} ).events,
      handlers = [],
      t, liver, live;

    if (!events ) {
      return handlers;
    }
    findHelper(events, types, function( type, handler ) {
      handlers.push(handler);
    }, selector);
    return handlers;
  };
  /**
   * Finds all events.  Group by selector.
   * @param {HTMLElement} el the element
   * @param {Array} types event types
   */
  event.findBySelector = function( el, types ) {
    var events = $._data(el).events,
      selectors = {},
      //adds a handler for a given selector and event
      add = function( selector, event, handler ) {
        var select = selectors[selector] || (selectors[selector] = {}),
          events = select[event] || (select[event] = []);
        events.push(handler);
      };

    if (!events ) {
      return selectors;
    }
    //first check live:
    /*$.each(events.live || [], function( i, live ) {
      if ( $.inArray(live.origType, types) !== -1 ) {
        add(live.selector, live.origType, live.origHandler || live.handler);
      }
    });*/
    //then check straight binds
    findHelper(events, types, function( type, handler, selector ) {
      add(selector || "", type, handler);
    }, null);

    return selectors;
  };
  event.supportTouch = "ontouchend" in document;

  $.fn.respondsTo = function( events ) {
    if (!this.length ) {
      return false;
    } else {
      //add default ?
      return event.find(this[0], $.isArray(events) ? events : [events]).length > 0;
    }
  };
  $.fn.triggerHandled = function( event, data ) {
    event = (typeof event == "string" ? $.Event(event) : event);
    this.trigger(event, data);
    return event.handled;
  };
  /**
   * Only attaches one event handler for all types ...
   * @param {Array} types llist of types that will delegate here
   * @param {Object} startingEvent the first event to start listening to
   * @param {Object} onFirst a function to call
   */
  event.setupHelper = function( types, startingEvent, onFirst ) {
    if (!onFirst ) {
      onFirst = startingEvent;
      startingEvent = null;
    }
    var add = function( handleObj ) {

      var bySelector, selector = handleObj.selector || "";
      if ( selector ) {
        bySelector = event.find(this, types, selector);
        if (!bySelector.length ) {
          $(this).delegate(selector, startingEvent, onFirst);
        }
      }
      else {
        //var bySelector = event.find(this, types, selector);
        if (!event.find(this, types, selector).length ) {
          event.add(this, startingEvent, onFirst, {
            selector: selector,
            delegate: this
          });
        }

      }

    },
      remove = function( handleObj ) {
        var bySelector, selector = handleObj.selector || "";
        if ( selector ) {
          bySelector = event.find(this, types, selector);
          if (!bySelector.length ) {
            $(this).undelegate(selector, startingEvent, onFirst);
          }
        }
        else {
          if (!event.find(this, types, selector).length ) {
            event.remove(this, startingEvent, onFirst, {
              selector: selector,
              delegate: this
            });
          }
        }
      };
    $.each(types, function() {
      event.special[this] = {
        add: add,
        remove: remove,
        setup: function() {},
        teardown: function() {}
      };
    });
  };
})(jQuery);
(function($){
var isPhantom = /Phantom/.test(navigator.userAgent),
  supportTouch = !isPhantom && "ontouchend" in document,
  scrollEvent = "touchmove scroll",
  // Use touch events or map it to mouse events
  touchStartEvent = supportTouch ? "touchstart" : "mousedown",
  touchStopEvent = supportTouch ? "touchend" : "mouseup",
  touchMoveEvent = supportTouch ? "touchmove" : "mousemove",
  data = function(event){
    var d = event.originalEvent.touches ?
      event.originalEvent.touches[ 0 ] :
      event;
    return {
      time: (new Date).getTime(),
      coords: [ d.pageX, d.pageY ],
      origin: $( event.target )
    };
  };

/**
 * @add jQuery.event.swipe
 */
var swipe = $.event.swipe = {
  /**
   * @attribute delay
   * Delay is the upper limit of time the swipe motion can take in milliseconds.  This defaults to 500.
   *
   * A user must perform the swipe motion in this much time.
   */
  delay : 500,
  /**
   * @attribute max
   * The maximum distance the pointer must travel in pixels.  The default is 75 pixels.
   */
  max : 75,
  /**
   * @attribute min
   * The minimum distance the pointer must travel in pixels.  The default is 30 pixels.
   */
  min : 30
};

$.event.setupHelper( [

/**
 * @hide
 * @attribute swipe
 */
"swipe",
/**
 * @hide
 * @attribute swipeleft
 */
'swipeleft',
/**
 * @hide
 * @attribute swiperight
 */
'swiperight',
/**
 * @hide
 * @attribute swipeup
 */
'swipeup',
/**
 * @hide
 * @attribute swipedown
 */
'swipedown'], touchStartEvent, function(ev){
  var
    // update with data when the event was started
    start = data(ev),
    stop,
    delegate = ev.delegateTarget || ev.currentTarget,
    selector = ev.handleObj.selector,
    entered = this;

  function moveHandler(event){
    if ( !start ) {
      return;
    }
    // update stop with the data from the current event
    stop = data(event);

    // prevent scrolling
    if ( Math.abs( start.coords[0] - stop.coords[0] ) > 10 ) {
      event.preventDefault();
    }
  };

  // Attach to the touch move events
  $(document.documentElement).bind(touchMoveEvent, moveHandler)
    .one(touchStopEvent, function(event){
      $(this).unbind( touchMoveEvent, moveHandler);
      // if start and stop contain data figure out if we have a swipe event
      if ( start && stop ) {
        // calculate the distance between start and stop data
        var deltaX = Math.abs(start.coords[0] - stop.coords[0]),
          deltaY = Math.abs(start.coords[1] - stop.coords[1]),
          distance = Math.sqrt(deltaX*deltaX+deltaY*deltaY);

        // check if the delay and distance are matched
        if ( stop.time - start.time < swipe.delay && distance >= swipe.min ) {
          var events = ['swipe'];
          // check if we moved horizontally
          if( deltaX >= swipe.min && deltaY < swipe.min) {
            // based on the x coordinate check if we moved left or right
            events.push( start.coords[0] > stop.coords[0] ? "swipeleft" : "swiperight" );
          } else
          // check if we moved vertically
          if(deltaY >= swipe.min && deltaX < swipe.min){
            // based on the y coordinate check if we moved up or down
            events.push( start.coords[1] < stop.coords[1] ? "swipedown" : "swipeup" );
          }

          // trigger swipe events on this guy
          $.each($.event.find(delegate, events, selector), function(){
            this.call(entered, ev, {start : start, end: stop})
          })

        }
      }
      // reset start and stop
      start = stop = undefined;
    })
});

})(jQuery)

  /*
  --------------------------------------------
       Begin resizer.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  var resizeTimeout;
  resizeTimeout = null;
  return $(window).on("resize", function() {
    cancel(resizeTimeout);
    return resizeTimeout = delay(100, function() {
      return $(window).trigger('delayedResize');
    });
  });
});

  /*
  --------------------------------------------
       Begin jquery.elastislide.js
  --------------------------------------------
   */
/**
 * jquery.elastislide.js v1.1.0
 * http://www.codrops.com
 *
 * Licensed under the MIT license.
 * http://www.opensource.org/licenses/mit-license.php
 *
 * Copyright 2012, Codrops
 * http://www.codrops.com
 */

;( function( $, window, undefined ) {

  'use strict';

  /*
  * debouncedresize: special jQuery event that happens once after a window resize
  *
  * latest version and complete README available on Github:
  * https://github.com/louisremi/jquery-smartresize/blob/master/jquery.debouncedresize.js
  *
  * Copyright 2011 @louis_remi
  * Licensed under the MIT license.
  */

  var $event = $.event,
  $special,
  resizeTimeout;

  $special = $event.special.debouncedresize = {
    setup: function() {
      $( this ).on( "resize", $special.handler );
    },
    teardown: function() {
      $( this ).off( "resize", $special.handler );
    },
    handler: function( event, execAsap ) {
      // Save the context
      var context = this,
        args = arguments,
        dispatch = function() {
          // set correct event type
          event.type = "debouncedresize";
          $event.dispatch.apply( context, args );
        };

      if ( resizeTimeout ) {
        clearTimeout( resizeTimeout );
      }

      execAsap ?
        dispatch() :
        resizeTimeout = setTimeout( dispatch, $special.threshold );
    },
    threshold: 150
  };

  // ======================= imagesLoaded Plugin ===============================
  // https://github.com/desandro/imagesloaded

  // $('#my-container').imagesLoaded(myFunction)
  // execute a callback when all images have loaded.
  // needed because .load() doesn't work on cached images

  // callback function gets image collection as argument
  //  this is the container

  // original: mit license. paul irish. 2010.
  // contributors: Oren Solomianik, David DeSandro, Yiannis Chatzikonstantinou

  // blank image data-uri bypasses webkit log warning (thx doug jones)
  var BLANK = 'data:image/gif;base64,R0lGODlhAQABAIAAAAAAAP///ywAAAAAAQABAAACAUwAOw==';

  $.fn.imagesLoaded = function( callback ) {
    var $this = this,
      deferred = $.isFunction($.Deferred) ? $.Deferred() : 0,
      hasNotify = $.isFunction(deferred.notify),
      $images = $this.find('img').add( $this.filter('img') ),
      loaded = [],
      proper = [],
      broken = [];

    // Register deferred callbacks
    if ($.isPlainObject(callback)) {
      $.each(callback, function (key, value) {
        if (key === 'callback') {
          callback = value;
        } else if (deferred) {
          deferred[key](value);
        }
      });
    }

    function doneLoading() {
      var $proper = $(proper),
        $broken = $(broken);

      if ( deferred ) {
        if ( broken.length ) {
          deferred.reject( $images, $proper, $broken );
        } else {
          deferred.resolve( $images );
        }
      }

      if ( $.isFunction( callback ) ) {
        callback.call( $this, $images, $proper, $broken );
      }
    }

    function imgLoaded( img, isBroken ) {
      // don't proceed if BLANK image, or image is already loaded
      if ( img.src === BLANK || $.inArray( img, loaded ) !== -1 ) {
        return;
      }

      // store element in loaded images array
      loaded.push( img );

      // keep track of broken and properly loaded images
      if ( isBroken ) {
        broken.push( img );
      } else {
        proper.push( img );
      }

      // cache image and its state for future calls
      $.data( img, 'imagesLoaded', { isBroken: isBroken, src: img.src } );

      // trigger deferred progress method if present
      if ( hasNotify ) {
        deferred.notifyWith( $(img), [ isBroken, $images, $(proper), $(broken) ] );
      }

      // call doneLoading and clean listeners if all images are loaded
      if ( $images.length === loaded.length ){
        setTimeout( doneLoading );
        $images.unbind( '.imagesLoaded' );
      }
    }

    // if no images, trigger immediately
    if ( !$images.length ) {
      doneLoading();
    } else {
      $images.bind( 'load.imagesLoaded error.imagesLoaded', function( event ){
        // trigger imgLoaded
        imgLoaded( event.target, event.type === 'error' );
      }).each( function( i, el ) {
        var src = el.src;

        // find out if this image has been already checked for status
        // if it was, and src has not changed, call imgLoaded on it
        var cached = $.data( el, 'imagesLoaded' );
        if ( cached && cached.src === src ) {
          imgLoaded( el, cached.isBroken );
          return;
        }

        // if complete is true and browser supports natural sizes, try
        // to check for image status manually
        if ( el.complete && el.naturalWidth !== undefined ) {
          imgLoaded( el, el.naturalWidth === 0 || el.naturalHeight === 0 );
          return;
        }

        // cached images don't fire load sometimes, so we reset src, but only when
        // dealing with IE, or image is complete (loaded) and failed manual check
        // webkit hack from http://groups.google.com/group/jquery-dev/browse_thread/thread/eee6ab7b2da50e1f
        if ( el.readyState || el.complete ) {
          el.src = BLANK;
          el.src = src;
        }
      });
    }

    return deferred ? deferred.promise( $this ) : $this;
  };

  // global
  var $window = $( window ),
    Modernizr = window.Modernizr;

  $.Elastislide = function( options, element ) {

    this.$el = $( element );
    this._init( options );

  };

  $.Elastislide.defaults = {
    // orientation 'horizontal' || 'vertical'
    orientation : 'horizontal',
    // sliding speed
    speed : 500,
    // sliding easing
    easing : 'ease-in-out',
    // the minimum number of items to show.
    // when we resize the window, this will make sure minItems are always shown
    // (unless of course minItems is higher than the total number of elements)
    minItems : 3,
    // optionally specify a selector rather than using the img element to read the image sizes
    // (we only use the first matching element within our items)
    imgSizeItemSelector : 'img',
    // index of the current item (left most item of the carousel)
    start : 0,
    // autoslide feature: true || false
    // automatically loops through the carousel (after hitting the end of the list goes back to front)
    // disabled by default
    autoSlide: false,
    // autoslide delay time, specifies time interval between autoslide steps (in milliseconds)
    // 3000ms by default
    delayTime: 3000,
    // click item callback
    onClick : function( el, position, evt ) { return false; },
    onReady : function() { return false; },
    onBeforeSlide : function() { return false; },
    onAfterSlide : function() { return false; }
  };

  $.Elastislide.prototype = {

    _init : function( options ) {

      // options
      this.options = $.extend( true, {}, $.Elastislide.defaults, options );

      // https://github.com/twitter/bootstrap/issues/2870
      var self = this,
        transEndEventNames = {
          'WebkitTransition' : 'webkitTransitionEnd',
          'MozTransition' : 'transitionend',
          'OTransition' : 'oTransitionEnd',
          'msTransition' : 'MSTransitionEnd',
          'transition' : 'transitionend'
        };

      this.transEndEventName = transEndEventNames[ Modernizr.prefixed( 'transition' ) ];

      // suport for css transforms and css transitions
      this.support = Modernizr.csstransitions && Modernizr.csstransforms;

      // current item's index
      this.current = this.options.start;

      // control if it's sliding
      this.isSliding = false;

      this.$items = this.$el.children( 'li' );
      // total number of items
      this.itemsCount = this.$items.length;
      if( this.itemsCount === 0 ) {

        return false;

      }
      this._validate();
      // remove white space
      this.$items.detach();
      this.$el.empty();
      this.$el.append( this.$items );

      // main wrapper
      this.$el.wrap( '<div class="elastislide-wrapper elastislide-loading elastislide-' + this.options.orientation + '"></div>' );

      // check if we applied a transition to the <ul>
      this.hasTransition = false;

      // add transition for the <ul>
      this.hasTransitionTimeout = setTimeout( function() {

        self._addTransition();

      }, 100 );

      // preload the images

      this.$el.imagesLoaded( function() {

        self.$el.show();

        self._layout();
        self._configure();

        if( self.hasTransition ) {

          // slide to current's position
          self._removeTransition();
          self._slideToItem( self.current );

          self.$el.on( self.transEndEventName, function() {

            self.$el.off( self.transEndEventName );
            self._setWrapperSize();
            // add transition for the <ul>
            self._addTransition();
            self._initEvents();

          } );

        }
        else {

          clearTimeout( self.hasTransitionTimeout );
          self._setWrapperSize();
          self._initEvents();
          // slide to current's position
          self._slideToItem( self.current );
          setTimeout( function() { self._addTransition(); }, 25 );

        }

        self.options.onReady();

      } );

    },
    _validate : function() {


        if( this.options.minItems instanceof Function ) {

            this._minItemsFn = this.options.minItems;
            this.options.minItems = this.options.minItems( document.documentElement.clientWidth );

        }



      if( this.options.speed < 0 ) {

        this.options.speed = 500;

      }
      if( this.options.minItems < 1 || this.options.minItems > this.itemsCount ) {

        this.options.minItems = 1;

      }
      if( this.options.start < 0 || this.options.start > this.itemsCount - 1 ) {

        this.options.start = 0;

      }
      if( this.options.orientation != 'horizontal' && this.options.orientation != 'vertical' ) {

        this.options.orientation = 'horizontal';

      }

    },
    _layout : function() {

      this.$el.wrap( '<div class="elastislide-carousel"></div>' );

      this.$carousel = this.$el.parent();
      this.$wrapper = this.$carousel.parent().removeClass( 'elastislide-loading' );

      // save original image sizes
      var $img = this.$items.find( this.options.imgSizeItemSelector ).first();
      this.imgSize = { width : $img.outerWidth( true ), height : $img.outerHeight( true ) };

      this._setItemsSize();
      this.options.orientation === 'horizontal' ? this.$el.css( 'max-height', this.imgSize.height ) : this.$el.css( 'height', this.options.minItems * this.imgSize.height );

      // add the controls
      this._addControls();

    },
    _addTransition : function() {

      if( this.support ) {

        this.$el.css( 'transition', 'all ' + this.options.speed + 'ms ' + this.options.easing );

      }
      this.hasTransition = true;

    },
    _removeTransition : function() {

      if( this.support ) {

        this.$el.css( 'transition', 'all 0s' );

      }
      this.hasTransition = false;

    },
    _addControls : function() {

      var self = this;

      // add navigation elements
      this.$navigation = $( '<nav><span class="elastislide-prev">Previous</span><span class="elastislide-next">Next</span></nav>' )
        .appendTo( this.$wrapper );


      this.$navPrev = this.$navigation.find( 'span.elastislide-prev' ).on( 'mousedown.elastislide', function( event ) {

        self._slide( 'prev' );
        return false;

      } );

      this.$navNext = this.$navigation.find( 'span.elastislide-next' ).on( 'mousedown.elastislide', function( event ) {

        self._slide( 'next' );
        return false;

      } );

    },
    _setItemsSize : function() {

      // width for the items (%)
      var w = this.options.orientation === 'horizontal' ? ( Math.floor( this.$carousel.width() / this.options.minItems ) * 100 ) / this.$carousel.width() : 100;

      this.$items.css( {
        'width' : w + '%',
        'max-width' : this.imgSize.width,
        'max-height' : this.imgSize.height
      } );

      if( this.options.orientation === 'vertical' ) {

        this.$wrapper.css( 'max-width', this.imgSize.width + parseInt( this.$wrapper.css( 'padding-left' ) ) + parseInt( this.$wrapper.css( 'padding-right' ) ) );

      }

    },
    _setWrapperSize : function() {

      if( this.options.orientation === 'vertical' ) {

        this.$wrapper.css( {
          'height' : this.options.minItems * this.imgSize.height + parseInt( this.$wrapper.css( 'padding-top' ) ) + parseInt( this.$wrapper.css( 'padding-bottom' ) )
        } );

      }

    },
    _configure : function() {

      // check how many items fit in the carousel (visible area -> this.$carousel.width() )
      this.fitCount = this.options.orientation === 'horizontal' ?
                this.$carousel.width() < this.options.minItems * this.imgSize.width ? this.options.minItems : Math.floor( this.$carousel.width() / this.imgSize.width ) :
                this.$carousel.height() < this.options.minItems * this.imgSize.height ? this.options.minItems : Math.floor( this.$carousel.height() / this.imgSize.height );

    },
    _initEvents : function() {

      var self = this;
      //autoslide. To enablethis, set "var autoSlide" to "true" above.
      if( this.options.autoSlide ) {
        var translation = 0;
        // width/height of an item ( <li> )
        var itemSpace = this.options.orientation === 'horizontal' ? this.$items.outerWidth( true ) : this.$items.outerHeight( true );
        // total width/height of the <ul>
        var totalSpace = this.itemsCount * itemSpace;
        // visible width/height
        var visibleSpace = this.options.orientation === 'horizontal' ? this.$carousel.width() : this.$carousel.height();
        window.setInterval(function(){
            //test if we should go to next slide or return to first slide
            if(totalSpace > translation + visibleSpace)
            {
                self._slide('next');
                translation += visibleSpace;
            }
            else
            {
                self._slideTo(0);
                translation = 0;
            }
        }, this.options.delayTime);
      }

      $window.on( 'debouncedresize.elastislide', function() {

        if( self._minItemsFn ) {
          self.options.minItems = self._minItemsFn( document.documentElement.clientWidth );
        }


        self._setItemsSize();
        self._configure();
        self._slideToItem( self.current );

      } );

      this.$el.on( this.transEndEventName, function() {

        self._onEndTransition();

      } );

      if( this.options.orientation === 'horizontal' ) {

        this.$el.on( {
          swipeleft : function() {

            self._slide( 'next' );

          },
          swiperight : function() {

            self._slide( 'prev' );

          }
        } );

      }
      else {

        this.$el.on( {
          swipeup : function() {

            self._slide( 'next' );

          },
          swipedown : function() {

            self._slide( 'prev' );

          }
        } );

      }

      // item click event
      this.$el.on( 'click.elastislide', 'li', function( event ) {

        var $item = $( this );

        self.options.onClick( $item, $item.index(), event );

      });

    },
    _destroy : function( callback ) {

      this.$el.off( this.transEndEventName ).off( 'swipeleft swiperight swipeup swipedown .elastislide' );
      $window.off( '.elastislide' );

      this.$el.css( {
        'max-height' : 'none',
        'transition' : 'none'
      } ).unwrap( this.$carousel ).unwrap( this.$wrapper );

      this.$items.css( {
        'width' : 'auto',
        'max-width' : 'none',
        'max-height' : 'none'
      } );

      this.$navigation.remove();
      this.$wrapper.remove();

      if( callback ) {

        callback.call();

      }

    },
    _toggleControls : function( dir, display ) {

      if( display ) {

        ( dir === 'next' ) ? this.$navNext.show() : this.$navPrev.show();

      }
      else {

        ( dir === 'next' ) ? this.$navNext.hide() : this.$navPrev.hide();

      }

    },
    _slide : function( dir, tvalue ) {

      if( this.isSliding ) {

        return false;

      }

      this.options.onBeforeSlide();

      this.isSliding = true;

      var self = this,
        translation = this.translation || 0,
        // width/height of an item ( <li> )
        itemSpace = this.options.orientation === 'horizontal' ? this.$items.outerWidth( true ) : this.$items.outerHeight( true ),
        // total width/height of the <ul>
        totalSpace = this.itemsCount * itemSpace,
        // visible width/height
        visibleSpace = this.options.orientation === 'horizontal' ? this.$carousel.width() : this.$carousel.height();

      if( tvalue === undefined ) {

        var amount = this.fitCount * itemSpace;

        if( amount < 0 ) {

          return false;

        }

        if( dir === 'next' && totalSpace - ( Math.abs( translation ) + amount ) < visibleSpace ) {

          amount = totalSpace - ( Math.abs( translation ) + visibleSpace );

          // show / hide navigation buttons
          this._toggleControls( 'next', false );
          this._toggleControls( 'prev', true );

        }
        else if( dir === 'prev' && Math.abs( translation ) - amount < 0 ) {

          amount = Math.abs( translation );

          // show / hide navigation buttons
          this._toggleControls( 'next', true );
          this._toggleControls( 'prev', false );

        }
        else {

          // future translation value
          var ftv = dir === 'next' ? Math.abs( translation ) + Math.abs( amount ) : Math.abs( translation ) - Math.abs( amount );

          // show / hide navigation buttons
          ftv > 0 ? this._toggleControls( 'prev', true ) : this._toggleControls( 'prev', false );
          ftv < totalSpace - visibleSpace ? this._toggleControls( 'next', true ) : this._toggleControls( 'next', false );

        }

        tvalue = dir === 'next' ? translation - amount : translation + amount;

      }
      else {

        var amount = Math.abs( tvalue );

        if( Math.max( totalSpace, visibleSpace ) - amount < visibleSpace ) {

          tvalue  = - ( Math.max( totalSpace, visibleSpace ) - visibleSpace );

        }

        // show / hide navigation buttons
        amount > 0 ? this._toggleControls( 'prev', true ) : this._toggleControls( 'prev', false );
        Math.max( totalSpace, visibleSpace ) - visibleSpace > amount ? this._toggleControls( 'next', true ) : this._toggleControls( 'next', false );

      }

      this.translation = tvalue;

      if( translation === tvalue ) {

        this._onEndTransition();
        return false;

      }

      if( this.support ) {

                    if (this.options.orientation === 'horizontal') {
                        this.$el.css( '-webkit-transform', 'translateX(' + tvalue + 'px)' );
                        this.$el.css( '-o-transform', 'translateX(' + tvalue + 'px)' );
                        this.$el.css( '-ms-transform', 'translateX(' + tvalue + 'px)' );
                        this.$el.css( '-moz-transform', 'translateX(' + tvalue + 'px)' );
                        this.$el.css( 'transform', 'translateX(' + tvalue + 'px)' );
                    } else {
                        this.$el.css( '-webkit-transform', 'translateY(' + tvalue + 'px)' );
                        this.$el.css( '-o-transform', 'translateY(' + tvalue + 'px)' );
                        this.$el.css( '-ms-transform', 'translateY(' + tvalue + 'px)' );
                        this.$el.css( '-moz-transform', 'translateY(' + tvalue + 'px)' );
                        this.$el.css( 'transform', 'translateY(' + tvalue + 'px)' );
                    }

      }
      else {

        $.fn.applyStyle = this.hasTransition ? $.fn.animate : $.fn.css;
        var styleCSS = this.options.orientation === 'horizontal' ? { left : tvalue } : { top : tvalue };

        this.$el.stop().applyStyle( styleCSS, $.extend( true, [], { duration : this.options.speed, complete : function() {

          self._onEndTransition();

        } } ) );

      }

      if( !this.hasTransition ) {

        this._onEndTransition();

      }

    },
    _onEndTransition : function() {

      this.isSliding = false;
      this.options.onAfterSlide();

    },
    _slideTo : function( pos ) {

      var pos = pos || this.current,
        translation = Math.abs( this.translation ) || 0,
        itemSpace = this.options.orientation === 'horizontal' ? this.$items.outerWidth( true ) : this.$items.outerHeight( true ),
        posR = translation + this.$carousel.width(),
        ftv = Math.abs( pos * itemSpace );

      if( ftv + itemSpace > posR || ftv < translation ) {

        this._slideToItem( pos );

      }

    },
    _slideToItem : function( pos ) {

      // how much to slide?
      var amount  = this.options.orientation === 'horizontal' ? pos * this.$items.outerWidth( true ) : pos * this.$items.outerHeight( true );
      this._slide( '', -amount );

    },
    // public method: adds new items to the carousel
    /*

    how to use:
    var carouselEl = $( '#carousel' ),
      carousel = carouselEl.elastislide();
    ...

    // append or prepend new items:
    carouselEl.prepend('<li><a href="#"><img src="images/large/2.jpg" alt="image02" /></a></li>');

    // call the add method:
    es.add();

    */
    add : function( callback ) {

      var self = this,
        oldcurrent = this.current,
        $currentItem = this.$items.eq( this.current );

      // adds new items to the carousel
      this.$items = this.$el.children( 'li' );
      this.itemsCount = this.$items.length;
      this.current = $currentItem.index();
      this._setItemsSize();
      this._configure();
      this._removeTransition();
      oldcurrent < this.current ? this._slideToItem( this.current ) : this._slide( 'next', this.translation );
      setTimeout( function() { self._addTransition(); }, 25 );

      if ( callback ) {

        callback.call();

      }

    },
    // public method: sets a new element as the current. slides to that position
    setCurrent : function( idx, callback ) {

      this.current = idx;

      this._slideTo();

      if ( callback ) {

        callback.call();

      }

    },
    // public method: slides to the next set of items
    next : function() {

      this._slide( 'next' );

    },
    // public method: slides to the previous set of items
    previous : function() {

      this._slide( 'prev' );

    },
    // public method: slides to the first item
    slideStart : function() {

      this._slideTo( 0 );

    },
    // public method: slides to the last item
    slideEnd : function() {

      this._slideTo( this.itemsCount - 1 );

    },
    // public method: destroys the elastislide instance
    destroy : function( callback ) {

      this._destroy( callback );

    }

  };

  var logError = function( message ) {

    if ( window.console ) {

      window.console.error( message );

    }

  };

  $.fn.elastislide = function( options ) {

    if ( typeof options === 'string' ) {

      var args = Array.prototype.slice.call( arguments, 1 );

      this.each(function() {

        var self = $.data( this, 'elastislide' );

        if ( !self ) {

          logError( "cannot call methods on elastislide prior to initialization; " +
          "attempted to call method '" + options + "'" );
          return;

        }

        if ( !$.isFunction( self[options] ) || options.charAt(0) === "_" ) {

          logError( "no such method '" + options + "' for elastislide self" );
          return;

        }

        self[ options ].apply( self, args );

      });

    }
    else {

      this.each(function() {

        var self = $.data( this, 'elastislide' );

        if ( self ) {

          self._init();

        }
        else {

          self = $.data( this, 'elastislide', new $.Elastislide( options, this ) );

        }

      });

    }

    return self;

  };

} )( jQuery, window );

  /*
  --------------------------------------------
       Begin picturefill.js
  --------------------------------------------
   */
/*! picturefill - v3.0.2 - 2016-02-12
 * https://scottjehl.github.io/picturefill/
 * Copyright (c) 2016 https://github.com/scottjehl/picturefill/blob/master/Authors.txt; Licensed MIT
 */
/*! Gecko-Picture - v1.0
 * https://github.com/scottjehl/picturefill/tree/3.0/src/plugins/gecko-picture
 * Firefox's early picture implementation (prior to FF41) is static and does
 * not react to viewport changes. This tiny module fixes this.
 */
(function(window) {
	/*jshint eqnull:true */
	var ua = navigator.userAgent;

	if ( window.HTMLPictureElement && ((/ecko/).test(ua) && ua.match(/rv\:(\d+)/) && RegExp.$1 < 45) ) {
		addEventListener("resize", (function() {
			var timer;

			var dummySrc = document.createElement("source");

			var fixRespimg = function(img) {
				var source, sizes;
				var picture = img.parentNode;

				if (picture.nodeName.toUpperCase() === "PICTURE") {
					source = dummySrc.cloneNode();

					picture.insertBefore(source, picture.firstElementChild);
					setTimeout(function() {
						picture.removeChild(source);
					});
				} else if (!img._pfLastSize || img.offsetWidth > img._pfLastSize) {
					img._pfLastSize = img.offsetWidth;
					sizes = img.sizes;
					img.sizes += ",100vw";
					setTimeout(function() {
						img.sizes = sizes;
					});
				}
			};

			var findPictureImgs = function() {
				var i;
				var imgs = document.querySelectorAll("picture > img, img[srcset][sizes]");
				for (i = 0; i < imgs.length; i++) {
					fixRespimg(imgs[i]);
				}
			};
			var onResize = function() {
				clearTimeout(timer);
				timer = setTimeout(findPictureImgs, 99);
			};
			var mq = window.matchMedia && matchMedia("(orientation: landscape)");
			var init = function() {
				onResize();

				if (mq && mq.addListener) {
					mq.addListener(onResize);
				}
			};

			dummySrc.srcset = "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==";

			if (/^[c|i]|d$/.test(document.readyState || "")) {
				init();
			} else {
				document.addEventListener("DOMContentLoaded", init);
			}

			return onResize;
		})());
	}
})(window);

/*! Picturefill - v3.0.2
 * http://scottjehl.github.io/picturefill
 * Copyright (c) 2015 https://github.com/scottjehl/picturefill/blob/master/Authors.txt;
 *  License: MIT
 */

(function( window, document, undefined ) {
	// Enable strict mode
	"use strict";

	// HTML shim|v it for old IE (IE9 will still need the HTML video tag workaround)
	document.createElement( "picture" );

	var warn, eminpx, alwaysCheckWDescriptor, evalId;
	// local object for method references and testing exposure
	var pf = {};
	var isSupportTestReady = false;
	var noop = function() {};
	var image = document.createElement( "img" );
	var getImgAttr = image.getAttribute;
	var setImgAttr = image.setAttribute;
	var removeImgAttr = image.removeAttribute;
	var docElem = document.documentElement;
	var types = {};
	var cfg = {
		//resource selection:
		algorithm: ""
	};
	var srcAttr = "data-pfsrc";
	var srcsetAttr = srcAttr + "set";
	// ua sniffing is done for undetectable img loading features,
	// to do some non crucial perf optimizations
	var ua = navigator.userAgent;
	var supportAbort = (/rident/).test(ua) || ((/ecko/).test(ua) && ua.match(/rv\:(\d+)/) && RegExp.$1 > 35 );
	var curSrcProp = "currentSrc";
	var regWDesc = /\s+\+?\d+(e\d+)?w/;
	var regSize = /(\([^)]+\))?\s*(.+)/;
	var setOptions = window.picturefillCFG;
	/**
	 * Shortcut property for https://w3c.github.io/webappsec/specs/mixedcontent/#restricts-mixed-content ( for easy overriding in tests )
	 */
	// baseStyle also used by getEmValue (i.e.: width: 1em is important)
	var baseStyle = "position:absolute;left:0;visibility:hidden;display:block;padding:0;border:none;font-size:1em;width:1em;overflow:hidden;clip:rect(0px, 0px, 0px, 0px)";
	var fsCss = "font-size:100%!important;";
	var isVwDirty = true;

	var cssCache = {};
	var sizeLengthCache = {};
	var DPR = window.devicePixelRatio;
	var units = {
		px: 1,
		"in": 96
	};
	var anchor = document.createElement( "a" );
	/**
	 * alreadyRun flag used for setOptions. is it true setOptions will reevaluate
	 * @type {boolean}
	 */
	var alreadyRun = false;

	// Reusable, non-"g" Regexes

	// (Don't use \s, to avoid matching non-breaking space.)
	var regexLeadingSpaces = /^[ \t\n\r\u000c]+/,
	    regexLeadingCommasOrSpaces = /^[, \t\n\r\u000c]+/,
	    regexLeadingNotSpaces = /^[^ \t\n\r\u000c]+/,
	    regexTrailingCommas = /[,]+$/,
	    regexNonNegativeInteger = /^\d+$/,

	    // ( Positive or negative or unsigned integers or decimals, without or without exponents.
	    // Must include at least one digit.
	    // According to spec tests any decimal point must be followed by a digit.
	    // No leading plus sign is allowed.)
	    // https://html.spec.whatwg.org/multipage/infrastructure.html#valid-floating-point-number
	    regexFloatingPoint = /^-?(?:[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?$/;

	var on = function(obj, evt, fn, capture) {
		if ( obj.addEventListener ) {
			obj.addEventListener(evt, fn, capture || false);
		} else if ( obj.attachEvent ) {
			obj.attachEvent( "on" + evt, fn);
		}
	};

	/**
	 * simple memoize function:
	 */

	var memoize = function(fn) {
		var cache = {};
		return function(input) {
			if ( !(input in cache) ) {
				cache[ input ] = fn(input);
			}
			return cache[ input ];
		};
	};

	// UTILITY FUNCTIONS

	// Manual is faster than RegEx
	// http://jsperf.com/whitespace-character/5
	function isSpace(c) {
		return (c === "\u0020" || // space
		        c === "\u0009" || // horizontal tab
		        c === "\u000A" || // new line
		        c === "\u000C" || // form feed
		        c === "\u000D");  // carriage return
	}

	/**
	 * gets a mediaquery and returns a boolean or gets a css length and returns a number
	 * @param css mediaqueries or css length
	 * @returns {boolean|number}
	 *
	 * based on: https://gist.github.com/jonathantneal/db4f77009b155f083738
	 */
	var evalCSS = (function() {

		var regLength = /^([\d\.]+)(em|vw|px)$/;
		var replace = function() {
			var args = arguments, index = 0, string = args[0];
			while (++index in args) {
				string = string.replace(args[index], args[++index]);
			}
			return string;
		};

		var buildStr = memoize(function(css) {

			return "return " + replace((css || "").toLowerCase(),
				// interpret `and`
				/\band\b/g, "&&",

				// interpret `,`
				/,/g, "||",

				// interpret `min-` as >=
				/min-([a-z-\s]+):/g, "e.$1>=",

				// interpret `max-` as <=
				/max-([a-z-\s]+):/g, "e.$1<=",

				//calc value
				/calc([^)]+)/g, "($1)",

				// interpret css values
				/(\d+[\.]*[\d]*)([a-z]+)/g, "($1 * e.$2)",
				//make eval less evil
				/^(?!(e.[a-z]|[0-9\.&=|><\+\-\*\(\)\/])).*/ig, ""
			) + ";";
		});

		return function(css, length) {
			var parsedLength;
			if (!(css in cssCache)) {
				cssCache[css] = false;
				if (length && (parsedLength = css.match( regLength ))) {
					cssCache[css] = parsedLength[ 1 ] * units[parsedLength[ 2 ]];
				} else {
					/*jshint evil:true */
					try{
						cssCache[css] = new Function("e", buildStr(css))(units);
					} catch(e) {}
					/*jshint evil:false */
				}
			}
			return cssCache[css];
		};
	})();

	var setResolution = function( candidate, sizesattr ) {
		if ( candidate.w ) { // h = means height: || descriptor.type === 'h' do not handle yet...
			candidate.cWidth = pf.calcListLength( sizesattr || "100vw" );
			candidate.res = candidate.w / candidate.cWidth ;
		} else {
			candidate.res = candidate.d;
		}
		return candidate;
	};

	/**
	 *
	 * @param opt
	 */
	var picturefill = function( opt ) {

		if (!isSupportTestReady) {return;}

		var elements, i, plen;

		var options = opt || {};

		if ( options.elements && options.elements.nodeType === 1 ) {
			if ( options.elements.nodeName.toUpperCase() === "IMG" ) {
				options.elements =  [ options.elements ];
			} else {
				options.context = options.elements;
				options.elements =  null;
			}
		}

		elements = options.elements || pf.qsa( (options.context || document), ( options.reevaluate || options.reselect ) ? pf.sel : pf.selShort );

		if ( (plen = elements.length) ) {

			pf.setupRun( options );
			alreadyRun = true;

			// Loop through all elements
			for ( i = 0; i < plen; i++ ) {
				pf.fillImg(elements[ i ], options);
			}

			pf.teardownRun( options );
		}
	};

	/**
	 * outputs a warning for the developer
	 * @param {message}
	 * @type {Function}
	 */
	warn = ( window.console && console.warn ) ?
		function( message ) {
			console.warn( message );
		} :
		noop
	;

	if ( !(curSrcProp in image) ) {
		curSrcProp = "src";
	}

	// Add support for standard mime types.
	types[ "image/jpeg" ] = true;
	types[ "image/gif" ] = true;
	types[ "image/png" ] = true;

	function detectTypeSupport( type, typeUri ) {
		// based on Modernizr's lossless img-webp test
		// note: asynchronous
		var image = new window.Image();
		image.onerror = function() {
			types[ type ] = false;
			picturefill();
		};
		image.onload = function() {
			types[ type ] = image.width === 1;
			picturefill();
		};
		image.src = typeUri;
		return "pending";
	}

	// test svg support
	types[ "image/svg+xml" ] = document.implementation.hasFeature( "http://www.w3.org/TR/SVG11/feature#Image", "1.1" );

	/**
	 * updates the internal vW property with the current viewport width in px
	 */
	function updateMetrics() {

		isVwDirty = false;
		DPR = window.devicePixelRatio;
		cssCache = {};
		sizeLengthCache = {};

		pf.DPR = DPR || 1;

		units.width = Math.max(window.innerWidth || 0, docElem.clientWidth);
		units.height = Math.max(window.innerHeight || 0, docElem.clientHeight);

		units.vw = units.width / 100;
		units.vh = units.height / 100;

		evalId = [ units.height, units.width, DPR ].join("-");

		units.em = pf.getEmValue();
		units.rem = units.em;
	}

	function chooseLowRes( lowerValue, higherValue, dprValue, isCached ) {
		var bonusFactor, tooMuch, bonus, meanDensity;

		//experimental
		if (cfg.algorithm === "saveData" ){
			if ( lowerValue > 2.7 ) {
				meanDensity = dprValue + 1;
			} else {
				tooMuch = higherValue - dprValue;
				bonusFactor = Math.pow(lowerValue - 0.6, 1.5);

				bonus = tooMuch * bonusFactor;

				if (isCached) {
					bonus += 0.1 * bonusFactor;
				}

				meanDensity = lowerValue + bonus;
			}
		} else {
			meanDensity = (dprValue > 1) ?
				Math.sqrt(lowerValue * higherValue) :
				lowerValue;
		}

		return meanDensity > dprValue;
	}

	function applyBestCandidate( img ) {
		var srcSetCandidates;
		var matchingSet = pf.getSet( img );
		var evaluated = false;
		if ( matchingSet !== "pending" ) {
			evaluated = evalId;
			if ( matchingSet ) {
				srcSetCandidates = pf.setRes( matchingSet );
				pf.applySetCandidate( srcSetCandidates, img );
			}
		}
		img[ pf.ns ].evaled = evaluated;
	}

	function ascendingSort( a, b ) {
		return a.res - b.res;
	}

	function setSrcToCur( img, src, set ) {
		var candidate;
		if ( !set && src ) {
			set = img[ pf.ns ].sets;
			set = set && set[set.length - 1];
		}

		candidate = getCandidateForSrc(src, set);

		if ( candidate ) {
			src = pf.makeUrl(src);
			img[ pf.ns ].curSrc = src;
			img[ pf.ns ].curCan = candidate;

			if ( !candidate.res ) {
				setResolution( candidate, candidate.set.sizes );
			}
		}
		return candidate;
	}

	function getCandidateForSrc( src, set ) {
		var i, candidate, candidates;
		if ( src && set ) {
			candidates = pf.parseSet( set );
			src = pf.makeUrl(src);
			for ( i = 0; i < candidates.length; i++ ) {
				if ( src === pf.makeUrl(candidates[ i ].url) ) {
					candidate = candidates[ i ];
					break;
				}
			}
		}
		return candidate;
	}

	function getAllSourceElements( picture, candidates ) {
		var i, len, source, srcset;

		// SPEC mismatch intended for size and perf:
		// actually only source elements preceding the img should be used
		// also note: don't use qsa here, because IE8 sometimes doesn't like source as the key part in a selector
		var sources = picture.getElementsByTagName( "source" );

		for ( i = 0, len = sources.length; i < len; i++ ) {
			source = sources[ i ];
			source[ pf.ns ] = true;
			srcset = source.getAttribute( "srcset" );

			// if source does not have a srcset attribute, skip
			if ( srcset ) {
				candidates.push( {
					srcset: srcset,
					media: source.getAttribute( "media" ),
					type: source.getAttribute( "type" ),
					sizes: source.getAttribute( "sizes" )
				} );
			}
		}
	}

	/**
	 * Srcset Parser
	 * By Alex Bell |  MIT License
	 *
	 * @returns Array [{url: _, d: _, w: _, h:_, set:_(????)}, ...]
	 *
	 * Based super duper closely on the reference algorithm at:
	 * https://html.spec.whatwg.org/multipage/embedded-content.html#parse-a-srcset-attribute
	 */

	// 1. Let input be the value passed to this algorithm.
	// (TO-DO : Explain what "set" argument is here. Maybe choose a more
	// descriptive & more searchable name.  Since passing the "set" in really has
	// nothing to do with parsing proper, I would prefer this assignment eventually
	// go in an external fn.)
	function parseSrcset(input, set) {

		function collectCharacters(regEx) {
			var chars,
			    match = regEx.exec(input.substring(pos));
			if (match) {
				chars = match[ 0 ];
				pos += chars.length;
				return chars;
			}
		}

		var inputLength = input.length,
		    url,
		    descriptors,
		    currentDescriptor,
		    state,
		    c,

		    // 2. Let position be a pointer into input, initially pointing at the start
		    //    of the string.
		    pos = 0,

		    // 3. Let candidates be an initially empty source set.
		    candidates = [];

		/**
		* Adds descriptor properties to a candidate, pushes to the candidates array
		* @return undefined
		*/
		// (Declared outside of the while loop so that it's only created once.
		// (This fn is defined before it is used, in order to pass JSHINT.
		// Unfortunately this breaks the sequencing of the spec comments. :/ )
		function parseDescriptors() {

			// 9. Descriptor parser: Let error be no.
			var pError = false,

			// 10. Let width be absent.
			// 11. Let density be absent.
			// 12. Let future-compat-h be absent. (We're implementing it now as h)
			    w, d, h, i,
			    candidate = {},
			    desc, lastChar, value, intVal, floatVal;

			// 13. For each descriptor in descriptors, run the appropriate set of steps
			// from the following list:
			for (i = 0 ; i < descriptors.length; i++) {
				desc = descriptors[ i ];

				lastChar = desc[ desc.length - 1 ];
				value = desc.substring(0, desc.length - 1);
				intVal = parseInt(value, 10);
				floatVal = parseFloat(value);

				// If the descriptor consists of a valid non-negative integer followed by
				// a U+0077 LATIN SMALL LETTER W character
				if (regexNonNegativeInteger.test(value) && (lastChar === "w")) {

					// If width and density are not both absent, then let error be yes.
					if (w || d) {pError = true;}

					// Apply the rules for parsing non-negative integers to the descriptor.
					// If the result is zero, let error be yes.
					// Otherwise, let width be the result.
					if (intVal === 0) {pError = true;} else {w = intVal;}

				// If the descriptor consists of a valid floating-point number followed by
				// a U+0078 LATIN SMALL LETTER X character
				} else if (regexFloatingPoint.test(value) && (lastChar === "x")) {

					// If width, density and future-compat-h are not all absent, then let error
					// be yes.
					if (w || d || h) {pError = true;}

					// Apply the rules for parsing floating-point number values to the descriptor.
					// If the result is less than zero, let error be yes. Otherwise, let density
					// be the result.
					if (floatVal < 0) {pError = true;} else {d = floatVal;}

				// If the descriptor consists of a valid non-negative integer followed by
				// a U+0068 LATIN SMALL LETTER H character
				} else if (regexNonNegativeInteger.test(value) && (lastChar === "h")) {

					// If height and density are not both absent, then let error be yes.
					if (h || d) {pError = true;}

					// Apply the rules for parsing non-negative integers to the descriptor.
					// If the result is zero, let error be yes. Otherwise, let future-compat-h
					// be the result.
					if (intVal === 0) {pError = true;} else {h = intVal;}

				// Anything else, Let error be yes.
				} else {pError = true;}
			} // (close step 13 for loop)

			// 15. If error is still no, then append a new image source to candidates whose
			// URL is url, associated with a width width if not absent and a pixel
			// density density if not absent. Otherwise, there is a parse error.
			if (!pError) {
				candidate.url = url;

				if (w) { candidate.w = w;}
				if (d) { candidate.d = d;}
				if (h) { candidate.h = h;}
				if (!h && !d && !w) {candidate.d = 1;}
				if (candidate.d === 1) {set.has1x = true;}
				candidate.set = set;

				candidates.push(candidate);
			}
		} // (close parseDescriptors fn)

		/**
		* Tokenizes descriptor properties prior to parsing
		* Returns undefined.
		* (Again, this fn is defined before it is used, in order to pass JSHINT.
		* Unfortunately this breaks the logical sequencing of the spec comments. :/ )
		*/
		function tokenize() {

			// 8.1. Descriptor tokeniser: Skip whitespace
			collectCharacters(regexLeadingSpaces);

			// 8.2. Let current descriptor be the empty string.
			currentDescriptor = "";

			// 8.3. Let state be in descriptor.
			state = "in descriptor";

			while (true) {

				// 8.4. Let c be the character at position.
				c = input.charAt(pos);

				//  Do the following depending on the value of state.
				//  For the purpose of this step, "EOF" is a special character representing
				//  that position is past the end of input.

				// In descriptor
				if (state === "in descriptor") {
					// Do the following, depending on the value of c:

				  // Space character
				  // If current descriptor is not empty, append current descriptor to
				  // descriptors and let current descriptor be the empty string.
				  // Set state to after descriptor.
					if (isSpace(c)) {
						if (currentDescriptor) {
							descriptors.push(currentDescriptor);
							currentDescriptor = "";
							state = "after descriptor";
						}

					// U+002C COMMA (,)
					// Advance position to the next character in input. If current descriptor
					// is not empty, append current descriptor to descriptors. Jump to the step
					// labeled descriptor parser.
					} else if (c === ",") {
						pos += 1;
						if (currentDescriptor) {
							descriptors.push(currentDescriptor);
						}
						parseDescriptors();
						return;

					// U+0028 LEFT PARENTHESIS (()
					// Append c to current descriptor. Set state to in parens.
					} else if (c === "\u0028") {
						currentDescriptor = currentDescriptor + c;
						state = "in parens";

					// EOF
					// If current descriptor is not empty, append current descriptor to
					// descriptors. Jump to the step labeled descriptor parser.
					} else if (c === "") {
						if (currentDescriptor) {
							descriptors.push(currentDescriptor);
						}
						parseDescriptors();
						return;

					// Anything else
					// Append c to current descriptor.
					} else {
						currentDescriptor = currentDescriptor + c;
					}
				// (end "in descriptor"

				// In parens
				} else if (state === "in parens") {

					// U+0029 RIGHT PARENTHESIS ())
					// Append c to current descriptor. Set state to in descriptor.
					if (c === ")") {
						currentDescriptor = currentDescriptor + c;
						state = "in descriptor";

					// EOF
					// Append current descriptor to descriptors. Jump to the step labeled
					// descriptor parser.
					} else if (c === "") {
						descriptors.push(currentDescriptor);
						parseDescriptors();
						return;

					// Anything else
					// Append c to current descriptor.
					} else {
						currentDescriptor = currentDescriptor + c;
					}

				// After descriptor
				} else if (state === "after descriptor") {

					// Do the following, depending on the value of c:
					// Space character: Stay in this state.
					if (isSpace(c)) {

					// EOF: Jump to the step labeled descriptor parser.
					} else if (c === "") {
						parseDescriptors();
						return;

					// Anything else
					// Set state to in descriptor. Set position to the previous character in input.
					} else {
						state = "in descriptor";
						pos -= 1;

					}
				}

				// Advance position to the next character in input.
				pos += 1;

			// Repeat this step.
			} // (close while true loop)
		}

		// 4. Splitting loop: Collect a sequence of characters that are space
		//    characters or U+002C COMMA characters. If any U+002C COMMA characters
		//    were collected, that is a parse error.
		while (true) {
			collectCharacters(regexLeadingCommasOrSpaces);

			// 5. If position is past the end of input, return candidates and abort these steps.
			if (pos >= inputLength) {
				return candidates; // (we're done, this is the sole return path)
			}

			// 6. Collect a sequence of characters that are not space characters,
			//    and let that be url.
			url = collectCharacters(regexLeadingNotSpaces);

			// 7. Let descriptors be a new empty list.
			descriptors = [];

			// 8. If url ends with a U+002C COMMA character (,), follow these substeps:
			//		(1). Remove all trailing U+002C COMMA characters from url. If this removed
			//         more than one character, that is a parse error.
			if (url.slice(-1) === ",") {
				url = url.replace(regexTrailingCommas, "");
				// (Jump ahead to step 9 to skip tokenization and just push the candidate).
				parseDescriptors();

			//	Otherwise, follow these substeps:
			} else {
				tokenize();
			} // (close else of step 8)

		// 16. Return to the step labeled splitting loop.
		} // (Close of big while loop.)
	}

	/*
	 * Sizes Parser
	 *
	 * By Alex Bell |  MIT License
	 *
	 * Non-strict but accurate and lightweight JS Parser for the string value <img sizes="here">
	 *
	 * Reference algorithm at:
	 * https://html.spec.whatwg.org/multipage/embedded-content.html#parse-a-sizes-attribute
	 *
	 * Most comments are copied in directly from the spec
	 * (except for comments in parens).
	 *
	 * Grammar is:
	 * <source-size-list> = <source-size># [ , <source-size-value> ]? | <source-size-value>
	 * <source-size> = <media-condition> <source-size-value>
	 * <source-size-value> = <length>
	 * http://www.w3.org/html/wg/drafts/html/master/embedded-content.html#attr-img-sizes
	 *
	 * E.g. "(max-width: 30em) 100vw, (max-width: 50em) 70vw, 100vw"
	 * or "(min-width: 30em), calc(30vw - 15px)" or just "30vw"
	 *
	 * Returns the first valid <css-length> with a media condition that evaluates to true,
	 * or "100vw" if all valid media conditions evaluate to false.
	 *
	 */

	function parseSizes(strValue) {

		// (Percentage CSS lengths are not allowed in this case, to avoid confusion:
		// https://html.spec.whatwg.org/multipage/embedded-content.html#valid-source-size-list
		// CSS allows a single optional plus or minus sign:
		// http://www.w3.org/TR/CSS2/syndata.html#numbers
		// CSS is ASCII case-insensitive:
		// http://www.w3.org/TR/CSS2/syndata.html#characters )
		// Spec allows exponential notation for <number> type:
		// http://dev.w3.org/csswg/css-values/#numbers
		var regexCssLengthWithUnits = /^(?:[+-]?[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?(?:ch|cm|em|ex|in|mm|pc|pt|px|rem|vh|vmin|vmax|vw)$/i;

		// (This is a quick and lenient test. Because of optional unlimited-depth internal
		// grouping parens and strict spacing rules, this could get very complicated.)
		var regexCssCalc = /^calc\((?:[0-9a-z \.\+\-\*\/\(\)]+)\)$/i;

		var i;
		var unparsedSizesList;
		var unparsedSizesListLength;
		var unparsedSize;
		var lastComponentValue;
		var size;

		// UTILITY FUNCTIONS

		//  (Toy CSS parser. The goals here are:
		//  1) expansive test coverage without the weight of a full CSS parser.
		//  2) Avoiding regex wherever convenient.
		//  Quick tests: http://jsfiddle.net/gtntL4gr/3/
		//  Returns an array of arrays.)
		function parseComponentValues(str) {
			var chrctr;
			var component = "";
			var componentArray = [];
			var listArray = [];
			var parenDepth = 0;
			var pos = 0;
			var inComment = false;

			function pushComponent() {
				if (component) {
					componentArray.push(component);
					component = "";
				}
			}

			function pushComponentArray() {
				if (componentArray[0]) {
					listArray.push(componentArray);
					componentArray = [];
				}
			}

			// (Loop forwards from the beginning of the string.)
			while (true) {
				chrctr = str.charAt(pos);

				if (chrctr === "") { // ( End of string reached.)
					pushComponent();
					pushComponentArray();
					return listArray;
				} else if (inComment) {
					if ((chrctr === "*") && (str[pos + 1] === "/")) { // (At end of a comment.)
						inComment = false;
						pos += 2;
						pushComponent();
						continue;
					} else {
						pos += 1; // (Skip all characters inside comments.)
						continue;
					}
				} else if (isSpace(chrctr)) {
					// (If previous character in loop was also a space, or if
					// at the beginning of the string, do not add space char to
					// component.)
					if ( (str.charAt(pos - 1) && isSpace( str.charAt(pos - 1) ) ) || !component ) {
						pos += 1;
						continue;
					} else if (parenDepth === 0) {
						pushComponent();
						pos +=1;
						continue;
					} else {
						// (Replace any space character with a plain space for legibility.)
						chrctr = " ";
					}
				} else if (chrctr === "(") {
					parenDepth += 1;
				} else if (chrctr === ")") {
					parenDepth -= 1;
				} else if (chrctr === ",") {
					pushComponent();
					pushComponentArray();
					pos += 1;
					continue;
				} else if ( (chrctr === "/") && (str.charAt(pos + 1) === "*") ) {
					inComment = true;
					pos += 2;
					continue;
				}

				component = component + chrctr;
				pos += 1;
			}
		}

		function isValidNonNegativeSourceSizeValue(s) {
			if (regexCssLengthWithUnits.test(s) && (parseFloat(s) >= 0)) {return true;}
			if (regexCssCalc.test(s)) {return true;}
			// ( http://www.w3.org/TR/CSS2/syndata.html#numbers says:
			// "-0 is equivalent to 0 and is not a negative number." which means that
			// unitless zero and unitless negative zero must be accepted as special cases.)
			if ((s === "0") || (s === "-0") || (s === "+0")) {return true;}
			return false;
		}

		// When asked to parse a sizes attribute from an element, parse a
		// comma-separated list of component values from the value of the element's
		// sizes attribute (or the empty string, if the attribute is absent), and let
		// unparsed sizes list be the result.
		// http://dev.w3.org/csswg/css-syntax/#parse-comma-separated-list-of-component-values

		unparsedSizesList = parseComponentValues(strValue);
		unparsedSizesListLength = unparsedSizesList.length;

		// For each unparsed size in unparsed sizes list:
		for (i = 0; i < unparsedSizesListLength; i++) {
			unparsedSize = unparsedSizesList[i];

			// 1. Remove all consecutive <whitespace-token>s from the end of unparsed size.
			// ( parseComponentValues() already omits spaces outside of parens. )

			// If unparsed size is now empty, that is a parse error; continue to the next
			// iteration of this algorithm.
			// ( parseComponentValues() won't push an empty array. )

			// 2. If the last component value in unparsed size is a valid non-negative
			// <source-size-value>, let size be its value and remove the component value
			// from unparsed size. Any CSS function other than the calc() function is
			// invalid. Otherwise, there is a parse error; continue to the next iteration
			// of this algorithm.
			// http://dev.w3.org/csswg/css-syntax/#parse-component-value
			lastComponentValue = unparsedSize[unparsedSize.length - 1];

			if (isValidNonNegativeSourceSizeValue(lastComponentValue)) {
				size = lastComponentValue;
				unparsedSize.pop();
			} else {
				continue;
			}

			// 3. Remove all consecutive <whitespace-token>s from the end of unparsed
			// size. If unparsed size is now empty, return size and exit this algorithm.
			// If this was not the last item in unparsed sizes list, that is a parse error.
			if (unparsedSize.length === 0) {
				return size;
			}

			// 4. Parse the remaining component values in unparsed size as a
			// <media-condition>. If it does not parse correctly, or it does parse
			// correctly but the <media-condition> evaluates to false, continue to the
			// next iteration of this algorithm.
			// (Parsing all possible compound media conditions in JS is heavy, complicated,
			// and the payoff is unclear. Is there ever an situation where the
			// media condition parses incorrectly but still somehow evaluates to true?
			// Can we just rely on the browser/polyfill to do it?)
			unparsedSize = unparsedSize.join(" ");
			if (!(pf.matchesMedia( unparsedSize ) ) ) {
				continue;
			}

			// 5. Return size and exit this algorithm.
			return size;
		}

		// If the above algorithm exhausts unparsed sizes list without returning a
		// size value, return 100vw.
		return "100vw";
	}

	// namespace
	pf.ns = ("pf" + new Date().getTime()).substr(0, 9);

	// srcset support test
	pf.supSrcset = "srcset" in image;
	pf.supSizes = "sizes" in image;
	pf.supPicture = !!window.HTMLPictureElement;

	// UC browser does claim to support srcset and picture, but not sizes,
	// this extended test reveals the browser does support nothing
	if (pf.supSrcset && pf.supPicture && !pf.supSizes) {
		(function(image2) {
			image.srcset = "data:,a";
			image2.src = "data:,a";
			pf.supSrcset = image.complete === image2.complete;
			pf.supPicture = pf.supSrcset && pf.supPicture;
		})(document.createElement("img"));
	}

	// Safari9 has basic support for sizes, but does't expose the `sizes` idl attribute
	if (pf.supSrcset && !pf.supSizes) {

		(function() {
			var width2 = "data:image/gif;base64,R0lGODlhAgABAPAAAP///wAAACH5BAAAAAAALAAAAAACAAEAAAICBAoAOw==";
			var width1 = "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==";
			var img = document.createElement("img");
			var test = function() {
				var width = img.width;

				if (width === 2) {
					pf.supSizes = true;
				}

				alwaysCheckWDescriptor = pf.supSrcset && !pf.supSizes;

				isSupportTestReady = true;
				// force async
				setTimeout(picturefill);
			};

			img.onload = test;
			img.onerror = test;
			img.setAttribute("sizes", "9px");

			img.srcset = width1 + " 1w," + width2 + " 9w";
			img.src = width1;
		})();

	} else {
		isSupportTestReady = true;
	}

	// using pf.qsa instead of dom traversing does scale much better,
	// especially on sites mixing responsive and non-responsive images
	pf.selShort = "picture>img,img[srcset]";
	pf.sel = pf.selShort;
	pf.cfg = cfg;

	/**
	 * Shortcut property for `devicePixelRatio` ( for easy overriding in tests )
	 */
	pf.DPR = (DPR  || 1 );
	pf.u = units;

	// container of supported mime types that one might need to qualify before using
	pf.types =  types;

	pf.setSize = noop;

	/**
	 * Gets a string and returns the absolute URL
	 * @param src
	 * @returns {String} absolute URL
	 */

	pf.makeUrl = memoize(function(src) {
		anchor.href = src;
		return anchor.href;
	});

	/**
	 * Gets a DOM element or document and a selctor and returns the found matches
	 * Can be extended with jQuery/Sizzle for IE7 support
	 * @param context
	 * @param sel
	 * @returns {NodeList|Array}
	 */
	pf.qsa = function(context, sel) {
		return ( "querySelector" in context ) ? context.querySelectorAll(sel) : [];
	};

	/**
	 * Shortcut method for matchMedia ( for easy overriding in tests )
	 * wether native or pf.mMQ is used will be decided lazy on first call
	 * @returns {boolean}
	 */
	pf.matchesMedia = function() {
		if ( window.matchMedia && (matchMedia( "(min-width: 0.1em)" ) || {}).matches ) {
			pf.matchesMedia = function( media ) {
				return !media || ( matchMedia( media ).matches );
			};
		} else {
			pf.matchesMedia = pf.mMQ;
		}

		return pf.matchesMedia.apply( this, arguments );
	};

	/**
	 * A simplified matchMedia implementation for IE8 and IE9
	 * handles only min-width/max-width with px or em values
	 * @param media
	 * @returns {boolean}
	 */
	pf.mMQ = function( media ) {
		return media ? evalCSS(media) : true;
	};

	/**
	 * Returns the calculated length in css pixel from the given sourceSizeValue
	 * http://dev.w3.org/csswg/css-values-3/#length-value
	 * intended Spec mismatches:
	 * * Does not check for invalid use of CSS functions
	 * * Does handle a computed length of 0 the same as a negative and therefore invalid value
	 * @param sourceSizeValue
	 * @returns {Number}
	 */
	pf.calcLength = function( sourceSizeValue ) {

		var value = evalCSS(sourceSizeValue, true) || false;
		if (value < 0) {
			value = false;
		}

		return value;
	};

	/**
	 * Takes a type string and checks if its supported
	 */

	pf.supportsType = function( type ) {
		return ( type ) ? types[ type ] : true;
	};

	/**
	 * Parses a sourceSize into mediaCondition (media) and sourceSizeValue (length)
	 * @param sourceSizeStr
	 * @returns {*}
	 */
	pf.parseSize = memoize(function( sourceSizeStr ) {
		var match = ( sourceSizeStr || "" ).match(regSize);
		return {
			media: match && match[1],
			length: match && match[2]
		};
	});

	pf.parseSet = function( set ) {
		if ( !set.cands ) {
			set.cands = parseSrcset(set.srcset, set);
		}
		return set.cands;
	};

	/**
	 * returns 1em in css px for html/body default size
	 * function taken from respondjs
	 * @returns {*|number}
	 */
	pf.getEmValue = function() {
		var body;
		if ( !eminpx && (body = document.body) ) {
			var div = document.createElement( "div" ),
				originalHTMLCSS = docElem.style.cssText,
				originalBodyCSS = body.style.cssText;

			div.style.cssText = baseStyle;

			// 1em in a media query is the value of the default font size of the browser
			// reset docElem and body to ensure the correct value is returned
			docElem.style.cssText = fsCss;
			body.style.cssText = fsCss;

			body.appendChild( div );
			eminpx = div.offsetWidth;
			body.removeChild( div );

			//also update eminpx before returning
			eminpx = parseFloat( eminpx, 10 );

			// restore the original values
			docElem.style.cssText = originalHTMLCSS;
			body.style.cssText = originalBodyCSS;

		}
		return eminpx || 16;
	};

	/**
	 * Takes a string of sizes and returns the width in pixels as a number
	 */
	pf.calcListLength = function( sourceSizeListStr ) {
		// Split up source size list, ie ( max-width: 30em ) 100%, ( max-width: 50em ) 50%, 33%
		//
		//                           or (min-width:30em) calc(30% - 15px)
		if ( !(sourceSizeListStr in sizeLengthCache) || cfg.uT ) {
			var winningLength = pf.calcLength( parseSizes( sourceSizeListStr ) );

			sizeLengthCache[ sourceSizeListStr ] = !winningLength ? units.width : winningLength;
		}

		return sizeLengthCache[ sourceSizeListStr ];
	};

	/**
	 * Takes a candidate object with a srcset property in the form of url/
	 * ex. "images/pic-medium.png 1x, images/pic-medium-2x.png 2x" or
	 *     "images/pic-medium.png 400w, images/pic-medium-2x.png 800w" or
	 *     "images/pic-small.png"
	 * Get an array of image candidates in the form of
	 *      {url: "/foo/bar.png", resolution: 1}
	 * where resolution is http://dev.w3.org/csswg/css-values-3/#resolution-value
	 * If sizes is specified, res is calculated
	 */
	pf.setRes = function( set ) {
		var candidates;
		if ( set ) {

			candidates = pf.parseSet( set );

			for ( var i = 0, len = candidates.length; i < len; i++ ) {
				setResolution( candidates[ i ], set.sizes );
			}
		}
		return candidates;
	};

	pf.setRes.res = setResolution;

	pf.applySetCandidate = function( candidates, img ) {
		if ( !candidates.length ) {return;}
		var candidate,
			i,
			j,
			length,
			bestCandidate,
			curSrc,
			curCan,
			candidateSrc,
			abortCurSrc;

		var imageData = img[ pf.ns ];
		var dpr = pf.DPR;

		curSrc = imageData.curSrc || img[curSrcProp];

		curCan = imageData.curCan || setSrcToCur(img, curSrc, candidates[0].set);

		// if we have a current source, we might either become lazy or give this source some advantage
		if ( curCan && curCan.set === candidates[ 0 ].set ) {

			// if browser can abort image request and the image has a higher pixel density than needed
			// and this image isn't downloaded yet, we skip next part and try to save bandwidth
			abortCurSrc = (supportAbort && !img.complete && curCan.res - 0.1 > dpr);

			if ( !abortCurSrc ) {
				curCan.cached = true;

				// if current candidate is "best", "better" or "okay",
				// set it to bestCandidate
				if ( curCan.res >= dpr ) {
					bestCandidate = curCan;
				}
			}
		}

		if ( !bestCandidate ) {

			candidates.sort( ascendingSort );

			length = candidates.length;
			bestCandidate = candidates[ length - 1 ];

			for ( i = 0; i < length; i++ ) {
				candidate = candidates[ i ];
				if ( candidate.res >= dpr ) {
					j = i - 1;

					// we have found the perfect candidate,
					// but let's improve this a little bit with some assumptions ;-)
					if (candidates[ j ] &&
						(abortCurSrc || curSrc !== pf.makeUrl( candidate.url )) &&
						chooseLowRes(candidates[ j ].res, candidate.res, dpr, candidates[ j ].cached)) {

						bestCandidate = candidates[ j ];

					} else {
						bestCandidate = candidate;
					}
					break;
				}
			}
		}

		if ( bestCandidate ) {

			candidateSrc = pf.makeUrl( bestCandidate.url );

			imageData.curSrc = candidateSrc;
			imageData.curCan = bestCandidate;

			if ( candidateSrc !== curSrc ) {
				pf.setSrc( img, bestCandidate );
			}
			pf.setSize( img );
		}
	};

	pf.setSrc = function( img, bestCandidate ) {
		var origWidth;
		img.src = bestCandidate.url;

		// although this is a specific Safari issue, we don't want to take too much different code paths
		if ( bestCandidate.set.type === "image/svg+xml" ) {
			origWidth = img.style.width;
			img.style.width = (img.offsetWidth + 1) + "px";

			// next line only should trigger a repaint
			// if... is only done to trick dead code removal
			if ( img.offsetWidth + 1 ) {
				img.style.width = origWidth;
			}
		}
	};

	pf.getSet = function( img ) {
		var i, set, supportsType;
		var match = false;
		var sets = img [ pf.ns ].sets;

		for ( i = 0; i < sets.length && !match; i++ ) {
			set = sets[i];

			if ( !set.srcset || !pf.matchesMedia( set.media ) || !(supportsType = pf.supportsType( set.type )) ) {
				continue;
			}

			if ( supportsType === "pending" ) {
				set = supportsType;
			}

			match = set;
			break;
		}

		return match;
	};

	pf.parseSets = function( element, parent, options ) {
		var srcsetAttribute, imageSet, isWDescripor, srcsetParsed;

		var hasPicture = parent && parent.nodeName.toUpperCase() === "PICTURE";
		var imageData = element[ pf.ns ];

		if ( imageData.src === undefined || options.src ) {
			imageData.src = getImgAttr.call( element, "src" );
			if ( imageData.src ) {
				setImgAttr.call( element, srcAttr, imageData.src );
			} else {
				removeImgAttr.call( element, srcAttr );
			}
		}

		if ( imageData.srcset === undefined || options.srcset || !pf.supSrcset || element.srcset ) {
			srcsetAttribute = getImgAttr.call( element, "srcset" );
			imageData.srcset = srcsetAttribute;
			srcsetParsed = true;
		}

		imageData.sets = [];

		if ( hasPicture ) {
			imageData.pic = true;
			getAllSourceElements( parent, imageData.sets );
		}

		if ( imageData.srcset ) {
			imageSet = {
				srcset: imageData.srcset,
				sizes: getImgAttr.call( element, "sizes" )
			};

			imageData.sets.push( imageSet );

			isWDescripor = (alwaysCheckWDescriptor || imageData.src) && regWDesc.test(imageData.srcset || "");

			// add normal src as candidate, if source has no w descriptor
			if ( !isWDescripor && imageData.src && !getCandidateForSrc(imageData.src, imageSet) && !imageSet.has1x ) {
				imageSet.srcset += ", " + imageData.src;
				imageSet.cands.push({
					url: imageData.src,
					d: 1,
					set: imageSet
				});
			}

		} else if ( imageData.src ) {
			imageData.sets.push( {
				srcset: imageData.src,
				sizes: null
			} );
		}

		imageData.curCan = null;
		imageData.curSrc = undefined;

		// if img has picture or the srcset was removed or has a srcset and does not support srcset at all
		// or has a w descriptor (and does not support sizes) set support to false to evaluate
		imageData.supported = !( hasPicture || ( imageSet && !pf.supSrcset ) || (isWDescripor && !pf.supSizes) );

		if ( srcsetParsed && pf.supSrcset && !imageData.supported ) {
			if ( srcsetAttribute ) {
				setImgAttr.call( element, srcsetAttr, srcsetAttribute );
				element.srcset = "";
			} else {
				removeImgAttr.call( element, srcsetAttr );
			}
		}

		if (imageData.supported && !imageData.srcset && ((!imageData.src && element.src) ||  element.src !== pf.makeUrl(imageData.src))) {
			if (imageData.src === null) {
				element.removeAttribute("src");
			} else {
				element.src = imageData.src;
			}
		}

		imageData.parsed = true;
	};

	pf.fillImg = function(element, options) {
		var imageData;
		var extreme = options.reselect || options.reevaluate;

		// expando for caching data on the img
		if ( !element[ pf.ns ] ) {
			element[ pf.ns ] = {};
		}

		imageData = element[ pf.ns ];

		// if the element has already been evaluated, skip it
		// unless `options.reevaluate` is set to true ( this, for example,
		// is set to true when running `picturefill` on `resize` ).
		if ( !extreme && imageData.evaled === evalId ) {
			return;
		}

		if ( !imageData.parsed || options.reevaluate ) {
			pf.parseSets( element, element.parentNode, options );
		}

		if ( !imageData.supported ) {
			applyBestCandidate( element );
		} else {
			imageData.evaled = evalId;
		}
	};

	pf.setupRun = function() {
		if ( !alreadyRun || isVwDirty || (DPR !== window.devicePixelRatio) ) {
			updateMetrics();
		}
	};

	// If picture is supported, well, that's awesome.
	if ( pf.supPicture ) {
		picturefill = noop;
		pf.fillImg = noop;
	} else {

		 // Set up picture polyfill by polling the document
		(function() {
			var isDomReady;
			var regReady = window.attachEvent ? /d$|^c/ : /d$|^c|^i/;

			var run = function() {
				var readyState = document.readyState || "";

				timerId = setTimeout(run, readyState === "loading" ? 200 :  999);
				if ( document.body ) {
					pf.fillImgs();
					isDomReady = isDomReady || regReady.test(readyState);
					if ( isDomReady ) {
						clearTimeout( timerId );
					}

				}
			};

			var timerId = setTimeout(run, document.body ? 9 : 99);

			// Also attach picturefill on resize and readystatechange
			// http://modernjavascript.blogspot.com/2013/08/building-better-debounce.html
			var debounce = function(func, wait) {
				var timeout, timestamp;
				var later = function() {
					var last = (new Date()) - timestamp;

					if (last < wait) {
						timeout = setTimeout(later, wait - last);
					} else {
						timeout = null;
						func();
					}
				};

				return function() {
					timestamp = new Date();

					if (!timeout) {
						timeout = setTimeout(later, wait);
					}
				};
			};
			var lastClientWidth = docElem.clientHeight;
			var onResize = function() {
				isVwDirty = Math.max(window.innerWidth || 0, docElem.clientWidth) !== units.width || docElem.clientHeight !== lastClientWidth;
				lastClientWidth = docElem.clientHeight;
				if ( isVwDirty ) {
					pf.fillImgs();
				}
			};

			on( window, "resize", debounce(onResize, 99 ) );
			on( document, "readystatechange", run );
		})();
	}

	pf.picturefill = picturefill;
	//use this internally for easy monkey patching/performance testing
	pf.fillImgs = picturefill;
	pf.teardownRun = noop;

	/* expose methods for testing */
	picturefill._ = pf;

	window.picturefillCFG = {
		pf: pf,
		push: function(args) {
			var name = args.shift();
			if (typeof pf[name] === "function") {
				pf[name].apply(pf, args);
			} else {
				cfg[name] = args[0];
				if (alreadyRun) {
					pf.fillImgs( { reselect: true } );
				}
			}
		}
	};

	while (setOptions && setOptions.length) {
		window.picturefillCFG.push(setOptions.shift());
	}

	/* expose picturefill */
	window.picturefill = picturefill;

	/* expose picturefill */
	if ( typeof module === "object" && typeof module.exports === "object" ) {
		// CommonJS, just export
		module.exports = picturefill;
	} else if ( typeof define === "function" && define.amd ) {
		// AMD support
		define( "picturefill", function() { return picturefill; } );
	}

	// IE8 evals this sync, so it must be the last thing we do
	if ( !pf.supPicture ) {
		types[ "image/webp" ] = detectTypeSupport("image/webp", "data:image/webp;base64,UklGRkoAAABXRUJQVlA4WAoAAAAQAAAAAAAAAAAAQUxQSAwAAAABBxAR/Q9ERP8DAABWUDggGAAAADABAJ0BKgEAAQADADQlpAADcAD++/1QAA==" );
	}

} )( window, document );

  /*
  --------------------------------------------
       Begin jquery.fitvids.js
  --------------------------------------------
   */
/*global jQuery */
/*jshint browser:true */
/*!
* FitVids 1.1
*
* Copyright 2013, Chris Coyier - http://css-tricks.com + Dave Rupert - http://daverupert.com
* Credit to Thierry Koblentz - http://www.alistapart.com/articles/creating-intrinsic-ratios-for-video/
* Released under the WTFPL license - http://sam.zoy.org/wtfpl/
*
*/

(function( $ ){

  "use strict";

  $.fn.fitVids = function( options ) {
    var settings = {
      customSelector: null
    };

    if(!document.getElementById('fit-vids-style')) {
      // appendStyles: https://github.com/toddmotto/fluidvids/blob/master/dist/fluidvids.js
      var head = document.head || document.getElementsByTagName('head')[0];
      var css = '.fluid-width-video-wrapper{width:100%;position:relative;padding:0;}.fluid-width-video-wrapper iframe,.fluid-width-video-wrapper object,.fluid-width-video-wrapper embed {position:absolute;top:0;left:0;width:100%;height:100%;}';
      var div = document.createElement('div');
      div.innerHTML = '<p>x</p><style id="fit-vids-style">' + css + '</style>';
      head.appendChild(div.childNodes[1]);
    }

    if ( options ) {
      $.extend( settings, options );
    }

    return this.each(function(){
      var selectors = [
        "iframe[src*='player.vimeo.com']",
        "iframe[src*='youtube.com']",
        "iframe[src*='youtube-nocookie.com']",
        "iframe[src*='kickstarter.com'][src*='video.html']"
      ];

      if (settings.customSelector) {
        selectors.push(settings.customSelector);
      }

      var $allVideos = $(this).find(selectors.join(','));
      $allVideos = $allVideos.not("object object"); // SwfObj conflict patch

      $allVideos.each(function(){
        var $this = $(this);
        if (this.tagName.toLowerCase() === 'embed' && $this.parent('object').length || $this.parent('.fluid-width-video-wrapper').length) { return; }
        var height = ( this.tagName.toLowerCase() === 'object' || ($this.attr('height') && !isNaN(parseInt($this.attr('height'), 10))) ) ? parseInt($this.attr('height'), 10) : $this.height(),
            width = !isNaN(parseInt($this.attr('width'), 10)) ? parseInt($this.attr('width'), 10) : $this.width(),
            aspectRatio = height / width;
        if(!$this.attr('id')){
          var videoID = 'fitvid' + Math.floor(Math.random()*999999);
          $this.attr('id', videoID);
        }
        $this.wrap('<div class="fluid-width-video-wrapper"></div>').parent('.fluid-width-video-wrapper').css('padding-top', (aspectRatio * 100)+"%");
        $this.removeAttr('height').removeAttr('width');
      });
    });
  };
// Works with either jQuery or Zepto
})( window.jQuery || window.Zepto );

  /*
  --------------------------------------------
       Begin utils.js.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
var exports;

exports = exports != null ? exports : this;

exports.delay = function(ms, func) {
  return setTimeout(func, ms);
};

exports.cancel = function(id) {
  return clearTimeout(id);
};

exports.storeWithExpiration = {
  set: function(key, val, exp) {
    return store.set(key, {
      val: val,
      exp: exp,
      time: new Date().getTime()
    });
  },
  get: function(key) {
    var info;
    info = store.get(key);
    if (!info) {
      return null;
    }
    if (new Date().getTime() - info.time > info.exp) {
      return null;
    }
    return info.val;
  }
};

// Generated by CoffeeScript 1.12.2
  /*
  --------------------------------------------
       Begin alertMessage.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  return $("body").on("click", ".js--close", function() {
    var $alert, alertState;
    $alert = $(this).parent();
    $alert.slideUp(250, function() {
      return $alert.remove();
    });
    alertState = store.get("alert");
    if (alertState !== "hidden") {
      storeWithExpiration.set("alert", "hidden", 86400000);
    }
    return false;
  });
});

  /*
  --------------------------------------------
       Begin scrollHover.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  var body, scrollTimer;
  body = document.body;
  scrollTimer = null;
  if (!$('body.ltie9')) {
    return window.addEventListener('scroll', (function() {
      clearTimeout(scrollTimer);
      if (!body.classList.contains('disableHover')) {
        body.classList.add('disableHover');
      }
      return scrollTimer = delay(100, function() {
        return body.classList.remove('disableHover');
      });
    }), false);
  }
});

  /*
  --------------------------------------------
       Begin svgLoader.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  return $.ajax('/profiles/fieldmuseum/themes/esquif/images/icons/sprite.svg', {
    dataType: 'html',
    success: function(data) {
      return $('head').append(data);
    }
  });
});

  /*
  --------------------------------------------
       Begin fitvids.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  return $(".l--body__content").fitVids();
});

  /*
  --------------------------------------------
       Begin pictureFill.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  return picturefill({
    elements: $(".js--pictureFill")
  });
});

  /*
  --------------------------------------------
       Begin gallery.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
var Gallery;

Gallery = (function() {
  var config;

  function Gallery() {}

  config = {
    selector: {
      gallery: '.js--gallery',
      viewer: '.js--viewer__items',
      viewerItem: '.js--viewer__item',
      viewerPrev: '.js--viewer__prev',
      viewerNext: '.js--viewer__next',
      viewerLoader: '.js--viewer__loader',
      carousel: '.js--carousel__items',
      carouselItem: '.js--carousel__item',
      carouselPrev: '.js--carousel__prev',
      carouselNext: '.js--carousel__next'
    },
    "class": {
      activeCarouselItem: 'is--active',
      activeViewerItem: 'is--active',
      viewerItem: 'viewer__item js--viewer__item',
      viewerLink: 'viewer__link',
      viewerImage: 'viewer__image',
      viewerCaption: 'viewer__caption'
    },
    picturefill: true,
    preloadViewer: false,
    minCarouselItems: 1
  };

  Gallery.prototype.load = function() {
    return this.initGalleries();
  };

  Gallery.prototype.initGalleries = function() {
    var $galleries, gallery, i, len, results;
    $galleries = this.getGalleries();
    results = [];
    for (i = 0, len = $galleries.length; i < len; i++) {
      gallery = $galleries[i];
      results.push(this.initGallery(gallery));
    }
    return results;
  };

  Gallery.prototype.initGallery = function(gallery, activeIndex) {
    var $gallery;
    if (activeIndex == null) {
      activeIndex = 0;
    }
    $gallery = $(gallery).first();
    this.setActiveItemIndex($gallery, activeIndex);
    this.initCarousels(gallery);
    return this.initViewer(gallery);
  };

  Gallery.prototype.initCarousels = function(gallery) {
    var $carousels, $gallery, carousel, i, len, results;
    $gallery = $(gallery).first();
    $carousels = $gallery.find(config.selector.carousel);
    results = [];
    for (i = 0, len = $carousels.length; i < len; i++) {
      carousel = $carousels[i];
      results.push(this.initCarousel(carousel));
    }
    return results;
  };

  Gallery.prototype.initCarousel = function(carousel) {
    var $gallery, activeIndex;
    $gallery = $(carousel).closest(config.selector.gallery);
    activeIndex = this.getActiveItemIndex($gallery);
    this.setItemCount($gallery);
    this.reindexCarouselItems(carousel);
    this.highlightCarouselItemFromIndex($gallery, activeIndex);
    return this.initCarouselNav(carousel);
  };

  Gallery.prototype.initViewer = function(gallery) {
    var $gallery, $viewer, activeIndex;
    $gallery = $(gallery).first();
    $viewer = $gallery.find(config.selector.viewer).first();
    activeIndex = this.getActiveItemIndex($gallery);
    this.initFirstViewerItem($viewer);
    return this.initViewerNav($gallery);
  };

  Gallery.prototype.initFirstViewerItem = function(viewer) {
    var $firstViewerItem, $viewer;
    $viewer = $(viewer);
    $firstViewerItem = $viewer.find(config.selector.viewerItems).first();
    return this.setItemIndex($firstViewerItem, 0);
  };

  Gallery.prototype.initCarouselNav = function(carousel) {
    var $carousel;
    $carousel = $(carousel);
    return $carousel.elastislide({
      minItems: config.minCarouselItems,
      imgSizeItemSelector: '.carousel__image',
      onClick: (function(_this) {
        return function(carouselItem, index, event) {
          return _this.selectCarouselItem(carouselItem);
        };
      })(this)
    });
  };

  Gallery.prototype.initViewerNav = function(gallery) {
    var $gallery;
    $gallery = $(gallery);
    $gallery.find(config.selector.viewerPrev).click((function(_this) {
      return function(event) {
        var $target;
        $target = $(event.target);
        $gallery = $target.closest(config.selector.gallery);
        return _this.selectPrev($gallery);
      };
    })(this));
    return $gallery.find(config.selector.viewerNext).click((function(_this) {
      return function(event) {
        var $target;
        $target = $(event.target);
        $gallery = $target.closest(config.selector.gallery);
        return _this.selectNext($gallery);
      };
    })(this));
  };

  Gallery.prototype.selectNext = function(gallery) {
    var $gallery, activeIndex, itemCount, nextIndex;
    $gallery = $(gallery);
    activeIndex = parseInt(this.getActiveItemIndex($gallery));
    itemCount = parseInt(this.getItemCount($gallery));
    nextIndex = activeIndex + 1;
    if (nextIndex >= itemCount) {
      nextIndex = 0;
    }
    console.log(nextIndex);
    return this.selectViewerItem($gallery, nextIndex);
  };

  Gallery.prototype.selectPrev = function(gallery) {
    var $gallery, activeIndex, itemCount, prevIndex;
    $gallery = $(gallery);
    activeIndex = parseInt(this.getActiveItemIndex($gallery));
    itemCount = parseInt(this.getItemCount($gallery));
    prevIndex = activeIndex - 1;
    if (prevIndex < 0) {
      prevIndex = itemCount - 1;
    }
    console.log(prevIndex);
    return this.selectViewerItem($gallery, prevIndex);
  };

  Gallery.prototype.hasNext = function() {};

  Gallery.prototype.hasPrev = function() {};

  Gallery.prototype.getGalleries = function() {
    return $(config.selector.gallery);
  };

  Gallery.prototype.setActiveItemIndex = function(gallery, index) {
    return $(gallery).attr("data-active-item-index", index);
  };

  Gallery.prototype.getActiveItemIndex = function(gallery) {
    return $(gallery).attr("data-active-item-index");
  };

  Gallery.prototype.setItemIndex = function(selector, index) {
    return $(selector).attr("data-item-index", index);
  };

  Gallery.prototype.getItemIndex = function(selector) {
    return $(selector).attr("data-item-index");
  };

  Gallery.prototype.getItemIndexSelector = function(index) {
    return "[data-item-index=" + index + "]";
  };

  Gallery.prototype.setItemCount = function(gallery, itemCount) {
    var $carousel, $carouselItems, $gallery;
    if (itemCount == null) {
      itemCount = null;
    }
    $gallery = $(gallery);
    if (!itemCount) {
      $carousel = $gallery.find(config.selector.carousel).first();
      $carouselItems = $carousel.find(config.selector.carouselItem);
      itemCount = $carouselItems.length;
    }
    return $gallery.attr("data-item-count", itemCount);
  };

  Gallery.prototype.getItemCount = function(gallery) {
    return $(gallery).attr("data-item-count");
  };

  Gallery.prototype.reindexCarouselItems = function(carousel) {
    var $carousel, $carouselItems, carouselItem, i, index, len, results;
    $carousel = $(carousel).first();
    $carouselItems = $carousel.find(config.selector.carouselItem);
    results = [];
    for (index = i = 0, len = $carouselItems.length; i < len; index = ++i) {
      carouselItem = $carouselItems[index];
      results.push(this.setItemIndex(carouselItem, index));
    }
    return results;
  };

  Gallery.prototype.reindexViewerItems = function(viewer) {};

  Gallery.prototype.selectViewerItem = function(gallery, index) {
    var $carouselItem, $gallery;
    $gallery = $(gallery);
    $carouselItem = $gallery.find(config.selector.carouselItem + "[data-item-index=" + index + "]").first();
    this.setActiveItemIndex($gallery, index);
    this.highlightCarouselItem($carouselItem);
    this.updateCarouselNav($carouselItem);
    this.loadViewerItem($carouselItem);
    return this.showActiveViewerItem($gallery, index);
  };

  Gallery.prototype.selectCarouselItem = function(carouselItem) {
    var $carouselItem, $gallery, index;
    $carouselItem = $(carouselItem);
    index = this.getItemIndex($carouselItem);
    $gallery = $carouselItem.closest(config.selector.gallery);
    this.setActiveItemIndex($gallery, index);
    this.highlightCarouselItem(carouselItem);
    this.updateCarouselNav(carouselItem);
    this.loadViewerItem(carouselItem);
    return this.showActiveViewerItem($gallery, index);
  };

  Gallery.prototype.highlightCarouselItem = function(carouselItem) {
    var $activeCarouselItems, $carouselItem, $carouselItems, $gallery, index;
    $carouselItem = $(carouselItem);
    index = this.getItemIndex($carouselItem);
    $gallery = $carouselItem.closest(config.selector.gallery);
    $carouselItems = $gallery.find(config.selector.carouselItem);
    $activeCarouselItems = $carouselItems.filter(this.getItemIndexSelector(index));
    $carouselItems.removeClass(config["class"].activeCarouselItem);
    return $activeCarouselItems.addClass(config["class"].activeCarouselItem);
  };

  Gallery.prototype.highlightCarouselItemFromIndex = function(gallery, index) {
    var $activeCarouselItems, $carouselItems, $gallery;
    $gallery = $(gallery);
    $carouselItems = $gallery.find(config.selector.carouselItem);
    $activeCarouselItems = $carouselItems.filter(this.getItemIndexSelector(index));
    $carouselItems.removeClass(config["class"].activeCarouselItem);
    return $activeCarouselItems.addClass(config["class"].activeCarouselItem);
  };

  Gallery.prototype.showActiveViewerItem = function(gallery, index) {
    var $activeViewerItem, $gallery, $viewerItems;
    $gallery = $(gallery);
    $viewerItems = $gallery.find(config.selector.viewerItem);
    $activeViewerItem = $viewerItems.filter("[data-item-index=" + index + "]");
    $viewerItems.removeClass(config["class"].activeViewerItem);
    $activeViewerItem.addClass(config["class"].activeViewerItem);
    return $activeViewerItem;
  };

  Gallery.prototype.updateCarouselNav = function(carouselItem) {
    var $carousel, $carouselItem, index;
    $carouselItem = $(carouselItem);
    index = this.getItemIndex($carouselItem);
    $carousel = $carouselItem.closest(config.selector.carousel);
    return $carousel.elastislide('setCurrent', index);
  };

  Gallery.prototype.loadViewerItem = function(carouselItem) {
    return this.findOrCreateViewerItemFromCarouselItem(carouselItem);
  };

  Gallery.prototype.findOrCreateViewerItemFromCarouselItem = function(carouselItem) {
    var $viewerItem;
    $viewerItem = this.findViewerItem(carouselItem);
    if (!$viewerItem) {
      $viewerItem = this.createViewerItem(carouselItem);
    }
    return $viewerItem;
  };

  Gallery.prototype.findOrCreateViewerItemFromIndex = function(gallery, index) {};

  Gallery.prototype.findViewerItem = function(carouselItem) {
    var $carouselItem, $gallery, $viewer, $viewerItem, index;
    $carouselItem = $(carouselItem);
    index = this.getItemIndex($carouselItem);
    $gallery = $(carouselItem).closest(config.selector.gallery);
    $viewer = $gallery.find(config.selector.viewer).first();
    $viewerItem = $viewer.find(config.selector.viewerItem + "[data-item-index=" + index + "]");
    if ($viewerItem.length > 0) {
      return $viewerItem;
    } else {
      return false;
    }
  };

  Gallery.prototype.findPreviousViewerItem = function(carouselItem) {
    var $carouselItem, $gallery, $previous, $viewer, $viewerItem, $viewerItems, i, index, len, viewerItem;
    $carouselItem = $(carouselItem);
    index = $carouselItem.attr("data-item-index");
    $gallery = $(carouselItem).closest(config.selector.gallery);
    $viewer = $gallery.find(config.selector.viewer).first();
    $viewerItems = $viewer.find(config.selector.viewerItem);
    $previous = $viewerItems.first();
    for (i = 0, len = $viewerItems.length; i < len; i++) {
      viewerItem = $viewerItems[i];
      $viewerItem = $(viewerItem);
      if ($viewerItem.attr("data-item-index") > index) {
        return $previous;
      }
      $previous = $viewerItem;
    }
    return $previous;
  };

  Gallery.prototype.updateViewerNav = function() {};

  Gallery.prototype.createViewerItem = function(carouselItem) {
    var $carouselItem, $previousViewerItem, markup;
    $carouselItem = $(carouselItem);
    $previousViewerItem = this.findPreviousViewerItem($carouselItem);
    markup = this.viewerItemMarkup(carouselItem);
    $previousViewerItem.after(markup);
    return this.evaluatePicturefill();
  };

  Gallery.prototype.evaluatePicturefill = function() {
    if (config.picturefill) {
      return picturefill();
    } else {
      return false;
    }
  };

  Gallery.prototype.reevalutePicturefill = function() {
    if (config.picturefill) {
      return picturefill({
        reevaluate: true
      });
    } else {
      return false;
    }
  };

  Gallery.prototype.viewerItemMarkup = function(carouselItem) {
    var $carouselItem, alt, caption, href, index, markup, sizes, src, srcset;
    $carouselItem = $(carouselItem);
    index = $carouselItem.attr("data-item-index");
    href = $carouselItem.attr("data-href");
    src = $carouselItem.attr("data-src");
    srcset = $carouselItem.attr("data-srcset");
    alt = $carouselItem.attr("data-alt");
    sizes = $carouselItem.attr("data-sizes");
    caption = $carouselItem.attr("data-caption");
    markup = "<figure class=\"" + config["class"].viewerItem + "\" data-item-index=\"" + index + "\"> <a class=\"" + config["class"].viewerLink + "\" href=\"" + href + "\"> <img class=\"" + config["class"].viewerImage + "\" src=\"" + src + "\" srcset=\"" + srcset + "\" sizes=\"" + sizes + "\" alt=\"" + alt + "\" /> </a> <figcaption class=\"" + config["class"].viewerCaption + "\"> " + caption + " </ficaption> </figure>";
    return markup;
  };

  return Gallery;

})();

  /*
  --------------------------------------------
       Begin galleryLoader.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.12.2
$(function() {
  var gallery;
  gallery = new Gallery;
  if ($("html.ltie9").length > 0) {
    return $(".gallery").addClass("is--disabled").html("Sorry. Our media galleries are not supported by your browser. You can find information about upgrading your browser at <a href='http://browsehappy.com/'>Browse Happy</a>.");
  } else {
    return gallery.load();
  }
});


})(jQuery, Drupal, this, this.document);