<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <p class="submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </p>
  <?php endif; ?>

  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>
  <section class="article__body"<?php if (isset($node->rdf_mapping['media_gallery_description'])) { print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['media_gallery_description'])); } ?>>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['media_gallery_file']);
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </section>
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
</article>
