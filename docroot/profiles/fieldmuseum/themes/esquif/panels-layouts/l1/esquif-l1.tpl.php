<?php
if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
}
else {
  print $content['main'];
}

if ($top_classes) {
  print '<section class="' . $top_classes . '">';
  print $content['top'];
  print '</section>';
}
else {
  print $content['top'];
}

if ($bottom_classes) {
  print '<section class="' . $bottom_classes . '">';
  print $content['bottom'];
  print '</section>';
}
else {
  print $content['bottom'];
}
