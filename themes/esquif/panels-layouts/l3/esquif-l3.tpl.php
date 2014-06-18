<?php
print '<div class="l--body">';
print '<div class="l--body__content">';

if ($top_classes) {
  print '<section class="' . $top_classes . '">';
  print $content['top'];
  print '</section>';
}
else {
  print $content['top'];
}

if ($middle_classes) {
  print '<div class="' . $middle_classes . '">';
  print $content['middle'];
  print '</div>';
}
else {
  print $content['middle'];
}

if ($bottom_classes) {
  print '<section class="' . $bottom_classes . '">';
  print $content['bottom'];
  print '</section>';
}
else {
  print $content['bottom'];
}

print '</div>';
print '<div class="l--body__nav">';
if ($nav_classes) {
  print '<nav class="' . $nav_classes . '" role="navigation">';
  print $content['nav'];
  print '</nav>';
}
else {
  print $content['nav'];
}
print '</div>';
print '</div>';
