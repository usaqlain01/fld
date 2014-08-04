// -----------------------------------------------------------------------------
// Tracks user engagement on blog pages and sends Google Analtyics events,
// metrics and dimensions
// -----------------------------------------------------------------------------
$(function($) {

  // DOM elements driving the scroll tracking
  var selector      = "[data-analytics='blog-post']";
  var innerSelector = ".l--body";
  var imageSelector = "img[typeof='foaf:Image']";

  if ($(selector).length && typeof ga !== "undefined" && ga !== null) {

    // Creates an estimated word count using a modified decay function
    //   modeled after Medium's analytics team (http://medium.com)
    var imageWordCount = function() {
      var numImages = $(innerSelector + " " + imageSelector).length;
      var wordCount = 0;
      var decay;

      for (var i = 0; i < numImages; ++i) {
        decay = i >= 7 ? 7 : i;  // 3 seconds per image after 10
        wordCount += 10 - decay;
      }

      return wordCount;
    }

    // Word count for the entire inner selector
    var wordCount = function() {
      return $(innerSelector).text().split(" ").length;
    }

    // Settings Variables
    var callBackTime   = 100;    // Default time delay before checking location
    var readerLocation = 150;    // #px before tracking a reader

    // Estimating Wordcount and Time
    var wordsPerMinute          = 300;
    var estimatedWordCount      = imageWordCount() + wordCount();
    var estimatedCompletionTime = Math.ceil((estimatedWordCount / wordsPerMinute) * 60);

    // Flags for tracking & execution
    var scroller           = false;
    var twentyFiveContent  = false;
    var fiftyContent       = false;
    var seventyFiveContent = false;
    var endContent         = false;

    // Time variables to calculate reading time
    var timer     = 0;
    var beginning = new Date().getTime();
    var totalTime = 0;
    var pageTitle = document.title;

    // Location Variables
    var contentTop          = $(selector).offset().top;    //Offset = relative to the document
    var contentHeight       = $(selector).innerHeight();
    var contentBottom       = contentHeight + contentTop;
    var twentyFivePercent   = Math.round((contentHeight * 0.25) + contentTop);
    var fiftyPercent        = Math.round((contentHeight * 0.50) + contentTop);
    var seventyFivePercent  = Math.round((contentHeight * 0.75) + contentTop);

    // Tracks an article load and the estimated length of the article
    Analytics.metric('metric1', estimatedCompletionTime);
    Analytics.event('blog', 'post-0%', pageTitle, 1,0);

    // Primary Tracking Function: This checks the location of user and tracks progress
    var trackLocation = function() {
      var height = $(document).height();
      var bottom = $(window).height() + $(window).scrollTop();

      // If user starts to scroll send an event,
      if (bottom > readerLocation && !scroller) {
        beginning = new Date().getTime();
        Analytics.event('blog', 'post-started-reading', pageTitle, 1,0);
        scroller = true;
      }

      if (bottom >= twentyFivePercent && !twentyFiveContent){
        Analytics.event('blog', 'post-25%', pageTitle, 1, 0);
        twentyFiveContent = true;
      }

      if (bottom >= fiftyPercent && !fiftyContent){
        Analytics.event('blog', 'post-50%', pageTitle, 1, 1);
        fiftyContent = true;
      }

      if (bottom >= seventyFivePercent && !seventyFiveContent){
        var contentScroll = new Date().getTime();
        var timeToContent = Math.round((contentScroll - beginning) / 1000);
        var estimatedTime = Math.round(estimatedCompletionTime * 0.75)
        if (timeToContent < estimatedTime) {
          Analytics.dimension('dimension1', 'scanner');
        } else {
          Analytics.dimension('dimension1', 'reader')
        }
        Analytics.event('blog', 'post-75%', pageTitle, 1, 1);
        seventyFiveContent = true;
      }

      if (bottom >= contentBottom && !endContent) {
        var contentScrollEnd = new Date().getTime();
        var timeToContentEnd = Math.round((contentScrollEnd - beginning) / 1000);
        Analytics.metric('metric2', timeToContentEnd);
        Analytics.event('blog', 'post-100%', pageTitle, 1, 1);
        endContent = true;
      }
    }

    // Track the scrolling and track location
    $(window).scroll(function() {
      if (timer) { clearTimeout(timer); }
      timer = setTimeout(trackLocation, callBackTime); // Limits trackLocation calls
    });
  }
});
