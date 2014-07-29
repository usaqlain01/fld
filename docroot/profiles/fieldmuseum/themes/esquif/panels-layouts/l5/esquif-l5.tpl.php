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
  if ($main_classes) {
    print '<div class="' . $main_classes . '">';
    print $content['main'];
    print '</div>';
  } else {
    print $content['main'];
  }
  ?>
</section>
