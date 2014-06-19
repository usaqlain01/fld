<?php

if ($hero_classes) {
  print '<section class="' . $hero_classes . '">';
  print $content['hero'];
  print '</section>';
}
else {
  print $content['hero'];
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
