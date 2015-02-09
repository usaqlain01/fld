"use strict";

function onHashChanged(hash) {
  var target = $(hash);
  if (target.length) {
    var margin = target.hasClass("js--needsMargin") ? 120 : 0;
    $('html,body').animate({
      scrollTop: target.offset().top - margin
    }, 500);
    window.location.hash = hash;
    return false;
  }
  return false;
}

$(function() {
  
  $(window).bind("hashchange", function() {
    
  });

  $('a[href^=#]:not([href=#])').click(function() {
      onHashChanged(this.hash);
      return false;
  });

  var hashCache = "ewrwyioudhlsvjknsadnskjdfblasdkjfh";
  $(document).scroll(function(){
    var hash = window.location.hash;
    if (hash == hashCache)
      return;
    hashCache = hash;
    hash = hash.substring(1);
    var linkToSelect = $(".js--jumpNav__link--" + hash);
    if (linkToSelect.length) {
      $(".jumpNav__link--selected").removeClass("jumpNav__link--selected");
      linkToSelect.addClass("jumpNav__link--selected")
    }
  })

});