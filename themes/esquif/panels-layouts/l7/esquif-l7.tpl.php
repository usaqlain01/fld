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
    }
    ?>
  </div>
  <div class="l--body__nav">
    <?php
    if ($nav_classes) {
      print '<div class="' . $nav_classes . '">';
      print $content['nav'];
      print '</div>';
    }
    else {
      print $content['nav'];
    }
    ?>
  </div>
</div>
