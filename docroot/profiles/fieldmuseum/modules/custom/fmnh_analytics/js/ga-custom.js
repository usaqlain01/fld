// -----------------------------------------------------------------------------
// Primary analytics file for Custom Events, Social Events, Custom Metrics
// and Custom Dimensions. This should be loaded after the analytics.js urchin.
// -----------------------------------------------------------------------------
// Custom Events
// - nonInteraction is set to default to 1. This means that the pageview
//   is not counted as a bounce if the event is triggered.
// Social Events
// - New with analytics.js - used to help measure engagement from social activities
// - We are only using "shareable" actions here, which occur on content pages
//   rather than the links to social properties in the footer
// Custom Dimensions
// - Limited to 20 custom dimensions (formerly variables)
// - Will not be sent without an event or pageview
// Custom Metrics
// - Limited to 20 custom metrics
// - Will not be sent without an event or pageview
// contact: steve@tablexi.com

(function() {
  var Analytics, exports;

  exports = exports != null ? exports : this;

  Analytics = (function() {
    function Analytics() {}

    Analytics.send = function(options) {
      if (window.ga) {
        return window.ga("send", options);
      }
    };

    Analytics.event = function(category, action, label, value, interactive) {
      if (window.ga) {
        var params = {
          hitType: "event",
          eventCategory: category,
          eventAction: action,
          eventLabel: label,
          eventValue: value,
          nonInteraction: interactive
        };
        return Analytics.send(params);
      }
    };

    Analytics.social = function(network, action, target, page) {
      if (window.ga) {
        var params = {
          hitType: "social",
          socialNetwork: network,
          socialAction: action,
          socialTarget: target,
          page: page || ""
        };
        Analytics.dimension("dimension1", "true");
        return Analytics.send(params);
      }
    };

    Analytics.dimension = function(dimension, value) {
      if (window.ga) {
        return window.ga("set", dimension, value)
      }
    };
    Analytics.metric = function(metric, value) {
      if (window.ga) {
        return window.ga("set", metric, value)
      }
    };

    return Analytics;

  }).call(this);

  exports.Analytics = Analytics;

}).call(this);
