<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <header id="header" class="<?php print $classes; ?>" itemscope itemtype="http://schema.org/WPHeader">
    <?php print $content; ?>
  </header>
<?php endif; ?>
