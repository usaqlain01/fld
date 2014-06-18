<?php
if ($main_classes) {
  print '<section class="' . $main_classes . '">';
  print $content['main'];
  print '</section>';
}
else {
  print $content['main'];
}
