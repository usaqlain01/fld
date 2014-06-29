<?php
print '<div class="l--body">';
print '<div class="l--body__content">';

if ($main_classes) {
  print '<div class="' . $main_classes . '">';
  print $content['main'];
  print '</div>';
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
