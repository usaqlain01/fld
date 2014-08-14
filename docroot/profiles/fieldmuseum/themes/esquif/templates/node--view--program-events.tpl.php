<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<li class="eventsList__item node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content['field_date']); ?>
  <section class="eventsList__event">
    <h5 class="eventsList__heading" itemprop="name"><?php print $title; ?></h5>
    <a class="eventsList__link" href="<?php print $node_url; ?>" itemprop="url"><?php print t('Event Details'); ?></a> |
    <?php print render($content['field_action_link']); ?>
  </section>
</li>
