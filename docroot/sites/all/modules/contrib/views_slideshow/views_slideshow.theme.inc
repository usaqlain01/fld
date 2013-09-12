<?php
// $Id: views_slideshow.theme.inc,v 1.1.2.2.2.6.2.1 2010/09/29 03:07:49 redndahead Exp $

/**
 * @file
 * The theme system, which controls the output of views slideshow.
 *
 * This just adds a wrapper div to the slideshow.
 */

/**
 * The current element of the slideshow.
 *
 * @ingroup themeable
 */
function theme_views_slideshow_main_section($variables) {
  $attributes['id'] = "{$variables['plugin']}_main_{$variables['id']}";
  $attributes['class'] = array("{$variables['plugin']}_main views", "slideshow_main");
  $attributes = drupal_attributes($attributes);

  return "<div$attributes>{$variables['hidden_elements']}</div>";
}
