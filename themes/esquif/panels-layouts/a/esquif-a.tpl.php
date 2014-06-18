<?php
if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
}
else {
  print $content['main'];
}

if ($banners_classes) {
  print '<section class="' . $banners_classes . '">';
  print $content['banners'];
  print '</section>';
}
else {
  print $content['banners'];
}

print '<div class="l--2up">';

if ($bottom_left_classes) {
  print '<div class="' . $bottom_left_classes . '">';
  print $content['bottom_left'];
  print '</div>';
}
else {
  print $content['bottom_left'];
}

if ($bottom_right_classes) {
  print '<div class="' . $bottom_right_classes . '">';
  print $content['bottom_right'];
  print '</div>';
}
else {
  print $content['bottom_right'];
}

print '</div>';
