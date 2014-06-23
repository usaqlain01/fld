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
<div class="pageHeader__details l--2up">
  <section class="l--module">
    <?php print $content['left']; ?>
  </section>
  <section class="l--module">
    <?php print $content['right']; ?>
  </section>
</div>
<?php print $content['hero']; ?>
