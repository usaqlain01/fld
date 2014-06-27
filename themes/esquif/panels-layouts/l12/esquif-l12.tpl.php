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
    }
    else {
      print $content['top'];
    }
    ?>
    <div class="summaries--3up">
      <?php
      if ($top_a_classes) {
        print '<div class="' . $top_a_classes . '">';
        print $content['top_a'];
        print '</div>';
      }
      else {
        print $content['top_a'];
      }
      if ($top_b_classes) {
        print '<div class="' . $top_b_classes . '">';
        print $content['top_b'];
        print '</div>';
      }
      else {
        print $content['top_b'];
      }
      if ($top_c_classes) {
        print '<div class="' . $top_c_classes . '">';
        print $content['top_c'];
        print '</div>';
      }
      else {
        print $content['top_c'];
      }
      ?>
    </div>
    <hr class="rule--divider">
    <?php
    if ($bottom_classes) {
      print '<div class="' . $bottom_classes . '">';
      print $content['bottom'];
      print '</div>';
    }
    else {
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
    }
    else {
      print $content['nav'];
    }
    ?>
  </div>
</div>
