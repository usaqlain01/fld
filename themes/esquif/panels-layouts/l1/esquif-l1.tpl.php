<?php
?>
<section class="summaries--3up">
  <?php
  if ($top_a_classes) {
    print '<div class="' . $top_a_classes . '">';
    print $content['top_a'];
    print '</div>';
  } else {
    print $content['top_a'];
  }
  ?>
  <?php
  if ($top_b_classes) {
    print '<div class="' . $top_b_classes . '">';
    print $content['top_b'];
    print '</div>';
  } else {
    print $content['top_b'];
  }
  ?>
  <?php
  if ($top_c_classes) {
    print '<div class="' . $top_c_classes . '">';
    print $content['top_c'];
    print '</div>';
  } else {
    print $content['top_c'];
  }
  ?>
</section>
<?php
if ($bottom_classes) {
  print '<div class="' . $bottom_classes . '">';
  print $content['bottom'];
  print '</div>';
} else {
  print $content['bottom'];
}
?>
