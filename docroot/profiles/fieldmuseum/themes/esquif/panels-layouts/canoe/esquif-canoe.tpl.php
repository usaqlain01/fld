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
<?php print $content['search']; ?>
<figure class="<?php print $hero_classes; ?>"<?php if (isset($hero_image)): ?> style="background-image: url('<?php print file_create_url($hero_image->uri); ?>')"<?php endif; ?>>
  <?php print $content['hero']; ?>
</figure>
