<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<div class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <a<?php print $content_attributes; ?>>
    <figure>
      <?php print render($content['field_image']); ?>
      <figcaption class="promo__description">
        <?php print render($content['field_banner_description']); ?>
      </figcaption>
    </figure>
    <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
  </a>
  <?php print render($content['links']); ?>
</div>
