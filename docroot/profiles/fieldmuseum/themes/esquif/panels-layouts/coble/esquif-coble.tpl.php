<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<section class="pageFooter__main">
  <nav class="navFooter" role="navigation" aria-label="Footer Navigation">
    <h2 class="is--visHidden">Footer Navigation</h2>
    <?php print $content['main_a']; ?>
  </nav>
  <?php print $content['main_b']; ?>
</section>
<section class="pageFooter__secondary">
  <section class="pageFooter__contact" itemprop="location" itemscope itemtype="http://schema.org/Place">
    <?php print $content['secondary_a']; ?>
  </section>
  <?php print $content['secondary_b']; ?>
</section>
