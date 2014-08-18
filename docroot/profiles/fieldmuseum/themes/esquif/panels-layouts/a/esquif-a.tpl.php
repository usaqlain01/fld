<section class="banners">
  <?php
  if ($main_classes) {
    print '<div class="' . $main_classes . '">';
    print $content['main'];
    print '</div>';
  } else {
    print $content['main'];
  }
  ?>
</section>
<div class="summaries--2up">
  <?php
  if ($summary_a_classes) {
    print '<div class="' . $summary_a_classes . '">';
    print $content['summary_a'];
    print '</div>';
  } else {
    print $content['summary_a'];
  }
  ?>
  <?php
  if ($summary_b_classes) {
    print '<div class="' . $summary_b_classes . '">';
    print $content['summary_b'];
    print '</div>';
  } else {
    print $content['summary_b'];
  }
  ?>
</div>
