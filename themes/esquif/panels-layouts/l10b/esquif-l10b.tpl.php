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
<div class="l--body">
  <div class="l--body__content">
    <?php
if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
}
else {
  print $content['main'];
    }    ?>
  </div>

  <div class="l--body__nav js--sticky">
    <?php
    if ($nav_classes) {
      print '<nav class="' . $nav_classes . '" role="navigation">';
      print $content['nav'];
      print '</nav>';
}    else {
      print $content['nav'];
}    ?>
  </div>
</div>
