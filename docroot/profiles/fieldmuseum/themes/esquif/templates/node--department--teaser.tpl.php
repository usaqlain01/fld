<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <a href="<?php print $node_url; ?>">
    <?php print render($content['field_image']); ?>
  </a>

  <header class="excerpt__header">
    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h4<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
    <?php endif; ?>
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
  </header>
  <section class="excerpt__description" itemprop="description">

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>

  <?php print render($content['links']['node']); ?>

  <?php print render($content['comments']); ?>
  </section>
</article>
