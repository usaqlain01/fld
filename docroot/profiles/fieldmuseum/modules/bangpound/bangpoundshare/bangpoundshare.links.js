/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.bangpoundShareLinks = {
    attach: function (context, settings) {
      $('a.popup', context).click(function (event) {
        var D = 550,
          A = 450,
          C = screen.height,
          B = screen.width,
          H = Math.round((B / 2) - (D / 2)),
          G = 0;

        if (C > A) {
          G = Math.round((C / 2) - (A / 2))
        }

        window.open(this.href, 'popup', 'left='+H+',top='+G+',width='+D+',height='+A+',personalbar=0,toolbar=0,scrollbars=1,resizable=1');
        event.preventDefault();
      });
    }
  };

// Place your code here.

})(jQuery, Drupal, this, this.document);

