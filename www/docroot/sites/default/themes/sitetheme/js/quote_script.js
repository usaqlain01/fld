(function ($, Drupal, window, document, undefined) {

  $(document).ready( function () {

	q = $('#block-inline-field-quote').detach();
    p = $('.field-name-body div div').children('p');
    size = p.size();
    
    // do not display if no paragraph tags
    if (size == 0) {
      return;
    // attach to the first paragraph, if only 1 paragraph
    } else if (size == 1) {
      q.insertBefore(p.eq(0));
    // 6 paragraphs or less, attach to second to last paragraph
    } else if (size < 7) {
	  q.insertBefore(p.eq(size-2));
	// else attach it to the 5th paragraph tag
	} else {
      q.insertBefore(p.eq(4));
    }
  });

})(jQuery, Drupal, this, this.document);
