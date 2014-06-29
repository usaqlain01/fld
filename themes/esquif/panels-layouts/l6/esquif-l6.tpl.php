<?php
print '<div class="l--body">';
print '<div class="l--body__content">';
if ($top_classes) {
  print '<div class="' . $top_classes . '">';
  print $content['top'];
  print '</div>';
} else {
  print $content['top'];
}
if ($main_classes) {
  print '<section class="' . $main_classes . '">';
  print $content['main'];
  print '</section>';
} else {
  print $content['main'];
}
print '</div>';
print '<div class="l--body__nav">';
if ($nav_classes) {
  print '<nav class="' . $nav_classes . '" role="navigation">';
  print $content['nav'];
  print '</nav>';
} else {
  print $content['nav'];
}
print '</div>';
print '</div>';
