<?php
print '<div class="l--body">';
print '<div class="l--body__content">';
if ($callout_classes) {
  print '<section class="' . $callout_classes . '">';
  print $content['callout'];
  print '</section>';
}
else {
  print $content['callout'];
}
if ($top_classes) {
  print '<div class="' . $top_classes . '">';
  print $content['top'];
  print '</div>';
}
else {
  print $content['top'];
}
if ($bottom_classes) {
  print '<div class="' . $bottom_classes . '">';
  print $content['bottom'];
  print '</div>';
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
