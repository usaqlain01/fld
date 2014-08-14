<section class="summaries--3up">
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
  if ($summary_e_classes) {
    print '<div class="' . $summary_e_classes . '">';
    print $content['summary_e'];
    print '</div>';
  } else {
    print $content['summary_e'];
  }
  if ($summary_f_classes) {
    print '<div class="' . $summary_f_classes . '">';
    print $content['summary_f'];
    print '</div>';
  } else {
    print $content['summary_f'];
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
?>
