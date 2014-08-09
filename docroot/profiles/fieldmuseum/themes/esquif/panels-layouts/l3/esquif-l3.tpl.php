<div class="l--body js--stickyParent">
  <div class="l--body__content">
    <?php
    if ($main_classes) {
      print '<div class="' . $main_classes . '">';
      print $content['main'];
      print '</div>';
    } else {
      print $content['main'];
    }
    ?>
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
      ?>
    </section>

  </div>
  <?php
  if ($nav_classes) {
    print '<div class="' . $nav_classes . '">';
    print $content['nav'];
    print '</div>';
  } else {
    print $content['nav'];
  }
  ?>
</div>
