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
// Generated by CoffeeScript 1.7.1
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
/*! Picturefill - v2.0.0-beta - 2014-05-02
* http://scottjehl.github.io/picturefill
* Copyright (c) 2014 https://github.com/scottjehl/picturefill/blob/master/Authors.txt; Licensed MIT */
/*! matchMedia() polyfill - Test a CSS media type/query in JS. Authors & copyright (c) 2012: Scott Jehl, Paul Irish, Nicholas Zakas, David Knight. Dual MIT/BSD license */

window.matchMedia || (window.matchMedia = function() {
	"use strict";

	// For browsers that support matchMedium api such as IE 9 and webkit
	var styleMedia = (window.styleMedia || window.media);

	// For those that don't support matchMedium
	if (!styleMedia) {
		var style       = document.createElement('style'),
			script      = document.getElementsByTagName('script')[0],
			info        = null;

		style.type  = 'text/css';
		style.id    = 'matchmediajs-test';

		script.parentNode.insertBefore(style, script);

		// 'style.currentStyle' is used by IE <= 8 and 'window.getComputedStyle' for all other browsers
		info = ('getComputedStyle' in window) && window.getComputedStyle(style, null) || style.currentStyle;

		styleMedia = {
			matchMedium: function(media) {
				var text = '@media ' + media + '{ #matchmediajs-test { width: 1px; } }';

				// 'style.styleSheet' is used by IE <= 8 and 'style.textContent' for all other browsers
				if (style.styleSheet) {
					style.styleSheet.cssText = text;
				} else {
					style.textContent = text;
				}

				// Test if media query is true or false
				return info.width === '1px';
			}
		};
	}

	return function(media) {
		return {
			matches: styleMedia.matchMedium(media || 'all'),
			media: media || 'all'
		};
	};
}());
/*! Picturefill - Responsive Images that work today.
*  Author: Scott Jehl, Filament Group, 2012 ( new proposal implemented by Shawn Jansepar )
*  License: MIT/GPLv2
*  Spec: http://picture.responsiveimages.org/
*/
(function( w, doc ) {
	// Enable strict mode
	"use strict";

	// If picture is supported, well, that's awesome. Let's get outta here...
	if( w.HTMLPictureElement ){
		return;
	}

	// HTML shim|v it for old IE (IE9 will still need the HTML video tag workaround)
	doc.createElement( "picture" );

	// local object for method references and testing exposure
	var pf = {};

	// namespace
	pf.ns = "picturefill";

	// srcset support test
	pf.srcsetSupported = new w.Image().srcset !== undefined;

	// just a string trim workaround
	pf.trim = function( str ){
		return str.trim ? str.trim() : str.replace( /^\s+|\s+$/g, "" );
	};

	// just a string endsWith workaround
	pf.endsWith = function( str, suffix ){
		return str.endsWith ? str.endsWith( suffix ) : str.indexOf( suffix, str.length - suffix.length ) !== -1;
	};

	/**
	 * Shortcut method for matchMedia ( for easy overriding in tests )
	 */
	pf.matchesMedia = function( media ) {
		return w.matchMedia && w.matchMedia( media ).matches;
	};

	/**
	 * Shortcut method for `devicePixelRatio` ( for easy overriding in tests )
	 */
	pf.getDpr = function() {
		return ( w.devicePixelRatio || 1 );
	};

	/**
	 * Get width in css pixel value from a "length" value
	 * http://dev.w3.org/csswg/css-values-3/#length-value
	 */
pf.getWidthFromLength = function( length ) {
	// If no length was specified, or it is 0, default to `100vw` (per the spec).
	length = length && parseFloat( length ) > 0 ? length : "100vw";

	/**
	* If length is specified in  `vw` units, use `%` instead since the div we’re measuring
	* is injected at the top of the document.
	*
	* TODO: maybe we should put this behind a feature test for `vw`?
	*/
	length = length.replace( "vw", "%" );

	// Create a cached element for getting length value widths
	if( !pf.lengthEl ){
		pf.lengthEl = doc.createElement( "div" );
		doc.documentElement.insertBefore( pf.lengthEl, doc.documentElement.firstChild );
	}

	// Positioning styles help prevent padding/margin/width on `html` from throwing calculations off.
	pf.lengthEl.style.cssText = "position: absolute; left: 0; width: " + length + ";";
	// Using offsetWidth to get width from CSS
	return pf.lengthEl.offsetWidth;
};

	// container of supported mime types that one might need to qualify before using
	pf.types =  {};

	// test svg support
	pf.types[ "image/svg+xml" ] = doc.implementation.hasFeature('http://www.w3.org/TR/SVG11/feature#Image', '1.1');

	// test webp support, only when the markup calls for it
	pf.types[ "image/webp" ] = function(){
		// based on Modernizr's lossless img-webp test
		// note: asynchronous
		var img = new w.Image(),
			type = "image/webp";

		img.onerror = function(){
			pf.types[ type ] = false;
			picturefill();
		};
		img.onload = function(){
			pf.types[ type ] = img.width === 1;
			picturefill();
		};
		img.src = 'data:image/webp;base64,UklGRh4AAABXRUJQVlA4TBEAAAAvAAAAAAfQ//73v/+BiOh/AAA=';
	};

	/**
	 * Takes a source element and checks if its type attribute is present and if so, supported
	 * Note: for type tests that require a async logic,
	 * you can define them as a function that'll run only if that type needs to be tested. Just make the test function call picturefill again when it is complete.
	 * see the async webp test above for example
	 */
	pf.verifyTypeSupport = function( source ){
		var type = source.getAttribute( "type" );
		// if type attribute exists, return test result, otherwise return true
		if( type === null || type === "" ){
			return true;
		}
		else {
			// if the type test is a function, run it and return "pending" status. The function will rerun picturefill on pending elements once finished.
			if( typeof( pf.types[ type ] ) === "function" ){
				pf.types[ type ]();
				return "pending";
			}
			else {
				return pf.types[ type ];
			}
		}
	};

	/**
	* Parses an individual `size` and returns the length, and optional media query
	*/
	pf.parseSize = function( sourceSizeStr ) {
		var match = /(\([^)]+\))?\s*(.+)/g.exec( sourceSizeStr );
		return {
			media: match && match[1],
			length: match && match[2]
		};
	};

	/**
	 * Takes a string of sizes and returns the width in pixels as a number
	 */
	pf.findWidthFromSourceSize = function( sourceSizeListStr ) {
		// Split up source size list, ie ( max-width: 30em ) 100%, ( max-width: 50em ) 50%, 33%
		//                            or (min-width:30em) calc(30% - 15px)
		var sourceSizeList = pf.trim( sourceSizeListStr ).split( /\s*,\s*/ ),
			winningLength;

		for ( var i=0, len=sourceSizeList.length; i < len; i++ ) {
			// Match <media-condition>? length, ie ( min-width: 50em ) 100%
			var sourceSize = sourceSizeList[ i ],
				// Split "( min-width: 50em ) 100%" into separate strings
				parsedSize = pf.parseSize( sourceSize ),
				length = parsedSize.length,
				media = parsedSize.media;

			if ( !length ) {
					continue;
			}
			if ( !media || pf.matchesMedia( media ) ) {
				// if there is no media query or it matches, choose this as our winning length
				// and end algorithm
				winningLength = length;
				break;
			}
		}

		// pass the length to a method that can properly determine length
		// in pixels based on these formats: http://dev.w3.org/csswg/css-values-3/#length-value
		return pf.getWidthFromLength( winningLength );
	};

	/**
	 * Takes a srcset in the form of url/
	 * ex. "images/pic-medium.png 1x, images/pic-medium-2x.png 2x" or
	 *     "images/pic-medium.png 400w, images/pic-medium-2x.png 800w" or
	 *     "images/pic-small.png"
	 * Get an array of image candidates in the form of
	 *      {url: "/foo/bar.png", resolution: 1}
	 * where resolution is http://dev.w3.org/csswg/css-values-3/#resolution-value
	 * If sizes is specified, resolution is calculated
	 */
	pf.getCandidatesFromSourceSet = function( srcset, sizes ) {
		var candidates = pf.trim( srcset ).split( /,\s+/ ),
			widthInCssPixels = sizes ? pf.findWidthFromSourceSize( sizes ) : "100%",
			formattedCandidates = [];

		for ( var i = 0, len = candidates.length; i < len; i++ ) {
			var candidate = candidates[ i ],
				candidateArr = candidate.split( /\s+/ ),
				sizeDescriptor = candidateArr[ 1 ],
				resolution;
			if ( sizeDescriptor && ( sizeDescriptor.slice( -1 ) === "w" || sizeDescriptor.slice( -1 ) === "x" ) ) {
				sizeDescriptor = sizeDescriptor.slice( 0, -1 );
			}
			if ( sizes ) {
				// get the dpr by taking the length / width in css pixels
				resolution = parseFloat( ( parseInt( sizeDescriptor, 10 ) / widthInCssPixels ) );
			} else {
				// get the dpr by grabbing the value of Nx
				resolution = sizeDescriptor ? parseFloat( sizeDescriptor, 10 ) : 1;
			}

			var formattedCandidate = {
				url: candidateArr[ 0 ],
				resolution: resolution
			};
			formattedCandidates.push( formattedCandidate );
		}
		return formattedCandidates;
	};

	/*
	 * if it's an img element and it has a srcset property,
	 * we need to remove the attribute so we can manipulate src
	 * (the property's existence infers native srcset support, and a srcset-supporting browser will prioritize srcset's value over our winning picture candidate)
	 * this moves srcset's value to memory for later use and removes the attr
	 */
	pf.dodgeSrcset = function( img ){
		if( img.srcset ){
			img[ pf.ns ].srcset = img.srcset;
			img.removeAttribute( "srcset" );
		}
	};

	/*
	 * Accept a source or img element and process its srcset and sizes attrs
	 */
	pf.processSourceSet = function( el ) {
		var srcset = el.getAttribute( "srcset" ),
			sizes = el.getAttribute( "sizes" ),
			candidates = [];

		// if it's an img element, use the cached srcset property (defined or not)
		if( el.nodeName.toUpperCase() === "IMG" && el[ pf.ns ] && el[ pf.ns ].srcset ){
			srcset = el[ pf.ns ].srcset;
		}

		if( srcset ) {
			candidates = pf.getCandidatesFromSourceSet( srcset, sizes );
		}
		return candidates;
	};

	pf.applyBestCandidate = function( candidates, picImg ) {
		var candidate,
			length,
			bestCandidate;

		candidates.sort( pf.ascendingSort );

		length = candidates.length;
		bestCandidate = candidates[ length - 1 ];

		for ( var l=0; l < length; l++ ) {
			candidate = candidates[ l ];
			if ( candidate.resolution >= pf.getDpr() ) {
				bestCandidate = candidate;
				break;
			}
		}

		if ( !pf.endsWith( picImg.src, bestCandidate.url ) ) {
			picImg.src = bestCandidate.url;
			// currentSrc attribute and property to match
			// http://picture.responsiveimages.org/#the-img-element
			picImg.currentSrc = picImg.src;
		}
	};

	pf.ascendingSort = function( a, b ) {
		return a.resolution - b.resolution;
	};

	/*
	 * In IE9, <source> elements get removed if they aren"t children of
	 * video elements. Thus, we conditionally wrap source elements
	 * using <!--[if IE 9]><video style="display: none;"><![endif]-->
	 * and must account for that here by moving those source elements
	 * back into the picture element.
	 */
	pf.removeVideoShim = function( picture ){
		var videos = picture.getElementsByTagName( "video" );
		if ( videos.length ) {
			var video = videos[ 0 ],
				vsources = video.getElementsByTagName( "source" );
			while ( vsources.length ) {
				picture.insertBefore( vsources[ 0 ], video );
			}
			// Remove the video element once we're finished removing its children
			video.parentNode.removeChild( video );
		}
	};

	/*
	 * Find all picture elements and,
	 * in browsers that don't natively support srcset, find all img elements
	 * with srcset attrs that don't have picture parents
	 */
	pf.getAllElements = function() {
		var pictures = doc.getElementsByTagName( "picture" ),
			elems = [],
			imgs = doc.getElementsByTagName( "img" );

		for ( var h = 0, len = pictures.length + imgs.length; h < len; h++ ) {
			if ( h < pictures.length ){
				elems[ h ] = pictures[ h ];
			}
			else {
				var currImg = imgs[ h - pictures.length ];

				if ( currImg.parentNode.nodeName.toUpperCase() !== "PICTURE" &&
					( ( pf.srcsetSupported && currImg.getAttribute( "sizes" ) ) ||
					currImg.getAttribute( "srcset" ) !== null ) ) {
						elems.push( currImg );
				}
			}
		}
		return elems;
	};

	pf.getMatch = function( picture ) {
		var sources = picture.childNodes,
			match;

		// Go through each child, and if they have media queries, evaluate them
		for ( var j=0, slen = sources.length; j < slen; j++ ) {
			var source = sources[ j ];

			// ignore non-element nodes
			if( source.nodeType !== 1 ){
				continue;
			}

			// Hitting an `img` element stops the search for `sources`.
			// If no previous `source` matches, the `img` itself is evaluated later.
			if( source.nodeName.toUpperCase() === "IMG" ) {
				return match;
			}

			// ignore non-`source` nodes
			if( source.nodeName.toUpperCase() !== "SOURCE" ){
				continue;
			}

			var media = source.getAttribute( "media" );

			// if source does not have a srcset attribute, skip
			if ( !source.getAttribute( "srcset" ) ) {
				continue;
			}

			// if there"s no media specified, OR w.matchMedia is supported
			if( ( !media || pf.matchesMedia( media ) ) ){
				var typeSupported = pf.verifyTypeSupport( source );

				if( typeSupported === true ){
					match = source;
					break;
				} else if( typeSupported === "pending" ){
					return false;
				}
			}
		}

		return match;
	};

	function picturefill( options ) {
		var elements,
			element,
			elemType,
			firstMatch,
			candidates,
			picImg;

		options = options || {};
		elements = options.elements || pf.getAllElements();

		// Loop through all elements
		for ( var i=0, plen = elements.length; i < plen; i++ ) {
			element = elements[ i ];
			elemType = element.nodeName.toUpperCase();
			firstMatch = undefined;
			candidates = undefined;
			picImg = undefined;

			// expando for caching data on the img
			if( !element[ pf.ns ] ){
				element[ pf.ns ] = {};
			}

			// if the element has already been evaluated, skip it
			// unless `options.force` is set to true ( this, for example,
			// is set to true when running `picturefill` on `resize` ).
			if ( !options.reevaluate && element[ pf.ns ].evaluated ) {
				continue;
			}

			// if element is a picture element
			if( elemType === "PICTURE" ){

				// IE9 video workaround
				pf.removeVideoShim( element );

				// return the first match which might undefined
				// returns false if there is a pending source
				// TODO the return type here is brutal, cleanup
				firstMatch = pf.getMatch( element );

				// if any sources are pending in this picture due to async type test(s)
				// remove the evaluated attr and skip for now ( the pending test will
				// rerun picturefill on this element when complete)
				if( firstMatch === false ) {
					continue;
				}

				// Find any existing img element in the picture element
				picImg = element.getElementsByTagName( "img" )[ 0 ];
			} else {
				// if it's an img element
				firstMatch = undefined;
				picImg = element;
			}

			if( picImg ) {

				// expando for caching data on the img
				if( !picImg[ pf.ns ] ){
					picImg[ pf.ns ] = {};
				}

				// Cache and remove `srcset` if present and we’re going to be doing `sizes`/`picture` polyfilling to it.
				if( picImg.srcset && ( elemType === "PICTURE" || picImg.getAttribute( "sizes" ) ) ){
					pf.dodgeSrcset( picImg );
				}

				if ( firstMatch ) {
					candidates = pf.processSourceSet( firstMatch );
					pf.applyBestCandidate( candidates, picImg );
				} else {
					// No sources matched, so we’re down to processing the inner `img` as a source.
					candidates = pf.processSourceSet( picImg );

					if( picImg.srcset === undefined || picImg.getAttribute( "sizes" ) ) {
						// Either `srcset` is completely unsupported, or we need to polyfill `sizes` functionality.
						pf.applyBestCandidate( candidates, picImg );
					} // Else, resolution-only `srcset` is supported natively.
				}

				// set evaluated to true to avoid unnecessary reparsing
				element[ pf.ns ].evaluated = true;
			}
		}
	}

	/**
	 * Sets up picture polyfill by polling the document and running
	 * the polyfill every 250ms until the document is ready.
	 * Also attaches picturefill on resize
	 */
	function runPicturefill() {
		picturefill();
		var intervalId = setInterval( function(){
			// When the document has finished loading, stop checking for new images
			// https://github.com/ded/domready/blob/master/ready.js#L15
			w.picturefill();
			if ( /^loaded|^i|^c/.test( doc.readyState ) ) {
				clearInterval( intervalId );
				return;
			}
		}, 250 );
		if( w.addEventListener ){
			var resizeThrottle;
			w.addEventListener( "resize", function() {
				w.clearTimeout( resizeThrottle );
				resizeThrottle = w.setTimeout( function(){
					picturefill({ reevaluate: true });
				}, 60 );
			}, false );
		}
	}

	runPicturefill();

	/* expose methods for testing */
	picturefill._ = pf;

	/* expose picturefill */
	if ( typeof module === "object" && typeof module.exports === "object" ){
		// CommonJS, just export
		module.exports = picturefill;
	}
	else if( typeof define === "object" && define.amd ){
		// AMD support
		define( function(){ return picturefill; } );
	}
	else if( typeof w === "object" ){
		// If no AMD and we are in the browser, attach to window
		w.picturefill = picturefill;
	}

} )( this, this.document );

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
        "iframe[src*='kickstarter.com'][src*='video.html']",
        "object",
        "embed"
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
// Generated by CoffeeScript 1.7.1
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

