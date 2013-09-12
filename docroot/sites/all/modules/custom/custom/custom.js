
// Altering the behavior of exposed filters on views
Drupal.behaviors.views = {
  attach: function(context) {
    var $ = jQuery;
    
    // Hide the submit button
    $('.view-filters form .form-submit').hide();
    
    // If it is a autocomplete field
    $('.views-exposed-widget select', context).change(function(){
      // alert($(".views-exposed-widget select").val());
      $('.view-filters form').submit();

    });
    
    // If it is a dropdown
    $('.views-exposed-widget input', context).change(function(){
      // alert($('.views-exposed-widget input').val());
      $('.view-filters form').submit();
    });
  }
}


Drupal.behaviors.custom = {
  attach: function () {
    var $ = jQuery;
    
    // add class to required tabs
    $('fieldset.horizontal-tabs-pane').each(function(i){
     if ($(this).find('.form-required').length > 0) {
       $('li.horizontal-tab-button').eq(i).addClass('required');
     }
    });

    // For the 'Custom: Toggle trimmed text' field formatter.
    // The trimmed version is initially hidden so that for users without javascript may always read
    // the full text, and don't see the trimmed and full versions at the same time.
    $('.toggle-trimmed-less').removeClass('element-hidden');
    $('.toggle-trimmed-more').hide();

    // When clicking a 'more' or 'less' link, switch which text is visible, and don't send the browser
    // to the link destination (in our case, an anchor).
    $('a.toggle-trimmed').click(function () {
      $(this).closest('.field-toggle-text-trimmed').children().toggle();
      return false;
    });

    // For the 'Custom: make this field collapsible' option on field formatters.
    $('.collapsible.collapsed .field-items').toggle();
    $('.collapsible .field-label')
      .click(function() {
        $this = $(this);
        $this.closest('.collapsible').toggleClass('collapsed');
        $this.next().toggle();
      });
  },
}
