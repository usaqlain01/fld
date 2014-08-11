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

  <header class="article__header">
    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php print render($title_suffix); ?>
    <ul class="byline">
      <li class="byline__date">
        <?php print $date; ?>
      </li>
      <li class="byline__author">
        <?php print $name; ?>
      </li>
      <li class="byline__categories">
        <?php print render($content['field_topic']); ?>
      </li>
    </ul>
    <?php if ($unpublished): ?>
      <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
    <?php endif; ?>
  </header>
  <?php print render($content['field_image']); ?>
  <section class="article__body" itemprop="articleBody">

    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>

    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>
  </section>
</article>
