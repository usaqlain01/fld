<?php
if ($callout_classes) {
  print '<div class="' . $callout_classes . '">';
  print $content['callout'];
  print '</div>';
} else {
  print $content['callout'];
}
?>
<section class="summaries--2up">
  <?php
  if ($summary_a_classes) {
    print '<div class="' . $summary_a_classes . '">';
    print $content['summary_a'];
    print '</div>';
  } else {
    print $content['summary_a'];
  }
  if ($summary_b_classes) {
    print '<div class="' . $summary_b_classes . '">';
    print $content['summary_b'];
    print '</div>';
  } else {
    print $content['summary_b'];
  }
  if ($summary_c_classes) {
    print '<div class="' . $summary_c_classes . '">';
    print $content['summary_c'];
    print '</div>';
  } else {
    print $content['summary_c'];
  }
  if ($summary_d_classes) {
    print '<div class="' . $summary_d_classes . '">';
    print $content['summary_d'];
    print '</div>';
  } else {
    print $content['summary_d'];
  }
  ?>
</section>
<?php
if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
} else {
  print $content['main'];
}
