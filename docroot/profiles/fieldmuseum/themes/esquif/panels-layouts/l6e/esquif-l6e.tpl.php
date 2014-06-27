<div class="l--body js--stickyParent">
  <div class="l--body__content">
<?php
    if ($top_classes) {
      print '<div class="' . $top_classes . '">';
      print $content['top'];
  print '</div>';
}
else {
      print $content['top'];
    }
    ?>
    <hr class="rule--divider">
    <?php
    if ($bottom_classes) {
      print '<div class="' . $bottom_classes . '">';
      print $content['bottom'];
      print '</div>';
    }
    else {
      print $content['bottom'];
    }
    ?>
  </div>

  <div class="l--body__nav js--sticky">
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
