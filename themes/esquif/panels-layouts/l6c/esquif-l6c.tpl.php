<div class="l--body js--stickyParent">
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

  <div class="l--body__nav js--sticky" style="">
    <?php
    if ($nav_classes) {
      print '<nav class="' . $nav_classes . '" role="navigation">';
      print $content['nav'];
      print '</nav>';
    }    else {
      print $content['nav'];
    }
    ?>
  </div>
</div>
