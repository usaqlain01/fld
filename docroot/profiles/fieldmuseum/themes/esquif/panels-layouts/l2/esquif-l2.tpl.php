<div class="l--body js--stickyParent">
  <div class="l--body__content">
    <?php
    if ($callout_classes) {
      print '<section class="' . $callout_classes . '">';
      print $content['callout'];
      print '</section>';
    } else {
      print $content['callout'];
    }
    ?>

    <div class="l--3up">
      <?php
      if ($top_a_classes) {
        print '<div class="' . $top_a_classes . '">';
        print $content['top_a'];
        print '</div>';
      } else {
        print $content['top_a'];
      }
      if ($top_b_classes) {
        print '<div class="' . $top_b_classes . '">';
        print $content['top_b'];
        print '</div>';
      } else {
        print $content['top_b'];
      }
      if ($top_c_classes) {
        print '<div class="' . $top_c_classes . '">';
        print $content['top_c'];
        print '</div>';
      } else {
        print $content['top_c'];
      }
      ?>
    </div>

    <section class="summaries--2up">
      <?php
      if ($bottom_a_classes) {
        print '<div class="' . $bottom_a_classes . '">';
        print $content['bottom_a'];
        print '</div>';
      } else {
        print $content['bottom_a'];
      }
      if ($bottom_b_classes) {
        print '<div class="' . $bottom_b_classes . '">';
        print $content['bottom_b'];
        print '</div>';
      } else {
        print $content['bottom_b'];
      }
      if ($bottom_c_classes) {
        print '<div class="' . $bottom_c_classes . '">';
        print $content['bottom_c'];
        print '</div>';
      } else {
        print $content['bottom_c'];
      }
      if ($bottom_d_classes) {
        print '<div class="' . $bottom_d_classes . '">';
        print $content['bottom_d'];
        print '</div>';
      } else {
        print $content['bottom_d'];
      }
      ?>
    </section>
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
