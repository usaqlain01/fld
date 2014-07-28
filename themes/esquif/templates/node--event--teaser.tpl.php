<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="eventSummary node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <figure class="eventSummary__image">
    <img src="http://placehold.it/300x300&amp;text=1x1" alt="Square Thumbnail">
  </figure>
  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>

  <section class="eventSummary__details">
    <?php print render($content['field_date']); ?>
    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </section>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
