<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<a class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?> href="<?php print $node_url; ?>">
  <figure>
    <?php print render($content['field_image']); ?>
    <figcaption class="banner__description">
      <?php print render($content['field_banner_description']); ?>
    </figcaption>
  </figure>
</a>
