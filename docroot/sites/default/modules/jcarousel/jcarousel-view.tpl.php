<?php
// $Id$

/**
 * @file jcarousel-view.tpl.php
 * View template to display a list as a carousel.
 */
?>
<ul class="<?php print $variables['jcarousel_classes']; ?>">
  <?php foreach ($variables['rows'] as $id => $row): ?>
    <li class="<?php print $variables['row_classes'][$id]; ?>"><?php print $row; ?></li>
  <?php endforeach; ?>
</ul>
