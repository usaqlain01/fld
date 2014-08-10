<div class="l--body">
  <?php
  if ($main_classes) {
    print '<div class="' . $main_classes . '">';
  }
  print $content['main'];
  ?>
  <section class="explore">
    <?php print $content['explore']; ?>
    <?php if ($bottom_classes) {
      print '<div class="' . $bottom_classes . '">';
      print $content['bottom'];
      print '</div>';
    }
    else {
      print $content['bottom'];
    }
    ?>
  </section>
  <?php
  if ($main_classes) {
    print '</div>';
  }
  if ($nav_classes) {
    print '<div class="' . $nav_classes . '">';
    print $content['nav'];
    print '</div>';
  } else {
    print $content['nav'];
  }
  ?>
</div>
