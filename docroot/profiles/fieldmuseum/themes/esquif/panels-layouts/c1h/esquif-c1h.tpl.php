<?php
if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
} else {
  print $content['main'];
}
