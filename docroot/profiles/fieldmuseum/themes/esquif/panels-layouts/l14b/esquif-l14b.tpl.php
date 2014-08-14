<?php
/**
 * @file
 * Template for a "no wrapper" layout; useful for mini panels, etc.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   region of the layout. For example, $content['main'].
 * - $main_classes: Additional classes for the main region.
 * - $nav_classes: Additional classes for the nav region.
 */
?>
<div class="l--body js--stickyParent" style="position: relative;">
  <div class="l--body__content">
    <?php
    if ($top_classes) {
      print '<div class="' . $top_classes . '">';
      print $content['top'];
      print '</div>';
    } else {
      print $content['top'];
    }
    if ($nav_focus_classes) {
      print '<nav class="' . $focus_classes . '" role="navigation">';
      print $content['nav_focus'];
      print '</nav>';
    } else {
      print $content['nav_focus'];
    }
    if ($bottom_classes) {
      print '<div class="' . $bottom_classes . '">';
      print $content['bottom'];
      print '</div>';
    } else {
      print $content['bottom'];
    }
    ?>
  </div>

  <div class="l--body__nav js--sticky">
    <?php
    if ($nav_classes) {
      print '<nav class="' . $nav_classes . '" role="navigation">';
      print $content['nav'];
      print '</nav>';
    } else {
      print $content['nav'];
    }
    ?>
  </div>
</div>
