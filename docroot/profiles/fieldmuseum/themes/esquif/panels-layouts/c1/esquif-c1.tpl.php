<div class="l--body">
  <?php
  if ($main_classes) {
    print '<div class="' . $main_classes . '">';
    print $content['main'];
    print '</div>';
  } else {
    print $content['main'];
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
