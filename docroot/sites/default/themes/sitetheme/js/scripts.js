(function ($, Drupal, window, document, undefined) {

  var equalize = function(boxes) {
      var greatest = 0,
          currentHeight = 0,
          $boxes = $(boxes);
                 
      $boxes.each(function(index) {
        currentHeight = $(boxes[index]).height();
        if (currentHeight > greatest) {
          greatest = currentHeight;
        }
      });
      
      $boxes.each(function(index) {
        $(boxes[index]).height(greatest);  
      }); 
  }
  
  var searchFocus = {

  searchDefaultText: "SEARCH",

  searchFocus: function() {
    var search = $('#edit-search-block-form--2');
    if (search.val() == searchFocus.searchDefaultText) {
      search.val('');
    }
  },

  searchBlur: function() {
    var search = $('#edit-search-block-form--2');
    if (search.val() == '') {
      search.val(searchFocus.searchDefaultText).css("color","#999999");
    }
  },

  init: function() {
    // Firefox remembers the default text in the form field.
    var search = $('#edit-search-block-form--2');
    if (search.val() == searchFocus.searchDefaultText) {
      // So we reset it.
      search.val('');
    }

    // Attach the event handlers to swap the dummy text in and out as needed.
    $('#edit-search-block-form--2')
      .bind('focus', searchFocus.searchFocus)
      .bind('blur', searchFocus.searchBlur)
      // And fire the blur event to intialize it.
      .blur();
  } // Note lack of a ,
};


  $(document).ready( function () {
  
  searchFocus.init();
  
    //equalize(['#block-views-FAQ-related_questions', '#block-custom-email_signup', '#block-views-news-block_1']);   
    //equalize(['.field-name-field-featured-content .field-item.even', '.field-name-field-featured-content .field-item.odd']);
   
   // Add dash in-between start and end dates
   $('.node .field-name-field-enddate .field-item').prepend(' &nbsp; - &nbsp; ');
   $('a.addthis-button').append(' share');

  });
  
  Drupal.behaviors.customCollapsibleViewBlock  = {
    attach: function () {
    var $ = jQuery;
      $('.view.collapsible.collapsed').parents('.block').find('h2.block-title').addClass('collapsible collapsed');
      $('.view.collapsible.collapsed .view-content').toggle();
      $('.view.collapsible').parents('.block').find('h2.block-title')
        .click(function() {
          $this = $(this);
          $this.toggleClass('collapsed')
          $this.siblings('.content').find('.collapsible').toggleClass('collapsed');
          $this.siblings('.content').find('.view-content').toggle();
          $this.siblings('.content').find('div.feed-icon').toggle();
        });
     }
  }

  /*
   * Add a themeable scroll bar to the photo gallery and equalize the height
   * of the body.
   */
  Drupal.behaviors.customPhotoGallery = {
    attach: function(context, settings) {
      var $gallery, $children, width = 0;
      if (settings.customPhotoGalleryEnabled) {
        $gallery = $('#block-views-photo_gallery-photo_gallery');
        // Make sure there is actually a gallery on the page before we act.
        if ($gallery.length) {

          // Attach the scroll bar to the pager thumbnails. We need to use a
          // script to add scroll bars because these are themed and firefox
          // does not support themed scroll bars.
          $gallery.find('#views_slideshow_cycle_pager_photo_gallery-photo_gallery').wrap('<div id="views_slideshow_cycle_pager_photo_gallery-photo_gallery-photoWrapper"></div>');

          // Recalculating the width fixes and IE bug.
          if ($.browser.msie) {
            $children = $gallery.find('.pager-item');
            $children.each(function() {
              width += $(this).outerWidth(true);
            });
            $gallery.find('.views_slideshow_pager_thumbnails').width(width);
          }
          $gallery.find('#views_slideshow_cycle_pager_photo_gallery-photo_gallery-photoWrapper').jScrollPane({showArrows: true});
        }
      }
    }
  }

  var custom = {
    /*
     * Webkit browsers don't know the size of images at the ready() event. So, we need
     * to do some resizing at the load event.
     */
    resizeGallery: function() {
      var $gallery, $items, greatest = 0, currentHeight, slideSectionHeight = 0;
      if (Drupal.settings.customPhotoGalleryEnabled) {
        $gallery = $('#block-views-photo_gallery-photo_gallery');
        // Make sure there is actually a gallery on the page before we act.
        if ($gallery.length) {
          // Make sure the slide show is the size of the largest region.
          // Views slideshow should do this already but there seems to
          // be an issue.
          $items = $gallery.find('.views_slideshow_cycle_slide');
          $items.each(function(index) {
              currentHeight = $(this).height();
              if (currentHeight > greatest) {
                greatest = currentHeight;
              }
            })
            .each(function(index) {
              $(this).height(greatest);  
            });

          // The slide wrapper needs to be updated to be the height of the items.
          slideSectionHeight = $items.eq(0).outerHeight(true);
          $gallery.find('.views_slideshow_cycle_teaser_section').height(slideSectionHeight);
        }
      }
    },
    resizeSectionFrontWidget: function() {
      var $widget, currentHeight, greatestHeight = 0;
      $widget = $('#views_slideshow_cycle_main_section_front_widget-section_front');
      // Make sure the widget is on the page before we act on anything else.
      if ($widget.length) {
        // Loop through the children getting the larget height.
        $widget.find('.views_slideshow_cycle_slide').each(function() {
          currentHeight = $(this).height();
          if (currentHeight > greatestHeight) {
            greatestHeight = currentHeight;
          }
        });

        // Set the widget to the greatest height.
        $widget.height(greatestHeight);
        $widget.children().height(greatestHeight);
      }
    }
  }

  // Webkit browsers need to do something things at the load event, when all
  // resources are available.
  $(window).load(function() {
    // Resize the Photo Gallery if present.
    custom.resizeGallery();

    // Resize the section front widget.
    custom.resizeSectionFrontWidget();
  });

})(jQuery, Drupal, this, this.document);
