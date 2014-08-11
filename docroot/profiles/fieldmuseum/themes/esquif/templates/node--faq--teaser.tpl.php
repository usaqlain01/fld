<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article id="node-<?php print $node->nid; ?>" class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
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
  <section class="answer__body">

    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </section>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>
  <a class="link--top" href="#top">Back to Top</a>

</article>
