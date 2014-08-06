<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="excerpt node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($content['field_image']); ?>
  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header class="excerpt__header">
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h4<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
      <?php endif; ?>
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
  <?php endif; ?>
  <section class="excerpt__description">
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
