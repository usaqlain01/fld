//-----------------------------------------------------------------
// This file adds click and submit listeners throughout the DOM
// and is depdendent on ga-custom.js
//-----------------------------------------------------------------

(function($) {
  $(function() {
    var action, addListener, event, events, listeners, options, _results;
    if (typeof ga !== "undefined" && ga !== null) {

      listeners = {
        // -----------------------------------------------
        //                Click Events
        // -----------------------------------------------
        click: {
          // ---------- Social Click Events ------------
          'facebook': {
            category: 'social',
            label:    'facebook'
          },
          'twitter': {
            category: 'social',
            label:    'twitter'
          },
          'google': {
            category: 'social',
            label:    'google'
          },
          'pinterest': {
            category: 'social',
            label:    'pinterest'
          },
          'tumblr': {
            category: 'social',
            label:    'tumblr'
          },
          'instagram': {
            category: 'social',
            label:    'instagram'
          },
          'vimeo': {
            category: 'social',
            label:    'vimeo'
          },
          'youtube': {
            category: 'social',
            label:    'youtube'
          },
          'flickr': {
            category: 'social',
            label:    'flikr'
          },
          'sue-twitter': {
            category: 'social',
            label:    'sue-twitter'
          },
          'facebook-share': {
            network:  'facebook',
            action:   'share',
            target:   '#',
            page:     '#'
          },
          'twitter-share': {
            network:  'twitter',
            action:   'tweet',
            target:   '#',
            page:     '#'
          },
          'google-share': {
            network:  'google-plus',
            action:   'plusone',
            target:   '#',
            page:     '#'
          },

          // ---------- Ticketing Click Events ------------
          'ticketing-global': {
            category: 'ticketing',
            label:    'global-nav'
          },
          'ticketing-general': {
            category: 'ticketing',
            label:    'purchase-tickets'
          },
          'ticketing-city-pass': {
            category: 'ticketing',
            label:    'city-pass-tickets'
          },
          'ticketing-all-access': {
            category: 'ticketing',
            label:    'all-access-tickets'
          },
          'ticketing-discovery': {
            category: 'ticketing',
            label:    'discovery-tickets'
          },
          'ticketing-basic': {
            category: 'ticketing',
            label:    'basic-tickets'
          },
          'ticketing-exhibition': {
            category: 'ticketing',
            label:    'ticketing-exhibition'
          },
          'ticketing-program': {
            category: 'ticketing',
            label:    'program-show'
          },
          'ticketing-event': {
            category: 'ticketing',
            label:    'event-show'
          },

          // ---------- General Public Click Events --------
          'map': {
            category: 'general',
            label:    'map'
          },
          'newsletter': {
            category: 'general',
            label:    'newsletter-subscribe'
          },
          'store': {
            category: 'general',
            label:    'store-global-nav'
          },

          // ---------- Support Click Events ----------
          'donate-global': {
            category: 'support',
            label:    'donate-global-nav'
          },

          // ------ Educator Click Events -----
          'explore-resources': {
            category: 'science-educators',
            label:    'explore-resources-link'
          },
          'field-trip': {
            category: 'science-educators',
            label:    'field-trip-program'
          },
          'field-trip-logistics': {
            category: 'science-educators',
            label:    'target-url'
          },
          'educator-resource': {
            category: 'educators',
            label:    'target-url'
          },

          // ------ Further Explorations Click Events -----
          'explore-collection': {
            category: 'further-explorations',
            label:    'target-link'
          },
          'explore-gallery': {
            category: 'further-explorations',
            label:    'target-link'
          },
          'explore-resource': {
            category: 'further-explorations',
            label:    'target-link'
          },
          'explore-blog': {
            category: 'further-explorations',
            label:    'target-link'
          }
        },
        //------------------------------------------------
        //-------------- Submit Events -------------------
        //------------------------------------------------
        submit: {
          'contact-submit': {
            cateogry: 'general',
            label:    'contact-us'
          },
          'field-trip-submit': {
            category: 'educators',
            label:    'field-trip-name'
          },
          'volunteer-submit': {
            category: 'support',
            label:    'volunteer-application'
          },
          'member-newsletter-submit': {
            category: 'support',
            label:    'member-newsletter-signup'
          }
        }
      };

      addListener = function(action, event, options) {
        return $("body").on(action, "[data-analytics='" + event + "']", function() {
          if (options.nonbounce === undefined) {
            options.nonbounce = 1;
          }

          if ($(this).is("a")) {
            options.label = $(this).attr("href");

            if (event.match(/\bshare$/)) {
              options.target = options.label;
              return Analytics.social(options.network, options.action, options.target, window.location.pathname);

            } else {
              if (event.match(/\bticketing\b/)) {
                Analytics.dimension("dimension5", "true");
              }
              if (event.match(/\bnewsletter\b/)) {
                Analytics.dimension("dimension3", "true");
              }
              return Analytics.event(options.category, event, options.label, 1, options.nonbounce);
            }

          } else {
            return Analytics.event(options.category, event, options.label, 1, options.nonbounce);
          }
        });
      };

      _results = [];
      for (action in listeners) {
        events = listeners[action];
        _results.push((function() {
          var _results1;
          _results1 = [];
          for (event in events) {
            options = events[event];
            _results1.push(addListener(action, event, options));
          }
          return _results1;
        })());
      }
      return _results;
    }
  });

}).call(this, jQuery);