// Generated by CoffeeScript 1.7.1
  /*
  --------------------------------------------
       Begin alertMessage.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.7.1
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
// Generated by CoffeeScript 1.7.1
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
// Generated by CoffeeScript 1.7.1
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
// Generated by CoffeeScript 1.7.1
$(function() {
  return $(".l--body__content").fitVids();
});

  /*
  --------------------------------------------
       Begin gallery.coffee
  --------------------------------------------
   */
// Generated by CoffeeScript 1.7.1
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
    var $galleries, gallery, _i, _len, _results;
    $galleries = this.getGalleries();
    _results = [];
    for (_i = 0, _len = $galleries.length; _i < _len; _i++) {
      gallery = $galleries[_i];
      _results.push(this.initGallery(gallery));
    }
    return _results;
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
    var $carousels, $gallery, carousel, _i, _len, _results;
    $gallery = $(gallery).first();
    $carousels = $gallery.find(config.selector.carousel);
    _results = [];
    for (_i = 0, _len = $carousels.length; _i < _len; _i++) {
      carousel = $carousels[_i];
      _results.push(this.initCarousel(carousel));
    }
    return _results;
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
    var $carousel, $carouselItems, carouselItem, index, _i, _len, _results;
    $carousel = $(carousel).first();
    $carouselItems = $carousel.find(config.selector.carouselItem);
    _results = [];
    for (index = _i = 0, _len = $carouselItems.length; _i < _len; index = ++_i) {
      carouselItem = $carouselItems[index];
      _results.push(this.setItemIndex(carouselItem, index));
    }
    return _results;
  };

  Gallery.prototype.reindexViewerItems = function(viewer) {};

  Gallery.prototype.selectViewerItem = function(gallery, index) {
    var $carouselItem, $gallery;
    $gallery = $(gallery);
    $carouselItem = $gallery.find("" + config.selector.carouselItem + "[data-item-index=" + index + "]").first();
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
    $viewerItem = $viewer.find("" + config.selector.viewerItem + "[data-item-index=" + index + "]");
    if ($viewerItem.length > 0) {
      return $viewerItem;
    } else {
      return false;
    }
  };

  Gallery.prototype.findPreviousViewerItem = function(carouselItem) {
    var $carouselItem, $gallery, $previous, $viewer, $viewerItem, $viewerItems, index, viewerItem, _i, _len;
    $carouselItem = $(carouselItem);
    index = $carouselItem.attr("data-item-index");
    $gallery = $(carouselItem).closest(config.selector.gallery);
    $viewer = $gallery.find(config.selector.viewer).first();
    $viewerItems = $viewer.find(config.selector.viewerItem);
    $previous = $viewerItems.first();
    for (_i = 0, _len = $viewerItems.length; _i < _len; _i++) {
      viewerItem = $viewerItems[_i];
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
// Generated by CoffeeScript 1.7.1
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