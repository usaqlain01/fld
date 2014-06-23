<?php
if ($callout_classes) {
  print '<section class="' . $callout_classes . '">';
  print $content['callout'];
  print '</section>';
}
else {
  print $content['callout'];
}
?>
<section class="summaries--2up">
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
  if ($bottom_a_classes) {
    print '<div class="' . $bottom_a_classes . '">';
    print $content['bottom_a'];
    print '</div>';
  }
  else {
    print $content['bottom_a'];
  }
  if ($bottom_b_classes) {
    print '<div class="' . $bottom_b_classes . '">';
    print $content['bottom_b'];
    print '</div>';
  }
  else {
    print $content['bottom_b'];
  }
  ?>
</section>
