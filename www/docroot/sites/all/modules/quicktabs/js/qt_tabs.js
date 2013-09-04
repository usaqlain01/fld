(function($){
$(function() {
  $(".quicktabs_wrapper div.qt_temp").each(function(){
    var content = $(this).html();
    var $target = $(this).siblings('div.ui-tabs-panel').not('.ui-tabs-hide');
    $(this).remove();
    $target.html(content);
  });
  $(".quicktabs_wrapper li a").bind("click", function() {
    $(this).parents(".quicktabs_wrapper").tabs("abort");
  });
})
})(jQuery)